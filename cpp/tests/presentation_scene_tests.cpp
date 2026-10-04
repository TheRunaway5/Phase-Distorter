// Asset-backed rendering fixtures, not gameplay state or a natural story route.
// Actual imported sector/metatile data drives synthetic colored arrangements,
// making every expanded/clamped pixel independently checkable without CPU code.
#include "eb/snes_bus.hpp"
#include "eb/native/world_map.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <array>
#include <cmath>
#include <vector>
#include <fstream>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
unsigned checks = 0;
void require(bool value, const std::string& message) {
    ++checks;
    if (!value)
        throw std::runtime_error(message);
}
unsigned word(const eb::SnesBus& b, unsigned a) {
    return b.work_ram[a] | (b.work_ram[a + 1] << 8);
}
void store(eb::SnesBus& b, unsigned a, unsigned v) {
    b.work_ram[a] = v;
    b.work_ram[a + 1] = v >> 8;
}
// Independent expected-pixel calculation from imported map metadata. Keeping
// it outside Bus makes this a check of rendering, not a copy of its output.
unsigned block_at(const eb::GameAssets& game, const eb::SourceProfile& source, unsigned combo, int px, int py) {
    if (px < 0 || px >= 8192 || py < 0 || py >= 10240)
        return 0;
    const unsigned bx = unsigned(px) / 32, by = unsigned(py) / 32;
    if ((game.image[source.rom_map_tileset_palette_sectors + (by / 4) * 32 + bx / 8] >> 3) != combo)
        return 0;
    const unsigned index = (by / 8) * 256 + bx;
    const unsigned lo = game.image[source.rom_map_tile_chunks[by % 8] + index];
    const unsigned hi = (game.image[source.rom_map_tile_chunks[8 + (by % 8) / 4] + index] >> ((by % 4) * 2)) & 3;
    return lo | (hi << 8);
}
uint16_t shade(unsigned tile) {
    return uint16_t((tile * 2) | ((31 - tile) << 5) | ((tile * 2) << 10));
}
uint32_t rgb(unsigned color) {
    const auto c = [](unsigned v) { return (v << 3) | (v >> 2); };
    return 0xff000000 | (c(color & 31) << 16) | (c((color >> 5) & 31) << 8) | c((color >> 10) & 31);
}
void run_case(const eb::GameAssets& game, const char* name, unsigned combo, unsigned row, unsigned first, unsigned end,
              int camera, unsigned width, bool natural_border = false) {
    const auto& source = eb::source_profile(game.version);
    const unsigned sector = source.rom_map_tileset_palette_sectors + row * 32;
    require((game.image[sector + first] >> 3) == combo &&
                (first == 0 || (game.image[sector + first - 1] >> 3) != combo),
            std::string(name) + ": left source sector boundary");
    require((game.image[sector + end - 1] >> 3) == combo && (end == 32 || (game.image[sector + end] >> 3) != combo),
            std::string(name) + ": right source sector boundary");
    for (unsigned x = first; x < end; ++x)
        require((game.image[sector + x] >> 3) == combo, std::string(name) + ": contiguous source sector span");
    const int camera_y = int(row) * 128 - 48; // center is 64 pixels inside the chosen row
    auto bus = std::make_unique<eb::SnesBus>(game.image, game.version);
    store(*bus, source.wram_loaded_map_tile_combination, combo);
    store(*bus, source.wram_background_scroll.layer1_x, camera);
    store(*bus, source.wram_background_scroll.layer1_y, camera_y);
    // Synthetic arrangements preserve all actual map block IDs and sector data.
    // Each ID selects one of 15 distinguishable colors; no copyrighted tile art
    // is substituted into production, and this fixture never runs game code.
    for (unsigned block = 0; block < 1024; ++block)
        for (unsigned tile = 0; tile < 16; ++tile)
            store(*bus, source.wram_map_tile_arrangements + block * 32 + tile * 2, block % 15 + 1);
    for (unsigned tile = 1; tile < 16; ++tile) {
        bus->palette_ram[tile * 2] = shade(tile);
        bus->palette_ram[tile * 2 + 1] = shade(tile) >> 8;
        for (unsigned y = 0; y < 8; ++y)
            for (unsigned plane = 0; plane < 4; ++plane)
                bus->video_ram[tile * 32 + (plane / 2) * 16 + y * 2 + (plane % 2)] = (tile & (1u << plane)) ? 255 : 0;
    }
    for (unsigned y = 0; y < 32; ++y)
        for (unsigned x = 0; x < 64; ++x) {
            const int tx = camera / 8 + int(x), ty = camera_y / 8 + int(y);
            const unsigned mx = unsigned(tx) & 63, my = unsigned(ty) & 31;
            const unsigned a = 0x7000 + (mx / 32) * 2048 + (my * 32 + (mx % 32)) * 2;
            bus->video_ram[a] = block_at(game, source, combo, tx * 8, ty * 8) % 15 + 1;
        }
    bus->write_byte(0x2105, 1);
    bus->write_byte(0x2107, 0x39);
    bus->write_byte(0x2108, 0x59);
    bus->write_byte(0x212c, 1);
    bus->write_byte(0x2100, 15);
    bus->write_byte(0x210d, camera & 255);
    bus->write_byte(0x210d, (camera >> 8) & 3);
    bus->write_byte(0x210e, camera_y & 255);
    bus->write_byte(0x210e, (camera_y >> 8) & 3);
    auto native = std::make_unique<eb::SnesBus>(*bus);
    bus->set_presentation_width(width);
    while (bus->scanline_index() != 225)
        bus->advance_cpu_cycles(1);
    while (native->scanline_index() != 225)
        native->advance_cpu_cycles(1);
    const int left = int(first) * 256, right = int(end) * 256, span = right - left, margin = (int(width) - 256) / 2;
    const int origin = natural_border ? camera - margin
        : span >= int(width) ? std::clamp(camera - margin, left, right - int(width))
                            : left - (int(width) - span) / 2;
    const auto pixels = bus->presentation_pixels();
    for (unsigned y = 0; y < 224; ++y)
        for (unsigned x = 0; x < width; ++x) {
            const int world_x = origin + int(x);
            const auto expected =
                !natural_border && (world_x < left || world_x >= right)
                    ? 0xff000000
                    : rgb(shade(block_at(game, source, combo, world_x, camera_y + int(y) + 1) % 15 + 1));
            if (pixels[y * width + x] != expected)
                throw std::runtime_error(std::string(name) + ": pixel mismatch at " + std::to_string(x) + "," +
                                         std::to_string(y));
        }
    ++checks;
    require(bus->native_framebuffer == native->native_framebuffer && bus->work_ram == native->work_ram &&
                bus->video_ram == native->video_ram && bus->palette_ram == native->palette_ram &&
                bus->object_attributes == native->object_attributes &&
                word(*bus, source.wram_background_scroll.layer1_x) == unsigned(camera),
            std::string(name) + ": native framebuffer and camera/memory independence");
    std::cout << name << ": source region [" << left << ',' << right << "), width=" << width
              << ", display origin=" << origin << ", native origin=" << camera
              << ", every display pixel matches source fixture\n";
}
// Real forest-sector seams from both local imported games. Camera centers are
// sampled on source-passable ground, but this remains a map/rendering fixture:
// no scripted walk, party simulation, or live display is implied by the test.
struct ForestPathFixture {
    const eb::GameAssets &game;
    const eb::SourceProfile &source;
    const char *name;
    unsigned combo, width;
    std::unique_ptr<eb::SnesBus> bus;
    eb::GameSceneRenderer renderer;
    ForestPathFixture(const eb::GameAssets &assets, const char *label, unsigned combination, unsigned display_width)
        : game(assets), source(eb::source_profile(game.version)), name(label), combo(combination), width(display_width),
          bus(std::make_unique<eb::SnesBus>(game.image, game.version)) {
        store(*bus, source.wram_loaded_map_tile_combination, combo);
        store(*bus, source.wram_first_entity, 0xffff);
        for (unsigned block = 0; block < 1024; ++block)
            for (unsigned tile = 0; tile < 16; ++tile)
                store(*bus, source.wram_map_tile_arrangements + block * 32 + tile * 2, block % 15 + 1);
        for (unsigned tile = 1; tile < 16; ++tile) {
            bus->palette_ram[tile * 2] = shade(tile);
            bus->palette_ram[tile * 2 + 1] = shade(tile) >> 8;
            for (unsigned y = 0; y < 8; ++y)
                for (unsigned plane = 0; plane < 4; ++plane)
                    bus->video_ram[tile * 32 + (plane / 2) * 16 + y * 2 + (plane % 2)] =
                        (tile & (1u << plane)) ? 255 : 0;
        }
        bus->write_byte(0x2105, 1);
        bus->write_byte(0x2107, 0x39);
        bus->write_byte(0x2108, 0x59);
        bus->write_byte(0x212c, 1);
        bus->write_byte(0x2100, 15);
        renderer.set_presentation_width(view(), width);
        renderer.enable_direct_rendering(true);
    }
    eb::SceneReadView view() const {
        auto result = bus->scene_read_view();
        result.object_scene = &renderer;
        return result;
    }
    std::array<int, 2> span(int center_x, int center_y) const {
        const unsigned row = unsigned(center_y) / 128;
        int first = center_x / 256, end = first + 1;
        const auto valid = [&](int column) {
            return column >= 0 && column < 32 &&
                   (game.image[source.rom_map_tileset_palette_sectors + row * 32 + unsigned(column)] >> 3) == combo;
        };
        require(valid(first), std::string(name) + ": source forest path left its combination");
        while (valid(first - 1)) --first;
        while (valid(end)) ++end;
        return {first * 256, end * 256};
    }
    int target(int center_x, int center_y) const {
        const auto bounds = span(center_x, center_y);
        const int camera = center_x - 128, margin = int(width - 256) / 2;
        return bounds[1] - bounds[0] >= int(width)
                   ? std::clamp(camera - margin, bounds[0], bounds[1] - int(width))
                   : bounds[0] - (int(width) - bounds[1] + bounds[0]) / 2;
    }
    int frame(int center_x, int center_y, bool verify_pixels = false) {
        const int camera_x = center_x - 128, camera_y = center_y - 112;
        for (unsigned layer = 0; layer < 2; ++layer) {
            store(*bus, layer ? source.wram_background_scroll.layer2_x : source.wram_background_scroll.layer1_x,
                  unsigned(camera_x));
            store(*bus, layer ? source.wram_background_scroll.layer2_y : source.wram_background_scroll.layer1_y,
                  unsigned(camera_y));
            bus->write_byte(0x210d + layer * 2, camera_x & 255);
            bus->write_byte(0x210d + layer * 2, (camera_x >> 8) & 3);
            bus->write_byte(0x210e + layer * 2, camera_y & 255);
            bus->write_byte(0x210e + layer * 2, (camera_y >> 8) & 3);
        }
        // Rebuild the canonical ring and picture for the chosen authored map
        // position before taking the immutability snapshot. Renderer calls
        // themselves cannot populate caches, alter hardware, or advance clocks.
        for (unsigned y = 0; y < 32; ++y)
            for (unsigned x = 0; x < 64; ++x) {
                const int tx = camera_x / 8 + int(x), ty = camera_y / 8 + int(y);
                const unsigned mx = unsigned(tx) & 63, my = unsigned(ty) & 31;
                const unsigned at = 0x7000 + (mx / 32) * 2048 + (my * 32 + (mx & 31)) * 2;
                const unsigned tile = block_at(game, source, combo, tx * 8, ty * 8) % 15 + 1;
                bus->video_ram[at] = tile;
                bus->video_ram[at + 1] = 0;
            }
        for (unsigned y = 0; y < 224; ++y)
            for (unsigned x = 0; x < 256; ++x)
                bus->native_framebuffer[y * 256 + x] =
                    rgb(shade(block_at(game, source, combo, camera_x + int(x), camera_y + int(y) + 1) % 15 + 1));
        ++bus->completed_frames;
        const auto ram = bus->work_ram;
        const auto video = bus->video_ram;
        const auto palette = bus->palette_ram;
        const auto objects = bus->object_attributes;
        const auto native = bus->native_framebuffer;
        const auto before = view();
        const std::vector<std::uint8_t> registers(before.ppu_registers.begin(), before.ppu_registers.end());
        const auto clocks = bus->master_clocks(), frames = bus->completed_frames;
        std::array<std::uint16_t, 8> scroll{};
        for (unsigned layer = 0; layer < 4; ++layer) {
            scroll[layer] = before.background_scroll_x[layer];
            scroll[layer + 4] = before.background_scroll_y[layer];
        }
        for (unsigned y = 0; y < 224; ++y) {
            const auto current = view();
            renderer.begin_scanline(current, y);
            renderer.render_presentation_margins(current, y);
            renderer.capture_direct_scanline(current, y);
        }
        const auto after = view();
        bool scroll_same = true;
        for (unsigned layer = 0; layer < 4; ++layer)
            scroll_same &= scroll[layer] == after.background_scroll_x[layer] &&
                           scroll[layer + 4] == after.background_scroll_y[layer];
        require(ram == bus->work_ram && video == bus->video_ram && palette == bus->palette_ram &&
                    objects == bus->object_attributes && native == bus->native_framebuffer && scroll_same &&
                    clocks == bus->master_clocks() && frames == bus->completed_frames &&
                    before.fixed_color == after.fixed_color &&
                    std::equal(registers.begin(), registers.end(), after.ppu_registers.begin()),
                std::string(name) + ": presentation camera changed source hardware or gameplay");
        const auto direct = renderer.direct_scene();
        require(direct && direct->motions.size() >= 3,
                std::string(name) + ": camera path did not publish exact direct scene reconstruction");
        const int origin = int(std::lround(-direct->motions[1].x)) - int(width - 256) / 2;
        if (verify_pixels) {
            const auto pixels = renderer.presentation_pixels(bus->native_framebuffer);
            const auto raster = eb::rasterize_direct_scene({direct, {}});
            require(raster.size() == pixels.size() && std::equal(raster.begin(), raster.end(), pixels.begin()),
                    std::string(name) + ": direct raster differs from presentation pixels");
            for (unsigned y = 0; y < 224; ++y)
                for (unsigned x = 0; x < width; ++x) {
                    const int wx = origin + int(x);
                    const auto expected = rgb(shade(block_at(game, source, combo, wx,
                                                             camera_y + int(y) + 1) % 15 + 1));
                    if (pixels[y * width + x] != expected)
                        throw std::runtime_error(std::string(name) + ": natural map border sampled or clipped "
                                                 "incorrectly at " + std::to_string(x) + "," +
                                                 std::to_string(y));
                }
            ++checks;
        }
        return origin;
    }
};
void run_forest_path(const eb::GameAssets &game, const eb::native::WorldMap &map, const char *name,
                     unsigned combo, int center_x, int seam_y, std::array<int, 2> old_bounds,
                     std::array<int, 2> new_bounds, unsigned width) {
    ForestPathFixture fixture(game, name, combo, width);
    require(fixture.span(center_x, seam_y - 1) == old_bounds &&
                fixture.span(center_x, seam_y) == new_bounds,
            std::string(name) + ": imported forest seam boundaries changed");
    // These centers straddle real walkable forest cells. Empty event flags
    // preserve the source's initial collision arrangements at this location.
    const std::array<std::uint8_t, 128> flags{};
    const auto area = map.prepare(combo, flags);
    for (int y = seam_y - 16; y <= seam_y + 16; ++y)
        require(!(area.collision(center_x / 8, y / 8) & 0xc0),
                std::string(name) + ": selected source forest path is blocked");
    const int before_target = fixture.target(center_x, seam_y - 1), after_target = fixture.target(center_x, seam_y);
    const int old_jump = std::abs(after_target - before_target);
    require(old_jump > 4, std::string(name) + ": source path no longer reproduces the old sector camera snap");
    const int natural_origin = center_x - 128 - int(width - 256) / 2;
    int origin = fixture.frame(center_x, seam_y - 1, true);
    require(origin == natural_origin, std::string(name) + ": forest border forced a camera correction");
    int largest_step = 0;
    // Repeatedly crossing one sector edge must hold its accepted framing;
    // merely limiting each jump would still make the camera hunt left/right.
    for (unsigned i = 0; i < 12; ++i) {
        const int next = fixture.frame(center_x, seam_y - int(i & 1), i == 0 || i == 11);
        largest_step = std::max(largest_step, std::abs(next - origin));
        require(next == natural_origin, std::string(name) + ": brief forest seam dither changed camera framing");
        origin = next;
    }
    for (unsigned i = 0; i < 128; ++i) {
        const int next = fixture.frame(center_x, seam_y, i == 0 || i == 127);
        largest_step = std::max(largest_step, std::abs(next - origin));
        origin = next;
    }
    require(largest_step <= 4,
            std::string(name) + ": one-pixel forest movement produced a correction above 4 pixels");
    require(origin == natural_origin && largest_step == 0,
            std::string(name) + ": forest storage seam changed camera framing");
    std::cout << name << ": width=" << width << ", old one-pixel seam jump=" << old_jump
              << "px, largest correction=" << largest_step << "px, natural origin=" << origin << '\n';
}

