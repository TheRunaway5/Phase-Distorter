// Independent frozen-source proof for per-window storage transfers.
// Provenance: ebsrc src/text/transfer_active_mem_storage.asm and
// transfer_storage_mem_active.asm, lines 8..17/18..27/28..33; field layouts in
// include/structs.asm. Regional starts/ends are independently resolved from
// linked source sites. No production native timing tables or domain layout
// helpers are used as the oracle. Whole source routines still use real MULT168.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include "runtime_state_audit.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

namespace {
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
enum class Kind { StoreWorking, StoreArgument, StoreSecondary, RestoreWorking, RestoreArgument, RestoreSecondary };
constexpr std::array kinds{Kind::StoreWorking, Kind::StoreArgument, Kind::StoreSecondary,
    Kind::RestoreWorking, Kind::RestoreArgument, Kind::RestoreSecondary};
constexpr std::array<std::uint32_t, 9> values{
    0, 1, 0x7fff, 0x8000, 0xffff, 0x10000, 0x80000000, 0xffffffff, 0xa5f03c69};
bool secondary(Kind kind) { return kind == Kind::StoreSecondary || kind == Kind::RestoreSecondary; }
bool first(Kind kind) { return kind == Kind::StoreWorking || kind == Kind::RestoreWorking; }
bool store(Kind kind) { return unsigned(kind) < 3; }
unsigned active_offset(Kind kind) { return first(kind) ? 23 : secondary(kind) ? 31 : 27; }
unsigned stored_offset(Kind kind) { return first(kind) ? 33 : secondary(kind) ? 41 : 37; }
unsigned source_offset(Kind kind) { return store(kind) ? active_offset(kind) : stored_offset(kind); }
unsigned destination_offset(Kind kind) { return store(kind) ? stored_offset(kind) : active_offset(kind); }
const char* name(Kind kind) {
    constexpr std::array names{"store working", "store argument", "store secondary",
        "restore working", "restore argument", "restore secondary"};
    return names[unsigned(kind)];
}
struct Scenario {
    eb::GameVersion version = eb::GameVersion::US;
    Kind kind = Kind::StoreWorking;
    bool fast = false, enhanced = false;
    unsigned direct_page = 0x1d00, window = 0x8650, stack = 0x1ffa;
    std::uint32_t value = 0x89abcdef;
    std::uint8_t flags = eb::MainCpu65816::Carry | eb::MainCpu65816::Overflow | eb::MainCpu65816::Zero;
};
unsigned start(const Scenario& s) {
    constexpr std::array addresses{0xc1032fu, 0xc10351u, 0xc10373u, 0xc1038bu, 0xc103adu, 0xc103cfu};
    return addresses[unsigned(s.kind)] + (s.version == eb::GameVersion::JP ? 0x203 : 0);
}
unsigned finish(const Scenario& s) {
    constexpr std::array addresses{0xc10351u, 0xc10373u, 0xc1037eu, 0xc103adu, 0xc103cfu, 0xc103dau};
    return addresses[unsigned(s.kind)] + (s.version == eb::GameVersion::JP ? 0x203 : 0);
}
// Source opcode counts: two 16-instruction DWORD copies and a six-instruction
// WORD tail. Counts are independent of the production NativeTimingSlice arrays.
unsigned step_count(const Scenario& s) { return secondary(s.kind) ? 6 : 16; }
unsigned cycles(const Scenario& s) {
    return (secondary(s.kind) ? 27 : 62) + (s.direct_page & 255 ? (secondary(s.kind) ? 1 : 6) : 0);
}
unsigned raw_clocks(const Scenario& s) {
    const unsigned fetch = secondary(s.kind) ? 11 : 34;
    const unsigned wram = secondary(s.kind) ? 10 : 20;
    return cycles(s) * 6 + (s.fast ? 0 : fetch * 2) + wram * 2;
}
auto cpu_state(const eb::MainCpu65816& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer,
        c.direct_page, c.status_register, c.data_bank, c.emulation_mode, c.is_stopped, c.is_waiting,
        c.instruction_count, c.cycle_count);
}
auto audio_state(const eb::Spc700AudioCpu& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer,
        c.status_register, c.is_stopped, c.is_sleeping, c.instruction_count, c.cycle_count);
}
struct Frame {
    unsigned width;
    std::uint64_t number, clock;
    std::vector<std::uint32_t> pixels;
    bool operator==(const Frame&) const = default;
};
struct Machine {
    eb::SnesBus bus;
    eb::Spc700AudioCpu audio;
    eb::MainCpu65816 cpu;
    std::vector<std::pair<unsigned, std::uint64_t>> audio_slices;
    std::vector<Frame> frames;
    std::vector<std::pair<unsigned, unsigned>> writes;
    std::vector<std::tuple<bool, unsigned, unsigned>> accesses;
    Machine(const Scenario& s, eb::MainCpuRuntime runtime)
        : bus(std::span(eb::rom_data(s.version), eb::rom_size(s.version)), s.version), audio(bus), cpu(bus) {
        cpu.set_runtime(runtime);
        cpu.set_gameplay_timing(s.enhanced);
        cpu.emulation_mode = false; cpu.data_bank = 0x7e; cpu.stack_pointer = s.stack;
        bus.work_ram.fill(0xa7);
        const auto& queue = eb::source_profile(s.version).dma_queue;
        bus.work_ram[queue.write_index] = bus.work_ram[queue.last_completed_index] = 0;
        // Deliberately choose a different focus/slot from the captured record.
        // Only the original pre-checkpoint lookup owns focus resolution.
        const bool jp = s.version == eb::GameVersion::JP;
        word(jp ? 0x8c22 : 0x88e0, 0); word(jp ? 0x8c96 : 0x8958, 1);
        word((jp ? 0x8c26 : 0x88e4) + 2, 4);
        checkpoint(s);
        bus.write_byte(0x420d, s.fast);
        audio.write_byte(0xfa, 3); audio.write_byte(0xfb, 5); audio.write_byte(0xfc, 7);
        audio.write_byte(0xf1, 0x87);
        const auto advance_audio = bus.advance_audio_master_clocks;
        bus.advance_audio_master_clocks = [this, advance_audio](unsigned clocks) {
            audio_slices.emplace_back(clocks, bus.master_clocks());
            advance_audio(clocks);
        };
        bus.on_presentation_frame = [this](auto pixels, unsigned width, std::uint64_t number) {
            frames.push_back({width, number, bus.master_clocks(), {pixels.begin(), pixels.end()}});
        };
        // Pass the first refresh; $244 leaves 532 clocks before the rendering
        // deadline, enough even for an unaligned slow-ROM 32-bit transfer.
        bus.advance_master_clocks_with_refresh(540);
        require(bus.scanline_clock() == 580, "Initial refresh position changed");
    }
    void word(unsigned offset, std::uint32_t value) {
        bus.work_ram.at(offset) = std::uint8_t(value);
        bus.work_ram.at(offset + 1) = std::uint8_t(value >> 8);
    }
    void long_value(unsigned offset, std::uint32_t value) { word(offset, value); word(offset + 2, value >> 16); }
    std::uint32_t value_at(unsigned offset, unsigned size) const {
        std::uint32_t value = 0;
        for (unsigned i = 0; i < size; ++i) value |= std::uint32_t(bus.work_ram.at(offset + i)) << (8 * i);
        return value;
    }
    void checkpoint(const Scenario& s) {
        cpu.program_counter = start(s); cpu.direct_page = s.direct_page;
        // Only the first chunk receives the captured address in A. The other
        // chunks must read the saved address even when A contains another value.
        cpu.accumulator = first(s.kind) ? s.window : 0xdead;
        cpu.x_index = 0x2468; cpu.y_index = 0xace0; cpu.status_register = s.flags;
        long_value(s.direct_page + 6, 0x10203040);
        word(s.direct_page + 14, first(s.kind) ? 0x4444 : s.window);
        for (unsigned offset : {23u, 27u, 33u, 37u}) long_value(s.window + offset, 0x31415926 ^ offset);
        word(s.window + 31, 0xbadd); word(s.window + 41, 0x1234);
        if (secondary(s.kind)) word(s.window + source_offset(s.kind), s.value);
        else long_value(s.window + source_offset(s.kind), s.value);
    }
    void clock_position(unsigned target) {
        for (unsigned i = 0; i < 3000 && bus.scanline_clock() != target; ++i)
            bus.advance_master_clocks_with_refresh(1);
        require(bus.scanline_clock() == target, "Could not position hardware clock");
    }
    void prime_budget(const Scenario& s, unsigned target) {
        cpu.program_counter = eb::source_profile(s.version).gameplay_timing.entity_update_call;
        cpu.step_instruction();
        require(cpu.timing_snapshot().entity_update_active, "Entity timing scope was not entered");
        for (unsigned i = 0; cpu.timing_snapshot().entity_update_master_clocks < target; ++i) {
            require(i < 5000, "Could not prime enhanced timing budget");
            cpu.program_counter = s.version == eb::GameVersion::JP ? 0xc09445 : 0xc09466;
            cpu.step_instruction();
        }
        checkpoint(s); // Retain the call's hardware stack and timing scope.
        clock_position(580);
    }
};
unsigned comparisons{}, admissions{}, declines{}, whole_calls{};
std::uint64_t retired_steps{}, compared_audio_slices{};
struct Pair {
    Scenario scenario;
    std::unique_ptr<Machine> legacy, native;
    explicit Pair(Scenario s) : scenario(s),
        legacy(std::make_unique<Machine>(s, eb::MainCpuRuntime::Legacy)),
        native(std::make_unique<Machine>(s, eb::MainCpuRuntime::Ported)) {}
    template<class Setup> void configure(Setup setup) { setup(*legacy); setup(*native); }
    void compare() const {
        const auto& a = *legacy; const auto& b = *native;
        require(cpu_state(a.cpu) == cpu_state(b.cpu), "CPU architectural state differs");
        require(a.cpu.timing_snapshot() == b.cpu.timing_snapshot(), "Private CPU timing state differs");
        require(eb::RuntimeStateAudit::bus_controls(a.bus) == eb::RuntimeStateAudit::bus_controls(b.bus),
                "Hardware clocks/registers/latches/open bus differ");
        require(a.bus.work_ram == b.bus.work_ram && a.bus.save_ram == b.bus.save_ram, "WRAM/SRAM differs");
        require(a.bus.video_ram == b.bus.video_ram && a.bus.palette_ram == b.bus.palette_ram &&
                a.bus.object_attributes == b.bus.object_attributes, "Video memory differs");
        require(a.bus.audio_to_main_ports == b.bus.audio_to_main_ports &&
                a.bus.main_to_audio_ports == b.bus.main_to_audio_ports, "Audio mailbox state differs");
        require(a.bus.completed_frames == b.bus.completed_frames && a.bus.native_framebuffer == b.bus.native_framebuffer &&
                a.frames == b.frames, "Frame callbacks/pixels differ");
        require(audio_state(a.audio) == audio_state(b.audio) && a.audio.audio_ram == b.audio.audio_ram &&
                a.audio.dsp_registers == b.audio.dsp_registers &&
                eb::RuntimeStateAudit::audio_controls(a.audio) == eb::RuntimeStateAudit::audio_controls(b.audio) &&
                a.audio_slices == b.audio_slices, "SPC state or ordered audio clock callbacks differ");
        require(a.writes == b.writes && a.accesses == b.accesses, "Fallback observer effects differ");
    }
    void advance(unsigned maximum, bool admitted) {
        compare();
        const auto before_batches = native->cpu.native_gameplay_batches();
        const auto before_cycles = native->cpu.cycle_count, before_instructions = native->cpu.instruction_count;
        const auto before_clocks = native->bus.master_clocks(), before_audio = native->audio_slices.size();
        const auto before_timing = native->cpu.timing_snapshot();
        const auto returned = native->cpu.advance_gameplay(maximum);
        require(returned == (admitted ? step_count(scenario) : (maximum ? 1u : 0u)) && returned <= maximum,
                "Wrong source step count or quota exceeded");
        for (unsigned i = 0; i < returned; ++i) legacy->cpu.step_instruction();
        compare();
        require(native->cpu.native_gameplay_batches() == before_batches + unsigned(admitted), "Wrong native admission count");
        require(legacy->cpu.native_gameplay_batches() == 0, "Frozen oracle admitted a native chunk");
        if (admitted) {
            require(native->cpu.program_counter == finish(scenario), "Wrong source continuation");
            require(native->cpu.cycle_count - before_cycles == cycles(scenario) &&
                    native->cpu.instruction_count - before_instructions == step_count(scenario),
                    "Counters differ from independent source cost");
            const auto& q = eb::source_profile(scenario.version).dma_queue;
            const bool scaled = before_timing.entity_update_active && before_timing.entity_update_master_clocks >= 140000 &&
                native->bus.work_ram[q.write_index] == native->bus.work_ram[q.last_completed_index];
            const auto clocks = scaled ? (raw_clocks(scenario) + before_timing.extra_budget_clock_remainder) / 8
                                       : raw_clocks(scenario);
            require(native->bus.master_clocks() - before_clocks == clocks, "Hardware time differs from source cost");
            const auto copied = secondary(scenario.kind) ? std::uint16_t(scenario.value) : scenario.value;
            require(native->value_at(scenario.window + destination_offset(scenario.kind),
                        secondary(scenario.kind) ? 2 : 4) == copied, "Wrong destination field or width");
            require(native->value_at(scenario.direct_page + 14, 2) == scenario.window,
                    "Captured window local was not retained");
            if (secondary(scenario.kind)) {
                const auto stack = native->cpu.stack_pointer;
                require(native->value_at(stack - 1, 2) == scenario.window, "PHA/PLX stack bytes were omitted");
                require((native->cpu.status_register & (eb::MainCpu65816::Negative | eb::MainCpu65816::Zero)) ==
                        (scenario.window & 0x8000 ? eb::MainCpu65816::Negative : 0),
                        "Secondary transfer flags describe the value instead of the PLX window address");
                require((native->cpu.status_register & (eb::MainCpu65816::Carry | eb::MainCpu65816::Overflow)) ==
                        (scenario.flags & (eb::MainCpu65816::Carry | eb::MainCpu65816::Overflow)),
                        "Secondary transfer modified carry/overflow");
            } else {
                require(native->value_at(scenario.direct_page + 6, 4) == scenario.value,
                        "32-bit transfer did not retain its virtual-register scratch");
            }
        }
        ++comparisons; admitted ? ++admissions : ++declines;
        retired_steps += returned;
        compared_audio_slices += native->audio_slices.size() - before_audio;
    }
};
template<class Work> void checked(const Scenario& s, const char* label, Work work) {
    try { work(); }
    catch (const std::exception& error) {
        throw std::runtime_error(std::string(s.version == eb::GameVersion::JP ? "JP " : "US ") +
            name(s.kind) + " " + label + " D=" + std::to_string(s.direct_page) +
            " window=" + std::to_string(s.window) + " value=" + std::to_string(s.value) +
            " fast=" + std::to_string(s.fast) + ": " + error.what());
    }
}

