// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/count_chars.asm
bool resume_battle_count_chars(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/count_chars.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BAC5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BAC7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BAC8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BAC9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BACA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BACA.
    case 0xC2BACC: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BACD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/count_chars.asm:7 END_STACK_VARS
    case 0xC2BACE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:8 STA @VIRTUAL04
    case 0xC2BACF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:8 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2BACC.
    case 0xC2BAD0: {
        Instruction step(cpu, 0x04, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/count_chars.asm:9 LDA #$0000
    case 0xC2BAD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC2BAD0.
    case 0xC2BAD2: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/count_chars.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC2BAD1.
    case 0xC2BAD3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/count_chars.asm:10 STA @VIRTUAL02
    case 0xC2BAD4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:11 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2BAD6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/count_chars.asm:11 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2BAD6.
    case 0xC2BAD8: {
        Instruction step(cpu, 0x9F, 0x3380A8u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:12 TAY
    case 0xC2BAD9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/count_chars.asm:13 BRA @UNKNOWN2
    case 0xC2BADA: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/count_chars.asm:15 LDA a:battler::consciousness,X
    case 0xC2BADC: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:16 AND #$00FF
    case 0xC2BADF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2BADF.
    case 0xC2BAE1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/count_chars.asm:17 BEQ @UNKNOWN1
    case 0xC2BAE2: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/count_chars.asm:18 LDA a:battler::ally_or_enemy,X
    case 0xC2BAE4: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:19 AND #$00FF
    case 0xC2BAE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2BAE7.
    case 0xC2BAE9: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/count_chars.asm:20 CMP @VIRTUAL04
    case 0xC2BAEA: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:21 BNE @UNKNOWN1
    case 0xC2BAEC: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/count_chars.asm:22 LDA a:battler::npc_id,X
    case 0xC2BAEE: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:23 AND #$00FF
    case 0xC2BAF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2BAF1.
    case 0xC2BAF3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/count_chars.asm:24 BNE @UNKNOWN1
    case 0xC2BAF4: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/count_chars.asm:25 LDA a:battler::afflictions,X
    case 0xC2BAF6: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:26 AND #$00FF
    case 0xC2BAF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2BAF9.
    case 0xC2BAFB: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/count_chars.asm:27 CMP #$0001
    case 0xC2BAFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:27 CMP #$0001
    // Overlapping static entry reached from 0xC2BAFC.
    case 0xC2BAFE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/count_chars.asm:28 BEQ @UNKNOWN1
    case 0xC2BAFF: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/count_chars.asm:29 CMP #$0002
    case 0xC2BB01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:29 CMP #$0002
    // Overlapping static entry reached from 0xC2BB01.
    case 0xC2BB03: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/count_chars.asm:30 BEQ @UNKNOWN1
    case 0xC2BB04: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/count_chars.asm:31 INC @VIRTUAL02
    case 0xC2BB06: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/count_chars.asm:33 TXA
    case 0xC2BB08: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/count_chars.asm:34 CLC
    case 0xC2BB09: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/count_chars.asm:35 ADC #.SIZEOF(battler)
    case 0xC2BB0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/count_chars.asm:35 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2BB0A.
    case 0xC2BB0C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/count_chars.asm:36 TAX
    case 0xC2BB0D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/count_chars.asm:37 INY
    case 0xC2BB0E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/count_chars.asm:39 CPY #$0020
    case 0xC2BB0F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/count_chars.asm:39 CPY #$0020
    // Overlapping static entry reached from 0xC2BB0F.
    case 0xC2BB11: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/count_chars.asm:40 BCC @UNKNOWN0
    case 0xC2BB12: {
        Instruction step(cpu, 0x90, 0x0000C8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/count_chars.asm:41 LDA @VIRTUAL02
    case 0xC2BB14: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/count_chars.asm:42 END_C_FUNCTION
    case 0xC2BB16: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/count_chars.asm:42 END_C_FUNCTION
    case 0xC2BB17: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
