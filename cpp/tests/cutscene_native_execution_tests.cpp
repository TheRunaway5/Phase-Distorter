// Credits native checkpoints versus independently retained Legacy instructions.
// Costs and boundaries were captured from frozen original source executions:
// ENQUEUE_CREDITS_DMA and the credits_scroll_frame fractional scroll tail.
// No production domain layout or native timing table supplies test expectations.
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
void require(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}
enum class Kind { Setup, Descriptor, Head, Scroll };
constexpr std::array kinds{Kind::Setup, Kind::Descriptor, Kind::Head, Kind::Scroll};
struct Scenario {
    eb::GameVersion version = eb::GameVersion::US;
    Kind kind = Kind::Setup;
    bool enhanced = false, fast = false;
    unsigned direct_page = 0x1d00, slot = 7, head = 7;
    unsigned mode = 0x80, size = 0x8040, destination = 0x6c20;
    std::uint32_t source = 0xf17efffe;
    unsigned fraction = 0, integer = 0xffff;
    unsigned status =
        eb::MainCpu65816::Carry | eb::MainCpu65816::Overflow | eb::MainCpu65816::InterruptDisable;
};
const char *name(Kind k) {
    constexpr std::array names{"queue setup", "descriptor", "head publication", "scroll"};
    return names[unsigned(k)];
}
unsigned base(const Scenario &s) { return s.version == eb::GameVersion::JP ? 0x54dc : 0x5156; }
unsigned head_address(const Scenario &s) { return s.version == eb::GameVersion::JP ? 0xb6be : 0xb4f5; }
unsigned scroll_address(const Scenario &s) { return s.version == eb::GameVersion::JP ? 0xb6b4 : 0xb4eb; }
unsigned entry(const Scenario &s) {
    constexpr std::array us{0xc4efceu, 0xc4efeeu, 0xc4f00eu, 0xc0f89au};
    constexpr std::array jp{0xc4c008u, 0xc4c028u, 0xc4c048u, 0xc0ff3eu};
    return (s.version == eb::GameVersion::JP ? jp : us)[unsigned(s.kind)];
}
unsigned exit(const Scenario &s) {
    constexpr std::array lengths{0x20u, 0x20u, 0x0du, 0x23u};
    return entry(s) + lengths[unsigned(s.kind)];
}
struct Cost {
    unsigned steps, cycles, direct_page_penalties, fetched_bytes, wram_bytes;
};
Cost cost(const Scenario &s) {
    switch (s.kind) {
    case Kind::Setup:
        return {18, 57, 8, 32, 17};
    case Kind::Descriptor:
        return {16, 60, 4, 32, 16};
    case Kind::Head:
        return {5, 20, 0, 13, 6};
    case Kind::Scroll:
        return s.fraction >= 0xc000 ? Cost{15, 63, 7, 35, 26} : Cost{14, 57, 6, 33, 22};
    }
    throw std::runtime_error("Unknown checkpoint");
}
unsigned expected_cycles(const Scenario &s) {
    const auto c = cost(s);
    return c.cycles + (s.direct_page & 255 ? c.direct_page_penalties : 0);
}
unsigned raw_clocks(const Scenario &s) {
    const auto c = cost(s);
    return expected_cycles(s) * 6 + c.wram_bytes * 2 + (s.fast ? 0 : c.fetched_bytes * 2);
}
auto cpu_state(const eb::MainCpu65816 &c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer, c.direct_page,
                    c.status_register, c.data_bank, c.emulation_mode, c.is_stopped, c.is_waiting,
                    c.instruction_count, c.cycle_count);
}
auto audio_state(const eb::Spc700AudioCpu &c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer,
                    c.status_register, c.is_stopped, c.is_sleeping, c.instruction_count, c.cycle_count);
}
struct Picture {
    unsigned width;
    std::uint64_t frame, clock;
    double aspect;
    std::vector<std::uint32_t> native, pixels, reference;
    std::vector<std::uint8_t> mask;
    bool operator==(const Picture &) const = default;
};
struct Machine {
    eb::SnesBus bus;
    eb::Spc700AudioCpu audio;
    eb::MainCpu65816 cpu;
    std::vector<std::pair<unsigned, std::uint64_t>> audio_slices;
    std::vector<Picture> pictures;
    std::vector<std::pair<unsigned, unsigned>> writes;
    std::vector<std::tuple<bool, unsigned, unsigned>> accesses;
    Machine(const Scenario &s, eb::MainCpuRuntime runtime)
        : bus(std::span(eb::rom_data(s.version), eb::rom_size(s.version)), s.version), audio(bus), cpu(bus) {
        cpu.set_runtime(runtime);
        cpu.set_gameplay_timing(s.enhanced);
        cpu.emulation_mode = false;
        cpu.data_bank = 0x7e;
        cpu.stack_pointer = 0x1ffa;
        bus.work_ram.fill(0xa7);
        const auto &queue = eb::source_profile(s.version).dma_queue;
        bus.work_ram[queue.write_index] = bus.work_ram[queue.last_completed_index] = 0;
        checkpoint(s);
        bus.write_byte(0x420d, s.fast);
        audio.write_byte(0xfa, 3);
        audio.write_byte(0xfb, 5);
        audio.write_byte(0xfc, 7);
        audio.write_byte(0xf1, 0x87);
        audio.advance_dsp_clocks = [this](unsigned clocks) {
            audio_slices.emplace_back(clocks, bus.master_clocks());
        };
        bus.on_presentation_frame = [this](auto pixels, unsigned width, std::uint64_t frame) {
            const auto ref = bus.presentation_effect_reference();
            const auto mask = bus.presentation_effect_mask();
            pictures.push_back({width,
                                frame,
                                bus.master_clocks(),
                                bus.presentation_fixed_aspect(),
                                {bus.native_framebuffer.begin(), bus.native_framebuffer.end()},
                                {pixels.begin(), pixels.end()},
                                {ref.begin(), ref.end()},
                                {mask.begin(), mask.end()}});
        };
        bus.advance_master_clocks_with_refresh(32);
    }
    void word(unsigned offset, std::uint32_t value) {
        bus.work_ram.at(offset) = std::uint8_t(value);
        bus.work_ram.at(offset + 1) = std::uint8_t(value >> 8);
    }
    void long_value(unsigned offset, std::uint32_t value) {
        word(offset, value);
        word(offset + 2, value >> 16);
    }
    std::uint32_t value_at(unsigned offset, unsigned bytes) const {
        std::uint32_t value = 0;
        for (unsigned i = 0; i < bytes; ++i)
            value |= std::uint32_t(bus.work_ram.at(offset + i)) << (8 * i);
        return value;
    }
    void checkpoint(const Scenario &s) {
        cpu.program_counter = entry(s);
        cpu.direct_page = std::uint16_t(s.direct_page);
        cpu.status_register = std::uint8_t(s.status);
        cpu.accumulator = 0xab00 | s.mode;
        cpu.x_index = s.size;
        cpu.y_index = s.destination;
        word(head_address(s), s.head);
        if (s.kind == Kind::Setup) {
            long_value(s.direct_page + 0x1d, s.source);
        } else if (s.kind == Kind::Descriptor) {
            cpu.x_index = base(s) + s.slot * 9;
            cpu.y_index = s.size;
            word(s.direct_page + 2, s.destination);
            long_value(s.direct_page + 6, s.source);
            bus.work_ram.at(s.direct_page + 0x0e) = std::uint8_t(s.mode);
        } else if (s.kind == Kind::Scroll) {
            word(scroll_address(s), s.fraction);
            word(scroll_address(s) + 2, s.integer);
            word(0x3b, 0xbeef);
        }
    }
    void clock_position(unsigned target) {
        for (unsigned i = 0; i < 3000 && bus.scanline_clock() != target; ++i)
            bus.advance_master_clocks_with_refresh(1);
        require(bus.scanline_clock() == target, "Could not position hardware clock");
    }
    void long_window(bool require_budget = true) {
        // The slow-ROM unaligned carry path needs542 clocks. Visible rows have
        // refresh/HDMA boundaries too close together; vblank provides a real
        // post-refresh gap without modifying any private scheduler state.
        for (unsigned i = 0; bus.scanline_index() < 225; ++i) {
            require(i < 400, "Could not reach vblank");
            bus.advance_master_clocks_with_refresh(1000);
        }
        clock_position(600);
        require(bus.scanline_index() >= 225 && (!require_budget || bus.native_execution_budget() > 542),
                "Vblank did not provide the independently measured scheduling window");
    }
    void prime_budget(const Scenario &s, unsigned target) {
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
    void enter_nmi_checkpoint(const Scenario &s) {
        // Create the interrupt scope through the actual bus/NMI arbitration.
        // Only the tested source checkpoint's public registers/locals are then
        // seeded; this does not pretend to execute the callback's prologue.
        require(cpu.timing_snapshot().interrupt_nesting_depth == 0, "NMI fixture was already nested");
        bus.write_byte(0x4200, 0x80);
        // The budget is correctly zero while the newly asserted NMI is
        // pending. Service it before asking whether the callback can batch.
        long_window(false);
        const auto before = cpu.instruction_count;
        cpu.step_instruction();
        require(cpu.timing_snapshot().interrupt_nesting_depth == 1 && cpu.instruction_count == before,
                "Real vblank NMI did not create an interrupt scope");
        checkpoint(s);
        require(bus.native_execution_budget() > raw_clocks(s),
                "Hardware-entered NMI did not leave room for the source checkpoint");
    }
};
struct Pair {
    Scenario scenario;
    std::unique_ptr<Machine> legacy, native;
    explicit Pair(Scenario s)
        : scenario(s), legacy(std::make_unique<Machine>(s, eb::MainCpuRuntime::Legacy)),
          native(std::make_unique<Machine>(s, eb::MainCpuRuntime::Ported)) {}
    template <class Setup> void configure(Setup setup) {
        setup(*legacy);
        setup(*native);
    }
    void compare() const {
        const auto &a = *legacy;
        const auto &b = *native;
        require(cpu_state(a.cpu) == cpu_state(b.cpu), "CPU architectural state differs");
        require(a.cpu.timing_snapshot() == b.cpu.timing_snapshot(), "Private CPU timing state differs");
        require(eb::RuntimeStateAudit::bus_controls(a.bus) == eb::RuntimeStateAudit::bus_controls(b.bus),
                "Private hardware clocks/registers/latches/DMA/open bus differ");
        require(a.bus.work_ram == b.bus.work_ram && a.bus.save_ram == b.bus.save_ram, "WRAM/SRAM differs");
        require(a.bus.video_ram == b.bus.video_ram && a.bus.palette_ram == b.bus.palette_ram &&
                    a.bus.object_attributes == b.bus.object_attributes,
                "PPU memory differs");
        require(a.bus.audio_to_main_ports == b.bus.audio_to_main_ports &&
                    a.bus.main_to_audio_ports == b.bus.main_to_audio_ports,
                "Audio mailboxes differ");
        require(a.bus.completed_frames == b.bus.completed_frames &&
                    a.bus.native_framebuffer == b.bus.native_framebuffer && a.pictures == b.pictures,
                "Frame count/pixels/callbacks differ");
        const auto ap = a.bus.presentation_pixels(), bp = b.bus.presentation_pixels();
        const auto am = a.bus.presentation_effect_mask(), bm = b.bus.presentation_effect_mask();
        const auto ar = a.bus.presentation_effect_reference(), br = b.bus.presentation_effect_reference();
        require(a.bus.presentation_width() == b.bus.presentation_width() &&
                    a.bus.presentation_fixed_aspect() == b.bus.presentation_fixed_aspect() &&
                    std::equal(ap.begin(), ap.end(), bp.begin(), bp.end()) &&
                    std::equal(am.begin(), am.end(), bm.begin(), bm.end()) &&
                    std::equal(ar.begin(), ar.end(), br.begin(), br.end()),
                "Presentation metadata/canvas differs");
        require(audio_state(a.audio) == audio_state(b.audio) && a.audio.audio_ram == b.audio.audio_ram &&
                    a.audio.dsp_registers == b.audio.dsp_registers &&
                    eb::RuntimeStateAudit::audio_controls(a.audio) ==
                        eb::RuntimeStateAudit::audio_controls(b.audio) &&
                    a.audio_slices == b.audio_slices,
                "APU state or ordered timestamped DSP clock slices differ");
        require(a.writes == b.writes && a.accesses == b.accesses, "Fallback memory observers differ");
    }
    void advance(unsigned maximum, bool admitted) {
        compare();
        const auto before_batches = native->cpu.native_gameplay_batches();
        const auto before_cycles = native->cpu.cycle_count,
                   before_instructions = native->cpu.instruction_count;
        const auto before_clocks = native->bus.master_clocks();
        const auto before_timing = native->cpu.timing_snapshot();
        const auto before_audio = native->audio_slices.size();
        const auto retired = native->cpu.advance_gameplay(maximum);
        const auto expected = admitted ? cost(scenario).steps : (maximum ? 1u : 0u);
        require(retired == expected && retired <= maximum, "Wrong source step count or quota exceeded");
        for (unsigned i = 0; i < retired; ++i)
            legacy->cpu.step_instruction();
        compare();
        require(native->cpu.native_gameplay_batches() == before_batches + unsigned(admitted),
                "Wrong native admission count");
        require(legacy->cpu.native_gameplay_batches() == 0, "Legacy oracle admitted a native batch");
        if (admitted) {
            require(native->cpu.program_counter == exit(scenario), "Wrong source checkpoint continuation");
            require(native->cpu.cycle_count - before_cycles == expected_cycles(scenario) &&
                        native->cpu.instruction_count - before_instructions == cost(scenario).steps,
                    "Counters differ from independent frozen source costs");
            const auto &q = eb::source_profile(scenario.version).dma_queue;
            const bool scaled =
                before_timing.entity_update_active && !before_timing.interrupt_nesting_depth &&
                before_timing.entity_update_master_clocks >= 140000 &&
                native->bus.work_ram[q.write_index] == native->bus.work_ram[q.last_completed_index];
            const auto clocks = scaled
                                    ? (raw_clocks(scenario) + before_timing.extra_budget_clock_remainder) / 8
                                    : raw_clocks(scenario);
            require(native->bus.master_clocks() - before_clocks == clocks,
                    "Master clocks differ from independent source costs");
        }
        ++comparisons;
        admitted ? ++admissions : ++declines;
        source_steps += retired;
        audio_callbacks += native->audio_slices.size() - before_audio;
    }
    void admitted() {
        if (raw_clocks(scenario) >= native->bus.native_execution_budget())
            configure([](Machine &m) { m.long_window(); });
        advance(cost(scenario).steps, true);
    }
};
template <class Work> void checked(const Scenario &s, const char *label, Work work) {
    try {
        work();
    } catch (const std::exception &e) {
        throw std::runtime_error(
            std::string(s.version == eb::GameVersion::US ? "US " : "JP ") + name(s.kind) + " " + label +
            " D=" + std::to_string(s.direct_page) + " slot=" + std::to_string(s.slot) +
            " head=" + std::to_string(s.head) + " fraction=" + std::to_string(s.fraction) +
            " enhanced=" + std::to_string(s.enhanced) + " fast=" + std::to_string(s.fast) + ": " + e.what());
    }
}
void effects(const Pair &pair) {
    const auto &s = pair.scenario;
    const auto &m = *pair.native;
    const auto d = s.direct_page;
    if (s.kind == Kind::Setup) {
        require(m.value_at(d + 2, 2) == s.destination && m.value_at(d + 4, 2) == s.head &&
                    m.value_at(d + 6, 4) == s.source && m.value_at(d + 14, 1) == s.mode,
                "Queue setup lost a captured parameter");
        require(m.value_at(d + 15, 1) == 0xa7, "Byte-only mode store changed its sentinel neighbor");
        require(m.cpu.x_index == base(s) + s.head * 9 && m.cpu.y_index == s.size,
                "Queue setup lost captured descriptor address or length");
    } else if (s.kind == Kind::Descriptor) {
        const auto address = base(s) + s.slot * 9;
        require(m.value_at(address, 1) == s.mode && m.value_at(address + 1, 2) == s.size &&
                    m.value_at(address + 3, 4) == s.source && m.value_at(address + 7, 2) == s.destination,
                "Descriptor bytes or full32 source differ");
        require(m.value_at(head_address(s), 2) == s.head && m.cpu.y_index == address + 3,
                "Descriptor changed queue head or captured address");
    } else if (s.kind == Kind::Head) {
        require(m.value_at(head_address(s), 2) == ((s.head + 1) & 127), "Queue head wrap differs");
    } else {
        const auto fraction_sum = s.fraction + 0x4000;
        const auto integer = std::uint16_t(s.integer + (fraction_sum >> 16));
        const auto position = std::uint16_t(fraction_sum) | (std::uint32_t(integer) << 16);
        require(m.value_at(scroll_address(s), 4) == position && m.value_at(d + 6, 4) == position &&
                    m.value_at(0x3b, 2) == integer && m.cpu.accumulator == integer,
                "Scroll carry, scratch, globals or BG3 mirror differs");
    }
}
void admission_matrix() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
        for (bool enhanced : {false, true})
            for (bool fast : {false, true})
                for (unsigned d : {0x1d00u, 0x1d13u}) {
                    for (auto kind : {Kind::Setup, Kind::Descriptor, Kind::Head})
                        for (unsigned slot : {0u, 7u, 127u})
                            for (unsigned variant : {0u, 1u, 2u, 3u}) {
                                constexpr std::array sources{0u, 0x007effffu, 0x80ffffffu, 0xffffffffu};
                                constexpr std::array modes{0u, 3u, 0x80u, 0xffu};
                                constexpr std::array words{0u, 0x7fffu, 0x8000u, 0xffffu};
                                Scenario s{.version = version,
                                           .kind = kind,
                                           .enhanced = enhanced,
                                           .fast = fast,
                                           .direct_page = d,
                                           .slot = slot,
                                           .head = slot,
                                           .mode = modes[variant],
                                           .size = words[variant],
                                           .destination = words[3 - variant],
                                           .source = sources[variant],
                                           .status = variant & 1 ? 0x45u : 0x86u};
                                checked(s, "admission", [&] {
                                    Pair pair(s);
                                    pair.admitted();
                                    effects(pair);
                                });
                            }
                    for (unsigned fraction : {0u, 0x7fffu, 0xbfffu, 0xc000u, 0xffffu})
                        for (unsigned integer : {0u, 0x7fffu, 0xffffu}) {
                            Scenario s{.version = version,
                                       .kind = Kind::Scroll,
                                       .enhanced = enhanced,
                                       .fast = fast,
                                       .direct_page = d,
                                       .fraction = fraction,
                                       .integer = integer};
                            checked(s, "carry/overflow", [&] {
                                Pair pair(s);
                                pair.admitted();
                                effects(pair);
                            });
                        }
                }
}
template <class Setup> void rejection(Scenario s, const char *label, Setup setup, unsigned maximum = 64) {
    checked(s, label, [&] {
        Pair pair(s);
        pair.configure(setup);
        pair.advance(maximum, false);
    });
}
unsigned callback_direct_page(eb::GameVersion version, Kind kind) {
    // irq_nmi.asm installs D=$0200 before EXECUTE_IRQ_CALLBACK. The source
    // scroll frame reserves $25 bytes in US/$24 in JP; nested queue enqueue
    // reserves another $0f. These values come from the original prologues.
    const unsigned scroll = version == eb::GameVersion::JP ? 0x01dc : 0x01db;
    return kind == Kind::Scroll ? scroll : scroll - 0x0f;
}
void callback_frames(eb::GameVersion version) {
    for (bool enhanced : {false, true})
        for (bool fast : {false, true})
            for (auto kind : kinds)
                for (unsigned fraction : {0u, 0xbfffu, 0xc000u, 0xffffu}) {
                    Scenario s{.version = version,
                               .kind = kind,
                               .enhanced = enhanced,
                               .fast = fast,
                               .direct_page = callback_direct_page(version, kind),
                               .slot = 127,
                               .head = 127,
                               .fraction = fraction,
                               .integer = fraction & 1 ? 0xffffu : 0x7fffu};
                    checked(s, "source callback frame", [&] {
                        Pair pair(s);
                        pair.admitted();
                        effects(pair);
                    });
                }
    for (auto kind : {Kind::Setup, Kind::Descriptor, Kind::Scroll}) {
        Scenario s{.version = version, .kind = kind};
        const auto documented = callback_direct_page(version, kind);
        for (auto d : {documented - 1, documented + 1}) {
            s.direct_page = d;
            rejection(s, "neighbor of documented callback frame", [](Machine &m) { m.long_window(); });
        }
    }
    for (bool enhanced : {false, true})
        for (bool fast : {false, true})
            for (auto kind : kinds)
                for (unsigned fraction : {0xbfffu, 0xc000u}) {
                    Scenario s{.version = version,
                               .kind = kind,
                               .enhanced = enhanced,
                               .fast = fast,
                               .direct_page = callback_direct_page(version, kind),
                               .fraction = fraction};
                    checked(s, "hardware-entered NMI scope", [&] {
                        Pair pair(s);
                        pair.configure([&](Machine &m) {
                            if (enhanced) m.prime_budget(s, 140000);
                            m.enter_nmi_checkpoint(s);
                        });
                        const auto before = pair.native->cpu.timing_snapshot();
                        require(!enhanced || before.entity_update_master_clocks >= 140000,
                                "Enhanced interrupt fixture never reached the foreground threshold");
                        pair.admitted();
                        effects(pair);
                        const auto after = pair.native->cpu.timing_snapshot();
                        require(after.interrupt_nesting_depth == 1 &&
                                    after.entity_update_master_clocks == before.entity_update_master_clocks &&
                                    after.extra_budget_clock_remainder == before.extra_budget_clock_remainder,
                                "Credits callback consumed the interrupted foreground timing budget");
                    });
                }
}
void boundaries(eb::GameVersion version) {
    for (auto kind : kinds) {
        Scenario s{.version = version, .kind = kind};
        rejection(s, "zero quota", [](Machine &) {}, 0);
        rejection(s, "insufficient quota", [](Machine &) {}, cost(s).steps - 1);
        rejection(s, "decimal mode", [](Machine &m) { m.cpu.status_register |= eb::MainCpu65816::Decimal; });
        rejection(s, "8-bit accumulator",
                  [](Machine &m) { m.cpu.status_register |= eb::MainCpu65816::Accumulator8Bit; });
        rejection(s, "8-bit index", [](Machine &m) { m.cpu.status_register |= eb::MainCpu65816::Index8Bit; });
        rejection(s, "emulation mode", [](Machine &m) {
            m.cpu.emulation_mode = true;
            m.cpu.status_register |= 0x30;
        });
        rejection(s, "wrong data bank", [](Machine &m) { m.cpu.data_bank = 0; });
        rejection(s, "legacy runtime", [](Machine &m) { m.cpu.set_runtime(eb::MainCpuRuntime::Legacy); });
        rejection(s, "write observer", [](Machine &m) {
            m.cpu.observe_memory_write = [&m](auto address, auto value) {
                m.writes.emplace_back(address, value);
            };
        });
        rejection(s, "WRAM read override", [](Machine &m) {
            m.bus.debug_read_wram = [](unsigned, std::uint8_t value) { return std::uint8_t(value ^ 1); };
        });
        rejection(s, "WRAM write override", [](Machine &m) {
            m.bus.debug_write_wram = [](unsigned, std::uint8_t value) { return value; };
        });
        rejection(s, "ROM observer", [](Machine &m) {
            m.bus.debug_read_rom = [&m](unsigned address, std::uint8_t value) {
                m.accesses.emplace_back(false, address, value);
                return value;
            };
        });
#ifdef EB_GAMEPLAY_AUDIT
        rejection(s, "bus observer", [](Machine &m) {
            m.bus.observe_bus_access = [&m](bool write, auto address, auto value) {
                m.accesses.emplace_back(write, address, value);
            };
        });
#endif
        rejection(s, "imminent refresh", [](Machine &m) { m.clock_position(530); });
        rejection(s, "imminent line end", [](Machine &m) { m.clock_position(1350); });
        rejection(s, "pending math", [](Machine &m) {
            m.bus.write_byte(0x4202, 7);
            m.bus.write_byte(0x4203, 9);
        });
        rejection(s, "imminent IRQ", [](Machine &m) {
            m.bus.write_byte(0x4207, 16);
            m.bus.write_byte(0x4208, 0);
            m.bus.write_byte(0x4200, 0x10);
        });
        if (kind != Kind::Head) {
            const auto upper = kind == Kind::Setup ? 0x1edfu : kind == Kind::Descriptor ? 0x1ef1u : 0x1ef6u;
            for (unsigned d : {0x1c00u, upper}) {
                auto edge = s;
                edge.direct_page = d;
                checked(edge, "scratch boundary", [&] {
                    Pair pair(edge);
                    pair.admitted();
                    effects(pair);
                });
            }
            rejection(s, "scratch below arena", [](Machine &m) { m.cpu.direct_page = 0x1bff; });
            rejection(s, "scratch above arena", [&](Machine &m) { m.cpu.direct_page = upper + 1; });
            rejection(s, "scratch aliases descriptor", [&](Machine &m) { m.cpu.direct_page = base(s); });
        }
    }
    Scenario s{.version = version};
    rejection(s, "head outside ring", [&](Machine &m) { m.word(head_address(s), 128); });
    s.kind = Kind::Descriptor;
    rejection(s, "captured X below ring", [&](Machine &m) { m.cpu.x_index = base(s) - 1; });
    rejection(s, "captured X past ring", [&](Machine &m) { m.cpu.x_index = base(s) + 128 * 9; });
    rejection(s, "unaligned captured X", [&](Machine &m) { m.cpu.x_index = base(s) + 1; });
    rejection(s, "captured X aliases scratch", [](Machine &m) { m.cpu.x_index = m.cpu.direct_page; });
    s.kind = Kind::Scroll;
    s.fraction = 0xc000;
    s.direct_page = 0x1d13;
    rejection(s, "542 clocks exceed active-line deadline", [](Machine &) {});
    s.kind = Kind::Head;
    for (unsigned d : {0u, 0xffffu})
        for (unsigned head : {128u, 0x7fffu, 0xffffu}) {
            s.direct_page = d;
            s.head = head;
            checked(s, "head has no direct-page constraint", [&] {
                Pair pair(s);
                pair.admitted();
                effects(pair);
            });
        }
}
void captured_boundaries(eb::GameVersion version) {
    Scenario s{.version = version, .slot = 127, .head = 127};
    checked(s, "head changes between source checkpoints", [&] {
        Pair pair(s);
        pair.admitted();
        effects(pair);
        pair.scenario.kind = Kind::Descriptor;
        pair.scenario.head = 9;
        pair.configure([&](Machine &m) {
            m.word(head_address(s), 9);
            m.clock_position(32);
        });
        pair.admitted();
        effects(pair);
        pair.scenario.kind = Kind::Head;
        pair.scenario.head = 0xffff;
        pair.configure([&](Machine &m) {
            m.word(head_address(s), 0xffff);
            m.clock_position(32);
        });
        pair.admitted();
        effects(pair);
        require(pair.native->cpu.x_index == base(s) + 127 * 9,
                "Descriptor checkpoint re-resolved current head");
        // The final checkpoint stops before PLD/RTL. Exercise the real return
        // instructions with a valid hardware stack and compare both runtimes.
        pair.configure([](Machine &m) {
            m.word(m.cpu.stack_pointer + 1, 0x1e00);
            m.word(m.cpu.stack_pointer + 3, 0xfeff);
            m.bus.work_ram.at(m.cpu.stack_pointer + 5) = 0xc1;
        });
        pair.advance(1, false);
        pair.advance(1, false);
        require(pair.native->cpu.program_counter == 0xc1ff00 && pair.native->cpu.direct_page == 0x1e00 &&
                    pair.native->cpu.stack_pointer == 0x1fff,
                "Queue epilogue return ABI changed");
    });
}
void enhanced_boundaries(eb::GameVersion version) {
    for (auto kind : kinds)
        for (unsigned target : {1000u, 139900u, 140000u}) {
            Scenario s{.version = version, .kind = kind, .enhanced = true, .direct_page = 0x1d13};
            checked(s, "enhanced threshold", [&] {
                Pair pair(s);
                pair.configure([&](Machine &m) { m.prime_budget(s, target); });
                const auto before = pair.native->cpu.timing_snapshot();
                const bool crosses = before.entity_update_master_clocks < 140000 &&
                                     before.entity_update_master_clocks + raw_clocks(s) >= 140000;
                pair.advance(64, !crosses);
            });
        }
    Scenario s{.version = version,
               .kind = Kind::Scroll,
               .enhanced = true,
               .direct_page = 0x1d13,
               .fraction = 0xffff};
    checked(s, "accelerated carry preserves fractional clock debt", [&] {
        Pair pair(s);
        pair.configure([&](Machine &m) { m.prime_budget(s, 140000); });
        const auto remainder = pair.native->cpu.timing_snapshot().extra_budget_clock_remainder;
        for (unsigned i = 0; i < 3; ++i) {
            pair.configure([&](Machine &m) { m.checkpoint(s); });
            pair.advance(64, true);
        }
        require(pair.native->cpu.timing_snapshot().extra_budget_clock_remainder ==
                    (remainder + 3 * raw_clocks(s)) % 8,
                "Accelerated source slices lost fractional clock carry");
    });
    checked(s, "pending graphics upload keeps unscaled timing", [&] {
        Pair pair(s);
        pair.configure([&](Machine &m) {
            m.prime_budget(s, 140000);
            m.long_window();
            const auto &q = eb::source_profile(version).dma_queue;
            m.bus.work_ram[q.write_index] = std::uint8_t(m.bus.work_ram[q.last_completed_index] + 1);
        });
        pair.advance(64, true);
    });
}

