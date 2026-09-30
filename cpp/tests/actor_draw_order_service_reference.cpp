// Compare the actual source selection helper, including its active workspace.
// Callbacks are separate boundaries: this fixture deliberately mutates depths
// there, then runs the real source unlink code before the next native query.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/actor_draw_order.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
std::string context;
void require(bool ok, const std::string &message) {
    if (!ok)
        throw std::runtime_error(message + ": " + context);
}
struct Fixture {
    std::unique_ptr<eb::SnesBus> hardware;
    eb::SnesBus &bus;
    eb::MainCpu65816 cpu;
    const eb::SourceProfile &profile;
    bool jp;
    unsigned select, callback, unlink, end, links;
    Fixture(const eb::GameAssets &assets, bool native)
        : hardware(std::make_unique<eb::SnesBus>(assets.image, assets.version)), bus(*hardware), cpu(bus),
          profile(eb::source_profile(assets.version)), jp(assets.version == eb::GameVersion::JP),
          select(jp ? 0xdb4a : 0xdb82), callback(jp ? 0xdb85 : 0xdbbd), unlink(jp ? 0xdb88 : 0xdbc0),
          end(jp ? 0xdbac : 0xdbe4), links(jp ? 0x2c0c : 0x280c) {
        if (native)
            bus.enable_native_sprite_runtime(true);
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    }
    unsigned word(unsigned at) const { return bus.work_ram.at(at) | unsigned(bus.work_ram.at(at + 1)) << 8; }
    void put(unsigned at, unsigned value) {
        bus.work_ram.at(at) = value;
        bus.work_ram.at(at + 1) = value >> 8;
    }
    void seed(unsigned length, unsigned pattern, bool alias) {
        bus.work_ram.fill(0);
        cpu.emulation_mode = false;
        cpu.status_register = pattern & 1 ? 0xcf : 0;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1dd0;
        cpu.stack_pointer = 0x1ffb;
        cpu.accumulator = 0xdead;
        cpu.x_index = 0xabcd;
        cpu.y_index = 0x9876;
        cpu.program_counter = (alias ? 0x800000 : 0xc00000) | select;
        for (unsigned i = 0; i < 24; ++i)
            bus.work_ram[cpu.direct_page + i] = 0xb0 + i;
        for (unsigned i = 0; i < length; ++i) {
            const unsigned slot = (i * 7 + pattern * 3) % 30;
            const unsigned next = i + 1 == length ? 0xffff : ((i + 1) * 7 + pattern * 3) % 30;
            put(links + slot * 2, next);
            const unsigned depth = pattern == 0   ? 0
                                   : pattern == 1 ? 0xffff
                                   : pattern == 2 ? i
                                   : pattern == 3 ? length - i
                                                  : (i * 32767u + 17) & 0xffff;
            put(profile.wram_entity_world_coordinates.y + slot * 2, depth);
        }
        put(cpu.direct_page + 0x16, pattern * 3 % 30);
    }
    void reach(unsigned stop) {
        for (unsigned steps = 0; steps < 10000; ++steps) {
            if ((cpu.program_counter & 0xffff) == stop)
                return;
            cpu.step_instruction();
        }
        throw std::runtime_error("Depth helper did not reach boundary: " + cpu.describe_registers());
    }
    void callback_mutation(unsigned pass) {
        // This simulates a callback-side logical change, not a graphics body.
        // Selection must be recomputed after this exact mutation boundary.
        const unsigned current = word(cpu.direct_page + 0x16);
        put(profile.wram_entity_world_coordinates.y + current * 2, pass & 1 ? 0 : 0xffff);
        cpu.accumulator = 0xabcd;
        cpu.x_index = 0;
        cpu.y_index = 0x4321;
        cpu.status_register = pass & 1 ? 0x4d : 0x05;
        cpu.program_counter = (cpu.program_counter & 0xff0000) | unlink;
        for (unsigned steps = 0; steps < 100; ++steps) {
            const auto pc = cpu.program_counter & 0xffff;
            if (pc == select || pc == end)
                return;
            cpu.step_instruction();
        }
        throw std::runtime_error("Source depth unlink did not return");
    }
};
void compare(const Fixture &source, const Fixture &native) {
    require(source.cpu.describe_registers() == native.cpu.describe_registers(),
            "Depth helper registers differ: " + source.cpu.describe_registers() + " / " +
                native.cpu.describe_registers());
    for (unsigned at = 0; at < source.bus.work_ram.size(); ++at)
        if (source.bus.work_ram[at] != native.bus.work_ram[at])
            throw std::runtime_error("Depth helper state differs at " + std::to_string(at) + ": " + context);
}
void run(const eb::GameAssets &assets) {
    Fixture source(assets, false), native(assets, true);
    std::uint64_t cases = 0, callbacks = 0, original = 0, replacement = 0;
    for (unsigned length = 1; length <= 30; ++length)
        for (unsigned pattern = 0; pattern < 5; ++pattern) {
            source.seed(length, pattern, pattern & 1);
            native.seed(length, pattern, pattern & 1);
            for (unsigned pass = 0; pass < length; ++pass) {
                context = assets.title + " length=" + std::to_string(length) +
                          " pattern=" + std::to_string(pattern) + " callback=" + std::to_string(pass);
                const auto source_before = source.cpu.instruction_count;
                const auto native_before = native.cpu.instruction_count;
                source.reach(source.callback);
                native.reach(native.callback);
                compare(source, native);
                original += source.cpu.instruction_count - source_before;
                replacement += native.cpu.instruction_count - native_before;
                source.callback_mutation(pass);
                native.callback_mutation(pass);
                compare(source, native);
                ++callbacks;
            }
            require((source.cpu.program_counter & 0xffff) == source.end,
                    "Depth ordering did not remove every candidate once");
            ++cases;
        }
    require(replacement == 0 && original > callbacks, "Native depth helper retained the source scan work");
    std::cout << "PASS " << assets.title << ": " << cases << " linked-list cases, " << callbacks
              << " callback boundaries with active-workspace/register/state equality; removed " << original
              << " source selection instructions\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        require(argc >= 2, "actor_draw_order_service_reference pack.ebpak ...");
        for (int i = 1; i < argc; ++i)
            run(eb::load_game_assets(argv[i], eb::asset_profiles()));
        std::array<eb::native::DepthCandidate, 2> invalid{{{0, 1}, {1, 0}}};
        bool rejected = false;
        try {
            (void)eb::native::select_actor_depth(invalid, 0);
        } catch (const std::runtime_error &) {
            rejected = true;
        }
        require(rejected, "Cyclic native depth list was accepted");
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
