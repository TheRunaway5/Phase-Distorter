// Native dialogue checkpoints versus the independently retained legacy engine.
// Counts/costs below come from frozen US/JP source execution, not the production
// native adapter: src/text/{get,set}_*_memory.asm, increment_secondary_memory.asm
// and ccs/tree_1B.asm selectors 2/3. Every admitted chunk is checked at its exact
// source boundary, with real hardware/APU clocks and no observer forcing fallback.
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
unsigned comparisons = 0, admissions = 0, declines = 0;
std::uint64_t source_steps = 0, audio_callbacks = 0;
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
enum class Kind {
    GetWorking, GetArgument, SetWorking, SetArgument, GetSecondary, SetSecondary,
    IncrementSecondary, ZeroDecision, NonzeroDecision, ZeroSkip, NonzeroSkip,
};
constexpr std::array helpers{Kind::GetWorking, Kind::GetArgument, Kind::SetWorking, Kind::SetArgument,
    Kind::GetSecondary, Kind::SetSecondary, Kind::IncrementSecondary};
constexpr std::array all_kinds{Kind::GetWorking, Kind::GetArgument, Kind::SetWorking, Kind::SetArgument,
    Kind::GetSecondary, Kind::SetSecondary, Kind::IncrementSecondary,
    Kind::ZeroDecision, Kind::NonzeroDecision, Kind::ZeroSkip, Kind::NonzeroSkip};
constexpr std::array<std::uint32_t, 8> values{0, 1, 0x7fff, 0x8000, 0xffff, 0x10000, 0x80000000, 0xffffffff};
struct Scenario {
    eb::GameVersion version = eb::GameVersion::US;
    Kind kind = Kind::GetWorking;
    bool enhanced = false, fast = false;
    unsigned direct_page = 0x1d00, window = 0x8650;
    std::uint32_t value = 0x89abcdef, cursor = 0xf1c2fffe;
    unsigned cursor_storage = 0x7000;
};
bool is_decision(Kind kind) { return kind == Kind::ZeroDecision || kind == Kind::NonzeroDecision; }
bool is_skip(Kind kind) { return kind == Kind::ZeroSkip || kind == Kind::NonzeroSkip; }
bool taken(const Scenario& s) { return (s.kind == Kind::ZeroDecision) == (s.value == 0); }
const char* name(Kind kind) {
    constexpr std::array names{"get working", "get argument", "set working", "set argument",
        "get secondary", "set secondary", "increment secondary", "zero decision", "nonzero decision",
        "zero skip", "nonzero skip"};
    return names[unsigned(kind)];
}
unsigned entry(const Scenario& s) {
    constexpr std::array entries{0xc10415u, 0xc103e7u, 0xc10470u, 0xc1049cu, 0xc10405u, 0xc10453u,
        0xc10433u, 0xc17c7fu, 0xc17cbdu, 0xc17c9bu, 0xc17cd9u};
    return entries[unsigned(s.kind)] + (s.version == eb::GameVersion::JP ?
        (is_decision(s.kind) || is_skip(s.kind) ? 0x275 : 0x203) : 0);
}
unsigned exit(const Scenario& s) {
    if (is_decision(s.kind)) {
        if (taken(s)) return s.version == eb::GameVersion::JP ? 0xc17fff : 0xc17d92;
        return entry(s) + 0x1c;
    }
    if (is_skip(s.kind)) return s.version == eb::GameVersion::JP ? 0xc17ffa : 0xc17d8d;
    constexpr std::array ends{0xc1042cu, 0xc103feu, 0xc10487u, 0xc104b3u, 0xc10409u, 0xc1045bu, 0xc10442u};
    return ends[unsigned(s.kind)] + (s.version == eb::GameVersion::JP ? 0x203 : 0);
}
struct Cost { unsigned steps, cycles, direct_page_penalties, fetched_bytes, wram_bytes; };
Cost cost(const Scenario& s) {
    if (is_decision(s.kind)) {
        const bool high_zero = (s.value >> 16) == 0;
        const bool jump = taken(s);
        return {unsigned(high_zero ? 10 : 8) + (jump ? 2u : 0u),
            unsigned(high_zero ? 35 : 28) + (jump ? 5u : 0u),
            high_zero ? 6u : 4u, unsigned(high_zero ? 22 : 18) + (jump ? 6u : 0u), high_zero ? 12u : 8u};
    }
    if (is_skip(s.kind)) return {13, 56, 6, 31, 20};
    if (s.kind == Kind::GetSecondary) return {2, 8, 0, 4, 2};
    if (s.kind == Kind::SetSecondary) return {5, 16, 1, 8, 4};
    if (s.kind == Kind::IncrementSecondary) return {7, 27, 0, 15, 6};
    return {11, 43, 6, 23, 16};
}
unsigned expected_cycles(const Scenario& s) {
    const auto c = cost(s);
    return c.cycles + (s.direct_page & 255 ? c.direct_page_penalties : 0);
}
unsigned raw_clocks(const Scenario& s) {
    const auto c = cost(s);
    return expected_cycles(s) * 6 + c.wram_bytes * 2 + (s.fast ? 0 : c.fetched_bytes * 2);
}
auto cpu_state(const eb::MainCpu65816& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer, c.direct_page,
        c.status_register, c.data_bank, c.emulation_mode, c.is_stopped, c.is_waiting, c.instruction_count, c.cycle_count);
}
auto audio_state(const eb::Spc700AudioCpu& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer,
        c.status_register, c.is_stopped, c.is_sleeping, c.instruction_count, c.cycle_count);
}
struct Picture {
    unsigned width;
    std::uint64_t frame, clock;
    double aspect;
    std::vector<std::uint32_t> native, pixels, reference;
    std::vector<std::uint8_t> mask;
    bool operator==(const Picture&) const = default;
};
struct Machine {
    eb::SnesBus bus;
    eb::Spc700AudioCpu audio;
    eb::MainCpu65816 cpu;
    std::vector<std::pair<unsigned, std::uint64_t>> audio_slices;
    std::vector<Picture> pictures;
    std::vector<std::pair<unsigned, unsigned>> writes;
    std::vector<std::tuple<bool, unsigned, unsigned>> accesses;

