#include "eb/direct_scene.hpp"
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <unordered_map>

namespace eb {
void DirectSceneMotion::reset() {
    previous_.reset();
    picture_ = {};
    deltas_.clear();
}
void DirectSceneMotion::submit(std::shared_ptr<const DirectSceneFrame> frame) {
    previous_ = std::move(picture_.artwork);
    picture_.artwork = std::move(frame);
    picture_.offsets.clear();
    deltas_.clear();
    if (!picture_.artwork) {
        previous_.reset();
        return;
    }
    const auto &current = *picture_.artwork;
    deltas_.resize(current.motions.size());
    picture_.offsets.resize(current.motions.size());
    if (!previous_ || previous_->width != current.width || previous_->frame + 1 != current.frame ||
        previous_->scene_identity != current.scene_identity)
        return;
    std::unordered_map<std::uint64_t, DirectSceneFrame::Motion> old;
    for (const auto &motion : previous_->motions)
        if (motion.identity)
            old.emplace(motion.identity, motion);
    for (unsigned i = 0; i < current.motions.size(); ++i) {
        const auto &motion = current.motions[i];
        const auto found = old.find(motion.identity);
        if (found == old.end())
            continue;
        const float dx = found->second.x - motion.x, dy = found->second.y - motion.y;
        // Bound movement to the captured scenery's overscan. Teleports, slot
        // reuse and large corrections never drag old actors across the scene.
        if (std::abs(dx) <= 16 && std::abs(dy) <= 16)
            deltas_[i] = {dx, dy};
    }
}
const DirectScenePicture &DirectSceneMotion::sample(double fraction) {
    const float weight = float(1 - (std::isfinite(fraction) ? std::clamp(fraction, 0.0, 1.0) : 1.0));
    for (unsigned i = 0; i < deltas_.size(); ++i)
        picture_.offsets[i] = {deltas_[i].x * weight, deltas_[i].y * weight};
    return picture_;
}

namespace {
bool affected(DirectSceneFrame::WindowPolicy policy, bool inside) {
    using P = DirectSceneFrame::WindowPolicy;
    return policy == P::Always || (policy == P::Outside && !inside) ||
           (policy == P::Inside && inside);
}
bool masked(const DirectSceneFrame::Effects &effects, unsigned layer, int x, unsigned y) {
    if (!effects.masked.at(layer)) return false;
    const auto &row = effects.windows.at(y);
    const bool inside = (x >= row[0] && x <= row[1]) || (x >= row[2] && x <= row[3]);
    return effects.invert ? inside : !inside;
}
std::array<unsigned, 3> rgb5(std::uint32_t argb) {
    return {(argb >> 19) & 31, (argb >> 11) & 31, (argb >> 3) & 31};
}
std::uint32_t argb5(std::array<unsigned, 3> color, unsigned brightness) {
    for (auto &c : color) { c = (c * brightness + 7) / 15; c = (c << 3) | (c >> 2); }
    return 0xff000000 | color[0] << 16 | color[1] << 8 | color[2];
}
}
std::vector<std::uint32_t> rasterize_direct_scene(const DirectScenePicture &picture, unsigned scale) {
    if (!picture.artwork || !scale || scale > 8)
        throw std::invalid_argument("Invalid direct scene");
    const auto &scene = *picture.artwork;
    if (!scene.width || scene.width > 4096 || scene.atlas.size() != std::size_t(scene.atlas_width) * scene.atlas_height)
        throw std::invalid_argument("Invalid direct scene extent");
    if (scene.effects && scene.effects->brightness > 15)
        throw std::invalid_argument("Invalid scene brightness");
    const unsigned width = scene.width * scale, height = 224 * scale;
    struct Pixel { std::uint32_t color; int priority = -2; unsigned layer = 5; bool math = true, object = false; };
    const auto *effects = scene.effects ? &*scene.effects : nullptr;
    std::vector<Pixel> main(std::size_t(width) * height, {effects ? effects->backdrop : 0xff000000});
    std::vector<Pixel> sub;
    if (effects) sub.assign(main.size(), {argb5({effects->fixed[0], effects->fixed[1], effects->fixed[2]}, 15)});
    // Sampling X is constant down a primitive; window X is constant across
    // the whole picture. Keep the same half-pixel arithmetic, once per column.
    std::vector<unsigned> source_columns(width);
    std::vector<int> window_columns(effects ? width : 0);
    for (unsigned x = 0; x < window_columns.size(); ++x)
        window_columns[x] = std::clamp(int(std::floor((x + .5f) / scale - (scene.width - 256.f) / 2)), 0, 255);
    for (const auto &quad : scene.quads) {
        const auto layer = unsigned(quad.layer);
        if (layer > 5 || quad.u > scene.atlas_width || quad.width > scene.atlas_width - quad.u ||
            quad.v > scene.atlas_height || quad.height > scene.atlas_height - quad.v)
            throw std::invalid_argument("Direct scene primitive exceeds its atlas");
        // Native captures derive the backdrop from the authoritative palette0.
        if (effects && layer == 5) continue;
        const auto offset = quad.motion < picture.offsets.size() ? picture.offsets[quad.motion]
                                                                 : DirectScenePicture::Offset{};
        const float left = (quad.x + offset.x) * scale, top = (quad.y + offset.y) * scale;
        const float clipped_left = std::max({0.f, left, quad.clip.left * scale}),
                    clipped_top = std::max({0.f, top, quad.clip.top * scale}),
                    clipped_right = std::min({float(width), left + quad.width * scale, quad.clip.right * scale}),
                    clipped_bottom = std::min({float(height), top + quad.height * scale, quad.clip.bottom * scale});
        if (clipped_left >= clipped_right || clipped_top >= clipped_bottom) continue;
        const int x0 = int(std::ceil(clipped_left - .5f)), y0 = int(std::ceil(clipped_top - .5f)),
                  x1 = int(std::ceil(clipped_right - .5f)), y1 = int(std::ceil(clipped_bottom - .5f));
        for (int x = x0; x < x1; ++x)
            source_columns[x] = unsigned((x + .5f - left) / scale);
        for (int y = y0; y < y1; ++y) {
            const unsigned v = unsigned((y + .5f - top) / scale);
            const auto source_row = (quad.v + v) * scene.atlas_width + quad.u;
            for (int x = x0; x < x1; ++x) {
                const auto color = scene.atlas[source_row + source_columns[x]];
                if (!(color >> 24)) continue;
                const auto at = std::size_t(y) * width + x;
                if (effects && masked(*effects, layer, window_columns[x], unsigned(y) / scale)) continue;
                const auto put = [&](Pixel &to) {
                    if (quad.object) {
                        if (to.object) return;
                        to.object = true;
                    }
                    if (quad.priority > to.priority) {
                        to.color = color; to.priority = quad.priority;
                        to.layer = layer; to.math = quad.color_math_eligible;
                    }
                };
                if (!effects || effects->main[layer]) put(main[at]);
                if (effects && effects->sub[layer]) put(sub[at]);
            }
        }
    }
    std::vector<std::uint32_t> pixels(main.size());
    if (!effects) {
        std::transform(main.begin(), main.end(), pixels.begin(), [](const Pixel &pixel) { return pixel.color; });
        return pixels;
    }
    for (unsigned y = 0; y < height; ++y)
        for (unsigned x = 0; x < width; ++x) {
            const auto at = std::size_t(y) * width + x;
            const auto &pixel = main[at];
            const bool inside = masked(*effects, 5, window_columns[x], y / scale);
            const bool clipped = affected(effects->clip, inside);
            auto color = clipped ? std::array<unsigned, 3>{} : rgb5(pixel.color);
            if (!affected(effects->prevent, inside) && pixel.math && effects->math[pixel.layer]) {
                const auto other = effects->use_subscreen ? rgb5(sub[at].color) :
                    std::array<unsigned, 3>{effects->fixed[0], effects->fixed[1], effects->fixed[2]};
                const bool half = effects->half && !clipped && (!effects->use_subscreen || sub[at].priority >= 0);
                for (unsigned c = 0; c < 3; ++c) {
                    int value = effects->subtract ? std::max(0, int(color[c]) - int(other[c])) : int(color[c] + other[c]);
                    if (half) value /= 2;
                    color[c] = unsigned(std::min(31, value));
                }
            }
            pixels[at] = argb5(color, effects->brightness);
        }
    return pixels;
}
} // namespace eb
