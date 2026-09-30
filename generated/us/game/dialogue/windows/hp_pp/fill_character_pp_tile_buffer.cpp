// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm
bool resume_text_hp_pp_window_fill_character_pp_tile_buffer(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:3 BEGIN_C_FUNCTION
    case 0xC20F26: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F28: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F29: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F2A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC20F2B.
    case 0xC20F2D: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F2E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F2F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:11 STY @VIRTUAL04
    case 0xC20F30: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:11 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC20F2D.
    case 0xC20F31: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:12 STA @VIRTUAL02
    case 0xC20F32: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:12 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC20F31.
    case 0xC20F33: {
        Instruction step(cpu, 0x02, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:13 LDY @PARAM03
    case 0xC20F34: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:14 STY @LOCAL00
    case 0xC20F36: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:15 LDA __BSS_START__ + STATUS_GROUP::CONCENTRATION,X
    case 0xC20F38: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:16 AND #$00FF
    case 0xC20F3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC20F3B.
    case 0xC20F3D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:17 BEQ @CAN_CONCENTRATE
    case 0xC20F3E: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:18 LDA @VIRTUAL02
    case 0xC20F40: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:19 JSR FILL_HP_PP_TILE_BUFFER_X
    case 0xC20F42: {
        Instruction step(cpu, 0x20, 0x000D89u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:20 BRA @RETURN
    case 0xC20F45: {
        Instruction step(cpu, 0x80, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:22 LDA @VIRTUAL04
    case 0xC20F47: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:23 JSR SEPARATE_DECIMAL_DIGITS
    case 0xC20F49: {
        Instruction step(cpu, 0x20, 0x000D3Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:24 LDY @LOCAL00
    case 0xC20F4C: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:25 LDX #1
    case 0xC20F4E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:25 LDX #1
    // Overlapping static entry reached from 0xC20F4E.
    case 0xC20F50: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:26 LDA @VIRTUAL02
    case 0xC20F51: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:27 JSR FILL_HP_PP_TILE_BUFFER
    case 0xC20F53: {
        Instruction step(cpu, 0x20, 0x000DC5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:29 END_C_FUNCTION
    case 0xC20F56: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:29 END_C_FUNCTION
    case 0xC20F57: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
