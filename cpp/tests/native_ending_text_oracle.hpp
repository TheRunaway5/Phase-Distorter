#pragma once
// Independent source oracle for the CPU-free staff-text scene. This test alone
// runs the frozen CREDITS_SCROLL_FRAME{,-jp}.asm and DECOMP implementations.
// Addresses below were checked in each regional linked earthbound.dbg, rather
// than obtained from the production resource importer or semantic adapter.
#include "eb/native/cutscenes/credits.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace ending_text_reference {
using namespace eb::native::cutscenes;
void require(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
    return bytes[at] | (unsigned(bytes[at + 1]) << 8);
}
unsigned longword(std::span<const std::uint8_t> bytes, unsigned at) {
    return word(bytes, at) | (word(bytes, at + 2) << 16);
}
struct Layout {
    unsigned callback, decomp, font, font_bytes, staff, staff_bytes, palette;
    unsigned rows, row, next, wipe, script, scroll, head, tail, queue, name;
};
Layout reference_layout(eb::GameVersion version) {
    // src/ending/{credits_scroll_frame,initialize_credits_scene}{,-jp}.asm;
    // src/bankconfig/common/bank21.asm places UNKNOWN_E14DE8 after STAFF_TEXT.
    // GAME_STATE+earthbound_playername is a 24-byte buffer in both versions.
    if (version == eb::GameVersion::JP)
        return {0xc0fb8d,0xc419ea,0xe1d2cc,0x800,0xe13596,0xca8,0xe1d6a6,
                0x8176,0xb6c0,0xb6ac,0xb6ae,0xb6b0,0xb6b4,0xb6be,0xb6bc,0x54dc,0x9ab5};
    return {0xc0f41e,0xc41a9e,0xe1e528,0xc00,0xe1413f,0xca9,0xe1e914,
            0x7dfe,0xb4f7,0xb4e3,0xb4e5,0xb4e7,0xb4eb,0xb4f5,0xb4f3,0x5156,0x9801};
}
struct Oracle {
    eb::GameVersion version;
    Layout layout;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    unsigned script_start;
    std::array<std::uint8_t, 2048> canvas{};
    std::uint64_t ticks=0, publications=0, steps=0;
    Oracle(std::span<const std::uint8_t> image, eb::GameVersion region, unsigned script)
        : version(region), layout(reference_layout(region)), bus(std::make_unique<eb::SnesBus>(image, region)),
          cpu(*bus), script_start(script) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        put(layout.script, script); put(layout.script + 2, script >> 16);
        put(layout.wipe, 7);
        bus->work_ram[0x0d] = 0x80;
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8;
    }
    void call(unsigned entry, bool far, unsigned a=0, unsigned x=0, unsigned y=0) {
        const unsigned trampoline = (entry & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline;
        cpu.accumulator = a; cpu.x_index = x; cpu.y_index = y;
        if (far) cpu.execute_instruction<0x22>(entry, 4);
        else cpu.execute_instruction<0x20>(entry & 0xffff, 3);
        unsigned count = 0;
        while (cpu.program_counter != trampoline + (far ? 4 : 3) || cpu.stack_pointer != 0x1fff) {
            if (++count > 3000000)
                throw std::runtime_error("Credits source did not return: " + cpu.describe_registers());
            cpu.step_instruction();
        }
        steps += count;
        require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e,
                "Credits source did not restore the caller's frame");
    }
    std::vector<std::uint8_t> original_font() {
        put(0x1e0e, layout.font); put(0x1e10, layout.font >> 16);
        put(0x1e12, 0); put(0x1e14, 0x7f);
        call(layout.decomp, true);
        return {bus->work_ram.begin() + 0x10000, bus->work_ram.begin() + 0x10000 + layout.font_bytes};
    }
    void tick(std::span<const std::uint8_t> name) {
        require(name.size() <= 24, "Reference name exceeds the source game-state field");
        std::fill_n(bus->work_ram.begin() + layout.name, 25, 0);
        std::copy(name.begin(), name.end(), bus->work_ram.begin() + layout.name);
        call(layout.callback, false);
        ++ticks;
    }
    unsigned pending() const {
        return (word(bus->work_ram, layout.head) - word(bus->work_ram, layout.tail)) & 127;
    }
    bool publish_next() {
        // Consume exactly one source descriptor, as PROCESS_CREDITS_DMA_QUEUE
        // does. Resolve its source bytes now, preserving composition-ring reuse.
        const auto tail = word(bus->work_ram, layout.tail);
        if (tail == word(bus->work_ram, layout.head)) return false;
        const auto record = layout.queue + tail * 9;
        const auto mode = bus->work_ram[record];
        const auto size = word(bus->work_ram, record + 1);
        const auto source = longword(bus->work_ram, record + 3);
        const auto target = word(bus->work_ram, record + 7);
        require(mode == 0 || mode == 3, "Unexpected source text publication mode");
        require(target >= 0x6c00 && (target - 0x6c00) * 2 + size <= canvas.size(),
                "Source text publication escaped the text surface");
        for (unsigned byte = 0; byte < size; ++byte)
            canvas[(target - 0x6c00) * 2 + byte] = bus->read_byte(source + (mode == 0 ? byte : 0));
        put(layout.tail, (tail + 1) & 127);
        ++publications;
        return true;
    }
    void compare(const CreditsTextScene& native) const {
        const auto& state = native.state();
        const auto& ram = bus->work_ram;
        require(native.pending_rows() == pending(), "Pending publication count differs");
        const auto publication=native.next_publication();
        require(bool(publication)==bool(pending()),"Credits foreground descriptor admission differs");
        if(publication) {
            const unsigned record=layout.queue+word(ram,layout.tail)*9;
            const unsigned target=word(ram,record+7)-0x6c00;
            const unsigned source=longword(ram,record+3);
            require(publication->destination_row==target/32&&publication->column==target%32&&
                publication->count*2==word(ram,record+1)&&publication->clear==(ram[record]==3),
                "Credits foreground semantic descriptor differs");
            require(source==(publication->clear?(version==eb::GameVersion::JP?0xc40b34u:0xc40be8u):
                    0x7e0000u+layout.rows+publication->source_row*64),
                    "Credits foreground live-source identity differs");
        }
        require(state.ticks == ticks && state.cursor == longword(ram, layout.script) - script_start,
                "Staff cursor/tick differs from original callback");
        require(state.scroll_position == longword(ram, layout.scroll) &&
                (state.scroll_position >> 16) == word(ram, 0x3b), "Quarter-pixel/source integer scroll differs");
        require(state.next_credit_position == word(ram, layout.next) &&
                state.wipe_threshold == word(ram, layout.wipe) && state.composition_row == word(ram, layout.row),
                "Command spacing, temporary rows or wipe progression differs");
        for (unsigned i = 0; i < 512; ++i)
            require(native.composition_rows()[i] == word(ram, layout.rows + i * 2),
                    "Temporary glyph composition differs");
        for (unsigned i = 0; i < 1024; ++i)
            require(native.tile_canvas()[i] == word(canvas, i * 2), "Published text canvas differs");
        if (version == eb::GameVersion::US)
            require(std::equal(native.converted_player_name().begin(), native.converted_player_name().end(),
                               ram.begin() + 0xb4f9), "US converted name buffer differs");
    }
};

} // namespace ending_text_reference
