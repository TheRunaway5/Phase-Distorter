// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/distract.asm
bool resume_battle_actions_distract(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/distract.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28CF1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/distract.asm:6 END_STACK_VARS
    case 0xC28CF3: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/distract.asm:6 END_STACK_VARS
    case 0xC28CF4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/distract.asm:6 END_STACK_VARS
    case 0xC28CF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/distract.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28CF5.
    case 0xC28CF7: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/distract.asm:6 END_STACK_VARS
    case 0xC28CF8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/distract.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28CF9: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/distract.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28CF7.
    case 0xC28CFB: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/distract.asm:8 CMP #0
    case 0xC28CFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/distract.asm:8 CMP #0
    // Overlapping static entry reached from 0xC28CFC.
    case 0xC28CFE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/distract.asm:9 BNE @UNKNOWN1
    case 0xC28CFF: {
        Instruction step(cpu, 0xD0, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/distract.asm:10 JSR SUCCESS_LUCK40
    case 0xC28D01: {
        Instruction step(cpu, 0x20, 0x008CD8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/distract.asm:11 CMP #0
    case 0xC28D04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/distract.asm:11 CMP #0
    // Overlapping static entry reached from 0xC28D04.
    case 0xC28D06: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/distract.asm:12 BEQ @UNKNOWN0
    case 0xC28D07: {
        Instruction step(cpu, 0xF0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/distract.asm:13 LDX CURRENT_TARGET
    case 0xC28D09: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/distract.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC28D0C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/distract.asm:15 LDA a:battler::paralysis_resist,X
    case 0xC28D0E: {
        Instruction step(cpu, 0xBD, 0x000037u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/distract.asm:16 JSR SUCCESS_255
    case 0xC28D11: {
        Instruction step(cpu, 0x20, 0x006AF7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/distract.asm:18 CMP #0
    case 0xC28D14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/distract.asm:18 CMP #0
    // Overlapping static entry reached from 0xC28D14.
    case 0xC28D16: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/distract.asm:19 BEQ @UNKNOWN0
    case 0xC28D17: {
        Instruction step(cpu, 0xF0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/distract.asm:20 LDA CURRENT_TARGET
    case 0xC28D19: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/distract.asm:21 CLC
    case 0xC28D1C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/distract.asm:22 ADC #battler::afflictions + STATUS_GROUP::CONCENTRATION
    case 0xC28D1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/distract.asm:22 ADC #battler::afflictions + STATUS_GROUP::CONCENTRATION
    // Overlapping static entry reached from 0xC28D1D.
    case 0xC28D1F: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/distract.asm:23 TAX
    case 0xC28D20: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/distract.asm:24 LDA __BSS_START__,X
    case 0xC28D21: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/distract.asm:25 AND #$00FF
    case 0xC28D24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/distract.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC28D24.
    case 0xC28D26: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/distract.asm:26 BNE @UNKNOWN0
    case 0xC28D27: {
        Instruction step(cpu, 0xD0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/distract.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC28D29: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/distract.asm:28 LDA #STATUS_4::CANT_CONCENTRATE4
    case 0xC28D2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x009D04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/distract.asm:29 STA __BSS_START__,X
    case 0xC28D2D: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/distract.asm:29 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC28D2B.
    case 0xC28D2E: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/distract.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC28D30: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/distract.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_ON
    case 0xC28D32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Du : 0x00311Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/distract.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_ON
    // Overlapping static entry reached from 0xC28D32.
    case 0xC28D34: {
        Instruction step(cpu, 0x31, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/distract.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_ON
    case 0xC28D35: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/distract.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_ON
    // Overlapping static entry reached from 0xC28D34.
    case 0xC28D36: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/distract.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_ON
    case 0xC28D37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/distract.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_ON
    // Overlapping static entry reached from 0xC28D37.
    case 0xC28D39: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/distract.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_ON
    case 0xC28D3A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/distract.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_ON
    // Overlapping static entry reached from 0xC28DB4.
    case 0xC28D3B: {
        Instruction step(cpu, 0x10, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/distract.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_ON
    case 0xC28D3C: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/distract.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_FUUIN_ON
    // Overlapping static entry reached from 0xC28D3B.
    case 0xC28D3D: {
        Instruction step(cpu, 0xFF, 0x80C1D9u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/distract.asm:32 BRA @UNKNOWN1
    case 0xC28D40: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/distract.asm:32 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC28D3D.
    case 0xC28D41: {
        Instruction step(cpu, 0x0E, 0x00CBA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/distract.asm:34 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28D42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/distract.asm:34 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28D42.
    case 0xC28D44: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/distract.asm:34 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28D45: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/distract.asm:34 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28D47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/distract.asm:34 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28D47.
    case 0xC28D49: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/distract.asm:34 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28D4A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/distract.asm:34 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28D4C: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/distract.asm:36 END_C_FUNCTION
    case 0xC28D50: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/distract.asm:36 END_C_FUNCTION
    case 0xC28D51: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
