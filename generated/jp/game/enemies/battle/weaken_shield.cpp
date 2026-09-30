// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/weaken_shield.asm
bool resume_battle_weaken_shield(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/weaken_shield.asm:3 BEGIN_C_FUNCTION
    case 0xC29477: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC29479: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC2947A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC2947B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2947B.
    case 0xC2947D: {
        Instruction step(cpu, 0xFF, 0x699C5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC2947E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:7 STZ SHIELD_HAS_NULLIFIED_DAMAGE
    case 0xC2947F: {
        Instruction step(cpu, 0x9C, 0x00AC69u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:7 STZ SHIELD_HAS_NULLIFIED_DAMAGE
    // Overlapping static entry reached from 0xC2947D.
    case 0xC29481: {
        Instruction step(cpu, 0xAC, 0x006BADu, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:8 LDA DAMAGE_IS_REFLECTED
    case 0xC29482: {
        Instruction step(cpu, 0xAD, 0x00AC6Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:8 LDA DAMAGE_IS_REFLECTED
    // Overlapping static entry reached from 0xC29481.
    case 0xC29484: {
        Instruction step(cpu, 0xAC, 0x0036F0u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:9 BEQ @UNKNOWN1
    case 0xC29485: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:10 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC29487: {
        Instruction step(cpu, 0x20, 0x007E21u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:11 LDA CURRENT_TARGET
    case 0xC2948A: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:12 CLC
    case 0xC2948D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:13 ADC #battler::shield_hp
    case 0xC2948E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:13 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC2948E.
    case 0xC29490: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:14 TAX
    case 0xC29491: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC29492: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:16 LDA __BSS_START__,X
    case 0xC29494: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:17 DEC
    case 0xC29497: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:18 STA __BSS_START__,X
    case 0xC29498: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC2949B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:20 AND #$00FF
    case 0xC2949D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2949D.
    case 0xC2949F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:21 BNE @UNKNOWN0
    case 0xC294A0: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:22 LDX CURRENT_TARGET
    case 0xC294A2: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC294A5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:24 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC294A7: {
        Instruction step(cpu, 0x9E, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC294AA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00356Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294AC.
    case 0xC294AE: {
        Instruction step(cpu, 0x35, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294AF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294AE.
    case 0xC294B0: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC294B1.
    case 0xC294B3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294B4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC294B6: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:28 STZ DAMAGE_IS_REFLECTED
    case 0xC294BA: {
        Instruction step(cpu, 0x9C, 0x00AC6Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/weaken_shield.asm:30 END_C_FUNCTION
    case 0xC294BD: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/weaken_shield.asm:30 END_C_FUNCTION
    case 0xC294BE: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
