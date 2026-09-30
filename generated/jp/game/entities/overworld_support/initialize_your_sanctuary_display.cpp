// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/initialize_your_sanctuary_display.asm
bool resume_overworld_initialize_your_sanctuary_display(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B0A9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4B0AB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4B0AC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4B0AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B0AD.
    case 0xC4B0AF: {
        Instruction step(cpu, 0xFF, 0x8C9C5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4B0B0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:7 STZ NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4B0B1: {
        Instruction step(cpu, 0x9C, 0x00B68Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:7 STZ NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    // Overlapping static entry reached from 0xC4B0AF.
    case 0xC4B0B3: {
        Instruction step(cpu, 0xB6, 0x00009Cu, 2u, AddressMode::DirectPageIndexedY);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:8 STZ TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B0B4: {
        Instruction step(cpu, 0x9C, 0x00B68Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:8 STZ TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    // Overlapping static entry reached from 0xC4B0B3.
    case 0xC4B0B5: {
        Instruction step(cpu, 0x8E, 0x009CB6u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:9 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B0B7: {
        Instruction step(cpu, 0x9C, 0x00B690u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:9 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    // Overlapping static entry reached from 0xC4B0B5.
    case 0xC4B0B8: {
        Instruction step(cpu, 0x90, 0x0000B6u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:10 STZ LOADED_ANIMATED_TILE_COUNT
    case 0xC4B0BA: {
        Instruction step(cpu, 0x9C, 0x0047F8u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:11 STZ MAP_PALETTE_ANIMATION_LOADED
    case 0xC4B0BD: {
        Instruction step(cpu, 0x9C, 0x0047FAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:12 LDA #0
    case 0xC4B0C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4B0C0.
    case 0xC4B0C2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:13 STA @LOCAL00
    case 0xC4B0C3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:14 BRA @UNKNOWN1
    case 0xC4B0C5: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:16 ASL
    case 0xC4B0C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:17 TAX
    case 0xC4B0C8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:18 STZ LOADED_YOUR_SANCTUARY_LOCATIONS,X
    case 0xC4B0C9: {
        Instruction step(cpu, 0x9E, 0x00B692u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:19 LDA @LOCAL00
    case 0xC4B0CC: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:20 INC
    case 0xC4B0CE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:21 STA @LOCAL00
    case 0xC4B0CF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:23 CMP #8
    case 0xC4B0D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:23 CMP #8
    // Overlapping static entry reached from 0xC4B0D1.
    case 0xC4B0D3: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:24 BCC @UNKNOWN0
    case 0xC4B0D4: {
        Instruction step(cpu, 0x90, 0x0000F1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B0D6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:26 LDA #$10
    case 0xC4B0D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x008D10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    case 0xC4B0DA: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B0D8.
    case 0xC4B0DB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B0DB.
    case 0xC4B0DC: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC4B0DD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:29 END_C_FUNCTION
    case 0xC4B0DF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:29 END_C_FUNCTION
    case 0xC4B0E0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
