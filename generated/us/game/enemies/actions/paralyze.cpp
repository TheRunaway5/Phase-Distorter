// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/paralyze.asm
bool resume_battle_actions_paralyze(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/paralyze.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28A92: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/paralyze.asm:6 END_STACK_VARS
    case 0xC28A94: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/paralyze.asm:6 END_STACK_VARS
    case 0xC28A95: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/paralyze.asm:6 END_STACK_VARS
    case 0xC28A96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/paralyze.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28A96.
    case 0xC28A98: {
        Instruction step(cpu, 0xFF, 0xFD205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/paralyze.asm:6 END_STACK_VARS
    case 0xC28A99: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28A9A: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28A98.
    case 0xC28A9C: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:8 CMP #0
    case 0xC28A9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:8 CMP #0
    // Overlapping static entry reached from 0xC28A9D.
    case 0xC28A9F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:9 BNE @UNKNOWN1
    case 0xC28AA0: {
        Instruction step(cpu, 0xD0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:10 JSR SUCCESS_LUCK80
    case 0xC28AA2: {
        Instruction step(cpu, 0x20, 0x007C96u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:11 CMP #0
    case 0xC28AA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:11 CMP #0
    // Overlapping static entry reached from 0xC28AA5.
    case 0xC28AA7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:12 BEQ @UNKNOWN0
    case 0xC28AA8: {
        Instruction step(cpu, 0xF0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:13 LDX CURRENT_TARGET
    case 0xC28AAA: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC28AAD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:15 LDA a:battler::paralysis_resist,X
    case 0xC28AAF: {
        Instruction step(cpu, 0xBD, 0x000037u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:16 JSR SUCCESS_255
    case 0xC28AB2: {
        Instruction step(cpu, 0x20, 0x006BB8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:18 CMP #0
    case 0xC28AB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:18 CMP #0
    // Overlapping static entry reached from 0xC28AB5.
    case 0xC28AB7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:19 BEQ @UNKNOWN0
    case 0xC28AB8: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:20 LDY #STATUS_0::PARALYZED
    case 0xC28ABA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:20 LDY #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC28ABA.
    case 0xC28ABC: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:21 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC28ABD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:21 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC28ABD.
    case 0xC28ABF: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:22 LDA CURRENT_TARGET
    case 0xC28AC0: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:23 JSR INFLICT_STATUS_BATTLE
    case 0xC28AC3: {
        Instruction step(cpu, 0x20, 0x00724Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:25 CMP #0
    case 0xC28AC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:25 CMP #0
    // Overlapping static entry reached from 0xC28AC6.
    case 0xC28AC8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:26 BEQ @UNKNOWN0
    case 0xC28AC9: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralyze.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC28ACB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x006AE0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralyze.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    // Overlapping static entry reached from 0xC28ACB.
    case 0xC28ACD: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/paralyze.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC28ACE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralyze.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC28AD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralyze.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    // Overlapping static entry reached from 0xC28AD0.
    case 0xC28AD2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/paralyze.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC28AD3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/paralyze.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC28AD5: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/paralyze.asm:28 BRA @UNKNOWN1
    case 0xC28AD9: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralyze.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28ADB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralyze.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28ADB.
    case 0xC28ADD: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/paralyze.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28ADE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/paralyze.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28ADD.
    case 0xC28ADF: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralyze.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28AE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralyze.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28AE0.
    case 0xC28AE2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/paralyze.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28AE3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/paralyze.asm:30 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28AE5: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/paralyze.asm:32 END_C_FUNCTION
    case 0xC28AE9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/paralyze.asm:32 END_C_FUNCTION
    case 0xC28AEA: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
