// Reference-only verification: the native catalog never links this machine.
#include "eb/native/world_palettes.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <set>
#include <stdexcept>

namespace {
struct Reference {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    unsigned prepare, load, adjust, special, flags;
    Reference(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = 0;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        const bool jp = assets.version == eb::GameVersion::JP;
        prepare = jp ? 0xc005f7 : 0xc005e7;
        load = jp ? 0xc007c6 : 0xc007b6;
        adjust = jp ? 0xc00490 : 0xc00480;
        special = jp ? 0xc00788 : 0xc00778;
        flags = jp ? 0x9eb3 : 0x9c08;
    }
    void call(unsigned routine, unsigned a = 0, unsigned x = 0) {
        cpu.program_counter = 0xc0ff00;
        cpu.accumulator = a;
        cpu.x_index = x;
        cpu.y_index = 0;
        cpu.execute_instruction<0x22>(routine, 4);
        unsigned steps = 0;
        while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
            if (++steps > 1000000)
                throw std::runtime_error("Palette reference routine stuck: " + cpu.describe_registers());
            cpu.step_instruction();
        }
    }
    std::uint32_t color(unsigned index) const {
        const unsigned at = 0x200 + index * 2;
        const unsigned value = bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
        const auto channel = [](unsigned v) { return (v << 3) | (v >> 2); };
        return 0xff000000u | channel(value & 31) << 16 | channel((value >> 5) & 31) << 8 |
               channel((value >> 10) & 31);
    }
};
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("native_palette_reference pack.ebpak ...");
        for (int arg = 1; arg < argc; ++arg) {
            const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
            const auto layout = eb::native::world_palette_layout(assets.version);
            const eb::native::WorldPalettes native(assets.image, layout);
            Reference reference(assets);
            std::vector<std::array<std::uint8_t, 128>> patterns(4);
            for (unsigned pattern = 0; pattern < patterns.size(); ++pattern)
                patterns[pattern].fill(pattern == 0 ? 0 : pattern == 1 ? 255 : pattern == 2 ? 0x55 : 0xaa);
            std::set<unsigned> branch_flags;
            unsigned authored_variants = 0;
            for (unsigned group = 0; group < 32; ++group) {
                const unsigned pointer = layout.groups + group * 4;
                const unsigned start = (assets.image[pointer] | unsigned(assets.image[pointer + 1]) << 8 |
                                        unsigned(assets.image[pointer + 2]) << 16) - 0xc00000;
                for (unsigned variant = 0; variant < native.variants(group); ++variant) {
                    ++authored_variants;
                    const unsigned at = start + variant * 192;
                    const unsigned condition = assets.image[at] | unsigned(assets.image[at + 1]) << 8;
                    if (condition) branch_flags.insert(condition & 0x7fff);
                }
            }
            if (authored_variants != 168)
                throw std::runtime_error("Imported palette variant coverage changed");
            for (const unsigned flag : branch_flags) {
                if (!flag || flag > 1024) throw std::runtime_error("Unexpected palette event flag");
                auto one = patterns[0], all_but_one = patterns[1];
                one[(flag - 1) / 8] |= 1u << ((flag - 1) & 7);
                all_but_one[(flag - 1) / 8] &= ~(1u << ((flag - 1) & 7));
                patterns.push_back(one);
                patterns.push_back(all_but_one);
            }
            unsigned cases = 0;
            for (unsigned pattern = 0; pattern < patterns.size(); ++pattern) {
                const auto &flags = patterns[pattern];
                std::copy(flags.begin(), flags.end(), reference.bus->work_ram.begin() + reference.flags);
                for (unsigned group = 0; group < 32; ++group)
                    for (unsigned variant = 0; variant < native.variants(group); ++variant) {
                        reference.call(reference.prepare);
                        std::copy_n(assets.image.begin() + layout.sprites, 256,
                                    reference.bus->work_ram.begin() + 0x300);
                        reference.call(reference.load, group, variant);
                        reference.call(reference.adjust);
                        reference.call(reference.special);
                        const auto result = native.resolve({group, variant}, flags);
                        for (unsigned p = 0; p < 14; ++p)
                            for (unsigned color = 1; color < 16; ++color) {
                                const auto actual = p < 6 ? result.scenery[p][color]
                                                         : result.sprites[p - 6][color];
                                const auto expected = reference.color((p + 2) * 16 + color);
                                if (actual != expected)
                                    throw std::runtime_error(
                                        assets.title + " native palette differs: group=" +
                                        std::to_string(group) + " variant=" + std::to_string(variant) +
                                        " flags=" + std::to_string(pattern) + " palette=" +
                                        std::to_string(p) + " index=" + std::to_string(color) +
                                        " got=" + std::to_string(actual) +
                                        " expected=" + std::to_string(expected));
                            }
                        ++cases;
                    }
            }
            for (unsigned y = 0; y < 80; ++y)
                for (unsigned x = 0; x < 32; ++x) {
                    const auto encoded = assets.image[layout.sectors + y * 32 + x];
                    if (native.area_at(x * 256 + 255, y * 128 + 127) !=
                        eb::native::AreaPaletteId{unsigned(encoded >> 3), unsigned(encoded & 7)})
                        throw std::runtime_error("Native world palette sector differs");
                }
            std::cout << "PASS " << assets.title << " source palette cases=" << cases
                      << " exact opaque colors=" << cases * 210 << " sectors=2560\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
