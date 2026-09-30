// Optional asset-backed oracle. The shipped native module never links or calls
// this reference machine; only this test uses the original script interpreter.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/action_program.hpp"
#include "eb/native/action_scripts.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <map>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
struct Layout {
    unsigned interpreter, integrate, wobble;
    unsigned cursor, bank, sleep, stack_offset, temporary, x, xf, dx, dxf, variables, animation, priority;
};
constexpr Layout us{0xc09506, 0xc09fc8, 0x3c506, 0x13fe, 0x148a, 0x1372, 0x12e6, 0x1516,
                    0x0b8e,   0x0c42,   0x0cf6,  0x0daa, 0x0e5e, 0x10f2, 0x103e};
constexpr Layout jp{0xc094e5, 0xc09fa7, 0x3c4f4, 0x13f4, 0x1480, 0x1368, 0x12dc, 0x150c,
                    0x0b84,   0x0c38,   0x0cec,  0x0da0, 0x0e54, 0x10e8, 0x1034};
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Layout layout;
    Oracle(const eb::GameAssets &a, unsigned entry)
        : bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus),
          layout(a.version == eb::GameVersion::JP ? jp : us) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = 0;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        put(layout.cursor, entry);
        put(layout.bank, (entry + 0xc00000) >> 16);
        put(layout.animation, 0xffff);
        for (unsigned axis = 0; axis < 3; ++axis)
            put(layout.xf + axis * 60, 0x8000);
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    unsigned get(unsigned at) const { return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8; }
    void call(unsigned address) {
        constexpr unsigned trampoline = 0xc0ff00;
        cpu.program_counter = trampoline;
        cpu.execute_instruction<0x20>(address & 0xffff, 3);
        unsigned steps = 0;
        while (cpu.program_counter != trampoline + 3 || cpu.stack_pointer != 0x1fff) {
            if (++steps > 1000000)
                throw std::runtime_error("Reference script stuck: " + cpu.describe_registers());
            cpu.step_instruction();
        }
    }
    void tick() {
        put(0x1e80, 0);
        put(0x1e88, 0);
        put(0x1e8a, 0);
        call(layout.interpreter);
        call(layout.integrate);
    }
    void compare(const eb::native::ActionScripts &native, unsigned frame, const char *name) const {
        const auto &actor = native.actor();
        const auto tasks = native.tasks();
        const auto fail = [&](const char *field) {
            throw std::runtime_error(std::string(name) + " frame=" + std::to_string(frame) +
                                     " differs: " + field);
        };
        if (tasks.size() != 1)
            fail("tasks");
        const auto task = tasks.front();
        const auto cursor = ((get(layout.bank) & 255) << 16 | get(layout.cursor)) - 0xc00000;
        if (task.cursor != cursor) {
            std::cerr << std::hex << "native=" << task.cursor << " source=" << cursor << std::dec << '\n';
            fail("script cursor");
        }
        if (task.sleep_frames != get(layout.sleep))
            fail("sleep");
        if (task.temporary != get(layout.temporary))
            fail("temporary");
        if (actor.animation != get(layout.animation))
            fail("animation");
        if (actor.priority != get(layout.priority))
            fail("priority");
        for (unsigned axis = 0; axis < 3; ++axis) {
            if (actor.position[axis] != (get(layout.x + axis * 60) << 16 | get(layout.xf + axis * 60)))
                fail("position");
            if (actor.velocity[axis] != (get(layout.dx + axis * 60) << 16 | get(layout.dxf + axis * 60)))
                fail("velocity");
        }
        for (unsigned i = 0; i < 8; ++i)
            if (actor.variables[i] != get(layout.variables + i * 60))
                fail("actor variable");
    }
};

