// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/initialize_your_sanctuary_display.asm
bool resume_overworld_initialize_your_sanctuary_display(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4DE98: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4DE9A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4DE9B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4DE9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DE9C.
    case 0xC4DE9E: {
        Instruction step(cpu, 0xFF, 0xB89C5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:6 END_STACK_VARS
    case 0xC4DE9F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:7 STZ NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4DEA0: {
        Instruction step(cpu, 0x9C, 0x00B4B8u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:7 STZ NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    // Overlapping static entry reached from 0xC4DE9E.
    case 0xC4DEA2: {
        Instruction step(cpu, 0xB4, 0x00009Cu, 2u, AddressMode::DirectPageIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:8 STZ TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4DEA3: {
        Instruction step(cpu, 0x9C, 0x00B4BAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:8 STZ TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    // Overlapping static entry reached from 0xC4DEA2.
    case 0xC4DEA4: {
        Instruction step(cpu, 0xBA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_x();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:8 STZ TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    // Overlapping static entry reached from 0xC4DEA4.
    case 0xC4DEA5: {
        Instruction step(cpu, 0xB4, 0x00009Cu, 2u, AddressMode::DirectPageIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:9 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4DEA6: {
        Instruction step(cpu, 0x9C, 0x00B4BCu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:9 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    // Overlapping static entry reached from 0xC4DEA5.
    case 0xC4DEA7: {
        Instruction step(cpu, 0xBC, 0x009CB4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:10 STZ LOADED_ANIMATED_TILE_COUNT
    case 0xC4DEA9: {
        Instruction step(cpu, 0x9C, 0x004472u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:10 STZ LOADED_ANIMATED_TILE_COUNT
    // Overlapping static entry reached from 0xC4DEA7.
    case 0xC4DEAA: {
        Instruction step(cpu, 0x72, 0x000044u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:11 STZ MAP_PALETTE_ANIMATION_LOADED
    case 0xC4DEAC: {
        Instruction step(cpu, 0x9C, 0x004474u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:12 LDA #0
    case 0xC4DEAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4DEAF.
    case 0xC4DEB1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:13 STA @LOCAL00
    case 0xC4DEB2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:14 BRA @UNKNOWN1
    case 0xC4DEB4: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:16 ASL
    case 0xC4DEB6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:17 TAX
    case 0xC4DEB7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:18 STZ LOADED_YOUR_SANCTUARY_LOCATIONS,X
    case 0xC4DEB8: {
        Instruction step(cpu, 0x9E, 0x00B4BEu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:19 LDA @LOCAL00
    case 0xC4DEBB: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:20 INC
    case 0xC4DEBD: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:21 STA @LOCAL00
    case 0xC4DEBE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:23 CMP #8
    case 0xC4DEC0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:23 CMP #8
    // Overlapping static entry reached from 0xC4DEC0.
    case 0xC4DEC2: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:24 BCC @UNKNOWN0
    case 0xC4DEC3: {
        Instruction step(cpu, 0x90, 0x0000F1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DEC5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:26 LDA #$10
    case 0xC4DEC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x008D10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    case 0xC4DEC9: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DEC7.
    case 0xC4DECA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:27 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DECA.
    case 0xC4DECB: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_your_sanctuary_display.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC4DECC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:29 END_C_FUNCTION
    case 0xC4DECE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_your_sanctuary_display.asm:29 END_C_FUNCTION
    case 0xC4DECF: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
