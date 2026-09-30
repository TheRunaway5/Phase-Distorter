#include "eb/map_strip_service.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/map_strip.hpp"
#include "eb/snes_bus.hpp"
#include <stdexcept>

namespace eb {
bool try_native_map_strip(MainCpu65816 &cpu, SnesBus &bus) {
    unsigned pc = cpu.program_counter;
    const unsigned bank = pc >> 16;
    if (bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (pc & 0x8000)))
        pc |= 0xc00000;
    const bool jp = cpu.game_version == GameVersion::JP;
    const bool row = pc == (jp ? 0xc00f16u : 0xc00f04u);
    if (!row && pc != (jp ? 0xc010ceu : 0xc010bcu))
        return false;
    if (cpu.game_version != bus.game_version() || cpu.emulation_mode || cpu.data_bank != 0x7e ||
        cpu.direct_page > 0x1fde ||
        (cpu.status_register &
         (MainCpu65816::Accumulator8Bit | MainCpu65816::Index8Bit | MainCpu65816::Decimal)))
        throw std::runtime_error("Native map preparation requires its binary map loader context");
    const auto word = [&](unsigned at) {
        return bus.work_ram.at(at) | unsigned(bus.work_ram.at(at + 1)) << 8;
    };
    const auto store = [&](unsigned at, unsigned value) {
        cpu.write_byte(0x7e0000 | at, value);
        cpu.write_byte(0x7e0000 | (at + 1), value >> 8);
    };
    const unsigned d = cpu.direct_page;
    if (word(d + 0x14) != 0 || word(d + 0x02) != 0)
        throw std::runtime_error("Native map preparation entered a partially executed source loop");
    const auto first = std::uint16_t(word(d + 0x20)), fixed = std::uint16_t(word(d + 0x04));
    const unsigned base = word(d + 0x1e), foreground = word(d + 0x1c);
    const unsigned slots = row ? 64 : 32;
    if (base > 0x10000 - slots * 2 || foreground > 0x10000 - slots * 2)
        throw std::runtime_error("Native map preparation received a wrapping heap buffer");
    const auto arrangement = [&](unsigned x, unsigned y) {
        const unsigned block = word(0xf000 + (((y / 4) & 15) * 16 + ((x / 4) & 15)) * 2);
        if (block >= 1024)
            throw std::out_of_range("Native map preparation received an invalid loaded block");
        return block * 16 + (y & 3) * 4 + (x & 3);
    };
    const auto strip =
        native::prepare_map_strip(row ? native::MapStripAxis::Row : native::MapStripAxis::Column, first,
                                  fixed, [&](std::uint16_t x, std::uint16_t y) {
                                      return std::uint16_t(word(0x18000 + arrangement(x, y) * 2));
                                  });
    for (const auto &tile : strip.writes) {
        store(base + tile.destination * 2, tile.base);
        store(foreground + tile.destination * 2, tile.foreground);
    }
    const auto last_tile = std::uint16_t(strip.next_tile - 1);
    const unsigned last_arrangement = row ? arrangement(last_tile, fixed) : arrangement(fixed, last_tile);
    const unsigned next_arrangement = last_arrangement + (row ? 1 : 4);
    const auto &last = strip.writes.back();
    store(d + 0x12, last.foreground);
    store(d + 0x14, strip.writes.size());
    store(d + 0x16, strip.next_destination);
    store(d + 0x18, next_arrangement);
    store(d + 0x20, strip.next_tile);
    store(d + 0x02, strip.writes.size());
    cpu.accumulator = strip.writes.size();
    cpu.x_index = strip.next_destination;
    cpu.y_index = row ? last.destination * 2 : next_arrangement;
    // Final count comparison is equal with carry. Valid arrangement indices
    // stay below16384, so the last block-index addition cannot set overflow.
    cpu.status_register &= ~(MainCpu65816::Negative | MainCpu65816::Overflow);
    cpu.status_register |= MainCpu65816::Carry | MainCpu65816::Zero;
    cpu.program_counter =
        (cpu.program_counter & 0xff0000) | (row ? (jp ? 0x0f22 : 0x0f10) : (jp ? 0x10da : 0x10c8));
    return true;
}
} // namespace eb
