// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/cold.asm
bool resume_battle_actions_cold(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/cold.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28B6D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/cold.asm:6 END_STACK_VARS
    case 0xC28B6F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/cold.asm:6 END_STACK_VARS
    case 0xC28B70: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/cold.asm:6 END_STACK_VARS
    case 0xC28B71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/cold.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28B71.
    case 0xC28B73: {
        Instruction step(cpu, 0xFF, 0xFD205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/cold.asm:6 END_STACK_VARS
    case 0xC28B74: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/cold.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28B75: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/cold.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28B73.
    case 0xC28B77: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/cold.asm:8 CMP #0
    case 0xC28B78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/cold.asm:8 CMP #0
    // Overlapping static entry reached from 0xC28B78.
    case 0xC28B7A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/cold.asm:9 BNE @UNKNOWN1
    case 0xC28B7B: {
        Instruction step(cpu, 0xD0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/cold.asm:10 LDX CURRENT_TARGET
    case 0xC28B7D: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/cold.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC28B80: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/cold.asm:12 LDA a:battler::freeze_resist,X
    case 0xC28B82: {
        Instruction step(cpu, 0xBD, 0x000038u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/cold.asm:13 JSR SUCCESS_255
    case 0xC28B85: {
        Instruction step(cpu, 0x20, 0x006BB8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/cold.asm:15 CMP #0
    case 0xC28B88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/cold.asm:15 CMP #0
    // Overlapping static entry reached from 0xC28B88.
    case 0xC28B8A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/cold.asm:16 BEQ @UNKNOWN0
    case 0xC28B8B: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/cold.asm:17 LDY #STATUS_0::COLD
    case 0xC28B8D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/cold.asm:17 LDY #STATUS_0::COLD
    // Overlapping static entry reached from 0xC28B8D.
    case 0xC28B8F: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/cold.asm:18 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC28B90: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/cold.asm:18 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC28B90.
    case 0xC28B92: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/cold.asm:19 LDA CURRENT_TARGET
    case 0xC28B93: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/cold.asm:20 JSR INFLICT_STATUS_BATTLE
    case 0xC28B96: {
        Instruction step(cpu, 0x20, 0x00724Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/cold.asm:22 CMP #0
    case 0xC28B99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/cold.asm:22 CMP #0
    // Overlapping static entry reached from 0xC28B99.
    case 0xC28B9B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/cold.asm:23 BEQ @UNKNOWN0
    case 0xC28B9C: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/cold.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_ON
    case 0xC28B9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x006B2Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/cold.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_ON
    // Overlapping static entry reached from 0xC28B9E.
    case 0xC28BA0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/cold.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_ON
    case 0xC28BA1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/cold.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_ON
    case 0xC28BA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/cold.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_ON
    // Overlapping static entry reached from 0xC28BA3.
    case 0xC28BA5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/cold.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_ON
    case 0xC28BA6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/cold.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KAZE_ON
    case 0xC28BA8: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/cold.asm:25 BRA @UNKNOWN1
    case 0xC28BAC: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/cold.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28BAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/cold.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28BAE.
    case 0xC28BB0: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/cold.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28BB1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/cold.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28BB0.
    case 0xC28BB2: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/cold.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28BB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/cold.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28BB3.
    case 0xC28BB5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/cold.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28BB6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/cold.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28BB8: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/cold.asm:29 END_C_FUNCTION
    case 0xC28BBC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/cold.asm:29 END_C_FUNCTION
    case 0xC28BBD: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
