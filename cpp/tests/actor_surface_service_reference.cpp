// Actual source C0C7DB and its motion caller are the independent oracle.
// Candidate calls use the production MainCpu/SnesBus native-service hook.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_collision.hpp"
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
void require(bool value, const std::string &message) {
    if (!value)
        throw std::runtime_error(message + ": " + context);
}
struct Fixture {
    std::unique_ptr<eb::SnesBus> hardware;
    eb::SnesBus &bus;
    eb::MainCpu65816 cpu;
    const eb::SourceProfile &profile;
    bool jp;
    Fixture(const eb::GameAssets &assets, bool native)
        : hardware(std::make_unique<eb::SnesBus>(assets.image, assets.version)), bus(*hardware), cpu(bus),
          profile(eb::source_profile(assets.version)), jp(assets.version == eb::GameVersion::JP) {
        if (native)
            bus.enable_native_sprite_runtime(true);
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    }
    void put(unsigned at, unsigned value) {
        bus.work_ram.at(at) = value;
        bus.work_ram.at(at + 1) = value >> 8;
    }
    void seed(unsigned shape, unsigned slot, unsigned x, unsigned y, unsigned phase, unsigned direct) {
        std::fill(bus.work_ram.begin() + 0x1c00, bus.work_ram.begin() + 0x2000, 0);
        cpu.emulation_mode = false;
        cpu.status_register = phase & 1 ? 0xf7 : 0;
        cpu.data_bank = 0x7e;
        cpu.direct_page = direct;
        cpu.stack_pointer = 0x1fff;
        cpu.accumulator = 0x7654;
        cpu.x_index = slot * 2;
        cpu.y_index = 0xabcd;
        put(jp ? 0x1a38 : 0x1a42, slot);
        put((jp ? 0x2f6c : 0x2b6e) + slot * 2, shape);
        put(profile.wram_entity_world_coordinates.x + slot * 2, x);
        put(profile.wram_entity_world_coordinates.y + slot * 2, y);
        put(profile.wram_entity_surface_flags + slot * 2, 0xf00d);
        const unsigned fraction = jp ? 0xc38 : 0xc42;
        const unsigned velocity = jp ? 0xcec : 0xcf6;
        const unsigned velocity_fraction = jp ? 0xda0 : 0xdaa;
        for (unsigned axis = 0; axis < 2; ++axis) {
            put(fraction + axis * 60 + slot * 2, (x * 7919 + y * 31 + axis) & 0xffff);
            put(velocity + axis * 60 + slot * 2, phase & 1 ? 0xffff : 0);
            put(velocity_fraction + axis * 60 + slot * 2, phase & 1 ? 0x4567 : 0xcdef);
        }
        // Nonuniform bits distinguish both sides, row rounding, the duplicate
        // first aligned sample, wrap, and zero-width/height authored shapes.
        for (unsigned cell = 0; cell < 4096; ++cell) {
            const unsigned row = cell / 64, column = cell % 64;
            bus.work_ram[0xe000 + cell] =
                phase == 0 ? 0
                : phase == 1
                    ? 0xff
                    : std::uint8_t((row * 137 + column * 73 + phase * 17) ^ (row >> 2) ^ (column << 3));
        }
        put(jp ? 0x612a : 0x5da4, 0xfeed);
        put(jp ? 0x6132 : 0x5dac, 0x1234);
        put(jp ? 0x6134 : 0x5dae, 0x5678);
    }
    std::uint64_t call(bool caller, bool alias) {
        unsigned entry = caller ? (jp ? 0xc0a35b : 0xc0a37c) : (jp ? 0xc0c7bd : 0xc0c7db);
        if (alias)
            entry &= ~0x400000u;
        const unsigned trampoline = (entry & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline;
        if (caller) {
            // The motion caller assumes the scheduler already selected 16-bit
            // registers; C0C7DB itself has an explicit REP and accepts either.
            cpu.status_register &= ~(eb::MainCpu65816::Accumulator8Bit | eb::MainCpu65816::Index8Bit);
            cpu.execute_instruction<0x20>(entry & 0xffff, 3);
        } else {
            cpu.execute_instruction<0x22>(entry, 4);
        }
        const auto before = cpu.instruction_count;
        for (unsigned steps = 0; steps < 10000; ++steps) {
            if (cpu.program_counter == trampoline + (caller ? 3 : 4) && cpu.stack_pointer == 0x1fff)
                return cpu.instruction_count - before;
            cpu.step_instruction();
        }
        throw std::runtime_error("Surface reference failed to return: " + cpu.describe_registers());
    }
};
void compare(const Fixture &source, const Fixture &native) {
    require(source.cpu.describe_registers() == native.cpu.describe_registers(),
            "Register/return contract differs: " + source.cpu.describe_registers() + " / " +
                native.cpu.describe_registers());
    for (unsigned at = 0; at < source.bus.work_ram.size(); ++at) {
        // The source C workspace descends from D, independently of the CPU
        // stack. Its sixty bytes and pushed registers are dead after return.
        // No global, actor, input, cache, script or logical-list cell is ignored.
        if ((at >= source.cpu.direct_page - 60u && at < source.cpu.direct_page) ||
            (at >= 0x1f00 && at < 0x2000))
            continue;
        if (source.bus.work_ram[at] != native.bus.work_ram[at])
            throw std::runtime_error("Semantic state differs at WRAM " + std::to_string(at) + ": " + context);
    }
    require(source.bus.video_ram == native.bus.video_ram && source.bus.save_ram == native.bus.save_ram,
            "Surface query changed graphics or save state");
}
void run(const eb::GameAssets &assets) {
    Fixture source(assets, false), native(assets, true);
    const eb::native::WorldCollision collision(assets.image,
                                               eb::native::world_collision_layout(assets.version));
    std::uint64_t cases = 0, source_steps = 0, native_steps = 0;
    constexpr unsigned coordinates[]{0, 1, 7, 8, 15, 31, 511, 512, 8191, 32768, 65527, 65528, 65535};
    for (unsigned shape = 0; shape < 17; ++shape)
        for (unsigned x : coordinates)
            for (unsigned phase = 0; phase < 5; ++phase)
                for (bool caller : {false, true}) {
                    const unsigned slot = std::array{0u, 1u, 24u, 29u}[phase % 4];
                    const auto &geometry = collision.shape(shape);
                    const unsigned y =
                        phase == 4
                            ? std::uint16_t(0x7ff7 + x % 11 + geometry.anchor_y - geometry.surface_offset_y)
                            : coordinates[(x + phase * 3) % std::size(coordinates)];
                    const unsigned direct = std::array{0x1e00u, 0x1d80u, 0x1cf3u}[phase % 3];
                    context = assets.title + " shape=" + std::to_string(shape) +
                              " slot=" + std::to_string(slot) + " XY=" + std::to_string(x) + "," +
                              std::to_string(y) + " phase=" + std::to_string(phase) +
                              " caller=" + std::to_string(caller);
                    // Keep every prior semantic byte synchronized. Source-only
                    // callee residue is deliberately not transported to native.
                    source.seed(shape, slot, x, y, phase, direct);
                    native.seed(shape, slot, x, y, phase, direct);
                    const auto original_steps = source.call(caller, phase & 1);
                    const auto replacement_steps = native.call(caller, phase & 1);
                    compare(source, native);
                    require(replacement_steps < original_steps, "Native helper did not replace source work");
                    source_steps += original_steps;
                    native_steps += replacement_steps;
                    ++cases;
                }
    std::cout << "PASS " << assets.title << ": " << cases
              << " actual surface queries/motion callers; all registers and non-stack state equal; source "
              << source_steps << " versus native " << native_steps << " retired instructions\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        require(argc >= 2, "actor_surface_service_reference pack.ebpak ...");
        for (int i = 1; i < argc; ++i)
            run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
