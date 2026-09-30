// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/give_item_to_character_2.asm
bool resume_text_ccs_give_item_to_character_2(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:3 BEGIN_C_FUNCTION
    case 0xC158D4: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158D6: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158D7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158D8: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC158D9.
    case 0xC158DB: {
        Instruction step(cpu, 0xFF, 0xA9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158DC: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158DD: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    case 0xC158DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    // Overlapping static entry reached from 0xC158DB.
    case 0xC158DF: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    // Overlapping static entry reached from 0xC158DE.
    case 0xC158E0: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:14 CLC
    case 0xC158E1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC158E2: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC158E5: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC158E7: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC158E9: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC158EB: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:17 TXA
    case 0xC158ED: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC158EE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC158F0: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC158F3: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC158F6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC158F8: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:23 LDA #.LOWORD(CC_1D_0E)
    case 0xC158FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D4u : 0x0058D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:23 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC158FB.
    case 0xC158FD: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:24 BRA @UNKNOWN6
    case 0xC158FE: {
        Instruction step(cpu, 0x80, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15900: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:27 AND #$00FF
    case 0xC15903: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15903.
    case 0xC15905: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:28 STA @LOCAL03
    case 0xC15906: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:29 CPX #0
    case 0xC15908: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:29 CPX #0
    // Overlapping static entry reached from 0xC15908.
    case 0xC1590A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:30 BEQ @UNKNOWN3
    case 0xC1590B: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:31 STX @LOCAL02
    case 0xC1590D: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:32 BRA @UNKNOWN4
    case 0xC1590F: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:34 JSR GET_ARGUMENT_MEMORY
    case 0xC15911: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:35 LDA @VIRTUAL06
    case 0xC15914: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:36 TAX
    case 0xC15916: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:37 STX @LOCAL02
    case 0xC15917: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:39 LDA @LOCAL03
    case 0xC15919: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:40 BNE @UNKNOWN5
    case 0xC1591B: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:41 JSR GET_WORKING_MEMORY
    case 0xC1591D: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:42 LDA @VIRTUAL06
    case 0xC15920: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:44 LDX @LOCAL02
    case 0xC15922: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:45 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC15924: {
        Instruction step(cpu, 0x22, 0xC18C69u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:46 TAX
    case 0xC15928: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:47 STX @LOCAL01
    case 0xC15929: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:48 TXA
    case 0xC1592B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:49 JSL UNKNOWN_C22351
    case 0xC1592C: {
        Instruction step(cpu, 0x22, 0xC221EFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC15930: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC15932: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15934: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15936: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15938: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1593A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:52 JSR SET_ARGUMENT_MEMORY
    case 0xC1593C: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:53 LDX @LOCAL01
    case 0xC1593F: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:54 TXA
    case 0xC15941: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC15942: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC15944: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15946: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15948: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1594A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1594C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:57 JSR SET_WORKING_MEMORY
    case 0xC1594E: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:58 LDA #NULL
    case 0xC15951: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/give_item_to_character_2.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC15951.
    case 0xC15953: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:60 END_C_FUNCTION
    case 0xC15954: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:60 END_C_FUNCTION
    case 0xC15955: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
