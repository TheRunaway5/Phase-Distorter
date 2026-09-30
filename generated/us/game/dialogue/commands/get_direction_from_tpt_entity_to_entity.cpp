// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm
bool resume_text_ccs_get_direction_from_tpt_entity_to_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16947: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16949: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC1694A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC1694B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC1694C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1694C.
    case 0xC1694E: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC1694F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16950: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:11 TXA
    case 0xC16951: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:12 STA @LOCAL01
    case 0xC16952: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:13 LDA #4
    case 0xC16954: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16954.
    case 0xC16956: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:14 CLC
    case 0xC16957: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16958: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1695B: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1695D: {
        Instruction step(cpu, 0x10, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1695F: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16961: {
        Instruction step(cpu, 0x30, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:17 LDA @LOCAL01
    case 0xC16963: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16965: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16967: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1696A: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1696D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1696F: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_23)
    case 0xC16972: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000047u : 0x006947u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_23)
    // Overlapping static entry reached from 0xC16972.
    case 0xC16974: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Cu : 0x00F54Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:24 JMP @UNKNOWN7
    case 0xC16975: {
        Instruction step(cpu, 0x4C, 0x0069F5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:24 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC16974.
    case 0xC16976: {
        Instruction step(cpu, 0xF5, 0x000069u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:24 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC16974.
    case 0xC16977: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC16978: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16977.
    case 0xC16979: {
        Instruction step(cpu, 0x20, 0x0008A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:27 LDA #8
    case 0xC1697A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    case 0xC1697C: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC1697A.
    case 0xC1697D: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:29 TAY
    case 0xC1697E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC1697F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:31 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16981: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:32 AND #$00FF
    case 0xC16984: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16984.
    case 0xC16986: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:33 JSL ASL16_ENTRY2
    case 0xC16987: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:34 STA @VIRTUAL02
    case 0xC1698B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:35 LDA CC_ARGUMENT_STORAGE
    case 0xC1698D: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:36 AND #$00FF
    case 0xC16990: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC16990.
    case 0xC16992: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:37 ORA @VIRTUAL02
    case 0xC16993: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:38 REP #PROC_FLAGS::INDEX8
    case 0xC16995: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:39 TAX
    case 0xC16997: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:40 BEQ @ARG_1_IS_ZERO
    case 0xC16998: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:41 TXA
    case 0xC1699A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC1699B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC1699D: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:43 BRA @ARG_1_IS_NONZERO
    case 0xC1699F: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:45 JSR GET_WORKING_MEMORY
    case 0xC169A1: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:47 LDA @VIRTUAL06
    case 0xC169A4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:48 STA @VIRTUAL02
    case 0xC169A6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC169A8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC169AA: {
        Instruction step(cpu, 0xAD, 0x0097BCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:51 STA @VIRTUAL00
    case 0xC169AD: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:52 SEP #PROC_FLAGS::INDEX8
    case 0xC169AF: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:53 LDY #8
    case 0xC169B1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00C208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC169B3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC169B1.
    case 0xC169B4: {
        Instruction step(cpu, 0x20, 0x0012A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:55 LDA @LOCAL01
    case 0xC169B5: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:56 JSL ASL16_ENTRY2
    case 0xC169B7: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:57 STA @VIRTUAL04
    case 0xC169BB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:58 LDA CC_ARGUMENT_STORAGE+3
    case 0xC169BD: {
        Instruction step(cpu, 0xAD, 0x0097BDu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:59 AND #$00FF
    case 0xC169C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC169C0.
    case 0xC169C2: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:60 ORA @VIRTUAL04
    case 0xC169C3: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:61 BEQ @ARG_2_IS_ZERO
    case 0xC169C5: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC169C7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC169C9: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:63 BRA @ARG_2_IS_NONZERO
    case 0xC169CB: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:65 JSR GET_ARGUMENT_MEMORY
    case 0xC169CD: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:67 LDA @VIRTUAL06
    case 0xC169D0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC169D2: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:69 TAY
    case 0xC169D4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:70 LDA @VIRTUAL00
    case 0xC169D5: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:71 AND #$00FF
    case 0xC169D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC169D7.
    case 0xC169D9: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:72 TAX
    case 0xC169DA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:73 DEX
    case 0xC169DB: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:74 LDA @VIRTUAL02
    case 0xC169DC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:75 JSL UNKNOWN_C462AE
    case 0xC169DE: {
        Instruction step(cpu, 0x22, 0xC462AEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:76 INC
    case 0xC169E2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC169E3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC169E5: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC169E7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC169E9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC169EB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC169ED: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:79 JSR SET_ARGUMENT_MEMORY
    case 0xC169EF: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:80 LDA #NULL
    case 0xC169F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:80 LDA #NULL
    // Overlapping static entry reached from 0xC169F2.
    case 0xC169F4: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC169F5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC169F6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