void admission_matrix() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
    for (auto kind : kinds) for (bool fast : {false, true})
    for (unsigned d : {0x1d00u, 0x1d13u}) for (auto value : values) {
        Scenario s{.version=version, .kind=kind, .fast=fast, .direct_page=d,
            .window=version == eb::GameVersion::JP ? 0x8976u : 0x85feu, .value=value};
        s.flags = value & 1 ? eb::MainCpu65816::Carry | eb::MainCpu65816::Overflow
                            : eb::MainCpu65816::Negative | eb::MainCpu65816::Zero;
        checked(s, "admission", [&] { Pair pair(s); pair.advance(step_count(s), true); });
    }
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) for (auto kind : kinds)
    for (unsigned d : {0x1c00u, 0x1ef0u})
    for (unsigned window : {0x2000u, 0x7fe0u, 0x7ff0u, version == eb::GameVersion::JP ? 0xffb4u : 0xffaeu}) {
        Scenario s{.version=version, .kind=kind, .direct_page=d, .window=window};
        checked(s, "frame/address boundary", [&] { Pair pair(s); pair.advance(64, true); });
    }
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
    for (auto kind : {Kind::StoreSecondary, Kind::RestoreSecondary}) for (unsigned stack : {0x1f01u, 0x1fffu}) {
        Scenario s{.version=version, .kind=kind, .stack=stack};
        checked(s, "hardware stack boundary", [&] { Pair pair(s); pair.advance(64, true); });
    }
}
template<class Setup> void rejection(Scenario s, const char* label, Setup setup, unsigned maximum = 64) {
    checked(s, label, [&] { Pair pair(s); pair.configure(setup); pair.advance(maximum, false); });
}
void rejection_matrix(eb::GameVersion version) {
    for (auto kind : kinds) {
        Scenario s{.version=version, .kind=kind};
        rejection(s, "zero quota", [](Machine&) {}, 0);
        rejection(s, "short quota", [](Machine&) {}, step_count(s) - 1);
        rejection(s, "decimal", [](Machine& m) { m.cpu.status_register |= eb::MainCpu65816::Decimal; });
        rejection(s, "noncanonical C frame below", [](Machine& m) { m.cpu.direct_page = 0x1bff; });
        rejection(s, "noncanonical C frame above", [](Machine& m) { m.cpu.direct_page = 0x1ef1; });
        rejection(s, "window aliases compiler scratch", [kind](Machine& m) {
            if (first(kind)) m.cpu.accumulator = m.cpu.direct_page;
            else m.word(m.cpu.direct_page + 14, m.cpu.direct_page);
        });
        rejection(s, "partial window at bank edge", [=](Machine& m) {
            const auto invalid = version == eb::GameVersion::JP ? 0xffb5 : 0xffaf;
            if (first(kind)) m.cpu.accumulator = invalid;
            else m.word(m.cpu.direct_page + 14, invalid);
        });
        rejection(s, "CPU write observer", [](Machine& m) {
            m.cpu.observe_memory_write = [&m](auto address, auto value) { m.writes.emplace_back(address, value); };
        });
        rejection(s, "ROM observer", [](Machine& m) {
            m.bus.debug_read_rom = [&m](auto address, auto value) {
                m.accesses.emplace_back(false, address, value); return value;
            };
        });
#ifdef EB_GAMEPLAY_AUDIT
        rejection(s, "bus observer", [](Machine& m) {
            m.bus.observe_bus_access = [&m](bool write, auto address, auto value) {
                m.accesses.emplace_back(write, address, value);
            };
        });
#endif
        rejection(s, "hardware math pending", [](Machine& m) {
            m.bus.write_byte(0x4202, 3); m.bus.write_byte(0x4203, 7);
        });
        for (int margin : {-1, 0, 1}) checked(s, "exclusive deadline", [&] {
            Pair pair(s);
            pair.configure([&](Machine& m) { m.clock_position(1112 - raw_clocks(s) - margin); });
            pair.advance(64, margin > 0);
        });
        if (secondary(kind)) {
            rejection(s, "hardware stack aliases C arena", [](Machine& m) { m.cpu.stack_pointer = 0x1f00; });
            rejection(s, "hardware stack reaches I/O", [](Machine& m) { m.cpu.stack_pointer = 0x2000; });
        }
    }
    Scenario s{.version=version};
    rejection(s, "8-bit accumulator", [](Machine& m) { m.cpu.status_register |= eb::MainCpu65816::Accumulator8Bit; });
    rejection(s, "8-bit index", [](Machine& m) { m.cpu.status_register |= eb::MainCpu65816::Index8Bit; });
    rejection(s, "wrong bank", [](Machine& m) { m.cpu.data_bank = 0; });
    rejection(s, "WRAM read hook", [](Machine& m) {
        m.bus.debug_read_wram = [](unsigned, std::uint8_t value) { return std::uint8_t(value ^ 1); };
    });
    rejection(s, "WRAM write hook", [](Machine& m) {
        m.bus.debug_write_wram = [](unsigned, std::uint8_t value) { return std::uint8_t(value ^ 1); };
    });
    rejection(s, "pending memory wait debt", [](Machine& m) { (void)m.cpu.read_byte(0x7e3000); });
    rejection(s, "pending DMA debt", [](Machine& m) {
        m.bus.write_byte(0x4300, 0); m.bus.write_byte(0x4301, 0);
        m.bus.write_byte(0x4302, 0); m.bus.write_byte(0x4303, 0x70); m.bus.write_byte(0x4304, 0x7e);
        m.bus.write_byte(0x4305, 1); m.bus.write_byte(0x4306, 0); m.bus.write_byte(0x420b, 1);
    });
}