// Fixture bytecode is sent through both interpreters. It deliberately uses
// authored event commands, never processor opcodes, and requires no engine
// hooks.
struct Fixture {
    static constexpr unsigned base = 0x38000;
    struct Fixup {
        unsigned at;
        std::string label;
        bool far;
    };
    std::vector<std::uint8_t> bytes;
    std::map<std::string, unsigned> labels;
    std::vector<Fixup> fixups;
    void emit(std::initializer_list<unsigned> values) {
        for (const auto value : values)
            bytes.push_back(std::uint8_t(value));
    }
    void label(std::string name) { labels.emplace(std::move(name), base + unsigned(bytes.size())); }
    void target(const char *name, bool far = false) {
        fixups.push_back({unsigned(bytes.size()), name, far});
        emit({0, 0});
        if (far)
            emit({0});
    }
    void branch(unsigned opcode, const char *name, bool far = false) {
        emit({opcode});
        target(name, far);
    }
    void finish() {
        for (const auto &fix : fixups) {
            const unsigned address = labels.at(fix.label) + 0xc00000;
            bytes[fix.at] = address;
            bytes[fix.at + 1] = address >> 8;
            if (fix.far)
                bytes[fix.at + 2] = address >> 16;
        }
    }
};

Fixture arithmetic_fixture() {
    Fixture f;
    f.emit({0x28, 10, 0, 0x29, 20, 0, 0x2a, 30, 0});
    f.emit({0x0e, 0, 0xff, 0xff, 0x14, 0,    2, 1,    0, 0x14, 0,    1,
            0xff, 0, 0x14, 0,    0,    0x3f, 0, 0x14, 0, 3,    0x0f, 0});
    f.emit({0x1d, 0x12, 0, 0x27, 2, 0xf0, 0xff, 0x1f, 1, 0x20, 0, 0x26, 0});
    f.emit({0x3b, 0xff, 0x3c, 0x3e, 2, 0x3d, 0x3e, 0xff});
    f.emit({0x3f, 0x80, 1,    0x40, 0x80, 0xff, 0x41, 0xc0, 0,    0x2e,
            0x80, 0,    0x2f, 0xf0, 0xff, 0x30, 0x80, 0xff, 0x06, 2});
    f.emit({0x21, 1, 0x39, 0x43, 17, 0x82, 3, 0xa1, 0xb1, 0xff, 0xc2, 0, 1, 0xd2, 0x80, 0, 0xe2, 0x80, 0xff});
    f.emit({0x01, 3, 0x14, 2, 2, 1, 0, 0x02});
    f.emit({0x1d, 2, 0, 0x24, 0x14, 3, 2, 1, 0, 0x02});
    f.emit({0x01, 0, 0x14, 4, 2, 1, 0, 0x02});
    f.emit({0x1d, 0, 1, 0x24, 0x14, 5, 2, 1, 0, 0x02});
    f.emit({0x01, 3, 0x1d, 0, 0});
    f.branch(0x16, "break");
    f.emit({0x02});
    f.label("break");
    f.branch(0x04, "long_sub", true);
    f.branch(0x1a, "short_sub");
    f.emit({0x1d, 0, 0});
    f.branch(0x0a, "zero");
    f.emit({0x4d});
    f.label("zero");
    f.emit({0x1d, 1, 0});
    f.branch(0x0b, "nonzero");
    f.emit({0x4d});
    f.label("nonzero");
    f.emit({0x11, 2});
    f.target("short_sub");
    f.target("short_sub");
    f.emit({0x10, 2});
    f.target("invalid");
    f.target("selected");
    f.label("invalid");
    f.emit({0x4d});
    f.label("selected");
    f.emit({0x01, 2, 0x1d, 1, 0});
    f.branch(0x17, "break_true");
    f.emit({0x02});
    f.label("break_true");
    f.emit({0x1d, 2, 0, 0x44, 0x2b, 2, 0, 0x2c, 3, 0, 0x2d, 4, 0, 0x06, 1});
    f.branch(0x03, "end", true);
    f.label("long_sub");
    f.emit({0x2b, 1, 0, 0x06, 1, 0x05});
    f.label("short_sub");
    f.emit({0x2c, 1, 0, 0x06, 1, 0x1b});
    f.label("end");
    f.emit({0x09});
    f.finish();
    return f;
}

