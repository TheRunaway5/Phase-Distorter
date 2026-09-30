// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/create_entity_tpt.asm
bool resume_text_ccs_create_entity_tpt(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_entity_tpt.asm:3 BEGIN_C_FUNCTION
    case 0xC16788: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1678A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1678B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1678C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1678D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1678D.
    case 0xC1678F: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC16790: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC16791: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:11 TXY
    case 0xC16792: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:12 STY @LOCAL01
    case 0xC16793: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:13 LDA #4
    case 0xC16795: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16795.
    case 0xC16797: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:14 CLC
    case 0xC16798: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16799: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1679C: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1679E: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC167A0: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC167A2: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:17 TYA
    case 0xC167A4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC167A5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC167A7: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC167AA: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC167AD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC167AF: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:23 LDA #.LOWORD(CC_1F_17)
    case 0xC167B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000088u : 0x006788u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:23 LDA #.LOWORD(CC_1F_17)
    // Overlapping static entry reached from 0xC167B2.
    case 0xC167B4: {
        Instruction step(cpu, 0x67, 0x000080u, 2u, AddressMode::DirectPageIndirectLong);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:24 BRA @UNKNOWN3
    case 0xC167B5: {
        Instruction step(cpu, 0x80, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:24 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC167B4.
    case 0xC167B6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC167B7: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:27 LDY #8
    case 0xC167B9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00AD08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:28 LDA CC_ARGUMENT_STORAGE+1
    case 0xC167BB: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC167B9.
    case 0xC167BC: {
        Instruction step(cpu, 0x6F, 0xFF299Au, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:29 AND #$00FF
    case 0xC167BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC167BE.
    case 0xC167C0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:30 JSL ASL16_ENTRY2
    case 0xC167C1: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:31 STA @VIRTUAL02
    case 0xC167C5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:32 LDA CC_ARGUMENT_STORAGE
    case 0xC167C7: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:33 AND #$00FF
    case 0xC167CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC167CA.
    case 0xC167CC: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:34 ORA @VIRTUAL02
    case 0xC167CD: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:35 STA @LOCAL00
    case 0xC167CF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC167D1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:37 LDA #8
    case 0xC167D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00A808u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:38 TAY
    case 0xC167D5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC167D6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:40 LDA CC_ARGUMENT_STORAGE+3
    case 0xC167D8: {
        Instruction step(cpu, 0xAD, 0x009A71u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:41 AND #$00FF
    case 0xC167DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC167DB.
    case 0xC167DD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:42 JSL ASL16_ENTRY2
    case 0xC167DE: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:43 STA @VIRTUAL02
    case 0xC167E2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:44 LDA CC_ARGUMENT_STORAGE+2
    case 0xC167E4: {
        Instruction step(cpu, 0xAD, 0x009A70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:45 AND #$00FF
    case 0xC167E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC167E7.
    case 0xC167E9: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:46 ORA @VIRTUAL02
    case 0xC167EA: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:47 REP #PROC_FLAGS::INDEX8
    case 0xC167EC: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:48 TAX
    case 0xC167EE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:49 LDA @LOCAL00
    case 0xC167EF: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:50 JSL CREATE_PREPARED_ENTITY_NPC
    case 0xC167F1: {
        Instruction step(cpu, 0x22, 0xC44223u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:51 LDY @LOCAL01
    case 0xC167F5: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:52 TYX
    case 0xC167F7: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:53 JSL UNKNOWN_C4C91A
    case 0xC167F8: {
        Instruction step(cpu, 0x22, 0xC49BEAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:54 LDA #NULL
    case 0xC167FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC167FC.
    case 0xC167FE: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:56 END_C_FUNCTION
    case 0xC167FF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_entity_tpt.asm:56 END_C_FUNCTION
    case 0xC16800: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
