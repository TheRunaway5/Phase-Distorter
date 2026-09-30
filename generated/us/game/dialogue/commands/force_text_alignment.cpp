// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/force_text_alignment.asm
bool resume_text_ccs_force_text_alignment(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/force_text_alignment.asm:3 BEGIN_C_FUNCTION
    case 0xC14509: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC1450B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC1450C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC1450D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC1450E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1450E.
    case 0xC14510: {
        Instruction step(cpu, 0xFF, 0xA9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC14511: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC14512: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:10 LDA #1
    case 0xC14513: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:10 LDA #1
    // Overlapping static entry reached from 0xC14510.
    case 0xC14514: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:10 LDA #1
    // Overlapping static entry reached from 0xC14513.
    case 0xC14515: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:11 CLC
    case 0xC14516: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14517: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/force_text_alignment.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC1451A: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/force_text_alignment.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC1451C: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/force_text_alignment.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC1451E: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/force_text_alignment.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14520: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:14 TXA
    case 0xC14522: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14523: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14525: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14528: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC1452B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1452D: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:20 LDA #.LOWORD(CC_18_05)
    case 0xC14530: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x004509u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:20 LDA #.LOWORD(CC_18_05)
    // Overlapping static entry reached from 0xC14530.
    case 0xC14532: {
        Instruction step(cpu, 0x45, 0x000080u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:21 BRA @UNKNOWN5
    case 0xC14533: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:21 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC14532.
    case 0xC14534: {
        Instruction step(cpu, 0x21, 0x0000ADu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14535: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:23 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC14534.
    case 0xC14536: {
        Instruction step(cpu, 0xBA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_x();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:23 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC14536.
    case 0xC14537: {
        Instruction step(cpu, 0x97, 0x000029u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:24 AND #$00FF
    case 0xC14538: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14537.
    case 0xC14539: {
        Instruction step(cpu, 0xFF, 0x0E8500u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14538.
    case 0xC1453A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:25 STA @LOCAL00
    case 0xC1453B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:26 LDA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1453D: {
        Instruction step(cpu, 0xAD, 0x005E71u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:27 AND #$00FF
    case 0xC14540: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC14540.
    case 0xC14542: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:28 BEQ @UNKNOWN3
    case 0xC14543: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:29 LDA @LOCAL00
    case 0xC14545: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:30 JSL UNKNOWN_C43D75
    case 0xC14547: {
        Instruction step(cpu, 0x22, 0xC43D75u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:31 BRA @UNKNOWN4
    case 0xC1454B: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:33 LDA @LOCAL00
    case 0xC1454D: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:34 JSL UNKNOWN_C438A5
    case 0xC1454F: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:36 LDA #NULL
    case 0xC14553: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/force_text_alignment.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14553.
    case 0xC14555: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/force_text_alignment.asm:38 END_C_FUNCTION
    case 0xC14556: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/force_text_alignment.asm:38 END_C_FUNCTION
    case 0xC14557: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
