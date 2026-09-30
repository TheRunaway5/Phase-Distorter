// Original program execution exists only in this independent content oracle.
#include "eb/native/world_map.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned word(std::span<const std::uint8_t> data, unsigned at) { return data[at] | unsigned(data[at + 1]) << 8; }
unsigned pointer(std::span<const std::uint8_t> data, unsigned at) {
    return word(data, at) | unsigned(data[at + 2]) << 16;
}
unsigned packed(const MapTile &tile) {
    return tile.graphic | tile.palette << 10 | unsigned(tile.priority) << 13 |
           unsigned(tile.flip_x) << 14 | unsigned(tile.flip_y) << 15;
}
void require(bool ok, const char *message) { if (!ok) throw std::runtime_error(message); }
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    unsigned decomp, block_query, event_apply, flags, loaded_tileset, cached_x;
    Oracle(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus) {
        const bool jp = assets.version == eb::GameVersion::JP;
        decomp = jp ? 0xc419ea : 0xc41a9e;
        block_query = jp ? 0xc0a135 : 0xc0a156;
        event_apply = jp ? 0xc00702 : 0xc006f2;
        flags = jp ? 0x9eb3 : 0x9c08;
        loaded_tileset = jp ? 0x46f8 : 0x4372;
        cached_x = jp ? 0x2c88 : 0x2888;
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        bus->work_ram[0x0d] = 0x80;
        put(cached_x, 0xffff);
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8;
    }
    void call(unsigned entry, unsigned a = 0, unsigned x = 0, bool far = true) {
        const unsigned trampoline = (entry & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline;
        cpu.accumulator = a; cpu.x_index = x; cpu.y_index = 0;
        if (far) cpu.execute_instruction<0x22>(entry, 4);
        else cpu.execute_instruction<0x20>(entry & 0xffff, 3);
        unsigned steps = 0;
        while (cpu.program_counter != trampoline + (far ? 4 : 3) || cpu.stack_pointer != 0x1fff) {
            if (++steps > 3000000)
                throw std::runtime_error("World map source oracle did not return: " + cpu.describe_registers());
            cpu.step_instruction();
        }
    }
    std::span<const std::uint8_t> decode(unsigned source, unsigned size) {
        std::fill(bus->work_ram.begin() + 0x10000, bus->work_ram.end(), 0xa5);
        put(0x1e0e, source); put(0x1e10, source >> 16);
        put(0x1e12, 0); put(0x1e14, 0x7f);
        call(decomp);
        return std::span(bus->work_ram).subspan(0x10000, size);
    }
};
std::uint64_t compare_graphics(std::span<const std::uint8_t> planar, std::span<const MapGraphic> graphics) {
    for (unsigned tile = 0; tile < graphics.size(); ++tile)
        for (unsigned y = 0; y < 8; ++y)
            for (unsigned x = 0; x < 8; ++x) {
                unsigned color = 0;
                for (unsigned plane = 0; plane < 4; ++plane)
                    color |= ((planar[tile * 32 + y * 2 + (plane / 2) * 16 + (plane & 1)] >> (7 - x)) & 1) << plane;
                require(graphics[tile][y * 8 + x] == color, "Map indexed artwork differs from source DECOMP/upload");
            }
    return graphics.size() * 64;
}
} // namespace

