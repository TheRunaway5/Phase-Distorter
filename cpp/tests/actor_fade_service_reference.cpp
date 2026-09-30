// Independent source NMI reducer and real MainCpu/SnesBus clock-service tests.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/frame_fade.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
void check(bool condition, const std::string &message) {
    if (!condition)
        throw std::runtime_error(message);
}
struct Fixture {
    std::unique_ptr<eb::SnesBus> storage;
    eb::SnesBus &bus;
    eb::MainCpu65816 cpu;
    bool jp;
    explicit Fixture(const eb::GameAssets &assets, bool native)
        : storage(std::make_unique<eb::SnesBus>(assets.image, assets.version)), bus(*storage), cpu(bus),
          jp(assets.version == eb::GameVersion::JP) {
        if (native) {
            bus.set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
            bus.enable_native_sprite_runtime(true);
        }
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        const auto &p = eb::source_profile(assets.version);
        put(p.wram_first_entity, 0xffff);
        reset_cpu();
    }
    void put(unsigned at, unsigned value) {
        bus.work_ram.at(at) = value;
        bus.work_ram.at(at + 1) = value >> 8;
    }
    void reset_cpu() {
        cpu.emulation_mode = false;
        cpu.status_register = 0;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        cpu.accumulator = 0xa501;
        cpu.x_index = 0x7b01;
        cpu.y_index = 0x6ace;
    }
    eb::native::FrameFade state() const {
        const auto &r = bus.work_ram;
        return {r[0x0d], r[0x28], r[0x29], r[0x2a], r[0x1f]};
    }
    void state(eb::native::FrameFade fade) {
        auto &r = bus.work_ram;
        r[0x0d] = fade.brightness;
        r[0x28] = fade.step;
        r[0x29] = fade.delay;
        r[0x2a] = fade.remaining;
        r[0x1f] = fade.hdma;
    }
    void until(unsigned pc, unsigned stack) {
        for (unsigned steps = 0; steps < 200000; ++steps) {
            if (cpu.program_counter == pc && cpu.stack_pointer == stack)
                return;
            cpu.step_instruction();
        }
        throw std::runtime_error("Fade fixture did not return: " + cpu.describe_registers());
    }
    void call(unsigned target, unsigned caller = 0xc0ff00) {
        cpu.program_counter = caller;
        const auto stack = cpu.stack_pointer;
        cpu.execute_instruction<0x22>(target, 4);
        until(caller + 4, stack);
    }
    void begin(bool in, unsigned caller) {
        call(jp ? (in ? 0xc0885e : 0xc0886c) : (in ? 0xc0886c : 0xc0887a), caller);
    }
    void actor(bool disabled = false) {
        reset_cpu();
        put(jp ? 0xa56 : 0xa60, disabled ? 1 : 0);
        call(jp ? 0xc09445 : 0xc09466);
    }
    // This is the actual shared NMI fragment, including owned-clock dispatch;
    // full interrupt/save/restore and INIDISP publication are tested below.
    void nmi_fragment() {
        reset_cpu();
        cpu.direct_page = 0;
        cpu.status_register = eb::MainCpu65816::Accumulator8Bit;
        cpu.program_counter = 0xc081f9;
        until(0xc0821f, 0x1fff);
    }
    void next_frame() {
        const auto frame = bus.completed_frames;
        while (bus.completed_frames == frame)
            bus.advance_master_clocks_with_refresh(128);
    }
    void full_nmi() {
        reset_cpu();
        cpu.program_counter = 0xc0ff00;
        const auto registers = cpu.describe_registers();
        cpu.service_interrupt(true);
        until(0xc0ff00, 0x1fff);
        check(cpu.describe_registers() == registers, "Native fade NMI changed interrupted registers");
    }
};
void reducer(const eb::GameAssets &assets) {
    Fixture source(assets, false);
    std::uint64_t cases = 0;
    constexpr unsigned brightness[]{0, 1, 7, 15, 16, 127, 128, 255};
    constexpr unsigned steps[]{0, 1, 15, 16, 127, 128, 129, 240, 255};
    constexpr unsigned delays[]{0, 1, 127, 128, 129, 255};
    for (auto level : brightness)
        for (auto step : steps)
            for (auto delay : delays)
                for (unsigned remaining = 0; remaining != 256; ++remaining) {
                    const eb::native::FrameFade before{std::uint8_t(level), std::uint8_t(step),
                                                       std::uint8_t(delay), std::uint8_t(remaining), 0xa5};
                    source.state(before);
                    source.nmi_fragment();
                    check(source.state() == eb::native::advance_frame_fade(before),
                          "Native fade byte reducer differs from source NMI at case " +
                              std::to_string(cases));
                    ++cases;
                }
    std::cout << "PASS " << assets.title << ": " << cases << " source NMI byte-counter/brightness cases\n";
}
void starts(const eb::GameAssets &assets) {
    Fixture source(assets, false), native(assets, true);
    unsigned cases = 0;
    for (bool in : {false, true})
        for (unsigned status : {0u, 0x31u, 0x83u, 0xc4u, 0xf7u})
            for (unsigned value : {0u, 1u, 15u, 127u, 128u, 255u})
                for (unsigned delay : {0u, 1u, 128u, 255u}) {
                    const auto caller = native.jp ? 0xc4ad90 : 0xc4dab0;
                    for (auto *fixture : {&source, &native}) {
                        fixture->reset_cpu();
                        fixture->cpu.status_register = status;
                        fixture->cpu.accumulator = 0xa500 | value;
                        fixture->cpu.x_index = 0x7b00 | delay;
                        fixture->state({15, 7, 4, 3, 0xff});
                        fixture->begin(in, caller);
                    }
                    check(source.cpu.describe_registers() == native.cpu.describe_registers(),
                          "Typed fade start return registers or flags differ");
                    check(source.state() == native.state(), "Typed fade start fields differ");
                    check(native.bus.native_actor_fades().owner() == eb::FadeClockOwner::ActorPass,
                          "Audited actor producer did not bind actor clock");
                    ++cases;
                }
    // An unknown/standalone producer executes its exact original service.
    source.reset_cpu();
    native.reset_cpu();
    source.begin(false, 0xc0ff00);
    native.begin(false, 0xc0ff00);
    check(source.cpu.describe_registers() == native.cpu.describe_registers() &&
              source.state() == native.state(),
          "Standalone fade begin changed source behavior");
    check(native.bus.native_actor_fades().owner() == eb::FadeClockOwner::HardwareFrame,
          "Unknown producer inherited actor clock");
    source.nmi_fragment();
    native.nmi_fragment();
    check(source.state() == native.state(), "Standalone NMI countdown changed");
    // Independently execute each catalogued producer's actual translated JSL;
    // a mistaken regional address must not be hidden by a synthetic call.
    const std::array us{0xc0b801u, 0xc4dab0u, 0xc0e88eu, 0xc0e8b5u, 0xc0e952u,
                        0xc3f510u, 0xef051eu, 0xc4f570u, 0xc4ed22u, 0xefe6b3u};
    const std::array jp{0xc0b7e7u, 0xc4ad90u, 0xc0e853u, 0xc0e87au, 0xc0e91cu,
                        0xc0ee66u, 0xc0eeafu, 0xc4c5b0u, 0xc4bf7du, 0xefcfd6u};
    for (auto caller : native.jp ? jp : us) {
        for (auto *fixture : {&source, &native}) {
            fixture->reset_cpu();
            fixture->state({15, 0, 0, 0, 0xff});
            fixture->cpu.program_counter = caller;
            fixture->cpu.step_instruction();
            fixture->until(caller + 4, 0x1fff);
        }
        check(native.bus.native_actor_fades().owner() == eb::FadeClockOwner::ActorPass &&
                  source.state() == native.state() &&
                  source.cpu.describe_registers() == native.cpu.describe_registers(),
              "Audited regional producer is not an actual compatible fade call: " + std::to_string(caller));
    }
    std::cout << "PASS " << assets.title << ": " << cases << " actual typed fade-start return contracts\n";
}
void clocks(const eb::GameAssets &assets) {
    Fixture native(assets, true);
    const auto caller = native.jp ? 0xc4ad90 : 0xc4dab0;
    native.state({15, 0, 0, 0, 0xff});
    native.begin(false, caller);
    const auto initial = native.state();
    for (unsigned i = 0; i < 4; ++i)
        native.nmi_fragment();
    check(native.state() == initial, "NMI advanced an actor-owned fade without a completed pass");
    native.full_nmi();
    check(native.state() == initial && native.bus.scene_read_view().ppu_registers[0] == initial.brightness,
          "Full source NMI failed to publish actor-owned brightness without advancing it");
    native.actor();
    auto expected = eb::native::advance_frame_fade(initial);
    check(native.state() == expected && native.bus.native_actor_fades().actor_fade_ticks() == 1,
          "First completed actor pass failed to tick its fade");
    auto copy = std::make_unique<eb::SnesBus>(native.bus);
    native.actor();
    expected = eb::native::advance_frame_fade(expected);
    check(native.state() == expected && copy->native_actor_fades().actor_fade_ticks() == 1 &&
              copy->work_ram[0x2a] == initial.remaining - 1,
          "Bus copy shared mutable fade ownership or state");
    // A disabled pass is not a completed actor tick. It explicitly yields to
    // standalone progression, without a duplicate countdown in this frame.
    const auto ticks = native.bus.native_actor_fades().actor_fade_ticks();
    native.actor(true);
    check(native.bus.native_actor_fades().owner() == eb::FadeClockOwner::HardwareFrame &&
              native.bus.native_actor_fades().actor_fade_ticks() == ticks && native.state() == expected,
          "Disabled pass counted a tick or retained a deadlocking actor owner");
    native.nmi_fragment();
    check(native.state() == expected, "Clock handoff counted the same physical frame twice");
    native.next_frame();
    native.nmi_fragment();
    expected = eb::native::advance_frame_fade(expected);
    check(native.state() == expected, "Standalone clock did not resume after disabled actor handoff");
    // A new authored request starts a new countdown, independent of old phase.
    native.reset_cpu();
    native.state({15, 0, 0, 0, 0xff});
    native.begin(false, caller);
    for (unsigned i = 0; i < 32; ++i) {
        native.actor();
        native.nmi_fragment();
    }
    check(native.state().brightness == 0x80 && native.state().step == 0 && native.state().hdma == 0,
          "Fade-out did not complete after exactly32 completed actor passes");
    native.reset_cpu();
    native.begin(true, caller);
    for (unsigned i = 0; i < 32; ++i)
        native.actor();
    check(native.state().brightness == 15 && native.state().step == 0,
          "Fade-in did not complete after exactly32 completed actor passes");
    // A fade begun by an action-script tail helper belongs to the currently
    // admitted pass. Inject the helper call between actual body instructions,
    // then let the source scheduler finish that same pass normally.
    native.reset_cpu();
    native.state({15, 0, 0, 0, 0});
    native.put(native.jp ? 0xa56 : 0xa60, 0);
    native.cpu.program_counter = 0xc0ff00;
    native.cpu.execute_instruction<0x22>(native.jp ? 0xc09445 : 0xc09466, 4);
    const unsigned after_body = native.jp ? 0x809451 : 0x809472;
    native.until(after_body, 0x1ffc);
    native.put(0x1e80, 0x3000);
    native.bus.work_ram[0x1e82] = 0x7e;
    native.put(0x3000, 0x0101);
    native.cpu.y_index = 0;
    const auto before_ticks = native.bus.native_actor_fades().actor_fade_ticks();
    native.call(native.jp ? 0xc09f9a : 0xc09fbb);
    check(native.bus.native_actor_fades().owner() == eb::FadeClockOwner::ActorPass &&
              native.state().step == 255 && native.state().remaining == 1,
          "Exact action-script fade tail did not bind the current actor pass");
    native.cpu.program_counter = after_body;
    native.until(0xc0ff04, 0x1fff);
    check(native.bus.native_actor_fades().actor_fade_ticks() == before_ticks + 1 &&
              native.state().remaining == 0,
          "Script-started fade did not count its current completed actor pass");
    native.full_nmi();
    check(native.state().remaining == 0 && native.bus.scene_read_view().ppu_registers[0] == 15,
          "Delayed NMI double-stepped a script-started fade");
    // Synchronous mosaic owns a separate controller. Its entry must cancel the
    // async clock even before its first source instruction writes step zero.
    native.reset_cpu();
    native.begin(false, caller);
    native.cpu.program_counter = native.jp ? 0xc0880a : 0xc08814;
    native.cpu.step_instruction();
    check(native.bus.native_actor_fades().owner() == eb::FadeClockOwner::HardwareFrame,
          "Fade-out mosaic did not cancel actor ownership");
    native.reset_cpu();
    native.begin(true, caller);
    native.cpu.program_counter = native.jp ? 0xc087c4 : 0xc087ce;
    native.cpu.step_instruction();
    check(native.bus.native_actor_fades().owner() == eb::FadeClockOwner::HardwareFrame,
          "Fade-in mosaic did not cancel actor ownership");
    std::cout << "PASS " << assets.title
              << ": real actor completion, no-actor NMI, copy, disabled handoff, restart, both directions "
                 "and mosaic cancellation\n";
}
void nested_pause(const eb::GameAssets &assets) {
    Fixture native(assets, true);
    const auto caller = native.jp ? 0xc4ad90 : 0xc4dab0;
    native.state({15, 0, 0, 0, 0});
    native.begin(false, caller);
    native.reset_cpu();
    native.cpu.program_counter = 0xc0ff00;
    native.cpu.execute_instruction<0x22>(native.jp ? 0xc09445 : 0xc09466, 4);
    const unsigned after_body = native.jp ? 0x809451 : 0x809472;
    native.until(after_body, 0x1ffc);
    // An independent bus snapshot must retain its in-flight pass scope.
    auto copy = std::make_unique<eb::SnesBus>(native.bus);
    eb::MainCpu65816 clone(*copy);
    clone.emulation_mode = native.cpu.emulation_mode;
    clone.status_register = native.cpu.status_register;
    clone.data_bank = native.cpu.data_bank;
    clone.direct_page = native.cpu.direct_page;
    clone.stack_pointer = native.cpu.stack_pointer;
    clone.accumulator = native.cpu.accumulator;
    clone.x_index = native.cpu.x_index;
    clone.y_index = native.cpu.y_index;
    clone.program_counter = native.cpu.program_counter;
    for (unsigned steps = 0; clone.program_counter != 0xc0ff04 || clone.stack_pointer != 0x1fff; ++steps) {
        check(steps < 1000, "Copied in-flight pass failed to return");
        clone.step_instruction();
    }
    check(copy->native_actor_fades().actor_fade_ticks() == 1 &&
              native.bus.native_actor_fades().actor_fade_ticks() == 0 && native.state().remaining == 1,
          "In-flight pass scope was lost or shared by copied bus");
    const auto before = native.state();
    // A recursive controller cannot enter another actor pass while the outer
    // scheduler holds its guard. Its real early RTL hands the fade to NMI.
    native.put(native.jp ? 0xa56 : 0xa60, 1);
    native.call(native.jp ? 0xc09445 : 0xc09466);
    check(native.bus.native_actor_fades().owner() == eb::FadeClockOwner::HardwareFrame,
          "Nested disabled actor call did not release its unusable actor clock");
    native.put(native.jp ? 0xa56 : 0xa60, 0);
    native.cpu.program_counter = after_body;
    native.until(0xc0ff04, 0x1fff);
    check(native.bus.native_actor_fades().actor_fade_ticks() == 0 && native.state() == before,
          "Outer completion double-stepped a fade after nested clock handoff");
    native.nmi_fragment();
    check(native.state() == eb::native::advance_frame_fade(before),
          "Nested disabled clock handoff stalled standalone progression");
    std::cout << "PASS " << assets.title
              << ": copied in-flight pass and nested disabled-controller handoff\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        check(argc >= 2, "actor_fade_service_reference pack.ebpak ...");
        for (int i = 1; i < argc; ++i) {
            const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
            reducer(assets);
            starts(assets);
            clocks(assets);
            nested_pause(assets);
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
