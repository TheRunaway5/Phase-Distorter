// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/test_character_doesnt_have_item.asm
bool resume_text_ccs_test_character_doesnt_have_item(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:3 BEGIN_C_FUNCTION
    case 0xC15124: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC15126: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC15127: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC15128: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC15129: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC15129.
    case 0xC1512B: {
        Instruction step(cpu, 0xFF, 0xA9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC1512C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:11 END_STACK_VARS
    case 0xC1512D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    case 0xC1512E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1512B.
    case 0xC1512F: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1512E.
    case 0xC15130: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:13 CLC
    case 0xC15131: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15132: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15135: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15137: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15139: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1513B: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:16 TXA
    case 0xC1513D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1513E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15140: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC15143: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC15146: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15148: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:22 LDA #.LOWORD(CC_1D_04)
    case 0xC1514B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x005124u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:22 LDA #.LOWORD(CC_1D_04)
    // Overlapping static entry reached from 0xC1514B.
    case 0xC1514D: {
        Instruction step(cpu, 0x51, 0x000080u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:23 BRA @UNKNOWN7
    case 0xC1514E: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC1514D.
    case 0xC1514F: {
        Instruction step(cpu, 0x41, 0x0000ADu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC15150: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC1514F.
    case 0xC15151: {
        Instruction step(cpu, 0x6E, 0x00299Au, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:26 AND #$00FF
    case 0xC15153: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC15151.
    case 0xC15154: {
        Instruction step(cpu, 0xFF, 0x148500u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC15153.
    case 0xC15155: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:27 STA @LOCAL02
    case 0xC15156: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:28 CPX #0
    case 0xC15158: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:28 CPX #0
    // Overlapping static entry reached from 0xC15158.
    case 0xC1515A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:29 BEQ @UNKNOWN3
    case 0xC1515B: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:30 STX @LOCAL01
    case 0xC1515D: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:31 BRA @UNKNOWN4
    case 0xC1515F: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC15161: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:34 LDA @VIRTUAL06
    case 0xC15164: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:35 TAX
    case 0xC15166: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:36 STX @LOCAL01
    case 0xC15167: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:38 LDA @LOCAL02
    case 0xC15169: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:39 BNE @UNKNOWN5
    case 0xC1516B: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:40 JSR GET_WORKING_MEMORY
    case 0xC1516D: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:41 LDA @VIRTUAL06
    case 0xC15170: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:43 LDX @LOCAL01
    case 0xC15172: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:44 JSL UNKNOWN_C3E9F7
    case 0xC15174: {
        Instruction step(cpu, 0x22, 0xC3E5B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15178: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC15178.
    case 0xC1517A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1517B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1517D: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1517F: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:45 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC15181: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15183: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15185: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15187: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15189: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:47 JSR SET_WORKING_MEMORY
    case 0xC1518B: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:48 LDA #NULL
    case 0xC1518E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/test_character_doesnt_have_item.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC1518E.
    case 0xC15190: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:50 END_C_FUNCTION
    case 0xC15191: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/test_character_doesnt_have_item.asm:50 END_C_FUNCTION
    case 0xC15192: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