int main(int argc, char **argv) {
    try {
        require(argc >= 2, "native_world_map_reference pack.ebpak ...");
        for (int arg = 1; arg < argc; ++arg) {
            const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
            const auto layout = world_map_layout(assets.version);
            WorldMap map(assets.image, layout);
            Oracle oracle(assets);
            std::uint64_t blocks = 0, pixels = 0, events = 0, ticks = 0;
            for (unsigned y = 0; y < 320; ++y)
                for (unsigned x = 0; x < 256; ++x) {
                    oracle.call(oracle.block_query, x, y, false);
                    require(map.block_id(x, y) == oracle.cpu.accumulator, "Global block selector differs");
                    ++blocks;
                }
            std::vector<std::uint8_t> flags(128);
            for (unsigned set = 0; set < map.tileset_count(); ++set) {
                const auto &native = map.tileset(set);
                const auto raw_graphics = oracle.decode(pointer(assets.image, layout.graphics + set * 4), 0x7000);
                pixels += compare_graphics(raw_graphics, native.graphics);
                std::vector<std::uint8_t> original_graphics(raw_graphics.begin(), raw_graphics.end());
                const auto raw_arrangements = oracle.decode(pointer(assets.image, layout.arrangements + set * 4),
                                                             unsigned(native.blocks.size() * 32));
                for (unsigned block = 0; block < native.blocks.size(); ++block)
                    for (unsigned tile = 0; tile < 16; ++tile)
                        require(word(raw_arrangements, block * 32 + tile * 2) == packed(native.blocks[block].tiles[tile]),
                                "Map arrangement differs from source DECOMP");
                const std::vector<std::uint8_t> original_arrangements(raw_arrangements.begin(), raw_arrangements.end());
                const unsigned collisions = pointer(assets.image, layout.collision_pointers + set * 4) - 0xc00000;
                // Exercise every authored condition independently, plus full
                // flag combinations that reveal ordered replacement chains.
                std::vector<std::vector<std::uint8_t>> flag_cases(3, std::vector<std::uint8_t>(128));
                std::fill(flag_cases[1].begin(), flag_cases[1].end(), 0xff);
                std::fill(flag_cases[2].begin(), flag_cases[2].end(), 0xa5);
                for (const auto &replacement : native.replacements) {
                    auto one = flags;
                    one[(replacement.event_flag - 1) / 8] |= 1u << ((replacement.event_flag - 1) & 7);
                    flag_cases.push_back(std::move(one));
                }
                unsigned combination = 0;
                while (word(assets.image, layout.tileset_mapping + combination * 2) != set) ++combination;
                auto refreshed=map.prepare(combination,flags);
                // A hot event refresh must retain existing animation phase
                // and artwork while matching the source block/collision pass.
                for(unsigned i=0;i<5;++i)refreshed.advance_animation();
                auto clock_peer=refreshed;
                for (const auto &state : flag_cases) {
                    std::copy(state.begin(), state.end(), oracle.bus->work_ram.begin() + oracle.flags);
                    std::copy(original_arrangements.begin(), original_arrangements.end(), oracle.bus->work_ram.begin() + 0x18000);
                    std::copy_n(assets.image.begin() + collisions, 960 * 2, oracle.bus->work_ram.begin() + 0x1f800);
                    oracle.call(oracle.event_apply, set);
                    const auto area = map.prepare(combination, state);
                    const auto retained_graphics=refreshed.graphics();
                    refreshed.reprepare_events(state);
                    require(refreshed.blocks()==area.blocks()&&refreshed.graphics()==retained_graphics,
                            "Hot source event refresh changed artwork or lost ordered substitutions");
                    require(refreshed.advance_animation()==clock_peer.advance_animation()&&
                            refreshed.graphics()==clock_peer.graphics(),"Hot event refresh reset animation phase");
                    for (unsigned block = 0; block < native.blocks.size(); ++block) {
                        for (unsigned tile = 0; tile < 16; ++tile) {
                            require(word(oracle.bus->work_ram, 0x18000 + block * 32 + tile * 2) ==
                                        packed(area.blocks()[block].tiles[tile]), "Event arrangement substitution differs");
                            const unsigned collision = word(oracle.bus->work_ram, 0x1f800 + block * 2);
                            require(area.blocks()[block].collision[tile] == assets.image[layout.collision_patterns + collision + tile],
                                    "Event collision substitution differs");
                        }
                        ++events;
                    }
                }
                auto animated = map.prepare(combination, flags);
                std::copy(original_graphics.begin(), original_graphics.end(), oracle.bus->video_ram.begin());
                oracle.put(oracle.loaded_tileset, set);
                oracle.call(0xc00085, 0, 0, false); // LOAD_TILESET_ANIM: both regional entry points.
                unsigned duration = 1;
                for (const auto &track : native.animations)
                    duration = std::max(duration, unsigned(track.frames.size()) * track.frame_delay * 2 + 3);
                for (unsigned tick = 0; tick < duration; ++tick) {
                    if (tick == duration / 2) {
                        const auto retained = animated.graphics();
                        oracle.call(0xc00085, 0, 0, false);
                        animated.reset_animation();
                        require(animated.graphics() == retained,
                                "Same-combination reload rewrote retained artwork");
                        pixels += compare_graphics(oracle.bus->video_ram, animated.graphics());
                    }
                    oracle.call(0xc00172); // ANIMATE_TILESET.
                    animated.advance_animation();
                    pixels += compare_graphics(oracle.bus->video_ram, animated.graphics());
                    ++ticks;
                }
            }
            std::cout << "PASS " << assets.title << ": " << blocks << " source global blocks, " << events
                      << " event-resolved blocks/collision, " << pixels << " indexed pixels, " << ticks
                      << " animation ticks\n";
        }
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
