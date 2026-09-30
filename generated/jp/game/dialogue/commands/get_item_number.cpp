// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/get_item_number.asm
bool resume_text_ccs_get_item_number(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_item_number.asm:3 BEGIN_C_FUNCTION
    case 0xC15BFA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15BFC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15BFD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15BFE: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15BFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15BFF.
    case 0xC15C01: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15C02: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15C03: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:11 TXY
    case 0xC15C04: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:12 STY @LOCAL01
    case 0xC15C05: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:13 LDA #1
    case 0xC15C07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15C07.
    case 0xC15C09: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:14 CLC
    case 0xC15C0A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C0B: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C0E: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C10: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C12: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C14: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:17 TYA
    case 0xC15C16: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15C17: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C19: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15C1C: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15C1F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C21: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:23 LDA #.LOWORD(CC_19_19)
    case 0xC15C24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x005BFAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:23 LDA #.LOWORD(CC_19_19)
    // Overlapping static entry reached from 0xC15C24.
    case 0xC15C26: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:24 BRA @UNKNOWN7
    case 0xC15C27: {
        Instruction step(cpu, 0x80, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15C29: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:27 AND #$00FF
    case 0xC15C2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15C2C.
    case 0xC15C2E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:28 TAX
    case 0xC15C2F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:29 BEQ @ARG_IS_ZERO
    case 0xC15C30: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:30 TXA
    case 0xC15C32: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:31 BRA @ARG_IS_NONZERO
    case 0xC15C33: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:33 JSR GET_WORKING_MEMORY
    case 0xC15C35: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:34 LDA @VIRTUAL06
    case 0xC15C38: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:36 STA @VIRTUAL02
    case 0xC15C3A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:37 LDY @LOCAL01
    case 0xC15C3C: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:38 BEQ @UNKNOWN5
    case 0xC15C3E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:39 TYA
    case 0xC15C40: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:40 BRA @UNKNOWN6
    case 0xC15C41: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC15C43: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:43 LDA @VIRTUAL06
    case 0xC15C46: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:45 TAX
    case 0xC15C48: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:46 LDA @VIRTUAL02
    case 0xC15C49: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:47 JSL GET_CHARACTER_ITEM
    case 0xC15C4B: {
        Instruction step(cpu, 0x22, 0xC3E537u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15C4F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15C51: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C53: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C55: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C57: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C59: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:50 JSR SET_ARGUMENT_MEMORY
    case 0xC15C5B: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/get_item_number.asm:51 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC15C5E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:51 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC15C60: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:51 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC15C62: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C64: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C66: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C68: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C6A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:53 JSR SET_WORKING_MEMORY
    case 0xC15C6C: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:54 LDA #NULL
    case 0xC15C6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_item_number.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC15C6F.
    case 0xC15C71: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_item_number.asm:56 END_C_FUNCTION
    case 0xC15C72: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_item_number.asm:56 END_C_FUNCTION
    case 0xC15C73: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
