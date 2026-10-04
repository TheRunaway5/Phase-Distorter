#include "eb/direct_scene_capture.hpp"
#include "eb/game_scene_renderer.hpp"
#include "eb/render_distance.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <map>
#include <unordered_map>
#include <utility>

namespace eb {
namespace {
constexpr unsigned padding = RenderDistance::edge_padding;
constexpr unsigned sizes[8][2][2] = {{{8, 8}, {16, 16}},   {{8, 8}, {32, 32}},   {{8, 8}, {64, 64}},
                                     {{16, 16}, {32, 32}}, {{16, 16}, {64, 64}}, {{32, 32}, {64, 64}},
                                     {{16, 32}, {32, 64}}, {{16, 32}, {32, 32}}};
// Fixed-color arithmetic can be applied to each source fragment independently.
// Subscreen math and raster windows stay on the canonical rendering path.
std::uint32_t color(const SceneReadView &view, const PpuPixel &pixel) {
    unsigned result = pixel.color;
    const unsigned math = view.ppu_registers[0x31];
    if (pixel.math && (math & (1u << pixel.layer))) {
        result = 0;
        for (unsigned shift = 0; shift < 15; shift += 5) {
            int value = (pixel.color >> shift) & 31, other = (view.fixed_color >> shift) & 31;
            value = math & 0x80 ? std::max(0, value - other) : value + other;
            if (math & 0x40)
                value /= 2;
            result |= unsigned(std::min(31, value)) << shift;
        }
    }
    const unsigned brightness = view.ppu_registers[0] & 15;
    const auto channel = [brightness](unsigned value) {
        const unsigned scaled = (value * brightness + 7) / 15;
        return (scaled << 3) | (scaled >> 2);
    };
    return 0xff000000 | channel(result & 31) << 16 | channel((result >> 5) & 31) << 8 |
           channel((result >> 10) & 31);
}
struct Atlas {
    DirectSceneFrame &frame;
    unsigned x{}, y{}, row_height{};
    bool append(std::span<const std::uint32_t> pixels, DirectSceneFrame::Quad quad) {
        if (quad.width > frame.atlas_width)
            return false;
        if (x + quad.width > frame.atlas_width) {
            x = 0;
            y += row_height;
            row_height = 0;
        }
        if (y + quad.height > 4096)
            return false;
        const unsigned bottom = y + quad.height;
        if (bottom > frame.atlas_height) {
            frame.atlas_height = bottom;
            frame.atlas.resize(std::size_t(frame.atlas_width) * bottom);
        }
        for (unsigned row = 0; row < quad.height; ++row)
            std::copy_n(pixels.begin() + row * quad.width, quad.width,
                        frame.atlas.begin() + (y + row) * frame.atlas_width + x);
        quad.u = x;
        quad.v = y;
        frame.quads.push_back(quad);
        x += quad.width;
        row_height = std::max(row_height, quad.height);
        return true;
    }
};
} // namespace
void DirectSceneCapture::enable(bool enabled) {
    if (enabled_ == enabled)
        return;
    enabled_ = enabled;
    valid_ = false;
    pending_.reset();
    published_.reset();
}
std::shared_ptr<DirectSceneFrame> DirectSceneCapture::build(const SceneReadView &view,
                                                            GameSceneRenderer &renderer) {
    const auto &regs = view.ppu_registers;
    if (!renderer.presentation_world_map_ || (regs[0] & 0x80) || ((regs[6] >> 4) && (regs[6] & 15)) ||
        (regs[0x2e] & regs[0x2c]) || (regs[0x30] & 0xf0) || ((regs[0x30] & 2) && (regs[0x31] & 0x3f)))
        return {};
    auto frame = std::make_shared<DirectSceneFrame>();
    frame->width = renderer.presentation_width_;
    frame->frame = view.completed_frames + 1;
    const auto combo = view.source_profile.wram_loaded_map_tile_combination;
    frame->scene_identity = 1 + (view.work_ram[combo] | (view.work_ram[combo + 1] << 8));
    const bool authored_canvas = renderer.presentation_clip_left_ == 0 &&
                                 renderer.presentation_clip_right_ == 256;
    if (authored_canvas) frame->scene_identity |= std::uint64_t{1} << 32;
    const unsigned plane_width = frame->width + padding * 2, plane_height = 224 + padding * 2;
    frame->atlas_width = plane_width > 1024 ? 2048 : 1024;
    const int margin = (int(frame->width) - 256) / 2, shift = renderer.presentation_shift_x_;
    frame->motions.push_back({}); // Stationary HUD and unknown source objects.
    for (unsigned bg = 0; bg < 2; ++bg)
        frame->motions.push_back({bg + 1, float(-renderer.presentation_world_x_[bg] - shift),
                                  float(-renderer.presentation_world_y_[bg])});
    Atlas atlas{*frame};
    const auto inside = [&](int x) {
        return x >= renderer.presentation_clip_left_ && x < renderer.presentation_clip_right_;
    };
    // Backdrop follows the authored world bounds; HUD remains independent.
    std::vector<std::uint32_t> backing(std::size_t(plane_width) * plane_height);
    const auto backdrop = color(view, {view.palette(0), -1, 5, true, 0});
    for (unsigned y = 0; y < plane_height; ++y)
        for (unsigned x = 0; x < plane_width; ++x)
            if (inside(int(x) - int(padding) - margin))
                backing[y * plane_width + x] = backdrop;
    if (!atlas.append(backing,
                      {0, 0, plane_width, plane_height, -float(padding), -float(padding), -1, 1, false}))
        return {};

    struct Restore {
        bool &flag;
        ~Restore() { flag = false; }
    } restore{renderer.direct_world_tiles_};
    renderer.direct_world_tiles_ = true;
    for (unsigned bg = 0; bg < 4; ++bg) {
        if (!(regs[0x2c] & (1 << bg)))
            continue;
        const bool world = bg < 2;
        const bool screen_overlay = renderer.presentation_screen_overlay_layer_ & (1u << bg);
        const unsigned w = world ? plane_width : screen_overlay ? frame->width : 256,
                       h = world ? plane_height : 224;
        std::map<int, std::vector<std::uint32_t>> planes;
        if (world) {
            // Repeated arrangements (especially transparent tiles) are common. Decode
            // each source tile once per layer, then copy its pixels into the planes.
            // The verified world mode always uses 8x8 tiles for BG1/BG2.
            struct Tile {
                std::array<std::uint32_t, 64> pixels{};
                int priority = -1;
            };
            std::unordered_map<unsigned, Tile> tiles;
            const int origin_x = renderer.presentation_world_x_[bg] - int(padding) - margin + shift;
            const int origin_y = renderer.presentation_world_y_[bg] - int(padding) + 1;
            for (unsigned y = 0; y < h;) {
                const int wy = origin_y + int(y), ty = wy >= 0 ? wy / 8 : (wy - 7) / 8;
                const unsigned py = unsigned(wy) & 7, rows = std::min(8 - py, h - y);
                for (unsigned x = 0; x < w;) {
                    const int wx = origin_x + int(x), tx = wx >= 0 ? wx / 8 : (wx - 7) / 8;
                    const unsigned px = unsigned(wx) & 7, cols = std::min(8 - px, w - x);
                    // Authored world patches (Lumine Hall's scrolling wall)
                    // can replace a map tile at this position. Cache the
                    // displayed entry so wall and text never share a decode.
                    const unsigned entry = renderer.presentation_tile(
                        view, bg, tx * 8 - renderer.presentation_world_x_[bg],
                        unsigned(ty * 8 - renderer.presentation_world_y_[bg]),
                        renderer.presentation_map_tile(view, tx, ty, bg));
                    auto [cached, fresh] = tiles.try_emplace(entry);
                    auto &tile = cached->second;
                    if (fresh) {
                        for (unsigned row = 0; row < 8; ++row)
                            for (unsigned col = 0; col < 8; ++col) {
                                const auto pixel = view.sample_background_pixel(
                                    bg, tx * 8 - renderer.presentation_world_x_[bg] + int(col),
                                    unsigned(ty * 8 - renderer.presentation_world_y_[bg] + int(row)),
                                    &renderer);
                                if (pixel.priority >= 0) {
                                    tile.pixels[row * 8 + col] = color(view, pixel);
                                    tile.priority = pixel.priority;
                                }
                            }
                    }
                    if (tile.priority >= 0) {
                        auto [it, inserted] = planes.try_emplace(tile.priority);
                        if (inserted)
                            it->second.resize(std::size_t(w) * h);
                        for (unsigned row = 0; row < rows; ++row)
                            for (unsigned col = 0; col < cols; ++col)
                                if (inside(int(x + col) - int(padding) - margin))
                                    it->second[(y + row) * w + x + col] =
                                        tile.pixels[(py + row) * 8 + px + col];
                    }
                    x += cols;
                }
                y += rows;
            }
        } else {
            for (unsigned y = 0; y < h; ++y)
                for (unsigned x = 0; x < w; ++x) {
                    const int native_x = screen_overlay
                        ? int(x * 256 / frame->width) - int(view.background_scroll_x[bg])
                        : int(x);
                    if (world && !inside(native_x))
                        continue;
                    const int native_y = world ? int(y) - int(padding) : int(y);
                    const auto pixel =
                        view.sample_background_pixel(bg, native_x + (world ? shift : 0),
                                                     unsigned(native_y + 1), world ? &renderer : nullptr);
                    if (pixel.priority < 0)
                        continue;
                    auto [it, inserted] = planes.try_emplace(pixel.priority);
                    if (inserted)
                        it->second.resize(std::size_t(w) * h);
                    it->second[y * w + x] = color(view, pixel);
                }
        }
        for (const auto &[priority, pixels] : planes) {
            DirectSceneFrame::Quad quad{0, 0, w, h,
                world ? -float(padding) : screen_overlay ? 0.f : float(margin),
                world ? -float(padding) : 0.f, priority, world ? bg + 1 : 0, false};
            // Clip after motion too: a moving story camera must not slide the
            // stage's black borders along with its interpolated background.
            if (world && authored_canvas) {
                quad.clip.left = float(margin);
                quad.clip.right = float(margin + 256);
            }
            if (!atlas.append(pixels, quad))
                return {};
        }
    }
    if (!(regs[0x2c] & 16))
        return frame;
    const bool native_frame = view.native_sprites && renderer.native_sprite_frame_;
    auto objects = native_frame ? renderer.native_sprite_objects_ : renderer.presentation_objects_;
    const auto world_object_count = objects.size();
    // Source actor descriptors include offscreen parts. Preserve unmatched
    // native OBJs (cursors, indicators, etc.) without inventing motion for them.
    const unsigned first = (regs[3] & 0x80) ? ((view.oam_reload >> 2) & 127) : 0;
    for (unsigned n = 0; !native_frame && n < 128; ++n) {
        const unsigned index = (n + first) & 127, at = index * 4;
        const unsigned extra = (view.object_attributes[512 + index / 4] >> ((index & 3) * 2)) & 3;
        int x = view.object_attributes[at] | ((extra & 1) << 8), y = view.object_attributes[at + 1];
        if (x >= 256)
            x -= 512;
        const unsigned w = sizes[regs[1] >> 5][extra >> 1][0], h = sizes[regs[1] >> 5][extra >> 1][1];
        if (x + int(w) <= 0 || x >= 256)
            continue;
        if (y >= 224 && y + h <= 256)
            continue;
        if (y + h > 256)
            y -= 256;
        const auto tile = view.object_attributes[at + 2], attributes = view.object_attributes[at + 3];
        const bool owned = renderer.owns_presentation_oam_part(x, y, tile, attributes, bool(extra >> 1), index);
        if (!owned)
            objects.push_back({x, y, tile, attributes, bool(extra >> 1)});
    }
    std::map<std::uint64_t, unsigned> groups;
    for (std::size_t index = 0; index < objects.size(); ++index) {
        const auto &object = objects[index];
        const unsigned w = object.fragment_pixels ? object.fragment_pixels->width :
                               object.native_owned ? 16 : sizes[regs[1] >> 5][object.large][0],
                       h = object.fragment_pixels ? object.fragment_pixels->height :
                               object.native_owned ? 16 : sizes[regs[1] >> 5][object.large][1];
        const bool fragment = view.native_sprites && object.fragment_pixels;
        const bool host = (object.native_owned ? bool(view.native_sprites) : bool(view.host_sprites)) &&
                          object.host_image && w == 16 && h == 16;
        const int soul_shift = renderer.ending_soul_shift(object);
        const int output_x = object.x + margin - soul_shift - (index < world_object_count ? shift : 0);
        if (output_x + int(w) < -int(padding) || output_x > int(frame->width + padding) ||
            object.y + int(h) < -int(padding) || object.y > 224 + int(padding))
            continue;
        unsigned motion = 0;
        if (object.identity) {
            auto [it, inserted] = groups.try_emplace(object.identity, unsigned(frame->motions.size()));
            motion = it->second;
            if (inserted)
                frame->motions.push_back(
                    {object.identity, float(object.anchor_x + margin - shift - soul_shift), float(object.anchor_y)});
        }
        const unsigned attr = object.attributes,
                       pal = host ? object.host_palette : (attr >> 1) & 7;
        constexpr int priorities[] = {1, 3, 7, 10};
        const int priority = priorities[(attr >> 4) & 3];
        const unsigned base = (regs[1] & 7) * 16384 + ((attr & 1) ? (((regs[1] >> 3) & 3) + 1) * 8192 : 0);
        std::vector<std::uint32_t> pixels(w * h);
        bool visible = false;
        for (unsigned y = 0; y < h; ++y)
            for (unsigned x = 0; x < w; ++x) {
                unsigned value = 0;
                if (fragment)
                    value = object.fragment_pixels->indices[y * w + x];
                else if (host)
                    value = object.host_image->parts[object.host_part].indices[y * 16 + x];
                else {
                    const unsigned row = (attr & 0x80) ? h - 1 - y : y,
                                   col = (attr & 0x40) ? w - 1 - x : x;
                    const unsigned tile =
                        (((object.tile & 0xf0) + (row / 8) * 16) & 0xf0) | ((object.tile + col / 8) & 15);
                    const unsigned address = base + tile * 32 + (row & 7) * 2;
                    for (unsigned plane = 0; plane < 4; ++plane)
                        value |= ((view.video_ram[(address + (plane / 2) * 16 + (plane & 1)) & 0xffff] >>
                                   (7 - (col & 7))) &
                                  1)
                                 << plane;
                }
                if (!value)
                    continue;
                pixels[y * w + x] = color(view, {view.palette(128 + pal * 16 + value), priority, 4, pal >= 4,
                                                 128 + pal * 16 + value});
                visible = true;
            }
        DirectSceneFrame::Quad quad{0, 0, w, h, float(output_x), float(object.y), priority, motion, true};
        if (authored_canvas && index < world_object_count && !renderer.presentation_robot_ending_) {
            quad.clip.left = float(margin);
            quad.clip.right = float(margin + 256);
        }
        if (visible && !atlas.append(pixels, quad))
            return {};
    }
    return frame;
}

void DirectSceneCapture::scanline(const SceneReadView &view, GameSceneRenderer &renderer, unsigned y) {
    if (!enabled_)
        return;
    if (!y) {
        pending_ = build(view, renderer);
        valid_ = bool(pending_);
        if (valid_) {
            registers_.assign(view.ppu_registers.begin(), view.ppu_registers.end());
            video_.assign(view.video_ram.begin(), view.video_ram.end());
            palette_.assign(view.palette_ram.begin(), view.palette_ram.end());
            objects_.assign(view.object_attributes.begin(), view.object_attributes.end());
            for (unsigned bg = 0; bg < 4; ++bg) {
                scroll_[bg] = view.background_scroll_x[bg];
                scroll_[bg + 4] = view.background_scroll_y[bg];
            }
            fixed_ = view.fixed_color;
        }
    } else if (valid_) {
        valid_ = renderer.presentation_world_map_ && renderer.presentation_width_ == pending_->width &&
                 std::equal(registers_.begin(), registers_.end(), view.ppu_registers.begin()) &&
                 std::equal(video_.begin(), video_.end(), view.video_ram.begin()) &&
                 std::equal(palette_.begin(), palette_.end(), view.palette_ram.begin()) &&
                 std::equal(objects_.begin(), objects_.end(), view.object_attributes.begin()) &&
                 fixed_ == view.fixed_color;
        for (unsigned bg = 0; bg < 4; ++bg)
            valid_ &= scroll_[bg] == view.background_scroll_x[bg] &&
                      scroll_[bg + 4] == view.background_scroll_y[bg];
    }
    if (y != 223)
        return;
    if (valid_) {
        const auto rebuilt = rasterize_direct_scene({pending_, {}});
        const auto canonical = renderer.presentation_pixels(view.native_framebuffer);
        valid_ = rebuilt.size() == canonical.size() &&
                 std::equal(rebuilt.begin(), rebuilt.end(), canonical.begin());
    }
    published_ = valid_ ? pending_ : nullptr;
    pending_.reset();
}
} // namespace eb
