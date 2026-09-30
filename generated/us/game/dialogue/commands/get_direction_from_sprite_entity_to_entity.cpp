// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm
bool resume_text_ccs_get_direction_from_sprite_entity_to_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16A7B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A7D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A7E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A7F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16A80.
    case 0xC16A82: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A83: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A84: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:11 TXA
    case 0xC16A85: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:12 STA @LOCAL01
    case 0xC16A86: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:13 LDA #4
    case 0xC16A88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16A88.
    case 0xC16A8A: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:14 CLC
    case 0xC16A8B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A8C: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16A8F: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16A91: {
        Instruction step(cpu, 0x10, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16A93: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16A95: {
        Instruction step(cpu, 0x30, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:17 LDA @LOCAL01
    case 0xC16A97: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16A99: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A9B: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16A9E: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16AA1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16AA3: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_24)
    case 0xC16AA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x006A7Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_24)
    // Overlapping static entry reached from 0xC16AA6.
    case 0xC16AA8: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:24 JMP @UNKNOWN7
    case 0xC16AA9: {
        Instruction step(cpu, 0x4C, 0x006B29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC16AAC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:27 LDA #8
    case 0xC16AAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    case 0xC16AB0: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16AAE.
    case 0xC16AB1: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:29 TAY
    case 0xC16AB2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC16AB3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:31 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16AB5: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:32 AND #$00FF
    case 0xC16AB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16AB8.
    case 0xC16ABA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:33 JSL ASL16_ENTRY2
    case 0xC16ABB: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:34 STA @VIRTUAL02
    case 0xC16ABF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:35 LDA CC_ARGUMENT_STORAGE
    case 0xC16AC1: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:36 AND #$00FF
    case 0xC16AC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC16AC4.
    case 0xC16AC6: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:37 ORA @VIRTUAL02
    case 0xC16AC7: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:38 REP #PROC_FLAGS::INDEX8
    case 0xC16AC9: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:39 TAX
    case 0xC16ACB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:40 BEQ @ARG_1_IS_ZERO
    case 0xC16ACC: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:41 TXA
    case 0xC16ACE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16ACF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16AD1: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:43 BRA @ARG_1_IS_NONZERO
    case 0xC16AD3: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:45 JSR GET_WORKING_MEMORY
    case 0xC16AD5: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:47 LDA @VIRTUAL06
    case 0xC16AD8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:48 STA @VIRTUAL02
    case 0xC16ADA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC16ADC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16ADE: {
        Instruction step(cpu, 0xAD, 0x0097BCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:51 STA @VIRTUAL00
    case 0xC16AE1: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:52 SEP #PROC_FLAGS::INDEX8
    case 0xC16AE3: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:53 LDY #8
    case 0xC16AE5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00C208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC16AE7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16AE5.
    case 0xC16AE8: {
        Instruction step(cpu, 0x20, 0x0012A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:55 LDA @LOCAL01
    case 0xC16AE9: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:56 JSL ASL16_ENTRY2
    case 0xC16AEB: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:57 STA @VIRTUAL04
    case 0xC16AEF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:58 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16AF1: {
        Instruction step(cpu, 0xAD, 0x0097BDu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:59 AND #$00FF
    case 0xC16AF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC16AF4.
    case 0xC16AF6: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:60 ORA @VIRTUAL04
    case 0xC16AF7: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:61 BEQ @ARG_2_IS_ZERO
    case 0xC16AF9: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16AFB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16AFD: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:63 BRA @ARG_2_IS_NONZERO
    case 0xC16AFF: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:65 JSR GET_ARGUMENT_MEMORY
    case 0xC16B01: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:67 LDA @VIRTUAL06
    case 0xC16B04: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC16B06: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:69 TAY
    case 0xC16B08: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:70 LDA @VIRTUAL00
    case 0xC16B09: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:71 AND #$00FF
    case 0xC16B0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC16B0B.
    case 0xC16B0D: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:72 TAX
    case 0xC16B0E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:73 DEX
    case 0xC16B0F: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:74 LDA @VIRTUAL02
    case 0xC16B10: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:75 JSL UNKNOWN_C462C9
    case 0xC16B12: {
        Instruction step(cpu, 0x22, 0xC462C9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:76 INC
    case 0xC16B16: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16B17: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16B19: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16B1B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16B1D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16B1F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16B21: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:79 JSR SET_ARGUMENT_MEMORY
    case 0xC16B23: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:80 LDA #NULL
    case 0xC16B26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:80 LDA #NULL
    // Overlapping static entry reached from 0xC16B26.
    case 0xC16B28: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16B29: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16B2A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