    Machine(const Scenario& s, eb::MainCpuRuntime runtime)
        : bus(std::span(eb::rom_data(s.version), eb::rom_size(s.version)), s.version), audio(bus), cpu(bus) {
        cpu.set_runtime(runtime);
        cpu.set_gameplay_timing(s.enhanced);
        cpu.emulation_mode = false;
        cpu.data_bank = 0x7e;
        cpu.stack_pointer = 0x1ffa;
        bus.work_ram.fill(0xa7);
        const auto& queue = eb::source_profile(s.version).dma_queue;
        bus.work_ram[queue.write_index] = bus.work_ram[queue.last_completed_index] = 0;
        // A different current focus must not redirect the captured window A.
        const bool jp = s.version == eb::GameVersion::JP;
        word(jp ? 0x8c22 : 0x88e0, 0);
        word(jp ? 0x8c96 : 0x8958, 1);
        word((jp ? 0x8c26 : 0x88e4) + 2, 4);
        checkpoint(s);
        bus.write_byte(0x420d, s.fast);
        audio.write_byte(0xfa, 3); audio.write_byte(0xfb, 5); audio.write_byte(0xfc, 7);
        audio.write_byte(0xf1, 0x87); // Keep boot ROM, enable all three real timers.
        audio.advance_dsp_clocks = [this](unsigned clocks) { audio_slices.emplace_back(clocks, bus.master_clocks()); };
        bus.on_presentation_frame = [this](auto pixels, unsigned width, std::uint64_t frame) {
            const auto ref = bus.presentation_effect_reference();
            const auto mask = bus.presentation_effect_mask();
            pictures.push_back({width, frame, bus.master_clocks(), bus.presentation_fixed_aspect(),
                {bus.native_framebuffer.begin(), bus.native_framebuffer.end()}, {pixels.begin(), pixels.end()},
                {ref.begin(), ref.end()}, {mask.begin(), mask.end()}});
        };
        bus.advance_master_clocks_with_refresh(32); // Past HDMA init, before refresh.
    }
    void word(unsigned offset, std::uint32_t value) {
        bus.work_ram.at(offset) = std::uint8_t(value);
        bus.work_ram.at(offset + 1) = std::uint8_t(value >> 8);
    }
    void long_value(unsigned offset, std::uint32_t value) { word(offset, value); word(offset + 2, value >> 16); }
    std::uint32_t value_at(unsigned offset, unsigned bytes) const {
        std::uint32_t value = 0;
        for (unsigned i = 0; i < bytes; ++i) value |= std::uint32_t(bus.work_ram.at(offset + i)) << (8 * i);
        return value;
    }
    void checkpoint(const Scenario& s) {
        cpu.program_counter = entry(s);
        cpu.direct_page = std::uint16_t(s.direct_page);
        cpu.accumulator = std::uint16_t(s.window);
        cpu.x_index = 0x2468; cpu.y_index = 0xace0;
        cpu.status_register = s.value & 1 ? eb::MainCpu65816::Overflow | eb::MainCpu65816::Carry :
            eb::MainCpu65816::Negative | eb::MainCpu65816::Zero;
        long_value(s.window + 23, s.kind == Kind::GetWorking ? s.value : s.value ^ 0x18273645);
        long_value(s.window + 27, s.kind == Kind::GetArgument ? s.value : s.value ^ 0xa5f00f5a);
        word(s.window + 31, s.value);
        long_value(s.direct_page + 6, s.value);
        long_value(s.direct_page + 10, 0xc5d6e7f8);
        word(s.direct_page + 14, s.value);
        word(s.direct_page + 22, s.cursor_storage);
        long_value(s.cursor_storage, s.cursor);
        if (is_decision(s.kind) || is_skip(s.kind)) cpu.accumulator = std::uint16_t(s.value >> 16);
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
        checkpoint(s);
        clock_position(32);
    }
};
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
            "Private hardware clocks/registers/latches/DMA/open bus differ");
        require(a.bus.work_ram == b.bus.work_ram && a.bus.save_ram == b.bus.save_ram, "WRAM/SRAM differs");
        require(a.bus.video_ram == b.bus.video_ram && a.bus.palette_ram == b.bus.palette_ram &&
            a.bus.object_attributes == b.bus.object_attributes, "PPU memory differs");
        require(a.bus.audio_to_main_ports == b.bus.audio_to_main_ports &&
            a.bus.main_to_audio_ports == b.bus.main_to_audio_ports, "Audio mailboxes differ");
        require(a.bus.completed_frames == b.bus.completed_frames && a.bus.native_framebuffer == b.bus.native_framebuffer &&
            a.pictures == b.pictures, "Frame count/pixels/callbacks differ");
        const auto ap = a.bus.presentation_pixels(), bp = b.bus.presentation_pixels();
        const auto am = a.bus.presentation_effect_mask(), bm = b.bus.presentation_effect_mask();
        const auto ar = a.bus.presentation_effect_reference(), br = b.bus.presentation_effect_reference();
        require(a.bus.presentation_width() == b.bus.presentation_width() &&
            a.bus.presentation_fixed_aspect() == b.bus.presentation_fixed_aspect() &&
            std::equal(ap.begin(), ap.end(), bp.begin(), bp.end()) &&
            std::equal(am.begin(), am.end(), bm.begin(), bm.end()) &&
            std::equal(ar.begin(), ar.end(), br.begin(), br.end()), "Presentation metadata/canvas differs");
        require(audio_state(a.audio) == audio_state(b.audio) && a.audio.audio_ram == b.audio.audio_ram &&
            a.audio.dsp_registers == b.audio.dsp_registers &&
            eb::RuntimeStateAudit::audio_controls(a.audio) == eb::RuntimeStateAudit::audio_controls(b.audio) &&
            a.audio_slices == b.audio_slices, "APU state or ordered timestamped DSP clock slices differ");
        require(a.writes == b.writes && a.accesses == b.accesses, "Fallback memory observers differ");
    }
    void advance(unsigned maximum, bool admitted) {
        compare();
        const auto before_batches = native->cpu.native_gameplay_batches();
        const auto before_cycles = native->cpu.cycle_count, before_instructions = native->cpu.instruction_count;
        const auto before_clocks = native->bus.master_clocks();
        const auto before_timing = native->cpu.timing_snapshot();
        const auto before_audio = native->audio_slices.size();
        const auto retired = native->cpu.advance_gameplay(maximum);
        const auto expected = admitted ? cost(scenario).steps : (maximum ? 1u : 0u);
        require(retired == expected && retired <= maximum, "Wrong source step count or quota exceeded");
        for (unsigned i = 0; i < retired; ++i) legacy->cpu.step_instruction();
        compare();
        require(native->cpu.native_gameplay_batches() == before_batches + unsigned(admitted), "Wrong native admission count");
        require(legacy->cpu.native_gameplay_batches() == 0, "Legacy oracle admitted a native batch");
        if (admitted) {
            require(native->cpu.program_counter == exit(scenario), "Wrong source checkpoint continuation");
            require(native->cpu.cycle_count - before_cycles == expected_cycles(scenario) &&
                native->cpu.instruction_count - before_instructions == cost(scenario).steps,
                "Counters differ from independent frozen source costs");
            const auto& q = eb::source_profile(scenario.version).dma_queue;
            const bool scaled = before_timing.entity_update_active && before_timing.entity_update_master_clocks >= 140000 &&
                native->bus.work_ram[q.write_index] == native->bus.work_ram[q.last_completed_index];
            const auto clocks = scaled ? (raw_clocks(scenario) + before_timing.extra_budget_clock_remainder) / 8 : raw_clocks(scenario);
            require(native->bus.master_clocks() - before_clocks == clocks, "Master clocks differ from independent source costs");
            // Short accelerated chunks may fit entirely inside the APU's
            // existing fractional clock debt and legitimately emit no callback.
            // compare() still checks that debt and every callback that occurs.
        }
        ++comparisons; admitted ? ++admissions : ++declines;
        source_steps += retired;
        audio_callbacks += native->audio_slices.size() - before_audio;
    }
};
template<class Work> void checked(const Scenario& s, const char* label, Work work) {
    try { work(); }
    catch (const std::exception& e) {
        throw std::runtime_error(std::string(s.version == eb::GameVersion::US ? "US " : "JP ") + name(s.kind) +
            " " + label + " D=" + std::to_string(s.direct_page) + " window=" + std::to_string(s.window) +
            " value=" + std::to_string(s.value) + " enhanced=" + std::to_string(s.enhanced) +
            " fast=" + std::to_string(s.fast) + ": " + e.what());
    }
}
void admission_matrix() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
    for (bool enhanced : {false, true}) for (bool fast : {false, true})
    for (unsigned d : {0x1d00u, 0x1d13u}) for (auto value : values)
    for (auto kind : all_kinds) {
        Scenario s{.version = version, .kind = kind, .enhanced = enhanced, .fast = fast,
            .direct_page = d, .window = version == eb::GameVersion::US ? 0x85feu : 0x8976u, .value = value};
        checked(s, "admission", [&] { Pair pair(s); pair.advance(cost(s).steps, true); });
    }
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) for (auto kind : helpers)
    for (unsigned d : {0x1c00u, 0x1ee8u})
    for (unsigned base : {0x2000u, 0x7ff0u, version == eb::GameVersion::US ? 0xffaeu : 0xffb4u}) {
        Scenario s{.version = version, .kind = kind, .direct_page = d, .window = base};
        checked(s, "captured window/D boundary", [&] { Pair pair(s); pair.advance(64, true); });
    }
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
    for (auto kind : {Kind::ZeroSkip, Kind::NonzeroSkip})
    for (auto cursor : {0u, 0x007efffbu, 0x007efffcu, 0x007efffdu, 0x007efffeu, 0xffffffffu, 0x80007fffu})
    for (unsigned storage : {0x2000u, 0x7001u, 0xfffcu, 0xfffeu, 0xffffu}) {
        Scenario s{.version = version, .kind = kind, .cursor = cursor, .cursor_storage = storage};
        checked(s, "cursor wrap", [&] {
            Pair pair(s); pair.advance(64, true);
            const auto expected = (cursor & 0xffff0000u) | std::uint16_t(cursor + 4);
            require(pair.native->value_at(storage, 4) == expected, "Cursor high word changed on low-word overflow");
        });
    }
}
template<class Setup> void rejection(Scenario s, const char* label, Setup setup, unsigned maximum = 64) {
    checked(s, label, [&] { Pair pair(s); pair.configure(setup); pair.advance(maximum, false); });
}
void rejections(eb::GameVersion version) {
    for (auto kind : all_kinds) {
        Scenario s{.version = version, .kind = kind};
        rejection(s, "zero quota", [](Machine&) {}, 0);
        rejection(s, "insufficient quota", [](Machine&) {}, cost(s).steps - 1);
        rejection(s, "write observer", [](Machine& m) {
            m.cpu.observe_memory_write = [&m](auto address, auto value) { m.writes.emplace_back(address, value); };
        });
        rejection(s, "decimal mode", [](Machine& m) { m.cpu.status_register |= eb::MainCpu65816::Decimal; });
        rejection(s, "imminent refresh", [](Machine& m) { m.clock_position(530); });
        rejection(s, "imminent line end", [](Machine& m) { m.clock_position(1350); });
    }
    Scenario s{.version = version};
    rejection(s, "8-bit accumulator", [](Machine& m) { m.cpu.status_register |= eb::MainCpu65816::Accumulator8Bit; });
    rejection(s, "8-bit index", [](Machine& m) { m.cpu.status_register |= eb::MainCpu65816::Index8Bit; });
    rejection(s, "emulation mode", [](Machine& m) { m.cpu.emulation_mode = true; m.cpu.status_register |= 0x30; });
    rejection(s, "wrong data bank", [](Machine& m) { m.cpu.data_bank = 0; });
    rejection(s, "scratch below arena", [](Machine& m) { m.cpu.direct_page = 0x1bff; });
    rejection(s, "scratch above arena", [](Machine& m) { m.cpu.direct_page = 0x1ee9; });
    rejection(s, "window aliases scratch", [](Machine& m) { m.cpu.accumulator = 0x1d00; });
    rejection(s, "incomplete window at bank edge", [&](Machine& m) {
        m.cpu.accumulator = version == eb::GameVersion::US ? 0xffaf : 0xffb5;
    });
    rejection(s, "legacy runtime", [](Machine& m) { m.cpu.set_runtime(eb::MainCpuRuntime::Legacy); });
    rejection(s, "stopped", [](Machine& m) { m.cpu.is_stopped = true; });
    rejection(s, "waiting", [](Machine& m) { m.cpu.is_waiting = true; });
    rejection(s, "WRAM read override", [](Machine& m) {
        m.bus.debug_read_wram = [](unsigned, std::uint8_t value) { return std::uint8_t(value ^ 1); };
    });
    rejection(s, "WRAM write override", [](Machine& m) {
        m.bus.debug_write_wram = [](unsigned, std::uint8_t value) { return value; };
    });
    rejection(s, "ROM observer", [](Machine& m) {
        m.bus.debug_read_rom = [&m](unsigned address, std::uint8_t value) {
            m.accesses.emplace_back(false, address, value); return value;
        };
    });
#ifdef EB_GAMEPLAY_AUDIT
    rejection(s, "bus observer", [](Machine& m) {
        m.bus.observe_bus_access = [&m](bool write, auto address, auto value) { m.accesses.emplace_back(write, address, value); };
    });
#endif
    rejection(s, "hardware math pending", [](Machine& m) {
        m.bus.write_byte(0x4202, 7); m.bus.write_byte(0x4203, 9);
    });
    rejection(s, "imminent H IRQ", [](Machine& m) {
        m.bus.write_byte(0x4207, 16); m.bus.write_byte(0x4208, 0); m.bus.write_byte(0x4200, 0x10);
    });
    rejection(s, "pending NMI", [](Machine& m) {
        m.bus.write_byte(0x4200, 0x80); m.bus.advance_cpu_cycles(225 * 1364 / 6);
    });
    s.kind = Kind::ZeroSkip;
    rejection(s, "cursor aliases direct-page locals", [](Machine& m) { m.word(m.cpu.direct_page + 22, m.cpu.direct_page); });
}
void enhanced_boundaries(eb::GameVersion version) {
    for (auto kind : all_kinds) for (unsigned target : {1000u, 139900u, 140000u}) {
        Scenario s{.version = version, .kind = kind, .enhanced = true, .direct_page = 0x1d13};
        checked(s, "enhanced threshold", [&] {
            Pair pair(s);
            pair.configure([&](Machine& m) { m.prime_budget(s, target); });
            const auto before = pair.native->cpu.timing_snapshot();
            const bool crosses = before.entity_update_master_clocks < 140000 &&
                before.entity_update_master_clocks + raw_clocks(s) >= 140000;
            pair.advance(64, !crosses);
        });
    }
    Scenario s{.version = version, .kind = Kind::ZeroSkip, .enhanced = true, .direct_page = 0x1d13};
    checked(s, "enhanced fractional carry", [&] {
        Pair pair(s); pair.configure([&](Machine& m) { m.prime_budget(s, 140000); });
        const auto before = pair.native->cpu.timing_snapshot().extra_budget_clock_remainder;
        for (unsigned batch = 0; batch < 3; ++batch) {
            pair.configure([&](Machine& m) { m.checkpoint(s); });
            pair.advance(64, true);
        }
        require(pair.native->cpu.timing_snapshot().extra_budget_clock_remainder == (before + 3 * raw_clocks(s)) % 8,
            "Accelerated source slices lost fractional clock carry");
    });
    checked(s, "pending upload keeps original timing", [&] {
        Pair pair(s); pair.configure([&](Machine& m) {
            m.prime_budget(s, 140000);
            const auto& q = eb::source_profile(version).dma_queue;
            m.bus.work_ram[q.write_index] = std::uint8_t(m.bus.work_ram[q.last_completed_index] + 1);
        });
        pair.advance(64, true);
    });
}
} // namespace

int main() {
    try {
        admission_matrix();
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            rejections(version);
            enhanced_boundaries(version);
        }
        require(audio_callbacks > 0, "Dialogue matrix never exercised an APU clock callback");
        std::cout << "PASS " << comparisons << " native dialogue checkpoints; " << admissions << " admitted, " << declines
            << " bounded/fallback; " << source_steps << " source steps and " << audio_callbacks
            << " ordered APU clock callbacks match legacy CPU/private hardware/full memory\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n'; return 1;
    }
}