void run_cutscene_bounds(const eb::GameAssets &game, unsigned width) {
    ForestPathFixture f(game, "Authored cutscene canvas", 6, width);
    f.frame(4368, 2048, true);
    const unsigned camera_mode = game.version == eb::GameVersion::JP ? 0x9b56 : 0x98a5;
    const int margin = int(width - 256) / 2;
    // UNKNOWN_C46698/C466A8 set mode 2 for an entity-directed story camera.
    // The stage shares ordinary map storage with neighboring rooms: extending
    // that storage must not reveal a cave alongside the authored black stage.
    for (unsigned effect : {1u, 2u, 0u}) {
        store(*f.bus, camera_mode, effect == 0 ? 2 : 0);
        f.bus->write_byte(0x2123, effect == 1 ? 3 : 0); // inverted BG1 window
        f.bus->write_byte(0x2125, effect == 2 ? 0x30 : 0); // inverted color window
        f.bus->write_byte(0x212e, effect == 1 ? 1 : 0);
        f.bus->write_byte(0x2130, effect == 2 ? 0x80 : 0);
        ++f.bus->completed_frames;
        for (unsigned y = 0; y < 224; ++y) {
            // A scanline aperture opens to both native edges at its equator,
            // reproducing the unwanted horizontal strips in the prayer scene.
            const unsigned inset = effect ? unsigned(std::abs(int(y) - 112)) / 2 : 0;
            f.bus->write_byte(0x2126, inset);
            f.bus->write_byte(0x2127, 255 - inset);
            const auto current = f.view();
            f.renderer.begin_scanline(current, y);
            const eb::PpuPixel empty{};
            for (unsigned x = 0; x < 256; ++x)
                f.bus->native_framebuffer[y * 256 + x] =
                    f.renderer.compose_presentation_pixel(current, int(x), y, empty, false);
            const auto ram = f.bus->work_ram;
            f.renderer.render_presentation_margins(f.view(), y);
            f.renderer.capture_direct_scanline(f.view(), y);
            require(ram == f.bus->work_ram, "Cutscene presentation changed source scene state");
        }
        const auto pixels = f.renderer.presentation_pixels(f.bus->native_framebuffer);
        for (unsigned y = 0; y < 224; ++y)
            for (unsigned x = 0; x < width; ++x)
                require(pixels[y * width + x] ==
                            (int(x) >= margin && int(x) < margin + 256
                                 ? f.bus->native_framebuffer[y * 256 + x - margin] : 0xff000000),
                        effect == 0 ? "Scripted stage exposes neighboring scenery"
                                    : "Prayer aperture leaks scenery beyond the authored screen");
        if (effect == 0) {
            const auto direct = f.renderer.direct_scene();
            require(direct && eb::rasterize_direct_scene({direct, {}}) ==
                                 std::vector<std::uint32_t>(pixels.begin(), pixels.end()),
                    "Direct rendering does not preserve the authored cutscene canvas");
            eb::DirectSceneMotion motion;
            motion.submit(direct);
            f.frame(4372, 2048);
            motion.submit(f.renderer.direct_scene());
            for (double fraction : {0.0, .25, .5, .75, 1.0}) {
                const auto interpolated = eb::rasterize_direct_scene(motion.sample(fraction));
                for (unsigned y = 0; y < 224; ++y)
                    for (unsigned x = 0; x < width; ++x)
                        if (int(x) < margin || int(x) >= margin + 256)
                            require(interpolated[y * width + x] == 0xff000000,
                                    "Interpolated story camera leaks scenery outside its authored canvas");
            }
        }
    }
    store(*f.bus, camera_mode, 0);
    f.bus->write_byte(0x2123, 0); f.bus->write_byte(0x2125, 0);
    f.bus->write_byte(0x212e, 0); f.bus->write_byte(0x2130, 0);
    f.frame(4368, 2048, true); // ordinary wide map returns immediately
    std::cout << "Cutscene camera/layer iris/color iris: width=" << width << " PASS\n";
}
} // namespace
int main(int argc, char** argv) {
    try {
        if (argc != 3 || std::string(argv[1]) != "--assets")
            throw std::runtime_error("Usage: presentation_scene_tests --assets FILE");
        const auto game = eb::load_game_assets(argv[2], eb::asset_profiles());
        for (unsigned width : {398u, 522u, 796u, 1024u}) run_cutscene_bounds(game, width);
        run_case(game, "Fourside tunnel left", 5, 26, 22, 25, 5632, 400);
        run_case(game, "Fourside tunnel right", 5, 26, 22, 25, 6144, 400);
        run_case(game, "Fourside tunnel ultrawide", 5, 26, 22, 25, 5888, 1024);
        run_case(game, "Desert road row77 west", 8, 77, 1, 23, 256, 800);
        run_case(game, "Desert road row78 east", 8, 78, 1, 23, 5632, 1024);
        for (unsigned width : {398u, 522u, 796u, 1024u}) {
            for (const bool east : {false, true}) {
                run_case(game, "Threed northern tunnel", 5, 0, 24, 27,
                         east ? 6656 : 6144, width);
                run_case(game, "Threed southern tunnel", 5, 79, 23, 31,
                         east ? 7680 : 5888, width);
                run_case(game, "Threed to desert tunnel", 5, 79, 17, 22,
                         east ? 5376 : 4352, width);
                run_case(game, "Fourside tunnel", 5, 26, 22, 25,
                         east ? 6144 : 5632, width);
                run_case(game, "Fourside bridge tunnel", 5, 67, 30, 32,
                         east ? 7936 : 7680, width);
                run_case(game, "Desert traffic row77", 8, 77, 1, 23,
                         east ? 5632 : 256, width);
                run_case(game, "Desert traffic row78", 8, 78, 1, 23,
                         east ? 5632 : 256, width);
                run_case(game, "Sanctuary cave natural border", 26, 1, 12, 16,
                         east ? 3840 : 3072, width, true);
                run_case(game, "Threed forest natural border", 3, 70, 18, 26,
                         east ? 6400 : 4608, width, true);
            }
        }
        const eb::native::WorldMap map(game.image, eb::native::world_map_layout(game.version));
        for (unsigned width : {400u, 448u, 512u, 800u, 1024u}) {
            run_forest_path(game, map, "Peaceful Rest Valley forest", 6, 4368, 2048,
                            {4352, 6144}, {4096, 5888}, width);
            run_forest_path(game, map, "Winters forest", 13, 576, 3840,
                            {0, 768}, {0, 1024}, width);
        }
        std::cout << "PASS " << game.title << ": " << checks
                  << " source-backed rendering checks (fixture, not gameplay)\n";
    } catch (const std::exception& e) {
        std::cerr << "FAIL: " << e.what() << '\n';
        return 1;
    }
}
