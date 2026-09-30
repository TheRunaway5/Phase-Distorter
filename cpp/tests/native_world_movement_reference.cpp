// Reference-only source execution; production movement imports authored masks
// and resolves over immutable host map/collision state.
#include "native_world_movement_fixture.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native;
std::string context;
void require(bool ok, const char *message) {
    if (!ok) throw std::runtime_error(std::string(message) + ": " + context);
}
unsigned encoded(MovementSteering choice) {
    return choice.blocked ? 0xff00 : unsigned(choice.direction);
}
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    unsigned delta, flags;
    Oracle(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image,assets.version)), cpu(*bus),
          delta(assets.version == eb::GameVersion::JP ? 0x22e : 0),
          flags(assets.version == eb::GameVersion::JP ? 0x612a : 0x5da4) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false; cpu.data_bank = 0x7e;
        bus->work_ram[0x0d] = 0x80;
    }
    void put(unsigned at, unsigned value) { bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8; }
    std::uint16_t word(unsigned at) const { return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8; }
    void call(unsigned entry, unsigned a = 0, unsigned x = 0, bool far = false) {
        entry += delta;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff; cpu.program_counter = 0xc0ff00;
        cpu.accumulator = a; cpu.x_index = x; cpu.y_index = 0;
        if (far) cpu.execute_instruction<0x22>(entry,4);
        else cpu.execute_instruction<0x20>(entry & 0xffff,3);
        unsigned steps = 0;
        while (cpu.program_counter != 0xc0ff00u + (far ? 4 : 3) || cpu.stack_pointer != 0x1fff) {
            if (++steps > 100000)
                throw std::runtime_error("Movement source oracle did not return: " + cpu.describe_registers());
            cpu.step_instruction();
        }
    }
    void cache(const WorldMapArea &area, CollisionPoint anchor) {
        for (int dy = -32; dy < 32; ++dy)
            for (int dx = -32; dx < 32; ++dx) {
                const unsigned x = (unsigned(anchor.x / 8) + dx) & 8191,
                               y = (unsigned(anchor.y / 8) + dy) & 8191;
                bus->work_ram[0xe000 + (y & 63) * 64 + (x & 63)] = area.collision(x,y);
            }
    }
    void initialize(MovementProbeState state) {
        put(flags,state.surface_flags); put(flags + 8,state.origin.x); put(flags + 10,state.origin.y);
        put(flags + 4,state.ladder_stairs.x); put(flags + 6,state.ladder_stairs.y);
        put(flags + 16,state.surface_write_counter); put(flags + 18,state.vertical_obstacles);
    }
    MovementProbeState state() const {
        return {{word(flags + 8),word(flags + 10)},word(flags),word(flags + 16),word(flags + 18),
                {word(flags + 4),word(flags + 6)}};
    }
};
struct Counts { std::uint64_t helpers{}, resolutions{}, redirected{}, blocked{}, retries{}, wrapped{}; };
void compare_at(const WorldMovement &movement, const WorldCollision &collision, const WorldMapArea &area,
                Oracle &oracle, CollisionPoint origin, Counts &counts) {
    oracle.cache(area,origin);
    for (unsigned raw_direction = 0; raw_direction < 8; ++raw_direction) {
        const auto direction = CollisionDirection(raw_direction);
        context = "xy=" + std::to_string(origin.x) + "," + std::to_string(origin.y) +
                  " direction=" + std::to_string(raw_direction);
        for (unsigned counter : {0,1,65535}) {
            const MovementProbeState state{origin,0xa53f,std::uint16_t(counter),0xbeef,{0x1234,0x5678}};
            oracle.initialize(state);
            MovementProbeResult result;
            if (raw_direction == 0 || raw_direction == 4) {
                oracle.call(raw_direction == 0 ? 0xc057e8 : 0xc0583c);
                result = movement.vertical(collision,area,direction,state);
            } else if (raw_direction == 2 || raw_direction == 6) {
                oracle.call(raw_direction == 2 ? 0xc059ef : 0xc05890);
                result = movement.horizontal(collision,area,direction,state);
            } else {
                oracle.call(0xc05b4e,raw_direction);
                result = movement.diagonal(collision,area,direction,state);
            }
            require(oracle.cpu.accumulator == encoded(result.steering),"Movement helper steering differs");
            require(oracle.state() == result.state,"Movement helper flags/counter/origin/ladder state differs");
            ++counts.helpers;
        }
        for (bool pending : {false,true}) {
            const MovementRequest request{origin,direction,pending,{0x1234,0x5678},0xbeef};
            oracle.initialize({origin,0xaaaa,0x5555,request.previous_vertical_obstacles,request.ladder_stairs});
            oracle.put(0x1e0e,raw_direction);
            oracle.put(oracle.flags - 10,pending ? 3 : 0);
            oracle.call(0xc05b7b,origin.x,origin.y,true);
            const auto result = movement.resolve(collision,area,request);
            require(oracle.cpu.accumulator == result.surface_flags,"Resolved movement surface flags differ");
            require(oracle.state() == result.probes,"Resolved movement counters/ladder/origin differ");
            require(oracle.word(oracle.flags + 2) == unsigned(result.final_direction) &&
                    oracle.word(oracle.flags + 20) == unsigned(result.redirected),"Resolved movement direction differs");
            // This oracle inspects the source function's own retained LOCAL02
            // after return, distinguishing its FFFF and FF00 choices even when
            // final facing and returned surface flags happen to be identical.
            require(oracle.word(0x1dfc) == encoded(result.steering),"Resolved movement choice differs");
            ++counts.resolutions;
            counts.redirected += result.redirected;
            counts.blocked += result.steering.blocked;
            counts.retries += result.probes.surface_write_counter == 2;
        }
    }
}
}
int main(int argc, char **argv) {
    try {
        require(argc >= 2,"native_world_movement_reference pack.ebpak ...");
        const movement_test::Fixture fixture;
        const auto patterns = fixture.area();
        for (int arg = 1; arg < argc; ++arg) {
            const auto assets = eb::load_game_assets(argv[arg],eb::asset_profiles());
            const WorldCollision collision(assets.image,world_collision_layout(assets.version));
            const WorldMovement movement(assets.image,world_movement_layout(assets.version));
            Oracle oracle(assets);
            Counts counts;
            for (unsigned pattern = 0; pattern < 256; ++pattern)
                for (unsigned phase = 0; phase < 8; ++phase)
                    compare_at(movement,collision,patterns,oracle,
                        {std::uint16_t(pattern * 32 + 16 + phase),std::uint16_t(8 + ((phase * 3) & 7))},counts);
            // Imported real scenery additionally covers event-resolved border
            // cells and actual region geometry, rather than synthetic maps alone.
            const WorldMap map(assets.image,world_map_layout(assets.version));
            for (unsigned combination = 0; combination < 32; ++combination) {
                const auto area = map.prepare(combination,std::vector<std::uint8_t>(128,combination & 1 ? 0xff : 0));
                CollisionPoint center{128,64};
                bool found = false;
                for (unsigned y = 0; y < 80 && !found; ++y)
                    for (unsigned x = 0; x < 32 && !found; ++x)
                        if (map.sector(x,y).combination == combination) {
                            center = {std::uint16_t(x * 256 + 128),std::uint16_t(y * 128 + 64)}; found = true;
                        }
                for (unsigned phase = 0; phase < 8; ++phase)
                    compare_at(movement,collision,area,oracle,
                        {std::uint16_t(center.x + phase),std::uint16_t(center.y + phase)},counts);
            }
            const auto border = map.prepare((map.sector(0,0).combination + 1) % 32,std::vector<std::uint8_t>(128));
            for (unsigned at : {0,1,3,4,7,8,65520,65527,65528,65529,65530,65531,65532,65533,65534,65535}) {
                compare_at(movement,collision,border,oracle,{std::uint16_t(at),std::uint16_t(at)},counts);
                ++counts.wrapped;
            }
            require(counts.redirected > 100 && counts.blocked > 100 && counts.retries > 100,
                    "Movement branches were not meaningfully exercised");
            std::cout << "PASS " << assets.title << ": " << counts.helpers << " helpers, " << counts.resolutions
                      << " resolutions, " << counts.redirected << " redirects, " << counts.blocked << " blocked, "
                      << counts.retries << " retries, " << counts.wrapped << " wrapped origins\n";
        }
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
