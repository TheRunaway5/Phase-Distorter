// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/inflict_character_status.asm
bool resume_text_ccs_inflict_character_status(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/inflict_character_status.asm:3 BEGIN_C_FUNCTION
    case 0xC1506F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15071: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15072: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15073: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15074: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC15074.
    case 0xC15076: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15077: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15078: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:12 STX @VIRTUAL02
    case 0xC15079: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC15076.
    case 0xC1507A: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:13 LDA #2
    case 0xC1507B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:13 LDA #2
    // Overlapping static entry reached from 0xC1507B.
    case 0xC1507D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:14 CLC
    case 0xC1507E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1507F: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15082: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15084: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15086: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15088: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:17 LDA @VIRTUAL02
    case 0xC1508A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1508C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1508E: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15091: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:20 STA CC_ARGUMENT_STORAGE,X
    // Overlapping static entry reached from 0xC15110.
    case 0xC15092: {
        Instruction step(cpu, 0xBA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_x();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:20 STA CC_ARGUMENT_STORAGE,X
    // Overlapping static entry reached from 0xC15092.
    case 0xC15093: {
        Instruction step(cpu, 0x97, 0x0000C2u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15094: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:21 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15093.
    case 0xC15095: {
        Instruction step(cpu, 0x20, 0x00CAEEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15096: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC15095.
    case 0xC15098: {
        Instruction step(cpu, 0x97, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:23 LDA #.LOWORD(CC_19_05)
    case 0xC15099: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Fu : 0x00506Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:23 LDA #.LOWORD(CC_19_05)
    // Overlapping static entry reached from 0xC15098.
    case 0xC1509A: {
        Instruction step(cpu, 0x6F, 0x448050u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:23 LDA #.LOWORD(CC_19_05)
    // Overlapping static entry reached from 0xC15099.
    case 0xC1509B: {
        Instruction step(cpu, 0x50, 0x000080u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:24 BRA @UNKNOWN7
    case 0xC1509C: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:24 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC1509B.
    case 0xC1509D: {
        Instruction step(cpu, 0x44, 0x00BAADu, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC1509E: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:26 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC1509D.
    case 0xC150A0: {
        Instruction step(cpu, 0x97, 0x000029u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:27 AND #$00FF
    case 0xC150A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC150A0.
    case 0xC150A2: {
        Instruction step(cpu, 0xFF, 0x84A800u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC150A1.
    case 0xC150A3: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:28 TAY
    case 0xC150A4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:29 STY @LOCAL02
    case 0xC150A5: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:29 STY @LOCAL02
    // Overlapping static entry reached from 0xC150A2.
    case 0xC150A6: {
        Instruction step(cpu, 0x14, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC150A7: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:30 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC150A6.
    case 0xC150A8: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:30 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC150A8.
    case 0xC150A9: {
        Instruction step(cpu, 0x97, 0x000029u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:31 AND #$00FF
    case 0xC150AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC150A9.
    case 0xC150AB: {
        Instruction step(cpu, 0xFF, 0xF0AA00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC150AA.
    case 0xC150AC: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:32 TAX
    case 0xC150AD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:33 BEQ @UNKNOWN3
    case 0xC150AE: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:33 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC150AB.
    case 0xC150AF: {
        Instruction step(cpu, 0x04, 0x000086u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:34 STX @LOCAL01
    case 0xC150B0: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:34 STX @LOCAL01
    // Overlapping static entry reached from 0xC150AF.
    case 0xC150B1: {
        Instruction step(cpu, 0x12, 0x000080u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:35 BRA @UNKNOWN4
    case 0xC150B2: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:35 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC150B1.
    case 0xC150B3: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:37 JSR GET_ARGUMENT_MEMORY
    case 0xC150B4: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:38 LDA @VIRTUAL06
    case 0xC150B7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:39 TAX
    case 0xC150B9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:40 STX @LOCAL01
    case 0xC150BA: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:42 LDY @LOCAL02
    case 0xC150BC: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:43 BEQ @UNKNOWN5
    case 0xC150BE: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:44 TYA
    case 0xC150C0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:45 BRA @UNKNOWN6
    case 0xC150C1: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:47 JSR GET_WORKING_MEMORY
    case 0xC150C3: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:48 LDA @VIRTUAL06
    case 0xC150C6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:50 LDY @VIRTUAL02
    case 0xC150C8: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:51 LDX @LOCAL01
    case 0xC150CA: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:52 JSL INFLICT_STATUS_NONBATTLE
    case 0xC150CC: {
        Instruction step(cpu, 0x22, 0xC458FEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC150D0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/inflict_character_status.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC150D2: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150D4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150D6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150D8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150DA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:55 JSR SET_WORKING_MEMORY
    case 0xC150DC: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:56 LDA #NULL
    case 0xC150DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/inflict_character_status.asm:56 LDA #NULL
    // Overlapping static entry reached from 0xC150DF.
    case 0xC150E1: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/inflict_character_status.asm:58 END_C_FUNCTION
    case 0xC150E2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/inflict_character_status.asm:58 END_C_FUNCTION
    case 0xC150E3: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
