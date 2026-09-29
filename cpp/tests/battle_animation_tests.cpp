// Optional imported-asset fixture. Every authored PSI frame is rendered through
// both source-selected layer layouts and compared with its native animation.
// No ROM or extracted art is stored in the repository by this test.
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
unsigned word(const std::vector<uint8_t>& image, unsigned p) {
    return image.at(p) | (image.at(p + 1) << 8);
}
std::vector<uint8_t> decompress(const std::vector<uint8_t>& image, unsigned p) {
    std::vector<uint8_t> out;
    const auto next = [&]() { return unsigned(image.at(p++)); };
    for (;;) {
        const unsigned header = next();
        if (header == 255)
            return out;
        unsigned command = header >> 5, count = (header & 31) + 1;
        if (command == 7) {
            command = (header >> 2) & 7;
            count = (((header & 3) << 8) | next()) + 1;
        }
        if (out.size() + count * 2 > 0x20000)
            throw std::runtime_error("Oversized PSI fixture");
        if (command == 0)
            for (unsigned i = 0; i < count; ++i)
                out.push_back(next());
        else if (command <= 3) {
            const unsigned first = next(), second = command == 2 ? next() : 0;
            for (unsigned i = 0; i < count; ++i) {
                out.push_back(first + (command == 3 ? i : 0));
                if (command == 2)
                    out.push_back(second);
            }
        } else {
            int source = int(next() << 8);
            source |= int(next());
            for (unsigned i = 0; i < count; ++i) {
                unsigned value = out.at(source);
                if (command == 5) {
                    unsigned reversed = 0;
                    for (unsigned bit = 0; bit < 8; ++bit) {
                        reversed = (reversed << 1) | (value & 1);
                        value >>= 1;
                    }
                    value = reversed;
                }
                out.push_back(value);
                source += command == 6 ? -1 : 1;
            }
        }
    }
}
void until(eb::SnesBus& bus, unsigned line) {
    while (bus.scanline_index() != line)
        bus.advance_cpu_cycles(1);
}
void save(const std::string& path, std::span<const uint32_t> pixels, unsigned width) {
    std::ofstream out(path, std::ios::binary);
    out << "P6\n" << width << " 224\n255\n";
    for (auto pixel : pixels)
        for (unsigned shift : {16u, 8u, 0u})
            out.put(char(pixel >> shift));
}
} // namespace
int main(int argc, char** argv) {
    try {
        if (argc < 3 || std::string(argv[1]) != "--assets")
            throw std::runtime_error("Usage: battle_animation_tests --assets FILE [capture-prefix]");
        const auto game = eb::load_game_assets(argv[2], eb::asset_profiles());
        const auto& source = eb::source_profile(game.version);
        unsigned frames = 0, sequences = 0;
        for (unsigned animation = 0; animation < 34; ++animation) {
            const unsigned config = source.rom_psi_animation_config + animation * 12;
            auto graphics = decompress(game.image, source.rom_psi_animation_graphics_bank + word(game.image, config));
            const unsigned ptr = source.rom_psi_animation_pointers + animation * 4;
            const auto maps =
                decompress(game.image, (word(game.image, ptr) | (game.image.at(ptr + 2) << 16)) - 0xc00000);
            const unsigned count = game.image.at(config + 6);
            if (graphics.size() > 4096 || graphics.size() % 16 || maps.size() < count * 1024)
                throw std::runtime_error("Unexpected source PSI frame layout: animation=" + std::to_string(animation) +
                                         " graphics=" + std::to_string(graphics.size()) +
                                         " maps=" + std::to_string(maps.size()) + " frames=" + std::to_string(count));
            graphics.resize(4096); // Unused tile slots in the fixed-size upload.
            for (unsigned depth : {2u, 4u}) {
                auto bus = std::make_unique<eb::SnesBus>(game.image, game.version);
                const unsigned layer = depth == 2 ? 1 : 0, palette = depth == 2 ? 48 : 64;
                bus->set_presentation_width(400);
                bus->write_byte(0x2100, 15);
                bus->write_byte(0x2105, depth == 2 ? 0 : 1);
                bus->write_byte(0x2107 + layer, 0x58);
                bus->write_byte(0x212c, 1u << layer);
                bus->work_ram[source.wram_battle_mode_flag] = 1;
                bus->work_ram[source.wram_battle_backgrounds.layer1 + 1] = depth;
                bus->work_ram[source.wram_psi_animation_state] = 1;
                // SHOW_PSI_ANIMATION doubles tile stride for the four-bit
                // layout, leaving the additional bitplanes zero.
                for (unsigned tile = 0; tile < 256; ++tile)
                    std::copy_n(graphics.begin() + tile * 16, 16,
                                bus->video_ram.begin() + tile * (depth == 2 ? 16 : 32));
                std::copy_n(game.image.begin() + source.rom_psi_animation_palettes + animation * 8, 8,
                            bus->palette_ram.begin() + palette * 2);
                for (unsigned frame = 0; frame < count; ++frame) {
                    for (unsigned i = 0; i < 1024; ++i) {
                        bus->video_ram[0xb000 + i * 2] = maps[frame * 1024 + i];
                        bus->video_ram[0xb001 + i * 2] = 0x30;
                    }
                    // All frames at 16:9; selected frames also cover ultrawide.
                    for (unsigned width : {400u, 1024u}) {
                        if (width == 1024 && frame != 0 && frame != count / 2 && frame + 1 != count)
                            continue;
                        bus->set_presentation_width(width);
                        until(*bus, 0);
                        until(*bus, 225);
                        const auto picture = bus->presentation_pixels();
                        for (unsigned y = 0; y < 224; ++y)
                            for (unsigned x = 0; x < width; ++x)
                                if (picture[y * width + x] != bus->native_framebuffer[y * 256 + x * 256 / width])
                                    throw std::runtime_error("PSI " + std::to_string(animation) + " frame " +
                                                             std::to_string(frame) + " depth " + std::to_string(depth) +
                                                             " width " + std::to_string(width) + " pixel " +
                                                             std::to_string(x) + "," + std::to_string(y));
                        ++frames;
                        if (argc > 3 && animation == 0 && frame == count / 2 && depth == 4 && width == 400) {
                            save(std::string(argv[3]) + "-native.ppm", bus->native_framebuffer, 256);
                            save(std::string(argv[3]) + "-wide.ppm", picture, width);
                        }
                    }
                }
            }
            ++sequences;
        }
        std::cout
            << "PASS " << game.title << ": " << sequences << " PSI sequences, " << frames
            << " rendered frames; both layer layouts, all native animation pixels map across the requested width\n";
    } catch (const std::exception& e) {
        std::cerr << "FAIL: " << e.what() << '\n';
        return 1;
    }
}
