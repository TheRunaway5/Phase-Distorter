#include "eb/direct_scene.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <stdexcept>

namespace {
void require(bool value, const char *message) {
    if (!value)
        throw std::runtime_error(message);
}
auto frame(unsigned tick, float x) {
    auto scene = std::make_shared<eb::DirectSceneFrame>();
    scene->width = 256;
    scene->frame = tick;
    scene->scene_identity = 1;
    scene->atlas_width = 16;
    scene->atlas_height = 16;
    scene->atlas.assign(256, 0xffde2345);
    scene->motions = {{}, {17, x, 30}};
    scene->quads = {{0, 0, 16, 16, x, 30, 10, 1, true}};
    return scene;
}
void motion() {
    eb::DirectSceneMotion render;
    auto previous = frame(1, 20), current = frame(2, 21);
    render.submit(previous);
    render.submit(current);
    std::vector<std::uint32_t> last;
    // One source pixel per tick becomes five distinct drawable positions at
    // 5x display scale, with no new colors, alpha or image matching.
    for (unsigned phase = 0; phase < 5; ++phase) {
        const auto &picture = render.sample(phase / 5.);
        require(std::abs(picture.offsets[1].x - (-1 + phase / 5.f)) < 0.0001f,
                "Wrong fractional actor position");
        const auto pixels = eb::rasterize_direct_scene(picture, 5);
        require(last.empty() || pixels != last, "Extra refresh repeated the same actor position");
        require(std::all_of(pixels.begin(), pixels.end(),
                            [](auto p) { return p == 0xff000000 || p == 0xffde2345; }),
                "Motion blended artwork colors");
        last = pixels;
    }
    require(previous->quads[0].x == 20 && current->quads[0].x == 21, "Rendering mutated source scene");
    render.submit(frame(3, 90));
    require(render.sample(0).offsets[1].x == 0, "Teleport dragged actor across scene");
    auto reused = frame(4, 91);
    reused->motions[1].identity = 99;
    render.submit(reused);
    require(render.sample(0).offsets[1].x == 0, "New actor inherited prior slot motion");
    render.submit(nullptr);
    require(!render.sample(.5).artwork, "Unsupported scene retained old artwork");
    render.submit(frame(8, 11));
    require(render.sample(0).offsets[1].x == 0, "Scene return retained stale motion");
    auto cut = frame(9, 12);
    cut->scene_identity = 2;
    render.submit(cut);
    require(render.sample(0).offsets[1].x == 0, "Map transition mixed scene positions");
}
void priority() {
    auto scene = frame(1, 10);
    scene->quads.clear();
    scene->atlas.resize(16 * 48);
    scene->atlas_height = 48;
    std::fill(scene->atlas.begin(), scene->atlas.begin() + 256, 0xff00ff00);
    std::fill(scene->atlas.begin() + 256, scene->atlas.begin() + 512, 0xff0000ff);
    std::fill(scene->atlas.begin() + 512, scene->atlas.end(), 0xffff0000);
    scene->quads = {{0, 0, 16, 16, 10, 30, 6, 0, false},
                    {0, 16, 16, 16, 10, 30, 3, 0, true},
                    {0, 32, 16, 16, 10, 30, 10, 0, true}};
    const auto pixels = eb::rasterize_direct_scene({scene, {}});
    require(pixels[32 * 256 + 12] == 0xff00ff00, "Higher-priority later OBJ escaped first-OBJ masking");
    scene->atlas[16 * 16 + 2 * 16 + 2] = 0; // transparent first OBJ reveals the later one
    require(eb::rasterize_direct_scene({scene, {}})[32 * 256 + 12] == 0xffff0000,
            "Transparent OBJ masked a later sprite");
}
void clipping() {
    // A prepared edge actor stays outside the canonical region even while its
    // quad is sampled between camera ticks. Texture coordinates must continue
    // to follow the moved artwork rather than stretch into the clipped bounds.
    for (bool right : {false, true}) {
        eb::DirectSceneMotion motion;
        const float current_x = right ? 184 : 56;
        auto previous = frame(1, current_x + (right ? -1 : 1)), current = frame(2, current_x);
        for (auto picture : {previous, current}) {
            picture->quads[0].clip = {right ? 192.f : -100.f, 31.f, right ? 300.f : 64.f, 45.f};
            for (unsigned y = 0; y < 16; ++y)
                for (unsigned x = 0; x < 16; ++x)
                    picture->atlas[y * 16 + x] = 0xff000000 | ((x + 1) << 16) | ((y + 1) << 8);
        }
        motion.submit(previous); motion.submit(current);
        for (unsigned phase = 0; phase <= 4; ++phase) {
            const double fraction = phase / 4.;
            const auto &sample = motion.sample(fraction);
            const auto pixels = eb::rasterize_direct_scene(sample, 4);
            unsigned colored = 0;
            for (unsigned y = 0; y < 224 * 4; ++y)
                for (unsigned x = 0; x < 256 * 4; ++x) {
                    const auto color = pixels[y * 256 * 4 + x];
                    const float px = (x + .5f) / 4, py = (y + .5f) / 4;
                    const float left = current_x + sample.offsets[1].x;
                    const bool inside = px >= left && px < left + 16 && py >= 31 && py < 45 &&
                                        (right ? px >= 192 : px < 64);
                    if (!inside) require(color == 0xff000000, "Moved quad escaped fixed display clipping");
                    else {
                        const unsigned u = unsigned(px - left), v = unsigned(py - 30);
                        require(color == (0xff000000 | ((u + 1) << 16) | ((v + 1) << 8)),
                                "Display clipping stretched or changed source texture samples");
                        ++colored;
                    }
                }
            require(colored > 0, "Clipped motion test rendered nothing");
        }
    }
}
} // namespace
int main() {
    try {
        motion();
        priority();
        clipping();
        std::cout << "Direct source motion and priority passed\n";
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
