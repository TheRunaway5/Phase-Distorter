// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/get_direction_from_character_to_entity.asm
bool resume_text_ccs_get_direction_from_character_to_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16B1F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B21: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B22: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B23: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16B24.
    case 0xC16B26: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B27: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B28: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:11 TXA
    case 0xC16B29: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:12 STA @LOCAL01
    case 0xC16B2A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:13 LDA #3
    case 0xC16B2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:13 LDA #3
    // Overlapping static entry reached from 0xC16B2C.
    case 0xC16B2E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:14 CLC
    case 0xC16B2F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16B30: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16B33: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16B35: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16B37: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16B39: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:17 LDA @LOCAL01
    case 0xC16B3B: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16B3D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16B3F: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16B42: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16B45: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16B47: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:23 LDA #.LOWORD(CC_19_22)
    case 0xC16B4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x006B1Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:23 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC16B4A.
    case 0xC16B4C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:24 BRA @UNKNOWN7
    case 0xC16B4D: {
        Instruction step(cpu, 0x80, 0x000075u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC16B4F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:27 LDA CC_ARGUMENT_STORAGE
    case 0xC16B51: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:28 STA @VIRTUAL00
    case 0xC16B54: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC16B56: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:30 LDA @VIRTUAL00
    case 0xC16B58: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:31 AND #$00FF
    case 0xC16B5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC16B5A.
    case 0xC16B5C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:32 BEQ @ARG_1_IS_ZERO
    case 0xC16B5D: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC16B5F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16B61: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16B63: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16B65: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16B67: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16B69: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:35 BRA @ARG_1_IS_NONZERO
    case 0xC16B6B: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:37 JSR GET_WORKING_MEMORY
    case 0xC16B6D: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC16B70: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:40 LDA @VIRTUAL06
    case 0xC16B72: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:41 STA @VIRTUAL01
    case 0xC16B74: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:42 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16B76: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:43 STA @VIRTUAL00
    case 0xC16B79: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:44 SEP #PROC_FLAGS::INDEX8
    case 0xC16B7B: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:45 LDY #8
    case 0xC16B7D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00C208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC16B7F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:46 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16B7D.
    case 0xC16B80: {
        Instruction step(cpu, 0x20, 0x0012A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:47 LDA @LOCAL01
    case 0xC16B81: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:48 JSL ASL16_ENTRY2
    case 0xC16B83: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:49 STA @VIRTUAL02
    case 0xC16B87: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16B89: {
        Instruction step(cpu, 0xAD, 0x009A70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:51 AND #$00FF
    case 0xC16B8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC16B8C.
    case 0xC16B8E: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:52 ORA @VIRTUAL02
    case 0xC16B8F: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:53 BEQ @ARG_2_IS_ZERO
    case 0xC16B91: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC16B93: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC16B95: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:55 BRA @ARG_2_IS_NONZERO
    case 0xC16B97: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:57 JSR GET_ARGUMENT_MEMORY
    case 0xC16B99: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:59 LDA @VIRTUAL06
    case 0xC16B9C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:60 REP #PROC_FLAGS::INDEX8
    case 0xC16B9E: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:61 TAY
    case 0xC16BA0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:62 LDA @VIRTUAL00
    case 0xC16BA1: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:63 AND #$00FF
    case 0xC16BA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC16BA3.
    case 0xC16BA5: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:64 TAX
    case 0xC16BA6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:65 DEX
    case 0xC16BA7: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:66 LDA @VIRTUAL01
    case 0xC16BA8: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:67 AND #$00FF
    case 0xC16BAA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC16BAA.
    case 0xC16BAC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:68 JSL UNKNOWN_C462E4
    case 0xC16BAD: {
        Instruction step(cpu, 0x22, 0xC44040u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:69 INC
    case 0xC16BB1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:70 STORE_INT1632 @VIRTUAL06
    case 0xC16BB2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:70 STORE_INT1632 @VIRTUAL06
    case 0xC16BB4: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16BB6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16BB8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16BBA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16BBC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:72 JSR SET_ARGUMENT_MEMORY
    case 0xC16BBE: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:73 LDA #NULL
    case 0xC16BC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_character_to_entity.asm:73 LDA #NULL
    // Overlapping static entry reached from 0xC16BC1.
    case 0xC16BC3: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:75 END_C_FUNCTION
    case 0xC16BC4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:75 END_C_FUNCTION
    case 0xC16BC5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