void enhanced_timing(eb::GameVersion version) {
    for (auto kind : kinds) for (unsigned target : {1000u, 139900u, 140000u}) {
        Scenario s{.version=version, .kind=kind, .enhanced=true, .direct_page=0x1d13};
        checked(s, "enhanced threshold", [&] {
            Pair pair(s); pair.configure([&](Machine& m) { m.prime_budget(s, target); });
            const auto before = pair.native->cpu.timing_snapshot();
            const bool crosses = before.entity_update_master_clocks < 140000 &&
                before.entity_update_master_clocks + raw_clocks(s) >= 140000;
            pair.advance(64, !crosses);
        });
    }
    Scenario s{.version=version, .kind=Kind::StoreArgument, .enhanced=true, .direct_page=0x1d13};
    checked(s, "enhanced carry across transfers", [&] {
        Pair pair(s); pair.configure([&](Machine& m) { m.prime_budget(s, 140000); });
        for (unsigned i = 0; i < 3; ++i) {
            pair.configure([&](Machine& m) { m.checkpoint(s); });
            pair.advance(64, true);
        }
    });
}

void complete_helpers(eb::GameVersion version) {
    Scenario s{.version=version, .fast=true};
    checked(s, "whole store/mutate/restore source sequence", [&] {
        Pair pair(s);
        const bool jp = version == eb::GameVersion::JP;
        const unsigned windows = jp ? 0x89c2 : 0x8650, window_size = jp ? 76 : 82;
        const auto selected = windows + window_size * 4;
        pair.configure([&](Machine& m) {
            m.long_value(selected + 23, 0x8000ffff); m.long_value(selected + 27, 0xfedc0123);
            m.word(selected + 31, 0x80ff);
        });
        const auto execute = [&](unsigned entry) {
            pair.configure([&](Machine& m) {
                m.cpu.program_counter = 0xc1ff00; m.cpu.direct_page = 0x1e00;
                m.cpu.stack_pointer = 0x1fff; m.cpu.status_register = 0;
                m.cpu.execute_instruction<0x20>(entry & 0xffff, 3);
            });
            unsigned count = 0;
            while (pair.native->cpu.program_counter != 0xc1ff03 || pair.native->cpu.stack_pointer != 0x1fff) {
                require(++count < 2000, "Whole transfer helper did not return");
                const auto consumed = pair.native->cpu.advance_gameplay(64);
                require(consumed > 0 && consumed <= 64, "Whole helper returned an invalid step count");
                for (unsigned i = 0; i < consumed; ++i) pair.legacy->cpu.step_instruction();
                pair.compare();
            }
            ++whole_calls;
        };
        execute(jp ? 0xc10527 : 0xc10324);
        require(pair.native->value_at(selected + 33, 4) == 0x8000ffff &&
                pair.native->value_at(selected + 37, 4) == 0xfedc0123 &&
                pair.native->value_at(selected + 41, 2) == 0x80ff, "Whole store lost a field or truncated secondary");
        pair.configure([&](Machine& m) {
            m.long_value(selected + 23, 0); m.long_value(selected + 27, 0); m.word(selected + 31, 0);
        });
        execute(jp ? 0xc10583 : 0xc10380);
        require(pair.native->value_at(selected + 23, 4) == 0x8000ffff &&
                pair.native->value_at(selected + 27, 4) == 0xfedc0123 &&
                pair.native->value_at(selected + 31, 2) == 0x80ff, "Whole restore lost a field or truncated secondary");
        require(pair.native->cpu.native_gameplay_batches() > 0, "Whole helper sequence only exercised fallback");
    });
}
} // namespace

int main() {
    try {
        admission_matrix();
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            rejection_matrix(version);
            enhanced_timing(version);
            complete_helpers(version);
        }
        std::cout << "PASS dialogue transfers: " << comparisons << " checkpoint comparisons (" << admissions
            << " admitted, " << declines << " declined), " << whole_calls << " whole source calls, "
            << retired_steps << " checkpoint source steps and " << compared_audio_slices
            << " timestamped audio slices\n";
    } catch (const std::exception& error) {
        std::cerr << "Dialogue transfer failure: " << error.what() << '\n';
        return 1;
    }
}
