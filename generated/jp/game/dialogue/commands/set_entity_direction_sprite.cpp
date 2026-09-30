// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/set_entity_direction_sprite.asm
bool resume_text_ccs_set_entity_direction_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC16DAA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DAC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DAD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DAE: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16DAF.
    case 0xC16DB1: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DB2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DB3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:11 STX @LOCAL01
    case 0xC16DB4: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16DB1.
    case 0xC16DB5: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:12 LDA #2
    case 0xC16DB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:12 LDA #2
    // Overlapping static entry reached from 0xC16DB5.
    case 0xC16DB7: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:12 LDA #2
    // Overlapping static entry reached from 0xC16DB6.
    case 0xC16DB8: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:13 CLC
    case 0xC16DB9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16DBA: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16DBD: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16DBF: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16DC1: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16DC3: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:16 TXA
    case 0xC16DC5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16DC6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16DC8: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16DCB: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16DCE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16DD0: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:22 LDA #.LOWORD(CC_1F_E4)
    case 0xC16DD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AAu : 0x006DAAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:22 LDA #.LOWORD(CC_1F_E4)
    // Overlapping static entry reached from 0xC16DD3.
    case 0xC16DD5: {
        Instruction step(cpu, 0x6D, 0x004980u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:23 BRA @UNKNOWN7
    case 0xC16DD6: {
        Instruction step(cpu, 0x80, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC16DD8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:26 LDA #8
    case 0xC16DDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC16DDC: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:27 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16DDA.
    case 0xC16DDD: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:28 TAY
    case 0xC16DDE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC16DDF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16DE1: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:31 AND #$00FF
    case 0xC16DE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC16DE4.
    case 0xC16DE6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:32 JSL ASL16_ENTRY2
    case 0xC16DE7: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:33 STA @VIRTUAL02
    case 0xC16DEB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:34 LDA CC_ARGUMENT_STORAGE
    case 0xC16DED: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:35 AND #$00FF
    case 0xC16DF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC16DF0.
    case 0xC16DF2: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:36 ORA @VIRTUAL02
    case 0xC16DF3: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:37 BEQ @ARG_1_IS_ZERO
    case 0xC16DF5: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC16DF7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC16DF9: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:39 BRA @ARG_1_IS_NONZERO
    case 0xC16DFB: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:41 JSR GET_WORKING_MEMORY
    case 0xC16DFD: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:43 LDA @VIRTUAL06
    case 0xC16E00: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:44 STA @LOCAL00
    case 0xC16E02: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:45 REP #PROC_FLAGS::INDEX8
    case 0xC16E04: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:46 LDX @LOCAL01
    case 0xC16E06: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:47 BEQ @ARG_2_IS_ZERO
    case 0xC16E08: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:48 TXA
    case 0xC16E0A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC16E0B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC16E0D: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:50 BRA @ARG_2_IS_NONZERO
    case 0xC16E0F: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:52 JSR GET_ARGUMENT_MEMORY
    case 0xC16E11: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:54 LDA @VIRTUAL06
    case 0xC16E14: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:55 TAX
    case 0xC16E16: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:56 DEX
    case 0xC16E17: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:57 LDA @LOCAL00
    case 0xC16E18: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:58 JSL UNKNOWN_C46331
    case 0xC16E1A: {
        Instruction step(cpu, 0x22, 0xC4408Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:59 LDA #NULL
    case 0xC16E1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_entity_direction_sprite.asm:59 LDA #NULL
    // Overlapping static entry reached from 0xC16E1E.
    case 0xC16E20: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:61 END_C_FUNCTION
    case 0xC16E21: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:61 END_C_FUNCTION
    case 0xC16E22: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
