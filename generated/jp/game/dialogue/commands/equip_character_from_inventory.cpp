// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/equip_character_from_inventory.asm
bool resume_text_ccs_equip_character_from_inventory(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC15AB8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15ABA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15ABB: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15ABC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15ABD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15ABD.
    case 0xC15ABF: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15AC0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15AC1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:11 TXY
    case 0xC15AC2: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:12 STY @LOCAL01
    case 0xC15AC3: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:13 LDA #1
    case 0xC15AC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15AC5.
    case 0xC15AC7: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:14 CLC
    case 0xC15AC8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15AC9: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15ACC: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15ACE: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15AD0: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15AD2: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:17 TYA
    case 0xC15AD4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15AD5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15AD7: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15ADA: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15ADD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15ADF: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:23 LDA #.LOWORD(CC_1F_83)
    case 0xC15AE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B8u : 0x005AB8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:23 LDA #.LOWORD(CC_1F_83)
    // Overlapping static entry reached from 0xC15AE2.
    case 0xC15AE4: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:24 BRA @UNKNOWN7
    case 0xC15AE5: {
        Instruction step(cpu, 0x80, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15AE7: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:27 AND #$00FF
    case 0xC15AEA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15AEA.
    case 0xC15AEC: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:28 TAX
    case 0xC15AED: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:29 BEQ @UNKNOWN3
    case 0xC15AEE: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:30 TXA
    case 0xC15AF0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:31 BRA @UNKNOWN4
    case 0xC15AF1: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:33 JSR GET_WORKING_MEMORY
    case 0xC15AF3: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:34 LDA @VIRTUAL06
    case 0xC15AF6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:36 STA @VIRTUAL02
    case 0xC15AF8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:37 LDY @LOCAL01
    case 0xC15AFA: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:38 BEQ @UNKNOWN5
    case 0xC15AFC: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:39 TYA
    case 0xC15AFE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:40 BRA @UNKNOWN6
    case 0xC15AFF: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC15B01: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:43 LDA @VIRTUAL06
    case 0xC15B04: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:45 TAX
    case 0xC15B06: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:46 LDA @VIRTUAL02
    case 0xC15B07: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:47 JSR EQUIP_ITEM
    case 0xC15B09: {
        Instruction step(cpu, 0x20, 0x00911Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15B0C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15B0E: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B10: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B12: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B14: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B16: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:50 JSR SET_ARGUMENT_MEMORY
    case 0xC15B18: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:51 LDA #NULL
    case 0xC15B1B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/equip_character_from_inventory.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC15B1B.
    case 0xC15B1D: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:53 END_C_FUNCTION
    case 0xC15B1E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:53 END_C_FUNCTION
    case 0xC15B1F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
