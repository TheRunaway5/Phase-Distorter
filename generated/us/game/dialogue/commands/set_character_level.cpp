// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/set_character_level.asm
bool resume_text_ccs_set_character_level(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_character_level.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16A01: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A03: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A04: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A05: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC16A06.
    case 0xC16A08: {
        Instruction step(cpu, 0xFF, 0xA9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A09: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A0A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    case 0xC16A0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    // Overlapping static entry reached from 0xC16A08.
    case 0xC16A0C: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    // Overlapping static entry reached from 0xC16A0B.
    case 0xC16A0D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:10 CLC
    case 0xC16A0E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:11 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A0F: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16A12: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16A14: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16A16: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16A18: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:13 TXA
    case 0xC16A1A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC16A1B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:15 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A1D: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:16 STA CC_ARGUMENT_STORAGE,X
    case 0xC16A20: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC16A23: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:18 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A25: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:19 LDA #.LOWORD(CC_1E_08)
    case 0xC16A28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x006A01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:19 LDA #.LOWORD(CC_1E_08)
    // Overlapping static entry reached from 0xC16A28.
    case 0xC16A2A: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:20 BRA @UNKNOWN8
    case 0xC16A2B: {
        Instruction step(cpu, 0x80, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC16A2D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC16A2F: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:24 STA @VIRTUAL00
    case 0xC16A32: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC16A34: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:26 TXA
    case 0xC16A36: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC16A37: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16A39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    // Overlapping static entry reached from 0xC16A39.
    case 0xC16A3B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16A3C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16A3E: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16A40: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16A42: {
        Instruction step(cpu, 0xC6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:29 BRA @ARG_1_IS_NONZERO2
    case 0xC16A44: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:31 JSR GET_ARGUMENT_MEMORY
    case 0xC16A46: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16A49: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16A4B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16A4D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16A4F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:34 LDA @VIRTUAL00
    case 0xC16A51: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:35 AND #$00FF
    case 0xC16A53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC16A53.
    case 0xC16A55: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:36 BEQ @ARG_2_IS_ZERO
    case 0xC16A56: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC16A58: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16A5A: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    // Overlapping static entry reached from 0xC16AB1.
    case 0xC16A5B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16A5C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16A5E: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16A60: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16A62: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:39 BRA @ARG_2_IS_NONZERO
    case 0xC16A64: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:41 JSR GET_WORKING_MEMORY
    case 0xC16A66: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:43 LDY #$0001
    case 0xC16A69: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:43 LDY #$0001
    // Overlapping static entry reached from 0xC16A69.
    case 0xC16A6B: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC16A6C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:45 LDA @VIRTUAL0A
    case 0xC16A6E: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:46 TAX
    case 0xC16A70: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:47 LDA @VIRTUAL06
    case 0xC16A71: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:48 JSR RESET_CHAR_LEVEL_ONE
    case 0xC16A73: {
        Instruction step(cpu, 0x20, 0x00D8D0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:49 LDA #NULL
    case 0xC16A76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:49 LDA #NULL
    // Overlapping static entry reached from 0xC16A76.
    case 0xC16A78: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:51 PLD
    case 0xC16A79: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:52 RTS
    case 0xC16A7A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
