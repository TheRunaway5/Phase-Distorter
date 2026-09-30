// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/reset_post_battle_stats.asm
bool resume_battle_reset_post_battle_stats(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/reset_post_battle_stats.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BC07: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC09: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC0A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BC0B.
    case 0xC2BC0D: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/reset_post_battle_stats.asm:6 END_STACK_VARS
    case 0xC2BC0E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:7 LDA #0
    case 0xC2BC0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:7 LDA #0
    // Overlapping static entry reached from 0xC2BC0F.
    case 0xC2BC11: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:8 STA @LOCAL00
    case 0xC2BC12: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:9 BRA @UNKNOWN2
    case 0xC2BC14: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:11 LDY #.SIZEOF(battler)
    case 0xC2BC16: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:11 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BC16.
    case 0xC2BC18: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:12 JSL MULT168
    case 0xC2BC19: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:13 TAX
    case 0xC2BC1D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:14 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2BC1E: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:15 AND #$00FF
    case 0xC2BC21: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC2BC21.
    case 0xC2BC23: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:16 BEQ @UNKNOWN1
    case 0xC2BC24: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:17 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2BC26: {
        Instruction step(cpu, 0xBD, 0x00A1BCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:18 AND #$00FF
    case 0xC2BC29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC2BC29.
    case 0xC2BC2B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:19 BNE @UNKNOWN1
    case 0xC2BC2C: {
        Instruction step(cpu, 0xD0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:20 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2BC2E: {
        Instruction step(cpu, 0xBD, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:21 AND #$00FF
    case 0xC2BC31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2BC31.
    case 0xC2BC33: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:22 BNE @UNKNOWN1
    case 0xC2BC34: {
        Instruction step(cpu, 0xD0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:23 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2BC36: {
        Instruction step(cpu, 0xBD, 0x00A1BEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:24 AND #$00FF
    case 0xC2BC39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC2BC39.
    case 0xC2BC3B: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:25 LDY #.SIZEOF(char_struct)
    case 0xC2BC3C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:25 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2BC3C.
    case 0xC2BC3E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:26 JSL MULT168
    case 0xC2BC3F: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:27 CLC
    case 0xC2BC43: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:28 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2BC44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:28 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2BC44.
    case 0xC2BC46: {
        Instruction step(cpu, 0x9C, 0x00E2AAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:29 TAX
    case 0xC2BC47: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BC48: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:30 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2BC46.
    case 0xC2BC49: {
        Instruction step(cpu, 0x20, 0x00139Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:31 STZ a:char_struct::afflictions+6,X
    case 0xC2BC4A: {
        Instruction step(cpu, 0x9E, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:31 STZ a:char_struct::afflictions+6,X
    // Overlapping static entry reached from 0xC2BC49.
    case 0xC2BC4C: {
        Instruction step(cpu, 0x00, 0x00009Eu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:32 STZ a:char_struct::afflictions+4,X
    case 0xC2BC4D: {
        Instruction step(cpu, 0x9E, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:33 STZ a:char_struct::afflictions+3,X
    case 0xC2BC50: {
        Instruction step(cpu, 0x9E, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:34 STZ a:char_struct::afflictions+2,X
    case 0xC2BC53: {
        Instruction step(cpu, 0x9E, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC2BC56: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:37 LDA @LOCAL00
    case 0xC2BC58: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:38 INC
    case 0xC2BC5A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:39 STA @LOCAL00
    case 0xC2BC5B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:41 CMP #TOTAL_PARTY_COUNT
    case 0xC2BC5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:41 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC2BC5D.
    case 0xC2BC5F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/reset_post_battle_stats.asm:42 BCC @UNKNOWN0
    case 0xC2BC60: {
        Instruction step(cpu, 0x90, 0x0000B4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/reset_post_battle_stats.asm:43 END_C_FUNCTION
    case 0xC2BC62: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/reset_post_battle_stats.asm:43 END_C_FUNCTION
    case 0xC2BC63: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
