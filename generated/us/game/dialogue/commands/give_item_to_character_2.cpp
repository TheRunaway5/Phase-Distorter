// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/give_item_to_character_2.asm
bool resume_text_ccs_give_item_to_character_2(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:3 BEGIN_C_FUNCTION
    case 0xC15659: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC1565B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC1565C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC1565D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC1565E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC1565E.
    case 0xC15660: {
        Instruction step(cpu, 0xFF, 0xA9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC15661: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC15662: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    case 0xC15663: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15660.
    case 0xC15664: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15663.
    case 0xC15665: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:14 CLC
    case 0xC15666: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15667: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1566A: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1566C: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1566E: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15670: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:17 TXA
    case 0xC15672: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15673: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15675: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15678: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1567B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1567D: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:23 LDA #.LOWORD(CC_1D_0E)
    case 0xC15680: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000059u : 0x005659u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:23 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC15680.
    case 0xC15682: {
        Instruction step(cpu, 0x56, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:24 BRA @UNKNOWN6
    case 0xC15683: {
        Instruction step(cpu, 0x80, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:24 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC15682.
    case 0xC15684: {
        Instruction step(cpu, 0x54, 0x00BAADu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15685: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:26 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC15684.
    case 0xC15687: {
        Instruction step(cpu, 0x97, 0x000029u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:27 AND #$00FF
    case 0xC15688: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15687.
    case 0xC15689: {
        Instruction step(cpu, 0xFF, 0x168500u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15688.
    case 0xC1568A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:28 STA @LOCAL03
    case 0xC1568B: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:29 CPX #0
    case 0xC1568D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:29 CPX #0
    // Overlapping static entry reached from 0xC1568D.
    case 0xC1568F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:30 BEQ @UNKNOWN3
    case 0xC15690: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:31 STX @LOCAL02
    case 0xC15692: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:32 BRA @UNKNOWN4
    case 0xC15694: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:34 JSR GET_ARGUMENT_MEMORY
    case 0xC15696: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:35 LDA @VIRTUAL06
    case 0xC15699: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:36 TAX
    case 0xC1569B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:37 STX @LOCAL02
    case 0xC1569C: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:39 LDA @LOCAL03
    case 0xC1569E: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:40 BNE @UNKNOWN5
    case 0xC156A0: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:41 JSR GET_WORKING_MEMORY
    case 0xC156A2: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:42 LDA @VIRTUAL06
    case 0xC156A5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:44 LDX @LOCAL02
    case 0xC156A7: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:45 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC156A9: {
        Instruction step(cpu, 0x22, 0xC18BC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:46 TAX
    case 0xC156AD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:47 STX @LOCAL01
    case 0xC156AE: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:48 TXA
    case 0xC156B0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:49 JSL UNKNOWN_C22351
    case 0xC156B1: {
        Instruction step(cpu, 0x22, 0xC22351u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC156B5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC156B7: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156B9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156BB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156BD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156BF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:52 JSR SET_ARGUMENT_MEMORY
    case 0xC156C1: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:53 LDX @LOCAL01
    case 0xC156C4: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:54 TXA
    case 0xC156C6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC156C7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC156C9: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156CB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156CD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156CF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156D1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:57 JSR SET_WORKING_MEMORY
    case 0xC156D3: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:58 LDA #NULL
    case 0xC156D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC156D6.
    case 0xC156D8: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:60 END_C_FUNCTION
    case 0xC156D9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:60 END_C_FUNCTION
    case 0xC156DA: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
