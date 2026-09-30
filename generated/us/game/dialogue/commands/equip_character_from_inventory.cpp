// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/equip_character_from_inventory.asm
bool resume_text_ccs_equip_character_from_inventory(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC1583D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC1583F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15840: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15841: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15842: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15842.
    case 0xC15844: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15845: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15846: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:11 TXY
    case 0xC15847: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:12 STY @LOCAL01
    case 0xC15848: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:13 LDA #1
    case 0xC1584A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:13 LDA #1
    // Overlapping static entry reached from 0xC1584A.
    case 0xC1584C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:14 CLC
    case 0xC1584D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1584E: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15851: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15853: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15855: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15857: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:17 TYA
    case 0xC15859: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1585A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1585C: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1585F: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15862: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15864: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:23 LDA #.LOWORD(CC_1F_83)
    case 0xC15867: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Du : 0x00583Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:23 LDA #.LOWORD(CC_1F_83)
    // Overlapping static entry reached from 0xC15867.
    case 0xC15869: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:24 BRA @UNKNOWN7
    case 0xC1586A: {
        Instruction step(cpu, 0x80, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC1586C: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:27 AND #$00FF
    case 0xC1586F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1586F.
    case 0xC15871: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:28 TAX
    case 0xC15872: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:29 BEQ @UNKNOWN3
    case 0xC15873: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:30 TXA
    case 0xC15875: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:31 BRA @UNKNOWN4
    case 0xC15876: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:33 JSR GET_WORKING_MEMORY
    case 0xC15878: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:34 LDA @VIRTUAL06
    case 0xC1587B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:36 STA @VIRTUAL02
    case 0xC1587D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:37 LDY @LOCAL01
    case 0xC1587F: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:38 BEQ @UNKNOWN5
    case 0xC15881: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:39 TYA
    case 0xC15883: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:40 BRA @UNKNOWN6
    case 0xC15884: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC15886: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:43 LDA @VIRTUAL06
    case 0xC15889: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:45 TAX
    case 0xC1588B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:46 LDA @VIRTUAL02
    case 0xC1588C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:47 JSR EQUIP_ITEM
    case 0xC1588E: {
        Instruction step(cpu, 0x20, 0x009066u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15891: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15893: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15895: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15897: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15899: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1589B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:50 JSR SET_ARGUMENT_MEMORY
    case 0xC1589D: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:51 LDA #NULL
    case 0xC158A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC158A0.
    case 0xC158A2: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:53 END_C_FUNCTION
    case 0xC158A3: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:53 END_C_FUNCTION
    case 0xC158A4: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
