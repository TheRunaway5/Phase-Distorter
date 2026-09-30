// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/set_character_level.asm
bool resume_text_ccs_set_character_level(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_character_level.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16C80: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C82: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C83: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C84: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC16C85.
    case 0xC16C87: {
        Instruction step(cpu, 0xFF, 0xA9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C88: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C89: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    case 0xC16C8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    // Overlapping static entry reached from 0xC16C87.
    case 0xC16C8B: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    // Overlapping static entry reached from 0xC16C8A.
    case 0xC16C8C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:10 CLC
    case 0xC16C8D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:11 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C8E: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16C91: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16C93: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16C95: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16C97: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:13 TXA
    case 0xC16C99: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC16C9A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:15 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C9C: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:16 STA CC_ARGUMENT_STORAGE,X
    case 0xC16C9F: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC16CA2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:18 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16CA4: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:19 LDA #.LOWORD(CC_1E_08)
    case 0xC16CA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x006C80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:19 LDA #.LOWORD(CC_1E_08)
    // Overlapping static entry reached from 0xC16CA7.
    case 0xC16CA9: {
        Instruction step(cpu, 0x6C, 0x004C80u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:20 BRA @UNKNOWN8
    case 0xC16CAA: {
        Instruction step(cpu, 0x80, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC16CAC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC16CAE: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:24 STA @VIRTUAL00
    case 0xC16CB1: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC16CB3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:26 TXA
    case 0xC16CB5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC16CB6: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16CB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    // Overlapping static entry reached from 0xC16CB8.
    case 0xC16CBA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16CBB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16CBD: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16CBF: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16CC1: {
        Instruction step(cpu, 0xC6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:29 BRA @ARG_1_IS_NONZERO2
    case 0xC16CC3: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:31 JSR GET_ARGUMENT_MEMORY
    case 0xC16CC5: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16CC8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16CCA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16CCC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16CCE: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:34 LDA @VIRTUAL00
    case 0xC16CD0: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:35 AND #$00FF
    case 0xC16CD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC16CD2.
    case 0xC16CD4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:36 BEQ @ARG_2_IS_ZERO
    case 0xC16CD5: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC16CD7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16CD9: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    // Overlapping static entry reached from 0xC16D30.
    case 0xC16CDA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16CDB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16CDD: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16CDF: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16CE1: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:39 BRA @ARG_2_IS_NONZERO
    case 0xC16CE3: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:41 JSR GET_WORKING_MEMORY
    case 0xC16CE5: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:43 LDY #$0001
    case 0xC16CE8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:43 LDY #$0001
    // Overlapping static entry reached from 0xC16CE8.
    case 0xC16CEA: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC16CEB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:45 LDA @VIRTUAL0A
    case 0xC16CED: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:46 TAX
    case 0xC16CEF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:47 LDA @VIRTUAL06
    case 0xC16CF0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:48 JSR RESET_CHAR_LEVEL_ONE
    case 0xC16CF2: {
        Instruction step(cpu, 0x20, 0x00D6CBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:49 LDA #NULL
    case 0xC16CF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:49 LDA #NULL
    // Overlapping static entry reached from 0xC16CF5.
    case 0xC16CF7: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:51 PLD
    case 0xC16CF8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/ccs/set_character_level.asm:52 RTS
    case 0xC16CF9: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
