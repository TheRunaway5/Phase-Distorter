// Native batches are compared to the frozen runtime at the same source-step
// boundary. No production timing table supplies this test's expected costs.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include "runtime_state_audit.hpp"

#include <algorithm>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

namespace {
unsigned cases = 0, admissions = 0, declines = 0;
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
auto cpu_state(const eb::MainCpu65816& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer,
                    c.direct_page, c.status_register, c.data_bank, c.emulation_mode,
                    c.is_stopped, c.is_waiting, c.instruction_count, c.cycle_count);
}
auto audio_state(const eb::Spc700AudioCpu& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer,
                    c.status_register, c.is_stopped, c.is_sleeping, c.instruction_count, c.cycle_count);
}
struct Picture {
    unsigned width;
    std::uint64_t frame;
    std::vector<std::uint32_t> pixels;
    bool operator==(const Picture&) const = default;
};
struct Machine {
    eb::SnesBus bus;
    eb::Spc700AudioCpu audio;
    eb::MainCpu65816 cpu;
    std::vector<unsigned> audio_slices;
    std::vector<Picture> pictures;
    std::vector<std::pair<unsigned, unsigned>> observed_writes;
    std::vector<std::tuple<bool, unsigned, unsigned>> observed_accesses;
    explicit Machine(eb::GameVersion version, eb::MainCpuRuntime runtime, bool enhanced,
                     unsigned slot, unsigned direct_page, bool fast, unsigned initial_clock)
        : bus(std::span(eb::rom_data(version), eb::rom_size(version)), version), audio(bus), cpu(bus) {
        cpu.set_runtime(runtime);
        cpu.set_gameplay_timing(enhanced);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::Overflow;
        cpu.data_bank = 0x7e;
        cpu.stack_pointer = 0x1ffc;
        checkpoint(slot, direct_page);
        for (unsigned candidate = 0; candidate < 23; ++candidate)
            word(script_table() + candidate * 2, 0xffff);
        bus.write_byte(0x420d, fast);
        audio.advance_dsp_clocks = [&](unsigned clocks) { audio_slices.push_back(clocks); };
        bus.on_presentation_frame = [&](auto pixels, unsigned width, std::uint64_t frame) {
            pictures.push_back({width, frame, {pixels.begin(), pixels.end()}});
        };
        // h=0 has an HDMA initialization boundary at h=24. At h=32 the
        // largest measured inactive-candidate batch fits before refresh.
        bus.advance_master_clocks_with_refresh(initial_clock);
    }
    bool jp() const { return bus.game_version() == eb::GameVersion::JP; }
    unsigned entry() const { return jp() ? 0xc062a9 : 0xc0607b; }
    unsigned exit() const { return jp() ? 0xc06361 : 0xc06133; }
    unsigned script_table() const { return jp() ? 0xa58 : 0xa62; }
    void word(unsigned address, unsigned value) {
        bus.work_ram.at(address) = std::uint8_t(value);
        bus.work_ram.at(address + 1) = std::uint8_t(value >> 8);
    }
    void checkpoint(unsigned slot, unsigned direct_page) {
        cpu.program_counter = entry();
        cpu.direct_page = std::uint16_t(direct_page);
        cpu.accumulator = 0xdead;
        cpu.x_index = 0xbeef;
        cpu.y_index = 0xcafe;
        word(direct_page + 2, slot);
        word(direct_page + 0x12, slot);
    }
    void clock_position(unsigned target) {
        for (unsigned i = 0; i < 3000 && bus.scanline_clock() != target; ++i)
            bus.advance_master_clocks_with_refresh(1);
        require(bus.scanline_clock() == target, "Could not position hardware clock");
    }
    void prime_entity_budget(unsigned target) {
        cpu.program_counter = eb::source_profile(bus.game_version()).gameplay_timing.entity_update_call;
        cpu.step_instruction(); // Real JSL enters the accelerated scope and lowers S.
        require(cpu.timing_snapshot().entity_update_active, "Entity timing scope was not entered");
        // Real compiled LDA DISABLE_ACTIONSCRIPT, also used by the existing
        // hardware timing tests; resetting PC does not alter hidden timing.
        for (unsigned i = 0; cpu.timing_snapshot().entity_update_master_clocks < target; ++i) {
            require(i < 5000, "Could not prime entity timing budget");
            cpu.program_counter = jp() ? 0xc09445 : 0xc09466;
            cpu.step_instruction();
        }
        checkpoint(7, 0x1d00);
        clock_position(32);
    }
};
struct Pair {
    std::unique_ptr<Machine> legacy, native;
    explicit Pair(eb::GameVersion version, bool enhanced = false, unsigned slot = 7,
                  unsigned direct_page = 0x1d00, bool fast = false, unsigned initial_clock = 32)
        : legacy(std::make_unique<Machine>(version, eb::MainCpuRuntime::Legacy, enhanced, slot, direct_page, fast, initial_clock)),
          native(std::make_unique<Machine>(version, eb::MainCpuRuntime::Ported, enhanced, slot, direct_page, fast, initial_clock)) {}
    template<class Setup> void configure(Setup setup) { setup(*legacy); setup(*native); }
    void compare() const {
        const auto& a = *legacy; const auto& b = *native;
        require(cpu_state(a.cpu) == cpu_state(b.cpu), "CPU architectural state differs");
        require(a.cpu.timing_snapshot() == b.cpu.timing_snapshot(), "Private CPU timing state differs");
        require(eb::RuntimeStateAudit::bus_controls(a.bus) == eb::RuntimeStateAudit::bus_controls(b.bus),
                "Hardware timing/register/open-bus state differs");
        require(a.bus.work_ram == b.bus.work_ram && a.bus.save_ram == b.bus.save_ram, "WRAM/SRAM differs");
        require(a.bus.video_ram == b.bus.video_ram && a.bus.palette_ram == b.bus.palette_ram &&
                    a.bus.object_attributes == b.bus.object_attributes, "PPU memory differs");
        require(a.bus.audio_to_main_ports == b.bus.audio_to_main_ports &&
                    a.bus.main_to_audio_ports == b.bus.main_to_audio_ports, "Audio mailboxes differ");
        require(a.bus.completed_frames == b.bus.completed_frames && a.bus.native_framebuffer == b.bus.native_framebuffer &&
                    a.pictures == b.pictures, "Frame count/pixels/callback order differs");
        const auto ap = a.bus.presentation_pixels(), bp = b.bus.presentation_pixels();
        require(a.bus.presentation_width() == b.bus.presentation_width() && ap.size() == bp.size() &&
                    std::equal(ap.begin(), ap.end(), bp.begin()), "Presentation canvas differs");
        require(audio_state(a.audio) == audio_state(b.audio) && a.audio.audio_ram == b.audio.audio_ram &&
                    a.audio.dsp_registers == b.audio.dsp_registers &&
                    eb::RuntimeStateAudit::audio_controls(a.audio) == eb::RuntimeStateAudit::audio_controls(b.audio) &&
                    a.audio_slices == b.audio_slices, "Asynchronous audio state/DSP clock slices differ");
        require(a.observed_writes == b.observed_writes && a.observed_accesses == b.observed_accesses,
                "Fallback observer accesses differ");
    }
    void advance(unsigned maximum, unsigned expected, bool admitted) {
        compare();
        const auto batches = native->cpu.native_gameplay_batches();
        const auto retired = native->cpu.advance_gameplay(maximum);
        require(retired == expected, "Unexpected number of source steps retired");
        require(retired <= maximum, "Native execution exceeded maximum source steps");
        for (unsigned step = 0; step < retired; ++step) legacy->cpu.step_instruction();
        compare();
        require(native->cpu.native_gameplay_batches() == batches + unsigned(admitted),
                "Native admission counter does not match expected path");
        require(legacy->cpu.native_gameplay_batches() == 0, "Legacy oracle entered native execution");
        ++cases;
        admitted ? ++admissions : ++declines;
    }
};
void admission_matrix() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
    for (bool enhanced : {false, true})
    for (unsigned slot : {0u, 7u, 22u})
    for (unsigned direct_page : {0x1d00u, 0x1de2u})
    for (bool fast : {false, true}) {
        try {
            Pair pair(version, enhanced, slot, direct_page, fast);
            const bool final = slot == 22;
            const unsigned steps = final ? 15 : 16;
            // Independently captured legacy reference, not production metadata:
            // 57/55 cycles plus seven unaligned-D penalties; 35/32 ROM bytes,
            // twelve WRAM reads and six WRAM writes in either path.
            const unsigned cycles = (final ? 55 : 57) + (direct_page & 255 ? 7 : 0);
            const unsigned clocks = cycles * 6 + 36 + (fast ? 0 : (final ? 32 : 35) * 2);
            const auto before_clocks = pair.native->bus.master_clocks();
            pair.advance(steps, steps, true);
            require(pair.native->cpu.cycle_count == cycles && pair.native->cpu.instruction_count == steps,
                    "Native counters differ from independent legacy timing capture");
            require(pair.native->bus.master_clocks() - before_clocks == clocks,
                    "Native master clocks differ from independent legacy timing capture");
            require(pair.native->cpu.accumulator == slot + 1 && pair.native->cpu.x_index == slot * 2 &&
                        pair.native->cpu.y_index == 0xcafe &&
                        pair.native->cpu.program_counter == (final ? pair.native->exit() : pair.native->entry()),
                    "Native loop continuation or live registers differ");
        } catch (const std::exception& error) {
            throw std::runtime_error(std::string(version == eb::GameVersion::US ? "US" : "JP") +
                " admission slot=" + std::to_string(slot) + " D=" + std::to_string(direct_page) +
                " fast=" + std::to_string(fast) + " enhanced=" + std::to_string(enhanced) + ": " + error.what());
        }
    }
}
template<class Setup>
void rejection(eb::GameVersion version, const char* label, Setup setup, unsigned maximum = 16,
               unsigned expected = 1, unsigned initial_clock = 32) {
    try {
        Pair pair(version, false, 7, 0x1d00, false, initial_clock);
        pair.configure(setup);
        pair.advance(maximum, expected, false);
    } catch (const std::exception& error) {
        throw std::runtime_error(std::string(version == eb::GameVersion::US ? "US " : "JP ") + label + ": " + error.what());
    }
}
void rejections(eb::GameVersion version) {
    rejection(version, "zero maximum", [](Machine&) {}, 0, 0);
    rejection(version, "one-step maximum", [](Machine&) {}, 1);
    rejection(version, "short batch maximum", [](Machine&) {}, 15);
    rejection(version, "short final-slot maximum", [](Machine& m) { m.checkpoint(22, 0x1d00); }, 14);
    rejection(version, "8-bit accumulator", [](Machine& m) { m.cpu.status_register |= eb::MainCpu65816::Accumulator8Bit; });
    rejection(version, "8-bit index", [](Machine& m) { m.cpu.status_register |= eb::MainCpu65816::Index8Bit; });
    rejection(version, "emulation mode", [](Machine& m) { m.cpu.emulation_mode = true; m.cpu.status_register |= 0x30; });
    rejection(version, "wrong data bank", [](Machine& m) { m.cpu.data_bank = 0; });
    rejection(version, "scratch below compiler arena", [](Machine& m) { m.checkpoint(7, 0x1bff); });
    rejection(version, "scratch above compiler arena", [](Machine& m) { m.checkpoint(7, 0x1ee3); });
    rejection(version, "scratch aliases script table", [](Machine& m) { m.cpu.direct_page = std::uint16_t(m.script_table()); });
    rejection(version, "mismatched candidate locals", [](Machine& m) { m.word(m.cpu.direct_page + 0x12, 8); });
    rejection(version, "candidate out of range", [](Machine& m) { m.checkpoint(23, 0x1d00); });
    rejection(version, "active candidate with one-step quota",
              [](Machine& m) { m.word(m.script_table() + 14, 0); }, 1);
    rejection(version, "different source site", [](Machine& m) { m.cpu.program_counter += 2; });
    rejection(version, "legacy backend", [](Machine& m) { m.cpu.set_runtime(eb::MainCpuRuntime::Legacy); });
    rejection(version, "stopped CPU", [](Machine& m) { m.cpu.is_stopped = true; });
    rejection(version, "waiting CPU", [](Machine& m) { m.cpu.is_waiting = true; });
    rejection(version, "memory observer", [](Machine& m) {
        m.cpu.observe_memory_write = [&m](auto address, auto value) { m.observed_writes.emplace_back(address, value); };
    });
    rejection(version, "WRAM override", [](Machine& m) {
        m.bus.debug_read_wram = [](unsigned, std::uint8_t value) { return std::uint8_t(value ^ 1); };
    });
    rejection(version, "WRAM write override", [](Machine& m) {
        m.bus.debug_write_wram = [](unsigned, std::uint8_t value) { return value; };
    });
    rejection(version, "ROM override", [](Machine& m) {
        m.bus.debug_read_rom = [&m](unsigned address, std::uint8_t value) {
            m.observed_accesses.emplace_back(false, address, value); return value;
        };
    });
#ifdef EB_GAMEPLAY_AUDIT
    rejection(version, "bus observer", [](Machine& m) {
        m.bus.observe_bus_access = [&m](bool write, auto address, auto value) {
            m.observed_accesses.emplace_back(write, address, value);
        };
    });
#endif
    rejection(version, "before HDMA initialization", [](Machine&) {}, 16, 1, 0);
    rejection(version, "exact exclusive deadline", [](Machine& m) { m.clock_position(90); });
    rejection(version, "near refresh", [](Machine& m) { m.clock_position(530); });
    rejection(version, "near raster/HDMA", [](Machine& m) { m.clock_position(1100); });
    rejection(version, "near line end", [](Machine& m) { m.clock_position(1350); });
    rejection(version, "pending hardware math", [](Machine& m) {
        m.bus.write_byte(0x4202, 7); m.bus.write_byte(0x4203, 9);
    });
    rejection(version, "pending DMA", [](Machine& m) {
        m.bus.write_byte(0x4300, 8); m.bus.write_byte(0x4301, 0);
        m.bus.write_byte(0x4302, 0); m.bus.write_byte(0x4303, 1); m.bus.write_byte(0x4304, 0x7e);
        m.bus.write_byte(0x4305, 1); m.bus.write_byte(0x4306, 0); m.bus.write_byte(0x420b, 1);
    });
    rejection(version, "imminent H-IRQ", [](Machine& m) {
        m.bus.write_byte(0x4207, 16); m.bus.write_byte(0x4208, 0); m.bus.write_byte(0x4200, 0x10);
    });
    rejection(version, "pending H-IRQ", [](Machine& m) {
        m.bus.write_byte(0x4207, 16); m.bus.write_byte(0x4208, 0); m.bus.write_byte(0x4200, 0x10);
        m.bus.advance_master_clocks_with_refresh(40);
    });
    rejection(version, "pending NMI", [](Machine& m) {
        m.bus.write_byte(0x4200, 0x80);
        m.bus.advance_cpu_cycles(225 * 1364 / 6);
    });
}
void enhanced_boundaries(eb::GameVersion version) {
    for (unsigned target : {1000u, 139900u, 140000u}) {
        try {
            Pair pair(version, true);
            pair.configure([&](Machine& m) { m.prime_entity_budget(target); });
            const auto timing = pair.native->cpu.timing_snapshot();
            require(timing.entity_update_active, "Primed entity scope was lost");
            const bool crosses_threshold = timing.entity_update_master_clocks < 140000 &&
                                           timing.entity_update_master_clocks + 448 >= 140000;
            pair.advance(16, crosses_threshold ? 1 : 16, !crosses_threshold);
        } catch (const std::exception& error) {
            throw std::runtime_error(std::string(version == eb::GameVersion::US ? "US" : "JP") +
                " enhanced target=" + std::to_string(target) + ": " + error.what());
        }
    }
    // An unaligned-D batch costs 490 raw clocks, so repeated scaled batches
    // carry two, four, then six clocks into the next batch. Compare the actual
    // APU clock slices as well as the final integer remainder.
    try {
        Pair pair(version, true);
        pair.configure([](Machine& m) {
            m.prime_entity_budget(140000);
            m.checkpoint(7, 0x1de2);
        });
        for (unsigned batch = 0; batch < 3; ++batch) pair.advance(16, 16, true);
        require(pair.native->cpu.timing_snapshot().extra_budget_clock_remainder == 6,
                "Scaled native batches lost their fractional clock carry");
    } catch (const std::exception& error) {
        throw std::runtime_error(std::string(version == eb::GameVersion::US ? "US" : "JP") +
                                 " enhanced fractional carry: " + error.what());
    }
    try {
        Pair pair(version, true);
        pair.configure([&](Machine& m) {
            m.prime_entity_budget(140000);
            const auto& queue = eb::source_profile(version).dma_queue;
            m.bus.work_ram[queue.write_index] = std::uint8_t(m.bus.work_ram[queue.last_completed_index] + 1);
        });
        const auto before = pair.native->bus.master_clocks();
        pair.advance(16, 16, true);
        require(pair.native->bus.master_clocks() - before == 448,
                "Pending graphics queue incorrectly enabled accelerated native timing");
    } catch (const std::exception& error) {
        throw std::runtime_error(std::string(version == eb::GameVersion::US ? "US" : "JP") +
                                 " enhanced pending graphics queue: " + error.what());
    }
}
} // namespace
int main() {
    try {
        admission_matrix();
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            rejections(version);
            enhanced_boundaries(version);
        }
        std::cout << "PASS " << cases << " native gameplay comparisons; " << admissions << " admitted batches and "
                  << declines << " bounded/no-op/fallback cases match legacy CPU, private hardware, memory and audio\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n'; return 1;
    }
}
