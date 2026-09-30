// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm
bool resume_text_ccs_get_direction_from_tpt_entity_to_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16BC6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BC8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BC9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BCA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BCB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16BCB.
    case 0xC16BCD: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BCE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BCF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:11 TXA
    case 0xC16BD0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:12 STA @LOCAL01
    case 0xC16BD1: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:13 LDA #4
    case 0xC16BD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16BD3.
    case 0xC16BD5: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:14 CLC
    case 0xC16BD6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16BD7: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16BDA: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16BDC: {
        Instruction step(cpu, 0x10, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16BDE: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16BE0: {
        Instruction step(cpu, 0x30, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:17 LDA @LOCAL01
    case 0xC16BE2: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16BE4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16BE6: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16BE9: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16BEC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16BEE: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_23)
    case 0xC16BF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C6u : 0x006BC6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_23)
    // Overlapping static entry reached from 0xC16BF1.
    case 0xC16BF3: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:24 JMP @UNKNOWN7
    case 0xC16BF4: {
        Instruction step(cpu, 0x4C, 0x006C74u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC16BF7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:27 LDA #8
    case 0xC16BF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    case 0xC16BFB: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16BF9.
    case 0xC16BFC: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:29 TAY
    case 0xC16BFD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC16BFE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:31 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16C00: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:32 AND #$00FF
    case 0xC16C03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16C03.
    case 0xC16C05: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:33 JSL ASL16_ENTRY2
    case 0xC16C06: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:34 STA @VIRTUAL02
    case 0xC16C0A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:35 LDA CC_ARGUMENT_STORAGE
    case 0xC16C0C: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:36 AND #$00FF
    case 0xC16C0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC16C0F.
    case 0xC16C11: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:37 ORA @VIRTUAL02
    case 0xC16C12: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:38 REP #PROC_FLAGS::INDEX8
    case 0xC16C14: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:39 TAX
    case 0xC16C16: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:40 BEQ @ARG_1_IS_ZERO
    case 0xC16C17: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:41 TXA
    case 0xC16C19: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16C1A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16C1C: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:43 BRA @ARG_1_IS_NONZERO
    case 0xC16C1E: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:45 JSR GET_WORKING_MEMORY
    case 0xC16C20: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:47 LDA @VIRTUAL06
    case 0xC16C23: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:48 STA @VIRTUAL02
    case 0xC16C25: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC16C27: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16C29: {
        Instruction step(cpu, 0xAD, 0x009A70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:51 STA @VIRTUAL00
    case 0xC16C2C: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:52 SEP #PROC_FLAGS::INDEX8
    case 0xC16C2E: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:53 LDY #8
    case 0xC16C30: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00C208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC16C32: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16C30.
    case 0xC16C33: {
        Instruction step(cpu, 0x20, 0x0012A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:55 LDA @LOCAL01
    case 0xC16C34: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:56 JSL ASL16_ENTRY2
    case 0xC16C36: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:57 STA @VIRTUAL04
    case 0xC16C3A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:58 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16C3C: {
        Instruction step(cpu, 0xAD, 0x009A71u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:59 AND #$00FF
    case 0xC16C3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC16C3F.
    case 0xC16C41: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:60 ORA @VIRTUAL04
    case 0xC16C42: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:61 BEQ @ARG_2_IS_ZERO
    case 0xC16C44: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16C46: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16C48: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:63 BRA @ARG_2_IS_NONZERO
    case 0xC16C4A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:65 JSR GET_ARGUMENT_MEMORY
    case 0xC16C4C: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:67 LDA @VIRTUAL06
    case 0xC16C4F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC16C51: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:69 TAY
    case 0xC16C53: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:70 LDA @VIRTUAL00
    case 0xC16C54: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:71 AND #$00FF
    case 0xC16C56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC16C56.
    case 0xC16C58: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:72 TAX
    case 0xC16C59: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:73 DEX
    case 0xC16C5A: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:74 LDA @VIRTUAL02
    case 0xC16C5B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:75 JSL UNKNOWN_C462AE
    case 0xC16C5D: {
        Instruction step(cpu, 0x22, 0xC4400Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:76 INC
    case 0xC16C61: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16C62: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16C64: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16C66: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16C68: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16C6A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16C6C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:79 JSR SET_ARGUMENT_MEMORY
    case 0xC16C6E: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:80 LDA #NULL
    case 0xC16C71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:80 LDA #NULL
    // Overlapping static entry reached from 0xC16C71.
    case 0xC16C73: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16C74: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16C75: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
