// Execute real regional dialogue/credits code with small synthetic input data.
// No retail text, font, event script, or scene artwork is required. The linked
// routines remain the oracle; this fixture does not emulate their control flow.
#include "eb/game/runtime/runtime.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_profile.hpp"
#include "runtime_state_audit.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <string_view>
#include <tuple>
#include <utility>
#include <vector>

namespace {
void require(bool value, const char* message) { if (!value) throw std::runtime_error(message); }
auto registers(const eb::MainCpu65816& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer,
        c.direct_page, c.status_register, c.data_bank, c.emulation_mode, c.is_stopped,
        c.is_waiting, c.instruction_count, c.cycle_count);
}
unsigned entry(eb::GameVersion version, std::string_view source, std::string_view jp_source = {}) {
    if (version == eb::GameVersion::JP && !jp_source.empty()) source = jp_source;
    for (const auto& routine : eb::game::runtime::ported_routines(version))
        if (routine.source == source) return routine.first_address;
    throw std::runtime_error("Fixture source is not ported: " + std::string(source));
}

// Verified against original regional linked symbols and include/structs.asm.
// These are fixture layouts, not a new runtime API or guessed US-to-JP shift.
struct Layout {
    unsigned window_head, focus, open_windows, windows, window_size;
    unsigned text_stack, text_states, arguments, argument_counter, event_flags, powers_of_two;
    unsigned credit_position, credit_row, credit_script, credit_wipe, credit_scroll;
    unsigned credit_queue_start, credit_queue_end, credit_buffer, dma_mode_table;
};
Layout layout(eb::GameVersion version) {
    if (version == eb::GameVersion::JP) return {
        .window_head=0x8c22, .focus=0x8c96, .open_windows=0x8c26, .windows=0x89c2, .window_size=76,
        .text_stack=0x9a6c, .text_states=0x995e, .arguments=0x9a6e, .argument_counter=0x9a7e,
        .event_flags=0x9eb3, .powers_of_two=0xc43425,
        .credit_position=0xb6ac, .credit_row=0xb6c0, .credit_script=0xb6b0,
        .credit_wipe=0xb6ae, .credit_scroll=0xb6b4, .credit_queue_start=0xb6be,
        .credit_queue_end=0xb6bc, .credit_buffer=0x8176, .dma_mode_table=0xc08f94};
    return {
        .window_head=0x88e0, .focus=0x8958, .open_windows=0x88e4, .windows=0x8650, .window_size=82,
        .text_stack=0x97b8, .text_states=0x96aa, .arguments=0x97ba, .argument_counter=0x97ca,
        .event_flags=0x9c08, .powers_of_two=0xc4562f,
        .credit_position=0xb4e3, .credit_row=0xb4f7, .credit_script=0xb4e7,
        .credit_wipe=0xb4e5, .credit_scroll=0xb4eb, .credit_queue_start=0xb4f5,
        .credit_queue_end=0xb4f3, .credit_buffer=0x7dfe, .dma_mode_table=0xc08fb0};
}
struct Write {
    std::uint32_t address;
    std::uint8_t value;
    std::uint64_t clock;
    bool operator==(const Write&) const = default;
};
struct Frame {
    std::uint64_t number;
    std::uint64_t clock;
    unsigned width;
    std::vector<std::uint32_t> native, pixels;
    bool operator==(const Frame&) const = default;
};
struct Machine {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    std::unique_ptr<eb::Spc700AudioCpu> audio_cpu;
    std::vector<Write> writes;
    std::vector<Frame> frames;
    std::vector<std::pair<unsigned, std::uint64_t>> audio_clocks;
#ifdef EB_GAMEPLAY_AUDIT
    std::vector<std::tuple<bool, unsigned, unsigned, std::uint64_t>> accesses;
#endif
    static std::vector<std::uint8_t> cartridge(eb::GameVersion version, bool observed) {
        std::vector<std::uint8_t> bytes(0x300000);
        if (!observed) {
            // The native variant cannot use a debug ROM hook: hooks correctly
            // decline admission. Store identical synthetic table data in ROM.
            const auto p = layout(version);
            for (unsigned i = 0; i < 8; ++i) bytes[(p.powers_of_two & 0x3fffff) + i] = 1u << i;
            const auto dma_table = p.dma_mode_table & 0x3fffff;
            bytes[dma_table] = 1; bytes[dma_table + 1] = 0x18; bytes[dma_table + 2] = 0x80;
        }
        return bytes;
    }
    Machine(eb::GameVersion version, eb::MainCpuRuntime runtime, bool observed = true)
        : bus(std::make_unique<eb::SnesBus>(cartridge(version, observed), version)), cpu(*bus) {
        cpu.set_runtime(runtime);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        if (observed)
            cpu.observe_memory_write = [&](auto address, auto value) {
                writes.push_back({address, value, bus->master_clocks()});
            };
        bus->on_presentation_frame = [&](auto pixels, unsigned width, std::uint64_t number) {
            frames.push_back({number, bus->master_clocks(), width, {bus->native_framebuffer.begin(), bus->native_framebuffer.end()},
                {pixels.begin(), pixels.end()}});
        };
#ifdef EB_GAMEPLAY_AUDIT
        if (observed)
            bus->observe_bus_access = [&](bool write, auto address, auto value) {
                accesses.emplace_back(write, address, value, bus->master_clocks());
            };
#endif
        if (!observed) {
            // A real SPC executes its hardware boot loop and enabled timers.
            // Retain each main-to-audio clock slice without observing main-bus
            // accesses. This fixture does not install a DSP or claim PCM proof.
            audio_cpu = std::make_unique<eb::Spc700AudioCpu>(*bus);
            audio_cpu->write_byte(0xfa, 3); audio_cpu->write_byte(0xfb, 5); audio_cpu->write_byte(0xfc, 7);
            audio_cpu->write_byte(0xf1, 0x87);
            const auto advance_audio = bus->advance_audio_master_clocks;
            bus->advance_audio_master_clocks = [this, advance_audio](unsigned clocks) {
                audio_clocks.emplace_back(clocks, bus->master_clocks());
                advance_audio(clocks);
            };
            return;
        }
        // The eight-element mask table is mathematical fixture data.
        const auto power_table = layout(version).powers_of_two & 0x3fffff;
        const auto dma_table = layout(version).dma_mode_table & 0x3fffff;
        bus->debug_read_rom = [power_table, dma_table](unsigned address, std::uint8_t value) {
            // Synthetic copy mode 0: alternate writes to $2118/$2119 and
            // increment VRAM after the high byte, matching the fixture's words.
            constexpr std::array<std::uint8_t, 3> dma_mode{1, 0x18, 0x80};
            if (address >= dma_table && address < dma_table + dma_mode.size()) return dma_mode[address - dma_table];
            return address >= power_table && address < power_table + 8
                ? std::uint8_t(1u << (address - power_table)) : value;
        };
    }
    void word(unsigned address, unsigned value) {
        bus->work_ram.at(address) = value;
        bus->work_ram.at(address + 1) = value >> 8;
    }
    unsigned word(unsigned address) const {
        return bus->work_ram.at(address) | unsigned(bus->work_ram.at(address + 1)) << 8;
    }
    void dword(unsigned address, unsigned value) { word(address, value); word(address + 2, value >> 16); }
    unsigned dword(unsigned address) const { return word(address) | word(address + 2) << 16; }
    void bytes(unsigned address, const std::vector<std::uint8_t>& values) {
        std::copy(values.begin(), values.end(), bus->work_ram.begin() + address);
    }
};
struct Comparison {
    eb::GameVersion version;
    bool native_execution;
    Machine legacy, ported;
    std::uint64_t steps{}, owned_steps{}, writes{};
    std::uint64_t native_batches{}, native_steps{}, compared_audio_slices{};
    std::array<unsigned, 17> admitted_dialogue{};
    std::array<unsigned, 4> admitted_credits{};
    unsigned return_stack{};
    explicit Comparison(eb::GameVersion v, bool native = false)
        : version(v), native_execution(native), legacy(v, eb::MainCpuRuntime::Legacy, !native),
          ported(v, eb::MainCpuRuntime::Ported, !native) {}
    template<class Setup> void configure(Setup setup) { setup(legacy); setup(ported); }
    void controls() {
        require(registers(legacy.cpu) == registers(ported.cpu), "CPU state differs");
        require(legacy.cpu.timing_snapshot() == ported.cpu.timing_snapshot(), "Private CPU timing differs");
        require(eb::RuntimeStateAudit::bus_controls(*legacy.bus) == eb::RuntimeStateAudit::bus_controls(*ported.bus),
            "Private hardware/latch/clock state differs");
        require(legacy.writes == ported.writes, "Ordered/timestamped writes differ");
        writes += legacy.writes.size();
        legacy.writes.clear(); ported.writes.clear();
        if (native_execution) {
            require(legacy.audio_clocks == ported.audio_clocks, "Main-to-audio clock slice order/timestamps differ");
            compared_audio_slices += legacy.audio_clocks.size();
            legacy.audio_clocks.clear(); ported.audio_clocks.clear();
            const auto audio_registers = [](const eb::Spc700AudioCpu& c) {
                return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer,
                    c.status_register, c.instruction_count, c.cycle_count, c.is_stopped, c.is_sleeping);
            };
            require(audio_registers(*legacy.audio_cpu) == audio_registers(*ported.audio_cpu) &&
                    eb::RuntimeStateAudit::audio_controls(*legacy.audio_cpu) ==
                    eb::RuntimeStateAudit::audio_controls(*ported.audio_cpu), "SPC registers, clocks or timer state differ");
        }
#ifdef EB_GAMEPLAY_AUDIT
        require(legacy.accesses == ported.accesses, "Ordered/timestamped CPU/DMA reads/writes differ");
        legacy.accesses.clear(); ported.accesses.clear();
#endif
    }
    void memory() const {
        require(legacy.bus->work_ram == ported.bus->work_ram && legacy.bus->save_ram == ported.bus->save_ram,
            "Script/window/scene RAM differs");
        require(legacy.bus->video_ram == ported.bus->video_ram && legacy.bus->palette_ram == ported.bus->palette_ram &&
            legacy.bus->object_attributes == ported.bus->object_attributes, "Video memory differs");
        require(legacy.bus->main_to_audio_ports == ported.bus->main_to_audio_ports &&
            legacy.bus->audio_to_main_ports == ported.bus->audio_to_main_ports, "Audio mailbox differs");
        require(legacy.bus->native_framebuffer == ported.bus->native_framebuffer && legacy.frames == ported.frames,
            "Frame callback order/pixels differ");
        if (native_execution)
            require(legacy.audio_cpu->audio_ram == ported.audio_cpu->audio_ram &&
                    legacy.audio_cpu->dsp_registers == ported.audio_cpu->dsp_registers, "SPC RAM/register shadow differs");
    }
    template<class Observe> void step(Observe observe) {
        const auto pc = legacy.cpu.program_counter;
        try {
            if (native_execution) {
                const auto before = ported.cpu.native_gameplay_batches();
                const auto consumed = ported.cpu.advance_gameplay(64);
                require(consumed > 0 && consumed <= 64, "Invalid native source-step count");
                const auto batches = ported.cpu.native_gameplay_batches() - before;
                require(batches <= 1 && (consumed == 1 || batches == 1), "Native admission accounting differs");
                for (unsigned i = 0; i < consumed; ++i) {
                    observe();
                    owned_steps += eb::game::runtime::owns_ported_instruction(version, legacy.cpu.program_counter);
                    legacy.cpu.step_instruction();
                }
                steps += consumed;
                if (batches) {
                    ++native_batches; native_steps += consumed;
                    // Independent source checkpoints, not production timing
                    // tables. Seven register bodies then CC1B 2/3 predicates
                    // and the respective four-byte operand skips.
                    const bool jp = version == eb::GameVersion::JP;
                    const unsigned shift = jp ? 0x203 : 0;
                    const std::array<unsigned, 17> starts{
                        0xc10415 + shift, 0xc103e7 + shift, 0xc10470 + shift, 0xc1049c + shift,
                        0xc10405 + shift, 0xc10453 + shift, 0xc10433 + shift,
                        jp ? 0xc17ef4u : 0xc17c7fu, jp ? 0xc17f32u : 0xc17cbdu,
                        jp ? 0xc17f10u : 0xc17c9bu, jp ? 0xc17f4eu : 0xc17cd9u,
                        0xc1032f + shift, 0xc10351 + shift, 0xc10373 + shift,
                        0xc1038b + shift, 0xc103ad + shift, 0xc103cf + shift};
                    const auto site = std::find(starts.begin(), starts.end(), pc);
                    if (site != starts.end()) ++admitted_dialogue[site - starts.begin()];
                    else {
                        const std::array<unsigned, 4> credits_starts{
                            jp ? 0xc4c008u : 0xc4efceu, jp ? 0xc4c028u : 0xc4efeeu,
                            jp ? 0xc4c048u : 0xc4f00eu, jp ? 0xc0ff3eu : 0xc0f89au};
                        const auto credit_site = std::find(credits_starts.begin(), credits_starts.end(), pc);
                        require(credit_site != credits_starts.end(), "Unclassified native dialogue/cutscene checkpoint");
                        ++admitted_credits[credit_site - credits_starts.begin()];
                    }
                }
            } else {
                observe();
                owned_steps += eb::game::runtime::owns_ported_instruction(version, pc);
                legacy.cpu.step_instruction(); ported.cpu.step_instruction();
                ++steps;
            }
            controls();
            if (native_execution || (steps & 255) == 0) memory();
        } catch (const std::exception& error) {
            throw std::runtime_error(std::string(version == eb::GameVersion::JP ? "JP " : "US ") +
                "step=" + std::to_string(steps) + " PC=" + std::to_string(pc) + ": " + error.what());
        }
    }
    unsigned call(unsigned address, unsigned accumulator = 0, bool far = true) {
        const auto trampoline = (address & 0xff0000) | 0xff00;
        return_stack = legacy.cpu.stack_pointer;
        configure([&](Machine& m) {
            m.cpu.accumulator = accumulator;
            m.cpu.program_counter = trampoline;
            // Only the synthetic host call is setup. Every callee instruction
            // and every nested call/return uses MainCpu65816::step_instruction.
            if (far) m.cpu.execute_instruction<0x22>(address, 4);
            else m.cpu.execute_instruction<0x20>(address & 0xffff, 3);
        });
        controls();
        return trampoline + (far ? 4 : 3);
    }
    template<class Observe> void finish(unsigned return_address, Observe observe) {
        const auto start = steps;
        // A regional routine may itself cross $xxFF03/$xxFF04. Require the
        // host call's stack to be restored as well as its return address.
        while (legacy.cpu.program_counter != return_address || legacy.cpu.stack_pointer != return_stack) {
            require(steps - start < 1'000'000, "Routine did not return within fixture limit");
            step(observe);
        }
        memory();
    }
    void finish(unsigned return_address) { finish(return_address, [] {}); }
};
std::uint64_t total_steps{}, total_writes{};
unsigned cases{};
void record(const Comparison& run, const char* name) {
    require(run.owned_steps > 0, "Fixture never executed owned gameplay code");
    total_steps += run.steps; total_writes += run.writes; ++cases;
    std::cout << (run.version == eb::GameVersion::JP ? "JP " : "US ") << name << ": " << run.steps
        << " steps, " << run.owned_steps << " ported, " << run.writes << " writes; exact match\n";
}
void pointer(std::vector<std::uint8_t>& script, unsigned address) {
    for (unsigned shift : {0u, 8u, 16u, 24u}) script.push_back(address >> shift);
}

