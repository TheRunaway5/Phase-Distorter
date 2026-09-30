// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/set_character_direction.asm
bool resume_text_ccs_set_character_direction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_character_direction.asm:3 BEGIN_C_FUNCTION
    case 0xC163FD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC163FF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16400: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16401: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16402: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16402.
    case 0xC16404: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16405: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16406: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:10 TXA
    case 0xC16407: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:11 STA @LOCAL00
    case 0xC16408: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:12 LDA #1
    case 0xC1640A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1640A.
    case 0xC1640C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:13 CLC
    case 0xC1640D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1640E: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16411: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16413: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16415: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16417: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:16 LDA @LOCAL00
    case 0xC16419: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1641B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1641D: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16420: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16423: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16425: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:22 LDA #.LOWORD(CC_1F_13)
    case 0xC16428: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x0063FDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:22 LDA #.LOWORD(CC_1F_13)
    // Overlapping static entry reached from 0xC16428.
    case 0xC1642A: {
        Instruction step(cpu, 0x63, 0x000080u, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:23 BRA @UNKNOWN7
    case 0xC1642B: {
        Instruction step(cpu, 0x80, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC1642A.
    case 0xC1642C: {
        Instruction step(cpu, 0x3F, 0x97BAADu, 4u, AddressMode::LongIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC1642D: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:26 AND #$00FF
    case 0xC16430: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16430.
    case 0xC16432: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC16433: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC16435: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16437: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1643A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1643C: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1643E: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16440: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:30 BRA @ARG_1_IS_NONZERO
    case 0xC16442: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:32 JSR GET_WORKING_MEMORY
    case 0xC16444: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:32 JSR GET_WORKING_MEMORY
    // Overlapping static entry reached from 0xC1649B.
    case 0xC16446: {
        Instruction step(cpu, 0x04, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC16447: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:34 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16446.
    case 0xC16448: {
        Instruction step(cpu, 0x20, 0x0006A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:35 LDA @VIRTUAL06
    case 0xC16449: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:36 STA @VIRTUAL00
    case 0xC1644B: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC1644D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:38 LDA @LOCAL00
    case 0xC1644F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:39 BEQ @ARG_2_IS_ZERO
    case 0xC16451: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_character_direction.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC16453: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_character_direction.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC16455: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:41 BRA @ARG_2_IS_NONZERO
    case 0xC16457: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:43 JSR GET_ARGUMENT_MEMORY
    case 0xC16459: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:45 LDA @VIRTUAL06
    case 0xC1645C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:46 TAX
    case 0xC1645E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:47 DEX
    case 0xC1645F: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:48 LDA @VIRTUAL00
    case 0xC16460: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:49 AND #$00FF
    case 0xC16462: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC16462.
    case 0xC16464: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:50 JSL UNKNOWN_C46363
    case 0xC16465: {
        Instruction step(cpu, 0x22, 0xC46363u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:51 LDA #NULL
    case 0xC16469: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_character_direction.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC16469.
    case 0xC1646B: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_character_direction.asm:53 END_C_FUNCTION
    case 0xC1646C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_character_direction.asm:53 END_C_FUNCTION
    case 0xC1646D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
