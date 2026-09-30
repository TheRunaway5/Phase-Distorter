// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/take_item_from_character_2.asm
bool resume_text_ccs_take_item_from_character_2(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:3 BEGIN_C_FUNCTION
    case 0xC156DB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156DD: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156DE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156DF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC156E0.
    case 0xC156E2: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156E3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:10 END_STACK_VARS
    case 0xC156E4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:11 STX @LOCAL01
    case 0xC156E5: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC156E2.
    case 0xC156E6: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:12 LDA #1
    case 0xC156E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:12 LDA #1
    // Overlapping static entry reached from 0xC156E6.
    case 0xC156E8: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:12 LDA #1
    // Overlapping static entry reached from 0xC156E7.
    case 0xC156E9: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:13 CLC
    case 0xC156EA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC156EB: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC156EE: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC156F0: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC156F2: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC156F4: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:16 TXA
    case 0xC156F6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC156F7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC156F9: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC156FC: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC156FF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15701: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:22 LDA #.LOWORD(CC_1D_0F)
    case 0xC15704: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DBu : 0x0056DBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:22 LDA #.LOWORD(CC_1D_0F)
    // Overlapping static entry reached from 0xC15704.
    case 0xC15706: {
        Instruction step(cpu, 0x56, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:23 BRA @UNKNOWN7
    case 0xC15707: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC15706.
    case 0xC15708: {
        Instruction step(cpu, 0x52, 0x0000ADu, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC15709: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC15708.
    case 0xC1570A: {
        Instruction step(cpu, 0xBA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_x();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC1570A.
    case 0xC1570B: {
        Instruction step(cpu, 0x97, 0x000029u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:26 AND #$00FF
    case 0xC1570C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1570B.
    case 0xC1570D: {
        Instruction step(cpu, 0xFF, 0xF0A800u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1570C.
    case 0xC1570E: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:27 TAY
    case 0xC1570F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:28 BEQ @UNKNOWN3
    case 0xC15710: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:28 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC1570D.
    case 0xC15711: {
        Instruction step(cpu, 0x03, 0x000098u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:29 TYA
    case 0xC15712: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:30 BRA @UNKNOWN4
    case 0xC15713: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:32 JSR GET_WORKING_MEMORY
    case 0xC15715: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:33 LDA @VIRTUAL06
    case 0xC15718: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:35 STA @VIRTUAL02
    case 0xC1571A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:36 LDX @LOCAL01
    case 0xC1571C: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:37 BEQ @UNKNOWN5
    case 0xC1571E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:38 TXA
    case 0xC15720: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:39 BRA @UNKNOWN6
    case 0xC15721: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:41 JSR GET_ARGUMENT_MEMORY
    case 0xC15723: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:42 LDA @VIRTUAL06
    case 0xC15726: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:44 TAY
    case 0xC15728: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:45 STY @LOCAL01
    case 0xC15729: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:46 TYX
    case 0xC1572B: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:47 LDA @VIRTUAL02
    case 0xC1572C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:48 JSL GET_CHARACTER_ITEM
    case 0xC1572E: {
        Instruction step(cpu, 0x22, 0xC3E977u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC15732: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC15734: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15736: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15738: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1573A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:50 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1573C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:51 JSR SET_ARGUMENT_MEMORY
    case 0xC1573E: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:52 LDY @LOCAL01
    case 0xC15741: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:53 TYX
    case 0xC15743: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:54 LDA @VIRTUAL02
    case 0xC15744: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:55 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC15746: {
        Instruction step(cpu, 0x20, 0x008C27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:56 STORE_INT1632 @VIRTUAL06
    case 0xC15749: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:56 STORE_INT1632 @VIRTUAL06
    case 0xC1574B: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1574D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1574F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15751: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15753: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:58 JSR SET_WORKING_MEMORY
    case 0xC15755: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:59 LDA #NULL
    case 0xC15758: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/take_item_from_character_2.asm:59 LDA #NULL
    // Overlapping static entry reached from 0xC15758.
    case 0xC1575A: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:61 END_C_FUNCTION
    case 0xC1575B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/take_item_from_character_2.asm:61 END_C_FUNCTION
    case 0xC1575C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
