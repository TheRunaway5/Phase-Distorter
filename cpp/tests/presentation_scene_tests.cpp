// Asset-backed rendering fixtures, not gameplay state or a natural story route.
// Actual imported sector/metatile data drives synthetic colored arrangements,
// making every expanded/clamped pixel independently checkable without CPU code.
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <array>
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
              int camera, unsigned width) {
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
    const int origin =
        span >= int(width) ? std::clamp(camera - margin, left, right - int(width)) : left - (int(width) - span) / 2;
    const auto pixels = bus->presentation_pixels();
    for (unsigned y = 0; y < 224; ++y)
        for (unsigned x = 0; x < width; ++x) {
            const int world_x = origin + int(x);
            const auto expected =
                world_x < left || world_x >= right
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
} // namespace
int main(int argc, char** argv) {
    try {
        if (argc != 3 || std::string(argv[1]) != "--assets")
            throw std::runtime_error("Usage: presentation_scene_tests --assets FILE");
        const auto game = eb::load_game_assets(argv[2], eb::asset_profiles());
        run_case(game, "Fourside tunnel left", 5, 26, 22, 25, 5632, 400);
        run_case(game, "Fourside tunnel right", 5, 26, 22, 25, 6144, 400);
        run_case(game, "Fourside tunnel ultrawide", 5, 26, 22, 25, 5888, 1024);
        run_case(game, "Desert road row77 west", 8, 77, 1, 23, 256, 800);
        run_case(game, "Desert road row78 east", 8, 78, 1, 23, 5632, 1024);
        std::cout << "PASS " << game.title << ": " << checks
                  << " source-backed rendering checks (fixture, not gameplay)\n";
    } catch (const std::exception& e) {
        std::cerr << "FAIL: " << e.what() << '\n';
        return 1;
    }
}