std::array<unsigned, 17> dialogue_control_flow(eb::GameVersion version, bool native = false, unsigned phase = 0) {
    Comparison run(version, native);
    const auto p = layout(version);
    constexpr unsigned main=0xc000, continuation=0xc040, taken=0xc080, sub=0xc100, final=0xc180, trap=0xc200;
    // CC04/05 set/clear, CC06 event-flag branch, CC08 call, CC02 return,
    // CC07 flag->working memory, CC1B conditional jump, CC18 window focus,
    // CC0E/0F set/increment per-window secondary memory.
    std::vector<std::uint8_t> first{4,7,0, 6,8,0}; pointer(first, 0x7e0000|trap);
    first.insert(first.end(), {6,7,0}); pointer(first, 0x7e0000|continuation);
    first.insert(first.end(), {4,10,0,2});
    std::vector<std::uint8_t> second{8}; pointer(second, 0x7e0000|sub);
    second.insert(second.end(), {7,7,0, 0x1b,3}); pointer(second, 0x7e0000|taken);
    second.insert(second.end(), {4,10,0,2});
    std::vector<std::uint8_t> third{0x1b,2}; pointer(third, 0x7e0000|trap);
    third.insert(third.end(), {5,7,0, 7,7,0});
    if (native) {
        third.insert(third.end(), {0x1b,3}); pointer(third, 0x7e0000|trap);
    }
    third.insert(third.end(), {0x1b,2}); pointer(third, 0x7e0000|final);
    third.insert(third.end(), {4,10,0,2});
    // Save text attributes before changing focus. The nested CC02 restores
    // focus through UNKNOWN_C1869D/C20ABC rather than a fixture intervention.
    const std::vector<std::uint8_t> nested{0x18,2, 0x18,3,1, 0x0e,42, 0x0f, 2};
    const std::vector<std::uint8_t> last = native
        ? std::vector<std::uint8_t>{0x0e,6, 0x0f, 0x0d,1, 0x1b,4, 0x1b,0,
            0x0e,0x81, 0x1b,5, 0x1b,1, 0x1b,6, 0x0d,0, 0x0e,6, 0x0f, 4,9,0, 2}
        : std::vector<std::uint8_t>{0x0e,6, 0x0f, 4,9,0, 2};
    run.configure([&](Machine& m) {
        if (native) {
            require(!m.cpu.observe_memory_write && !m.bus->debug_read_rom &&
                    !m.bus->debug_read_wram && !m.bus->debug_write_wram,
                    "Native dialogue variant has an admission-blocking observer");
#ifdef EB_GAMEPLAY_AUDIT
            require(!m.bus->observe_bus_access, "Native dialogue variant has a bus observer");
#endif
            m.cpu.set_gameplay_timing(phase & 1);
            // A few source-independent start phases exercise deadline declines
            // and admissions. Start late enough to cross a real frame boundary
            // during DISPLAY_TEXT, with its live APU clock callback connected.
            m.bus->advance_cpu_cycles(58'000 + phase * 7);
        }
        m.word(p.window_head, 0); m.word(p.focus, 0);
        m.word(p.open_windows, 0); m.word(p.open_windows + 2, 1);
        m.word(p.windows + 14, 3); m.word(p.windows + 16, 5);
        m.word(p.windows + 19, 0x1234); m.word(p.windows + 21, 2);
        m.bytes(main, first); m.bytes(continuation, second); m.bytes(taken, third);
        m.bytes(sub, nested); m.bytes(final, last); m.bytes(trap, {4,10,0,2});
        m.dword(0x1e0e, 0x7e0000|main); // DISPLAY_TEXT's caller-frame pointer parameter.
    });
    const auto display = entry(version, "src/text/display_text.asm", "src/text/display_text-jp.asm");
    unsigned depth = 0, calls = 0;
    const auto return_address = run.call(display);
    run.finish(return_address, [&] {
        calls += run.legacy.cpu.program_counter == display;
        depth = std::max(depth, run.legacy.word(p.text_stack));
    });
    require(calls == 2 && depth == 2 && run.ported.word(p.text_stack) == 0,
        "Nested DISPLAY_TEXT allocation/return stack changed");
    require(run.ported.dword(0x1e06) == (0x7e0000|final) + last.size(), "Dialogue returned the wrong script continuation");
    require(run.ported.dword(p.text_states + 27) == (0x7e0000|final) + last.size() &&
        run.ported.dword(p.text_states + 54) == (0x7e0000|sub) + nested.size(), "Saved script cursors changed");
    require(run.ported.word(p.focus) == 0 && run.ported.word(p.windows + 31) == 7 &&
        run.ported.word(p.windows + p.window_size + 31) == 43, "Window focus/secondary state was not preserved");
    require(run.ported.word(p.windows + 14) == 3 && run.ported.word(p.windows + 16) == 5 &&
        run.ported.word(p.windows + 19) == 0x1234 && run.ported.word(p.windows + 21) == 2,
        "Nested text attribute restore changed");
    require((run.ported.bus->work_ram[p.event_flags] & 0xc0) == 0 &&
        (run.ported.bus->work_ram[p.event_flags + 1] & 3) == 1,
        "Taken/untaken dialogue branches or flag writes changed");
    require(run.ported.word(p.argument_counter) == 0 && run.ported.cpu.direct_page == 0x1e00 &&
        run.ported.cpu.stack_pointer == 0x1fff, "Dialogue left its continuation stack or argument collection active");
    if (native) {
        require(run.native_batches > 0 && run.native_steps > run.native_batches,
                "Native dialogue fixture only exercised fallback source instructions");
        require(run.compared_audio_slices > 0 && run.ported.audio_cpu->instruction_count > 0,
                "Native dialogue did not exercise the connected APU");
        require(!run.ported.frames.empty(), "Native dialogue did not cross a presentation frame boundary");
        require(run.ported.dword(p.windows + 23) == 7 && run.ported.dword(p.windows + 27) == 7 &&
                run.ported.dword(p.windows + 33) == 7 && run.ported.dword(p.windows + 37) == 0 &&
                run.ported.word(p.windows + 41) == 7,
                "Composed argument/swap/storage/backup commands produced the wrong window registers");
        std::cout << (version == eb::GameVersion::JP ? "JP " : "US ") << "native dialogue phase " << phase
            << ": " << run.native_batches << " batches, " << run.native_steps << " native source steps, "
            << run.compared_audio_slices << " audio clock slices, " << run.ported.frames.size()
            << " frame callbacks; exact checkpoint state\n";
        record(run, "native dialogue nested stream/window restore");
    } else {
        record(run, "dialogue control flow/window restore");
    }
    return run.admitted_dialogue;
}

void dialogue_wait(eb::GameVersion version, bool button) {
    Comparison run(version);
    run.configure([&](Machine& m) {
        // Auto-joypad polling is hardware-driven; NMI remains disabled. The
        // source WAIT routine polls vblank and then reads JOY1L/H through the bus.
        m.bus->write_byte(0x4200, 1);
        m.bus->set_buttons(button ? 0x8000 : 0);
    });
    const auto wait = eb::source_profile(version).gameplay_timing.wait_for_next_frame;
    unsigned frame_waits = 0;
    const auto ret = run.call(entry(version, "src/text/skippable_pause.asm"), 3, false);
    run.finish(ret, [&] { frame_waits += run.legacy.cpu.program_counter == wait; });
    require(run.ported.cpu.accumulator == (button ? 0xffff : 0), "Skippable pause completion reason changed");
    require(frame_waits == (button ? 1u : 3u), "Pause skipped or repeated a hardware frame wait");
    // WAIT returns during vblank. Frame completion/presentation occurs later,
    // so the first input can be consumed before any full-frame callback.
    require(run.ported.bus->completed_frames + 1 == frame_waits &&
        run.ported.frames.size() == run.ported.bus->completed_frames &&
        run.ported.bus->master_clocks() >= 225u * 1364u,
        "Pause did not cross the expected hardware/presentation frame boundaries");
    if (button) require(run.ported.word(0x6d) & 0x8000, "Physical joypad press did not reach PAD_PRESS");
    record(run, button ? "dialogue pause/input skip" : "dialogue pause/timeout");
}

std::array<unsigned, 4> credits_sequence(eb::GameVersion version, bool native = false, unsigned phase = 0) {
    Comparison run(version, native);
    const auto p = layout(version);
    constexpr unsigned script = 0xc400;
    // A zero-row spacer, two arbitrary tile IDs, then end. The source advances
    // its cursor once after every command, including past the end marker, so
    // reserve that final skipped byte. No names, glyph art or palette is needed.
    const std::vector<std::uint8_t> commands{3,0, 1,5,6,0, 0xff,0};
    run.configure([&](Machine& m) {
        if (native) {
            m.cpu.set_gameplay_timing(phase & 1);
            m.bus->advance_cpu_cycles(58'000 + phase * 7);
        }
        m.bytes(script, commands);
        m.dword(p.credit_script, 0x7e0000|script);
        m.dword(p.credit_scroll, 0x00010000);
        m.word(0x3b, 1); // BG3_Y_POS agrees with the fixed-point scroll state.
        m.word(p.credit_wipe, 0xffff); // Keep the tested line until inspected.
        // A blank screen permits COPY_TO_VRAM's synchronous hardware path.
        // The credit queue and DMA registers themselves still execute normally.
        m.bus->work_ram[0x0d] = 0x80; // INIDISP_MIRROR.
        m.bus->write_byte(0x2100, 0x80);
    });
    const auto scroll = entry(version, "src/ending/credits_scroll_frame.asm", "src/ending/credits_scroll_frame-jp.asm");
    const auto upload = entry(version, "src/ending/process_credits_dma_queue.asm");
    for (unsigned frame = 0; frame < 40; ++frame) {
        run.finish(run.call(scroll, 0, false));
        run.finish(run.call(upload));
    }
    if (run.ported.word(p.credit_position) != 0xffff ||
        run.ported.dword(p.credit_script) != (0x7e0000|script) + commands.size())
        throw std::runtime_error("Credits control stream did not finish: position=" +
            std::to_string(run.ported.word(p.credit_position)) + " cursor=" +
            std::to_string(run.ported.dword(p.credit_script)) + " row=" +
            std::to_string(run.ported.word(p.credit_row)) + " scroll=" +
            std::to_string(run.ported.dword(p.credit_scroll)));
    require(run.ported.word(p.credit_row) == 6 && run.ported.word(p.credit_buffer + 128) == 0x2005 &&
        run.ported.word(p.credit_buffer + 130) == 0x2006, "Credits spacer/line tile construction changed");
    require(run.ported.word(p.credit_queue_start) == 1 && run.ported.word(p.credit_queue_end) == 1,
        "Credits DMA queue omitted or repeated the line upload");
    require(run.ported.word(0x3b) == 11 && run.ported.dword(p.credit_scroll) == 0x000b0000,
        "Credits fractional scroll cadence changed");
    // At Y=1 the two-character row is centered at VRAM word $6faf.
    require(run.ported.bus->video_ram[0xdf5e] == 5 && run.ported.bus->video_ram[0xdf5f] == 0x20 &&
        run.ported.bus->video_ram[0xdf60] == 6 && run.ported.bus->video_ram[0xdf61] == 0x20,
        "Credits line did not reach hardware VRAM in order");
    if (native) {
        // Some phases legitimately leave every chunk too close to an event.
        // The phase union below must admit each of the four exact checkpoints.
        require(run.compared_audio_slices > 0,
                "Native credits did not exercise connected APU clocks");
        require(!run.ported.frames.empty(), "Native credits did not cross a frame boundary");
        std::cout << (version == eb::GameVersion::JP ? "JP " : "US ") << "native credits phase " << phase
            << ": " << run.native_batches << " batches, " << run.native_steps << " native source steps, "
            << run.compared_audio_slices << " audio clock slices, " << run.ported.frames.size()
            << " frame callbacks; exact checkpoint state\n";
    }
    record(run, native ? "native credits control stream/scroll/DMA" : "credits control stream/scroll/DMA");
    return run.admitted_credits;
}
} // namespace

int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            dialogue_control_flow(version);
            std::array<unsigned, 17> native_coverage{};
            // Cover more than one raster-line phase: the longer operand-skip
            // body can legitimately decline at several consecutive starts.
            // Stop once every source checkpoint has really admitted, while
            // retaining at least four runs and both configured timing policies.
            for (unsigned phase = 0; phase < 36; ++phase) {
                const auto admitted = dialogue_control_flow(version, true, phase);
                for (unsigned i = 0; i < native_coverage.size(); ++i) native_coverage[i] += admitted[i];
                if (phase >= 3 && std::all_of(native_coverage.begin(), native_coverage.end(),
                                            [](unsigned count) { return count != 0; })) break;
            }
            for (unsigned i = 0; i < native_coverage.size(); ++i)
                if (!native_coverage[i])
                    throw std::runtime_error(std::string(version == eb::GameVersion::JP ? "JP " : "US ") +
                        "native dialogue checkpoint never admitted: " + std::to_string(i));
            dialogue_wait(version, false);
            dialogue_wait(version, true);
            credits_sequence(version);
            std::array<unsigned, 4> credits_coverage{};
            for (unsigned phase = 0; phase < 36; ++phase) {
                const auto admitted = credits_sequence(version, true, phase);
                for (unsigned i = 0; i < credits_coverage.size(); ++i) credits_coverage[i] += admitted[i];
                if (phase >= 3 && std::all_of(credits_coverage.begin(), credits_coverage.end(),
                                            [](unsigned count) { return count != 0; })) break;
            }
            for (unsigned i = 0; i < credits_coverage.size(); ++i)
                if (!credits_coverage[i])
                    throw std::runtime_error(std::string(version == eb::GameVersion::JP ? "JP " : "US ") +
                        "native credits checkpoint never admitted: " + std::to_string(i));
        }
        std::cout << "PASS " << cases << " dialogue/cutscene fixtures; " << total_steps
            << " source steps; observed variants matched " << total_writes
            << " ordered writes, native variants matched full checkpoint state\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
