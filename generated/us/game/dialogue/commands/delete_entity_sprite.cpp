// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/delete_entity_sprite.asm
bool resume_text_ccs_delete_entity_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC1683B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC1683D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC1683E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC1683F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16840: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16840.
    case 0xC16842: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16843: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16844: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:10 STX @VIRTUAL02
    case 0xC16845: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC16842.
    case 0xC16846: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:11 LDA #2
    case 0xC16847: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:11 LDA #2
    // Overlapping static entry reached from 0xC16847.
    case 0xC16849: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:12 CLC
    case 0xC1684A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1684B: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC1684E: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16850: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16852: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16854: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:15 LDA @VIRTUAL02
    case 0xC16856: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC16858: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1685A: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC1685D: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC16860: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16862: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:21 LDA #.LOWORD(CC_1F_1F)
    case 0xC16865: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Bu : 0x00683Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:21 LDA #.LOWORD(CC_1F_1F)
    // Overlapping static entry reached from 0xC16865.
    case 0xC16867: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:22 BRA @UNKNOWN3
    case 0xC16868: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC1686A: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:25 LDY #8
    case 0xC1686C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00AD08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:26 LDA CC_ARGUMENT_STORAGE+1
    case 0xC1686E: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:26 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC1686C.
    case 0xC1686F: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:26 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC1686F.
    case 0xC16870: {
        Instruction step(cpu, 0x97, 0x000029u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:27 AND #$00FF
    case 0xC16871: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC16870.
    case 0xC16872: {
        Instruction step(cpu, 0xFF, 0x3E2200u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC16871.
    case 0xC16873: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:28 JSL ASL16_ENTRY2
    case 0xC16874: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:28 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16872.
    case 0xC16876: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:29 STA @VIRTUAL04
    case 0xC16878: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:30 LDA CC_ARGUMENT_STORAGE
    case 0xC1687A: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:31 AND #$00FF
    case 0xC1687D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC1687D.
    case 0xC1687F: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:32 ORA @VIRTUAL04
    case 0xC16880: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:33 REP #PROC_FLAGS::INDEX8
    case 0xC16882: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:34 TAY
    case 0xC16884: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:35 STY @LOCAL00
    case 0xC16885: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:36 TYA
    case 0xC16887: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:37 JSL UNKNOWN_C46028
    case 0xC16888: {
        Instruction step(cpu, 0x22, 0xC46028u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:38 LDX @VIRTUAL02
    case 0xC1688C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:39 JSL UNKNOWN_C4C91A
    case 0xC1688E: {
        Instruction step(cpu, 0x22, 0xC4C91Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:40 LDX @VIRTUAL02
    case 0xC16892: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:41 LDY @LOCAL00
    case 0xC16894: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:42 TYA
    case 0xC16896: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:43 JSL UNKNOWN_C46125
    case 0xC16897: {
        Instruction step(cpu, 0x22, 0xC46125u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:44 LDA #NULL
    case 0xC1689B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:44 LDA #NULL
    // Overlapping static entry reached from 0xC1689B.
    case 0xC1689D: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:46 END_C_FUNCTION
    case 0xC1689E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:46 END_C_FUNCTION
    case 0xC1689F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
