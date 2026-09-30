// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/shield_common.asm
bool resume_battle_actions_shield_common(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_common.asm:3 BEGIN_C_FUNCTION
    case 0xC29C85: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C87: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C88: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C89: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC29C8A.
    case 0xC29C8C: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C8D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/actions/shield_common.asm:8 END_STACK_VARS
    case 0xC29C8E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:9 TXY
    case 0xC29C8F: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:10 STA @LOCAL00
    case 0xC29C90: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:11 CLC
    case 0xC29C92: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:12 ADC #battler::afflictions + STATUS_GROUP::SHIELD
    case 0xC29C93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:12 ADC #battler::afflictions + STATUS_GROUP::SHIELD
    // Overlapping static entry reached from 0xC29C93.
    case 0xC29C95: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:13 TAX
    case 0xC29C96: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:14 STY @VIRTUAL02
    case 0xC29C97: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:15 LDA __BSS_START__,X
    case 0xC29C99: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:16 AND #$00FF
    case 0xC29C9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC29C9C.
    case 0xC29C9E: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:17 CMP @VIRTUAL02
    case 0xC29C9F: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:18 BNE @UNKNOWN3
    case 0xC29CA1: {
        Instruction step(cpu, 0xD0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:19 LDA @LOCAL00
    case 0xC29CA3: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:20 CLC
    case 0xC29CA5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:21 ADC #battler::shield_hp
    case 0xC29CA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:21 ADC #battler::shield_hp
    // Overlapping static entry reached from 0xC29CA6.
    case 0xC29CA8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:22 TAX
    case 0xC29CA9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC29CAA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:24 LDA __BSS_START__,X
    case 0xC29CAC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:25 INC
    case 0xC29CAF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:26 INC
    case 0xC29CB0: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:27 INC
    case 0xC29CB1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:28 STA __BSS_START__,X
    case 0xC29CB2: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC29CB5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:30 AND #$00FF
    case 0xC29CB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC29CB7.
    case 0xC29CB9: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:31 CLC
    case 0xC29CBA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:32 SBC #8
    case 0xC29CBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:32 SBC #8
    // Overlapping static entry reached from 0xC29CBB.
    case 0xC29CBD: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29CBE: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29CC0: {
        Instruction step(cpu, 0x10, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29CC2: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/actions/shield_common.asm:33 BRANCHLTEQS @UNKNOWN2
    case 0xC29CC4: {
        Instruction step(cpu, 0x30, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC29CC6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:35 LDA #8
    case 0xC29CC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x009D08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:36 STA __BSS_START__,X
    case 0xC29CCA: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:36 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC29CC8.
    case 0xC29CCB: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC29CCD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:39 LDA #1
    case 0xC29CCF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:39 LDA #1
    // Overlapping static entry reached from 0xC29CCF.
    case 0xC29CD1: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:40 BRA @UNKNOWN4
    case 0xC29CD2: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:42 TYA
    case 0xC29CD4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC29CD5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:44 STA __BSS_START__,X
    case 0xC29CD7: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC29CDA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:46 LDA @LOCAL00
    case 0xC29CDC: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:47 TAX
    case 0xC29CDE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC29CDF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:49 LDA #3
    case 0xC29CE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x009D03u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:50 STA a:battler::shield_hp,X
    case 0xC29CE3: {
        Instruction step(cpu, 0x9D, 0x000025u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:50 STA a:battler::shield_hp,X
    // Overlapping static entry reached from 0xC29CE1.
    case 0xC29CE4: {
        Instruction step(cpu, 0x25, 0x000000u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC29CE6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:52 LDA #0
    case 0xC29CE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_common.asm:52 LDA #0
    // Overlapping static entry reached from 0xC29CE8.
    case 0xC29CEA: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_common.asm:54 END_C_FUNCTION
    case 0xC29CEB: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/actions/shield_common.asm:54 END_C_FUNCTION
    case 0xC29CEC: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
