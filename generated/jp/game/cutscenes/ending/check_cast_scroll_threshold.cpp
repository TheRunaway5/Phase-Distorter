// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/check_cast_scroll_threshold.asm
bool resume_ending_check_cast_scroll_threshold(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BB56: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB58: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB59: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BB5A.
    case 0xC4BB5C: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB5D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:8 LDA #0
    case 0xC4BB5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:8 LDA #0
    // Overlapping static entry reached from 0xC4BB5E.
    case 0xC4BB60: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:9 STA @LOCAL00
    case 0xC4BB61: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC4BB63: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:11 ASL
    case 0xC4BB66: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:12 TAX
    case 0xC4BB67: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:13 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4BB68: {
        Instruction step(cpu, 0xBD, 0x000E54u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:14 CMP BG3_Y_POS
    case 0xC4BB6B: {
        Instruction step(cpu, 0xCD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:15 BGT @UNKNOWN1
    case 0xC4BB6E: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:15 BGT @UNKNOWN1
    case 0xC4BB70: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:16 LDA #1
    case 0xC4BB72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:16 LDA #1
    // Overlapping static entry reached from 0xC4BB72.
    case 0xC4BB74: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:17 STA @LOCAL00
    case 0xC4BB75: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/check_cast_scroll_threshold.asm:19 LDA @LOCAL00
    case 0xC4BB77: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:20 END_C_FUNCTION
    case 0xC4BB79: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:20 END_C_FUNCTION
    case 0xC4BB7A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
