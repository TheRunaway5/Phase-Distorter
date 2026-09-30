// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/test_character_doesnt_have_item.asm
bool resume_text_ccs_test_character_doesnt_have_item(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:3 BEGIN_C_FUNCTION
    case 0xC14D24: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D26: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D27: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D28: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC14D29.
    case 0xC14D2B: {
        Instruction step(cpu, 0xFF, 0xA9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D2C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC14D2D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    case 0xC14D2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14D2B.
    case 0xC14D2F: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14D2E.
    case 0xC14D30: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:13 CLC
    case 0xC14D31: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D32: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14D35: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14D37: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14D39: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14D3B: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:16 TXA
    case 0xC14D3D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC14D3E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D40: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC14D43: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC14D46: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D48: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:22 LDA #.LOWORD(CC_1D_04)
    case 0xC14D4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x004D24u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:22 LDA #.LOWORD(CC_1D_04)
    // Overlapping static entry reached from 0xC14D4B.
    case 0xC14D4D: {
        Instruction step(cpu, 0x4D, 0x004180u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:23 BRA @UNKNOWN7
    case 0xC14D4E: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC14D50: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:26 AND #$00FF
    case 0xC14D53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC14D53.
    case 0xC14D55: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:27 STA @LOCAL02
    case 0xC14D56: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:28 CPX #0
    case 0xC14D58: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:28 CPX #0
    // Overlapping static entry reached from 0xC14D58.
    case 0xC14D5A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:29 BEQ @UNKNOWN3
    case 0xC14D5B: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:30 STX @LOCAL01
    case 0xC14D5D: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:31 BRA @UNKNOWN4
    case 0xC14D5F: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC14D61: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:34 LDA @VIRTUAL06
    case 0xC14D64: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:35 TAX
    case 0xC14D66: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:36 STX @LOCAL01
    case 0xC14D67: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:38 LDA @LOCAL02
    case 0xC14D69: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:39 BNE @UNKNOWN5
    case 0xC14D6B: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:40 JSR GET_WORKING_MEMORY
    case 0xC14D6D: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:41 LDA @VIRTUAL06
    case 0xC14D70: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:43 LDX @LOCAL01
    case 0xC14D72: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:44 JSL UNKNOWN_C3E9F7
    case 0xC14D74: {
        Instruction step(cpu, 0x22, 0xC3E9F7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC14D78.
    case 0xC14D7A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D7B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D7D: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D7F: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D81: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D83: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D85: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D87: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D89: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:47 JSR SET_WORKING_MEMORY
    case 0xC14D8B: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:48 LDA #NULL
    case 0xC14D8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC14D8E.
    case 0xC14D90: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:50 END_C_FUNCTION
    case 0xC14D91: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:50 END_C_FUNCTION
    case 0xC14D92: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
