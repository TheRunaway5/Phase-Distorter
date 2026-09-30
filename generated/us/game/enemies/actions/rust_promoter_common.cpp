// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/rust_promoter_common.asm
bool resume_battle_actions_rust_promoter_common(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/rust_promoter_common.asm:3 BEGIN_C_FUNCTION
    case 0xC2AA1E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA20: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA21: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA22: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AA23.
    case 0xC2AA25: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA26: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/rust_promoter_common.asm:8 END_STACK_VARS
    case 0xC2AA27: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:9 TAX
    case 0xC2AA28: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:10 STX @LOCAL01
    case 0xC2AA29: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:11 JSR SUCCESS_LUCK80
    case 0xC2AA2B: {
        Instruction step(cpu, 0x20, 0x007C96u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:12 CMP #0
    case 0xC2AA2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:12 CMP #0
    // Overlapping static entry reached from 0xC2AA2E.
    case 0xC2AA30: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:13 BEQ @FAILURE
    case 0xC2AA31: {
        Instruction step(cpu, 0xF0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:14 LDX CURRENT_TARGET
    case 0xC2AA33: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:15 LDA a:battler::ally_or_enemy,X
    case 0xC2AA36: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:16 AND #$00FF
    case 0xC2AA39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2AA39.
    case 0xC2AA3B: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:17 CMP #1
    case 0xC2AA3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:17 CMP #1
    // Overlapping static entry reached from 0xC2AA3C.
    case 0xC2AA3E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:18 BNE @FAILURE
    case 0xC2AA3F: {
        Instruction step(cpu, 0xD0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:19 LDX CURRENT_TARGET
    case 0xC2AA41: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:20 LDA a:battler::id,X
    case 0xC2AA44: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:21 JSR GET_ENEMY_TYPE
    case 0xC2AA47: {
        Instruction step(cpu, 0x20, 0x0069A8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:22 CMP #2
    case 0xC2AA4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:22 CMP #2
    // Overlapping static entry reached from 0xC2AA4A.
    case 0xC2AA4C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:23 BNE @FAILURE
    case 0xC2AA4D: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:24 LDX @LOCAL01
    case 0xC2AA4F: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:25 TXA
    case 0xC2AA51: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:26 JSR FIFTY_PERCENT_VARIANCE
    case 0xC2AA52: {
        Instruction step(cpu, 0x20, 0x006A44u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:27 LDX #$00FF
    case 0xC2AA55: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:27 LDX #$00FF
    // Overlapping static entry reached from 0xC2AA55.
    case 0xC2AA57: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:28 JSR CALC_RESIST_DAMAGE
    case 0xC2AA58: {
        Instruction step(cpu, 0x20, 0x008125u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/rust_promoter_common.asm:29 BRA @RETURN
    case 0xC2AA5B: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2AA5D.
    case 0xC2AA5F: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA60: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2AA5F.
    case 0xC2AA61: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2AA62.
    case 0xC2AA64: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA65: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/rust_promoter_common.asm:31 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2AA67: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/rust_promoter_common.asm:33 END_C_FUNCTION
    case 0xC2AA6B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/rust_promoter_common.asm:33 END_C_FUNCTION
    case 0xC2AA6C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
