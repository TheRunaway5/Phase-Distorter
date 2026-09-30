// Native RAM work may skip instruction retirements only before the hardware's
// next observable event. Set up the real scheduler through public operations;
// the audit helper snapshots private latches without consuming them.
#include "eb/snes_bus.hpp"
#include "runtime_state_audit.hpp"

#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <tuple>
#include <vector>

namespace {
unsigned checks = 0;

void check(bool condition, const char* message) {
    ++checks;
    if (!condition)
        throw std::runtime_error(message);
}

std::unique_ptr<eb::SnesBus> make_bus(eb::GameVersion version) {
    return std::make_unique<eb::SnesBus>(std::vector<std::uint8_t>(0x300000), version);
}

auto controls(const eb::SnesBus& bus) {
    // bus_controls returns references. Copy their values so a changed latch
    // cannot silently change the supposed before-state as well.
    return std::apply([](const auto&... values) { return std::make_tuple(values...); },
                      eb::RuntimeStateAudit::bus_controls(bus));
}

void budget_is_unchanged(eb::SnesBus& bus, unsigned expected) {
    const auto before = controls(bus);
    const auto frames = bus.completed_frames;
    check(bus.native_execution_budget() == expected, "Unexpected native execution deadline");
    check(bus.native_execution_budget() == expected, "Repeated deadline query changed its result");
    check(before == controls(bus) && frames == bus.completed_frames, "Deadline query changed hardware state");
}

void reach_line(eb::SnesBus& bus, unsigned line) {
    // Independent of the budget under test. This public path omits refresh
    // pauses but still runs refresh/raster events and all peripheral clocks.
    while (bus.scanline_index() != line)
        bus.advance_cpu_cycles(1);
}

void raster_deadlines(eb::GameVersion version) {
    auto bus = make_bus(version);
    budget_is_unchanged(*bus, 24); // Line-zero HDMA initialization.
    bus->advance_master_clocks_with_refresh(23);
    budget_is_unchanged(*bus, 1);
    bus->advance_master_clocks_with_refresh(1);
    budget_is_unchanged(*bus, 514); // First refresh is at master clock 538.

    bus->advance_master_clocks_with_refresh(513);
    budget_is_unchanged(*bus, 1);
    const auto before_refresh = bus->master_clocks();
    bus->advance_master_clocks_with_refresh(1);
    check(bus->master_clocks() == before_refresh + 41 && bus->scanline_clock() == 578,
          "Refresh boundary did not insert its 40-clock pause");
    budget_is_unchanged(*bus, 534);

    bus->advance_master_clocks_with_refresh(533);
    budget_is_unchanged(*bus, 1);
    bus->advance_master_clocks_with_refresh(1);
    budget_is_unchanged(*bus, 252); // Line-zero HDMA point has passed.
    bus->advance_master_clocks_with_refresh(251);
    budget_is_unchanged(*bus, 1);
    bus->advance_master_clocks_with_refresh(1);
    check(bus->scanline_index() == 1 && bus->scanline_clock() == 0, "Scanline did not advance at its deadline");
    budget_is_unchanged(*bus, 534); // Refresh phase differs on the next line.

    bus->native_framebuffer.fill(0x12345678);
    bus->advance_master_clocks_with_refresh(534); // Includes this line's refresh pause.
    bus->advance_master_clocks_with_refresh(537);
    check(bus->scanline_clock() == 1111 && bus->native_framebuffer[0] == 0x12345678,
          "Visible row rendered before its deadline");
    budget_is_unchanged(*bus, 1);
    bus->advance_master_clocks_with_refresh(1);
    check(bus->native_framebuffer[0] == 0xff000000, "Visible render did not run at its deadline");
    budget_is_unchanged(*bus, 252);

    reach_line(*bus, 225);
    while (bus->scanline_clock() < 1100)
        bus->advance_cpu_cycles(1);
    budget_is_unchanged(*bus, 1364 - bus->scanline_clock());
}

void horizontal_irq(eb::GameVersion version) {
    auto bus = make_bus(version);
    bus->advance_master_clocks_with_refresh(24);
    bus->write_byte(0x4207, 8); // H timer is in four-master-clock units.
    bus->write_byte(0x4208, 0);
    bus->write_byte(0x4200, 0x10);
    budget_is_unchanged(*bus, 9);
    bus->advance_master_clocks_with_refresh(8);
    check(!bus->irq_pending(), "H-IRQ asserted at equality instead of after it");
    budget_is_unchanged(*bus, 1);
    bus->advance_master_clocks_with_refresh(1);
    check(bus->irq_pending(), "H-IRQ did not assert one clock after equality");
    budget_is_unchanged(*bus, 0);
    check(bus->read_byte(0x4211) & 0x80, "Deadline query consumed the pending IRQ");
    budget_is_unchanged(*bus, 505);

    bus = make_bus(version);
    bus->advance_master_clocks_with_refresh(24);
    bus->write_byte(0x4207, 8);
    bus->write_byte(0x4208, 0);
    bus->write_byte(0x4209, 1);
    bus->write_byte(0x420a, 0);
    bus->write_byte(0x4200, 0x30);
    budget_is_unchanged(*bus, 514); // The H/V timer's vertical condition is false.
    reach_line(*bus, 1);
    bus->advance_master_clocks_with_refresh(24 - bus->scanline_clock());
    budget_is_unchanged(*bus, 9);
    bus->advance_master_clocks_with_refresh(9);
    check(bus->irq_pending(), "H/V-IRQ did not assert on its selected line");
    budget_is_unchanged(*bus, 0);

    bus = make_bus(version);
    bus->write_byte(0x4207, 0);
    bus->write_byte(0x4208, 0);
    bus->write_byte(0x4200, 0x10);
    budget_is_unchanged(*bus, 1);
    bus->advance_master_clocks_with_refresh(1);
    check(bus->irq_pending(), "H=0 timer missed the first clock of the line");
}

void hdma_deadlines(eb::GameVersion version) {
    auto bus = make_bus(version);
    bus->work_ram[0x100] = 0x81;
    bus->work_ram[0x101] = 0x0f;
    bus->work_ram[0x102] = 0;
    bus->write_byte(0x4300, 0);
    bus->write_byte(0x4301, 0); // Change INIDISP at the line's HDMA point.
    bus->write_byte(0x4302, 0);
    bus->write_byte(0x4303, 1);
    bus->write_byte(0x4304, 0x7e);
    bus->write_byte(0x420c, 1);
    bus->advance_master_clocks_with_refresh(23);
    budget_is_unchanged(*bus, 1);
    check(bus->ppu_registers()[0] == 0x80, "HDMA transferred before initialization");
    bus->advance_master_clocks_with_refresh(1);
    budget_is_unchanged(*bus, 0);
    const auto init_debt = bus->take_dma_clocks();
    check(init_debt == 26, "HDMA initialization debt was changed or consumed");
    bus->advance_master_clocks_with_refresh(init_debt);
    while (bus->scanline_clock() < 600)
        bus->advance_cpu_cycles(1);
    bus->advance_master_clocks_with_refresh(1111 - bus->scanline_clock());
    budget_is_unchanged(*bus, 1);
    check(bus->ppu_registers()[0] == 0x80, "HDMA transferred before the line deadline");
    bus->advance_master_clocks_with_refresh(1);
    check(bus->ppu_registers()[0] == 0x0f, "HDMA did not transfer at the line deadline");
    budget_is_unchanged(*bus, 0);
    check(bus->take_dma_clocks() == 34, "Deadline query consumed line HDMA debt");
    budget_is_unchanged(*bus, 252);
}

void pending_work(eb::GameVersion version) {
    auto bus = make_bus(version);
    bus->write_byte(0x4200, 0x80);
    reach_line(*bus, 225);
    budget_is_unchanged(*bus, 0);
    check(bus->take_nmi(), "Deadline query consumed the pending NMI edge");
    check(bus->native_execution_budget() > 0, "Latched vblank alone unnecessarily blocks a native batch");

    bus = make_bus(version);
    bus->write_byte(0x4209, 1);
    bus->write_byte(0x420a, 0);
    bus->write_byte(0x4200, 0x20);
    reach_line(*bus, 1);
    check(bus->irq_pending(), "Vertical IRQ did not assert at the line transition");
    budget_is_unchanged(*bus, 0);

    bus = make_bus(version);
    bus->work_ram[0x100] = 0x80;
    bus->write_byte(0x4300, 0);
    bus->write_byte(0x4301, 0);
    bus->write_byte(0x4302, 0);
    bus->write_byte(0x4303, 1);
    bus->write_byte(0x4304, 0x7e);
    bus->write_byte(0x4305, 1);
    bus->write_byte(0x4306, 0);
    bus->write_byte(0x420b, 1);
    budget_is_unchanged(*bus, 0);
    check(bus->take_dma_clocks() == 24, "Deadline query consumed DMA stall debt");
    budget_is_unchanged(*bus, 24);

    bus = make_bus(version);
    bus->write_byte(0x4202, 2);
    bus->write_byte(0x4203, 3);
    budget_is_unchanged(*bus, 0);
    bus->advance_master_clocks_with_refresh(48);
    check(bus->read_byte(0x4216) == 6, "Hardware multiply did not finish normally");
    budget_is_unchanged(*bus, 490);
    bus->write_byte(0x4204, 7);
    bus->write_byte(0x4205, 0);
    bus->write_byte(0x4206, 2);
    budget_is_unchanged(*bus, 0);
    bus->advance_master_clocks_with_refresh(96);
    check(bus->read_byte(0x4214) == 3 && bus->read_byte(0x4216) == 1,
          "Hardware division did not finish normally");
    budget_is_unchanged(*bus, 394);
}

void autojoy_completion(eb::GameVersion version) {
    auto bus = make_bus(version);
    bus->set_buttons(0xa000);
    bus->write_byte(0x4200, 1);
    reach_line(*bus, 228); // 4,092 clocks into the 4,224-clock automatic read.
    check(bus->scanline_clock() == 0 && (bus->read_byte(0x4212) & 1), "Auto-joypad fixture missed its active read");
    budget_is_unchanged(*bus, 132);
    bus->advance_master_clocks_with_refresh(131);
    budget_is_unchanged(*bus, 1);
    check(bus->read_byte(0x4212) & 1, "Auto-joypad completed before its deadline");
    bus->advance_master_clocks_with_refresh(1);
    check(!(bus->read_byte(0x4212) & 1) && bus->read_byte(0x4218) == 0 && bus->read_byte(0x4219) == 0xa0,
          "Auto-joypad completion did not latch the controller at its deadline");
    check(bus->native_execution_budget() > 1, "Completed auto-joypad read left a stale deadline");
}

void short_scanline(eb::GameVersion version, bool interlace) {
    auto bus = make_bus(version);
    bus->write_byte(0x2133, interlace ? 1 : 0);
    unsigned frames = 0;
    bus->on_presentation_frame = [&](auto, auto, auto) { ++frames; };
    while (!bus->completed_frames)
        bus->advance_cpu_cycles(1);
    check(frames == 1, "Frame transition did not deliver its observer");
    reach_line(*bus, 240);
    while (bus->scanline_clock() < 600)
        bus->advance_cpu_cycles(1);
    bus->advance_master_clocks_with_refresh(1300 - bus->scanline_clock());
    const unsigned remaining = interlace ? 64 : 60;
    budget_is_unchanged(*bus, remaining);
    bus->advance_master_clocks_with_refresh(remaining - 1);
    budget_is_unchanged(*bus, 1);
    bus->advance_master_clocks_with_refresh(1);
    check(bus->scanline_index() == 241 && bus->scanline_clock() == 0, "Odd-frame line ended at the wrong clock");
    check(frames == 1, "Deadline query or line transition delivered an extra frame");
}

void observers(eb::GameVersion version) {
    auto bus = make_bus(version);
    unsigned observations = 0;
    bus->advance_audio_master_clocks = [&](auto) { ++observations; };
    bus->on_presentation_frame = [&](auto, auto, auto) { ++observations; };
    budget_is_unchanged(*bus, 24);
    const auto hook = [&](unsigned, std::uint8_t value) { ++observations; return value; };
    bus->debug_read_wram = hook;
    budget_is_unchanged(*bus, 0);
    bus->debug_read_wram = {};
    bus->debug_write_wram = hook;
    budget_is_unchanged(*bus, 0);
    bus->debug_write_wram = {};
    bus->debug_read_rom = hook;
    budget_is_unchanged(*bus, 0);
    bus->debug_read_rom = {};
#ifdef EB_GAMEPLAY_AUDIT
    bus->observe_bus_access = [&](auto, auto, auto) { ++observations; };
    budget_is_unchanged(*bus, 0);
    bus->observe_bus_access = {};
#endif
    budget_is_unchanged(*bus, 24);
    check(observations == 0, "Deadline inspection invoked a bus, audio or frame observer");
}
} // namespace

int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            raster_deadlines(version);
            horizontal_irq(version);
            hdma_deadlines(version);
            pending_work(version);
            autojoy_completion(version);
            short_scanline(version, false);
            short_scanline(version, true);
            observers(version);
        }
        std::cout << "PASS " << checks << " native execution budget checks across both regions\n";
    } catch (const std::exception& error) {
        std::cerr << "FAIL: " << error.what() << '\n';
        return 1;
    }
}
