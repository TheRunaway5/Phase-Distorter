// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/weaken_shield.asm
bool resume_battle_weaken_shield(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/weaken_shield.asm:3 BEGIN_C_FUNCTION
    case 0xC294CE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC294D0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC294D1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC294D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC294D2.
    case 0xC294D4: {
        Instruction step(cpu, 0xFF, 0x949C5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/weaken_shield.asm:6 END_STACK_VARS
    case 0xC294D5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:7 STZ SHIELD_HAS_NULLIFIED_DAMAGE
    case 0xC294D6: {
        Instruction step(cpu, 0x9C, 0x00AA94u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:7 STZ SHIELD_HAS_NULLIFIED_DAMAGE
    // Overlapping static entry reached from 0xC294D4.
    case 0xC294D8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:8 LDA DAMAGE_IS_REFLECTED
    case 0xC294D9: {
        Instruction step(cpu, 0xAD, 0x00AA96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:9 BEQ @UNKNOWN1
    case 0xC294DC: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:10 JSR SWAP_ATTACKER_WITH_TARGET
    case 0xC294DE: {
        Instruction step(cpu, 0x20, 0x007E8Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:11 LDA CURRENT_TARGET
    case 0xC294E1: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:12 CLC
    case 0xC294E4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:13 ADC #battler::shield_hp
    case 0xC294E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:13 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC294E5.
    case 0xC294E7: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:14 TAX
    case 0xC294E8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC294E9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:16 LDA __BSS_START__,X
    case 0xC294EB: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:17 DEC
    case 0xC294EE: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:18 STA __BSS_START__,X
    case 0xC294EF: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC294F2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:20 AND #$00FF
    case 0xC294F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC294F4.
    case 0xC294F6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:21 BNE @UNKNOWN0
    case 0xC294F7: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:22 LDX CURRENT_TARGET
    case 0xC294F9: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC294FC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:24 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC294FE: {
        Instruction step(cpu, 0x9E, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC29501: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29503: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000099u : 0x007099u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC29503.
    case 0xC29505: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29506: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC29505.
    case 0xC29507: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC29508: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    // Overlapping static entry reached from 0xC29508.
    case 0xC2950A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2950B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/weaken_shield.asm:26 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_OFF
    case 0xC2950D: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/weaken_shield.asm:28 STZ DAMAGE_IS_REFLECTED
    case 0xC29511: {
        Instruction step(cpu, 0x9C, 0x00AA96u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/weaken_shield.asm:30 END_C_FUNCTION
    case 0xC29514: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/weaken_shield.asm:30 END_C_FUNCTION
    case 0xC29515: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