void synthetic_reference(const eb::GameAssets &original) {
    auto assets = original;
    const auto fixture = arithmetic_fixture();
    std::copy(fixture.bytes.begin(), fixture.bytes.end(), assets.image.begin() + Fixture::base);
    auto data = std::make_shared<eb::native::ActionScriptData>(fixture.bytes, Fixture::base);
    eb::native::ActionScripts native(data, Fixture::base);
    const std::array roots{Fixture::base};
    const eb::native::CompiledActionProgram program(data, assets.version, roots);
    eb::native::ActionScripts compiled(program.scripts(), Fixture::base);
    Oracle reference(assets, Fixture::base);
    for (unsigned frame = 0; frame < 100; ++frame) {
        if (native.tick() != eb::native::ActionTickResult::Complete)
            throw std::runtime_error("Synthetic authored fixture unexpectedly requires engine work");
        if (compiled.tick() != eb::native::ActionTickResult::Complete)
            throw std::runtime_error("Compiled authored fixture unexpectedly requires engine work");
        eb::native::integrate_action_motion(native.actor());
        eb::native::integrate_action_motion(compiled.actor());
        reference.tick();
        reference.compare(native, frame, "Arithmetic/control-flow fixture");
        reference.compare(compiled, frame, "Compiled arithmetic/control-flow fixture");
    }
    if (native.actor().variables[0] != 48 || native.actor().variables[1] != 2 ||
        native.actor().variables[2] != 3 || native.actor().variables[3] != 2 ||
        native.actor().variables[4] != 256 || native.actor().variables[5] != 256 ||
        native.tasks()[0].cursor != fixture.labels.at("end"))
        throw std::runtime_error("Synthetic authored fixture did not reach intended branches");
    std::cout << "Synthetic authored arithmetic/control-flow fixture: 100 "
                 "raw+compiled native/source ticks match\n";
}
} // namespace

int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("native_action_script_reference pack.ebpak ...");
        for (int arg = 1; arg < argc; ++arg) {
            const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
            const auto data = eb::native::import_action_scripts(assets.image, assets.version);
            const std::array roots{assets.version == eb::GameVersion::JP ? jp.wobble : us.wobble};
            const eb::native::CompiledActionProgram program(data, assets.version, roots);
            synthetic_reference(assets);
            unsigned ticks = 0;
            for (const unsigned script : {23u, 25u, 137u}) {
                unsigned entry = 0, frames = 0;
                const char *name = nullptr;
                if (script == 137) {
                    // Named Sky Runner launch wobble block: ten complete cycles,
                    // then stop at its unported text-engine handoff boundary.
                    entry = assets.version == eb::GameVersion::JP ? jp.wobble : us.wobble;
                    frames = 320;
                    name = "Sky Runner wobble";
                } else {
                    // These original enemy scripts start an independent task
                    // that accelerates/decelerates horizontally every 16 ticks.
                    const auto root = data->entry(script);
                    if (data->byte(root) != 7)
                        throw std::runtime_error("Source action-task fixture changed");
                    entry = (root & 0xff0000) | data->byte(root + 1) | unsigned(data->byte(root + 2)) << 8;
                    frames = 2048;
                    name = script == 23 ? "EVENT_23 acceleration task" : "EVENT_25 acceleration task";
                }
                eb::native::ActionScripts native(data, entry);
                eb::native::ActionScripts compiled(program.scripts(), entry);
                Oracle reference(assets, entry);
                for (unsigned frame = 0; frame < frames; ++frame) {
                    if (native.tick() != eb::native::ActionTickResult::Complete)
                        throw std::runtime_error(std::string(name) + " unexpectedly requires engine work");
                    if (compiled.tick() != eb::native::ActionTickResult::Complete)
                        throw std::runtime_error(std::string(name) +
                                                 " compiled unexpectedly requires engine work");
                    eb::native::integrate_action_motion(native.actor());
                    eb::native::integrate_action_motion(compiled.actor());
                    reference.tick();
                    reference.compare(native, frame, name);
                    reference.compare(compiled, frame, name);
                    ++ticks;
                }
                if (script == 137 && (native.tick() != eb::native::ActionTickResult::NeedsEngine ||
                                      native.request()->kind != eb::native::ActionRequestKind::CallEngine))
                    throw std::runtime_error("Sky Runner must stop at its unported text-engine handoff");
                if (script == 137 && (compiled.tick() != eb::native::ActionTickResult::NeedsEngine ||
                                      compiled.request()->kind != eb::native::ActionRequestKind::CallEngine))
                    throw std::runtime_error(
                        "Compiled Sky Runner must stop at its unported text-engine handoff");
                std::cout << name << ": " << frames << " raw+compiled native/source logic ticks match\n";
            }
            std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US") << ": " << data->size()
                      << " imported scripts; " << ticks
                      << " authored motion ticks match without native fallback\n";
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
