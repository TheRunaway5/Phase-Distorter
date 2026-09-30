// Native content -> scenery/actor commands -> software pixels. This probe has
// no reference runtime linkage. Import parity is checked by separate oracles.
#include "eb/native/world_scene.hpp"
#include "generated_assets.hpp"
#include <cmath>
#include <iostream>
#include <limits>
#include <stdexcept>

namespace {
using namespace eb::native;
struct Pixel {
    std::uint32_t color{};
    int priority = -1;
};
template <class F> void rejects(F operation) {
    try {
        operation();
    } catch (const std::exception &) {
        return;
    }
    throw std::runtime_error("Invalid native scene input was accepted");
}
Pixel background(const WorldMapArea &area, const AreaPalettes &palettes, int x, int y,
                 std::uint32_t backdrop) {
    Pixel result{backdrop, -1};
    for (const auto layer : {MapLayer::Base, MapLayer::Foreground}) {
        const auto pixel = area.pixel(x, y, layer);
        if (!pixel.index)
            continue;
        if (pixel.palette < 2 || pixel.palette >= 8)
            throw std::runtime_error("Native asset fixture needs reserved scenery palette");
        const auto priority = layer == MapLayer::Base ? (pixel.priority ? 9 : 6) : (pixel.priority ? 8 : 5);
        if (priority > result.priority)
            result = {palettes.scenery[pixel.palette - 2][pixel.index] | 0xff000000, priority};
    }
    return result;
}
std::shared_ptr<eb::DirectSceneFrame> actors(const WorldSceneView &view, int priority) {
    auto frame = std::make_shared<eb::DirectSceneFrame>();
    frame->width = view.width;
    frame->frame = view.frame;
    frame->scene_identity = view.scene_identity;
    frame->atlas_width = 1024;
    frame->atlas_height = 8;
    frame->atlas.resize(1024 * 8);
    for (unsigned y = 0; y < 8; ++y)
        for (unsigned x = 0; x < 8; ++x) {
            frame->atlas[y * 1024 + x] = 0xff01ee37;
            frame->atlas[y * 1024 + 8 + x] = 0xfffc01ff;
        }
    frame->motions = {{1, 120, 100}, {2, 120, 100}};
    frame->quads = {{0, 0, 8, 8, 120, 100, priority, 0, true}, {8, 0, 8, 8, 120, 100, 10, 1, true}};
    return frame;
}
void compare(const WorldMapArea &area, const AreaPalettes &palettes, const WorldSceneView &view,
             unsigned scale, int actor_priority) {
    const auto sprites = actors(view, actor_priority);
    const auto original_atlas = sprites->atlas;
    const auto frame = draw_world_scene(area, palettes, view, sprites);
    const auto pixels = eb::rasterize_direct_scene({frame, {}}, scale);
    const auto left = view.camera_x - (view.width - 256) / 2.f;
    for (unsigned y = 0; y < 224 * scale; ++y)
        for (unsigned x = 0; x < view.width * scale; ++x) {
            const float sx = (x + .5f) / scale, sy = (y + .5f) / scale;
            auto expected = background(area, palettes, int(std::floor(left + sx)),
                                       int(std::floor(view.camera_y + 1 + sy)), view.backdrop);
            if (sx >= 120 && sx < 128 && sy >= 100 && sy < 108 && actor_priority > expected.priority)
                expected.color = 0xff01ee37;
            if (pixels[y * view.width * scale + x] != expected.color)
                throw std::runtime_error("Native scene differs from indexed map/layer sampling at " +
                                         std::to_string(x) + "," + std::to_string(y));
        }
    if (sprites->atlas != original_atlas || sprites->quads.size() != 2)
        throw std::runtime_error("Native scenery composition mutated its actor frame");
}
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("native_world_scene_assets pack.ebpak ...");
        for (int argument = 1; argument < argc; ++argument) {
            const auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            WorldMap map(assets.image, world_map_layout(assets.version));
            WorldPalettes palette_data(assets.image, world_palette_layout(assets.version));
            std::vector<std::uint8_t> flags(8192);
            unsigned comparisons = 0;
            // Every combination gets a real authored sector; view borders also
            // exercise the neighboring combination's source border policy.
            for (unsigned combination = 0; combination < 32; ++combination) {
                unsigned found_x = 0, found_y = 0;
                bool found = false;
                for (unsigned y = 0; y < 80 && !found; ++y)
                    for (unsigned x = 0; x < 32 && !found; ++x)
                        if (map.sector(x, y).combination == combination) {
                            found_x = x * 256;
                            found_y = y * 128;
                            found = true;
                        }
                if (!found)
                    continue;
                auto area = map.prepare(combination, flags);
                const auto palettes = palette_data.resolve(palette_data.area_at(found_x, found_y), flags);
                const auto unchanged = area.graphics();
                for (const unsigned width : {256u, 398u, 522u, 1024u}) {
                    WorldSceneView view{float(found_x), float(found_y), width, 8, 1, 1, 0xff172331};
                    compare(area, palettes, view, 1, 7);
                    compare(area, palettes, view, 1, 10);
                    comparisons += 2;
                }
                // At4x, quarter-source-pixel cameras must move geometry rather
                // than blending completed pictures or rounding to game pixels.
                WorldSceneView fractional{found_x + .25f, found_y + .75f, 398, 8, 1, 1, 0xff172331};
                compare(area, palettes, fractional, 4, 7);
                ++comparisons;
                if (combination == 0) {
                    for (const unsigned width : {256u, 398u, 522u}) {
                        WorldSceneView outside{-.25f, -8.75f, width, 8, 1, 1, 0xff172331};
                        compare(area, palettes, outside, 4, 7);
                        ++comparisons;
                    }
                    auto invalid = fractional;
                    invalid.camera_x = std::numeric_limits<float>::infinity();
                    rejects([&] { draw_world_scene(area, palettes, invalid); });
                    auto wrong_palette = palettes;
                    wrong_palette.selected.group = 32;
                    rejects([&] { draw_world_scene(area, wrong_palette, fractional); });
                    auto invalid_actors = actors(fractional, 7);
                    invalid_actors->atlas.pop_back();
                    rejects([&] { draw_world_scene(area, palettes, fractional, invalid_actors); });
                    invalid_actors->atlas.resize(1024 * 4096);
                    invalid_actors->atlas_height = 4096;
                    rejects([&] { draw_world_scene(area, palettes, fractional, invalid_actors); });
                    if (invalid_actors->atlas_height != 4096 || invalid_actors->quads.size() != 2)
                        throw std::runtime_error("Failed native composition mutated its input");
                }
                if (area.graphics() != unchanged)
                    throw std::runtime_error("Native rendering advanced map animation");
            }
            std::cout << "PASS " << assets.title << ": " << comparisons
                      << " native whole-view map/actor comparisons, four widths, fractional camera, "
                         "scenery occlusion and unchanged logic artwork\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
