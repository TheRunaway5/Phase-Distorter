// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/boss_battle_check.asm
bool resume_battle_boss_battle_check(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/boss_battle_check.asm:3 BEGIN_C_FUNCTION
    case 0xC2AB14: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AB16: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AB17: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AB18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AB18.
    case 0xC2AB1A: {
        Instruction step(cpu, 0xFF, 0xACA25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/boss_battle_check.asm:8 END_STACK_VARS
    case 0xC2AB1B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:9 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2AB1C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:9 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2AB1C.
    case 0xC2AB1E: {
        Instruction step(cpu, 0x9F, 0xA01086u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:10 STX @LOCAL01
    case 0xC2AB1F: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    case 0xC2AB21: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    // Overlapping static entry reached from 0xC2AB1E.
    case 0xC2AB22: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:11 LDY #$0000
    // Overlapping static entry reached from 0xC2AB21.
    case 0xC2AB23: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:12 STY @LOCAL00
    case 0xC2AB24: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:13 BRA @BEGIN_LOOP
    case 0xC2AB26: {
        Instruction step(cpu, 0x80, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:15 LDA a:battler::consciousness,X
    case 0xC2AB28: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:16 AND #$00FF
    case 0xC2AB2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2AB2B.
    case 0xC2AB2D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:17 BEQ @NOT_BOSS
    case 0xC2AB2E: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:18 LDA a:battler::ally_or_enemy,X
    case 0xC2AB30: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:19 AND #$00FF
    case 0xC2AB33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2AB33.
    case 0xC2AB35: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:20 CMP #$0001
    case 0xC2AB36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:20 CMP #$0001
    // Overlapping static entry reached from 0xC2AB36.
    case 0xC2AB38: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:21 BNE @NOT_BOSS
    case 0xC2AB39: {
        Instruction step(cpu, 0xD0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:22 LDA a:battler::id,X
    case 0xC2AB3B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:23 LDY #.SIZEOF(enemy_data)
    case 0xC2AB3E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:23 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2AB3E.
    case 0xC2AB40: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:24 JSL MULT168
    case 0xC2AB41: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:25 CLC
    case 0xC2AB45: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:26 ADC #enemy_data::boss
    case 0xC2AB46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000056u : 0x000056u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:26 ADC #enemy_data::boss
    // Overlapping static entry reached from 0xC2AB46.
    case 0xC2AB48: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:27 TAX
    case 0xC2AB49: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:28 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC2AB4A: {
        Instruction step(cpu, 0xBF, 0xD59589u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:29 AND #$00FF
    case 0xC2AB4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC2AB4E.
    case 0xC2AB50: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:30 BEQ @NOT_BOSS
    case 0xC2AB51: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:31 LDA #$0000
    case 0xC2AB53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:31 LDA #$0000
    // Overlapping static entry reached from 0xC2AB53.
    case 0xC2AB55: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:32 BRA @RETURN
    case 0xC2AB56: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:34 LDY @LOCAL00
    case 0xC2AB58: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:35 INY
    case 0xC2AB5A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:36 STY @LOCAL00
    case 0xC2AB5B: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:37 LDX @LOCAL01
    case 0xC2AB5D: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:38 TXA
    case 0xC2AB5F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:39 CLC
    case 0xC2AB60: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:40 ADC #.SIZEOF(battler)
    case 0xC2AB61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:40 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2AB61.
    case 0xC2AB63: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:41 TAX
    case 0xC2AB64: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:42 STX @LOCAL01
    case 0xC2AB65: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:44 CPY #$0020
    case 0xC2AB67: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:44 CPY #$0020
    // Overlapping static entry reached from 0xC2AB67.
    case 0xC2AB69: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:45 BCC @NEXT_ENEMY
    case 0xC2AB6A: {
        Instruction step(cpu, 0x90, 0x0000BCu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:46 LDA #$0001
    case 0xC2AB6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/boss_battle_check.asm:46 LDA #$0001
    // Overlapping static entry reached from 0xC2AB6C.
    case 0xC2AB6E: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/boss_battle_check.asm:48 END_C_FUNCTION
    case 0xC2AB6F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/boss_battle_check.asm:48 END_C_FUNCTION
    case 0xC2AB70: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
