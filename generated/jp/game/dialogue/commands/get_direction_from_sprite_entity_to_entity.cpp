// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm
bool resume_text_ccs_get_direction_from_sprite_entity_to_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16CFA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16CFC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16CFD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16CFE: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16CFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16CFF.
    case 0xC16D01: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16D02: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16D03: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:11 TXA
    case 0xC16D04: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:12 STA @LOCAL01
    case 0xC16D05: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:13 LDA #4
    case 0xC16D07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16D07.
    case 0xC16D09: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:14 CLC
    case 0xC16D0A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D0B: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16D0E: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16D10: {
        Instruction step(cpu, 0x10, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16D12: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16D14: {
        Instruction step(cpu, 0x30, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:17 LDA @LOCAL01
    case 0xC16D16: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16D18: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D1A: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16D1D: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16D20: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D22: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_24)
    case 0xC16D25: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x006CFAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_24)
    // Overlapping static entry reached from 0xC16D25.
    case 0xC16D27: {
        Instruction step(cpu, 0x6C, 0x00A84Cu, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:24 JMP @UNKNOWN7
    case 0xC16D28: {
        Instruction step(cpu, 0x4C, 0x006DA8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC16D2B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:27 LDA #8
    case 0xC16D2D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    case 0xC16D2F: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16D2D.
    case 0xC16D30: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:29 TAY
    case 0xC16D31: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC16D32: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:31 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16D34: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:32 AND #$00FF
    case 0xC16D37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16D37.
    case 0xC16D39: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:33 JSL ASL16_ENTRY2
    case 0xC16D3A: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:34 STA @VIRTUAL02
    case 0xC16D3E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:35 LDA CC_ARGUMENT_STORAGE
    case 0xC16D40: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:36 AND #$00FF
    case 0xC16D43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC16D43.
    case 0xC16D45: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:37 ORA @VIRTUAL02
    case 0xC16D46: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:38 REP #PROC_FLAGS::INDEX8
    case 0xC16D48: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:39 TAX
    case 0xC16D4A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:40 BEQ @ARG_1_IS_ZERO
    case 0xC16D4B: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:41 TXA
    case 0xC16D4D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16D4E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16D50: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:43 BRA @ARG_1_IS_NONZERO
    case 0xC16D52: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:45 JSR GET_WORKING_MEMORY
    case 0xC16D54: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:47 LDA @VIRTUAL06
    case 0xC16D57: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:48 STA @VIRTUAL02
    case 0xC16D59: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC16D5B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16D5D: {
        Instruction step(cpu, 0xAD, 0x009A70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:51 STA @VIRTUAL00
    case 0xC16D60: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:52 SEP #PROC_FLAGS::INDEX8
    case 0xC16D62: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:53 LDY #8
    case 0xC16D64: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00C208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC16D66: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16D64.
    case 0xC16D67: {
        Instruction step(cpu, 0x20, 0x0012A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:55 LDA @LOCAL01
    case 0xC16D68: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:56 JSL ASL16_ENTRY2
    case 0xC16D6A: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:57 STA @VIRTUAL04
    case 0xC16D6E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:58 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16D70: {
        Instruction step(cpu, 0xAD, 0x009A71u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:59 AND #$00FF
    case 0xC16D73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC16D73.
    case 0xC16D75: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:60 ORA @VIRTUAL04
    case 0xC16D76: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:61 BEQ @ARG_2_IS_ZERO
    case 0xC16D78: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16D7A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16D7C: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:63 BRA @ARG_2_IS_NONZERO
    case 0xC16D7E: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:65 JSR GET_ARGUMENT_MEMORY
    case 0xC16D80: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:67 LDA @VIRTUAL06
    case 0xC16D83: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC16D85: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:69 TAY
    case 0xC16D87: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:70 LDA @VIRTUAL00
    case 0xC16D88: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:71 AND #$00FF
    case 0xC16D8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC16D8A.
    case 0xC16D8C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:72 TAX
    case 0xC16D8D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:73 DEX
    case 0xC16D8E: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:74 LDA @VIRTUAL02
    case 0xC16D8F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:75 JSL UNKNOWN_C462C9
    case 0xC16D91: {
        Instruction step(cpu, 0x22, 0xC44025u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:76 INC
    case 0xC16D95: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16D96: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16D98: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16D9A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16D9C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16D9E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16DA0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:79 JSR SET_ARGUMENT_MEMORY
    case 0xC16DA2: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:80 LDA #NULL
    case 0xC16DA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:80 LDA #NULL
    // Overlapping static entry reached from 0xC16DA5.
    case 0xC16DA7: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16DA8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16DA9: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