void observed_chunks(eb::GameVersion version) {
    for (auto kind : kinds) {
        Scenario s{.version = version, .kind = kind, .slot = 127, .head = 127};
        checked(s, "complete observed fallback", [&] {
            Pair pair(s);
            pair.configure([](Machine &m) {
                m.cpu.observe_memory_write = [&m](auto address, auto value) {
                    m.writes.emplace_back(address, value);
                };
            });
            for (unsigned i = 0; i < cost(s).steps; ++i)
                pair.advance(1, false);
            require(pair.native->cpu.program_counter == exit(s),
                    "Observed fallback missed checkpoint boundary");
            effects(pair);
            require(!pair.native->writes.empty(), "Observed fallback did not exercise writes");
            if (kind == Kind::Head) {
                const auto address = 0x7e0000 + head_address(s);
                const std::vector<std::pair<unsigned, unsigned>> expected{
                    {address, 128}, {address + 1, 0}, {address, 0}, {address + 1, 0}};
                require(pair.native->writes == expected,
                        "Head publication lost increment-before-mask write order");
            }
        });
    }
    Scenario s{.version = version, .kind = Kind::Head};
    checked(s, "fallback crosses completed frame", [&] {
        Pair pair(s);
        pair.configure([](Machine &m) {
            while (m.bus.scanline_index() < 261)
                m.bus.advance_master_clocks_with_refresh(1000);
            m.clock_position(1350);
        });
        const auto pictures = pair.native->pictures.size();
        pair.advance(64, false);
        require(pair.native->pictures.size() == pictures + 1,
                "Frame-boundary fallback skipped completed-frame callback");
    });
}

void negative_control() {
    Pair pair(Scenario{});
    pair.native->bus.work_ram[0x7000] ^= 1;
    bool detected = false;
    try {
        pair.compare();
    } catch (const std::runtime_error &) {
        detected = true;
    }
    require(detected, "Differential comparison did not detect deliberate WRAM divergence");
}
} // namespace
int main() {
    try {
        negative_control();
        admission_matrix();
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            callback_frames(version);
            boundaries(version);
            captured_boundaries(version);
            enhanced_boundaries(version);
            observed_chunks(version);
        }
        require(audio_callbacks > 0, "Credits matrix never exercised an APU clock callback");
        std::cout << "PASS " << comparisons << " native credits checkpoints; " << admissions << " admitted, "
                  << declines << " bounded/fallback; " << source_steps << " source steps and "
                  << audio_callbacks
                  << " ordered APU clock callbacks match legacy CPU/private hardware/full memory\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
