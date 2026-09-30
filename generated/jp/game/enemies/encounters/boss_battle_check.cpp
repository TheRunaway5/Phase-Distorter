// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/boss_battle_check.asm
bool resume_battle_boss_battle_check(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/boss_battle_check.asm:3 BEGIN_C_FUNCTION
    case 0xC2AAC7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AAC9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AACA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AACB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AACB.
    case 0xC2AACD: {
        Instruction step(cpu, 0xFF, 0xAEA25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AACE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:9 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2AACF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:9 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2AACF.
    case 0xC2AAD1: {
        Instruction step(cpu, 0xA1, 0x000086u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:10 STX @LOCAL01
    case 0xC2AAD2: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:10 STX @LOCAL01
    // Overlapping static entry reached from 0xC2AAD1.
    case 0xC2AAD3: {
        Instruction step(cpu, 0x10, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    case 0xC2AAD4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    // Overlapping static entry reached from 0xC2AAD3.
    case 0xC2AAD5: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    // Overlapping static entry reached from 0xC2AAD4.
    case 0xC2AAD6: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:12 STY @LOCAL00
    case 0xC2AAD7: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:13 BRA @BEGIN_LOOP
    case 0xC2AAD9: {
        Instruction step(cpu, 0x80, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:15 LDA a:battler::consciousness,X
    case 0xC2AADB: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:16 AND #$00FF
    case 0xC2AADE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2AADE.
    case 0xC2AAE0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:17 BEQ @NOT_BOSS
    case 0xC2AAE1: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:18 LDA a:battler::ally_or_enemy,X
    case 0xC2AAE3: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:19 AND #$00FF
    case 0xC2AAE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2AAE6.
    case 0xC2AAE8: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:20 CMP #$0001
    case 0xC2AAE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:20 CMP #$0001
    // Overlapping static entry reached from 0xC2AAE9.
    case 0xC2AAEB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:21 BNE @NOT_BOSS
    case 0xC2AAEC: {
        Instruction step(cpu, 0xD0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:22 LDA a:battler::id,X
    case 0xC2AAEE: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:23 LDY #.SIZEOF(enemy_data)
    case 0xC2AAF1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:23 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2AAF1.
    case 0xC2AAF3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:24 JSL MULT168
    case 0xC2AAF4: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:25 CLC
    case 0xC2AAF8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:26 ADC #enemy_data::boss
    case 0xC2AAF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000045u : 0x000045u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:26 ADC #enemy_data::boss
    // Overlapping static entry reached from 0xC2AAF9.
    case 0xC2AAFB: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:27 TAX
    case 0xC2AAFC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:28 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC2AAFD: {
        Instruction step(cpu, 0xBF, 0xD5A440u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:29 AND #$00FF
    case 0xC2AB01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2AB01.
    case 0xC2AB03: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:30 BEQ @NOT_BOSS
    case 0xC2AB04: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:31 LDA #$0000
    case 0xC2AB06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:31 LDA #$0000
    // Overlapping static entry reached from 0xC2AB06.
    case 0xC2AB08: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:32 BRA @RETURN
    case 0xC2AB09: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:34 LDY @LOCAL00
    case 0xC2AB0B: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:35 INY
    case 0xC2AB0D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:36 STY @LOCAL00
    case 0xC2AB0E: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:37 LDX @LOCAL01
    case 0xC2AB10: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:38 TXA
    case 0xC2AB12: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:39 CLC
    case 0xC2AB13: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:40 ADC #.SIZEOF(battler)
    case 0xC2AB14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:40 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2AB14.
    case 0xC2AB16: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:41 TAX
    case 0xC2AB17: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:42 STX @LOCAL01
    case 0xC2AB18: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:44 CPY #$0020
    case 0xC2AB1A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:44 CPY #$0020
    // Overlapping static entry reached from 0xC2AB1A.
    case 0xC2AB1C: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:45 BCC @NEXT_ENEMY
    case 0xC2AB1D: {
        Instruction step(cpu, 0x90, 0x0000BCu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:46 LDA #$0001
    case 0xC2AB1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:46 LDA #$0001
    // Overlapping static entry reached from 0xC2AB1F.
    case 0xC2AB21: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/boss_battle_check.asm:48 END_C_FUNCTION
    case 0xC2AB22: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/boss_battle_check.asm:48 END_C_FUNCTION
    case 0xC2AB23: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
