// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/display_battle_animation.asm
bool resume_text_ccs_display_battle_animation(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/display_battle_animation.asm:3 BEGIN_C_FUNCTION
    case 0xC17640: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17642: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17643: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17644: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17645: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC17645.
    case 0xC17647: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17648: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17649: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:11 STX @LOCAL01
    case 0xC1764A: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC17647.
    case 0xC1764B: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    case 0xC1764C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1764B.
    case 0xC1764D: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1764C.
    case 0xC1764E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:13 CLC
    case 0xC1764F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17650: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17653: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17655: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17657: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17659: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:16 TXA
    case 0xC1765B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1765C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1765E: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC17661: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC17664: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17666: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:22 LDA #.LOWORD(CC_1C_13)
    case 0xC17669: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x007640u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:22 LDA #.LOWORD(CC_1C_13)
    // Overlapping static entry reached from 0xC17669.
    case 0xC1766B: {
        Instruction step(cpu, 0x76, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:23 BRA @UNKNOWN5
    case 0xC1766C: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:23 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC1766B.
    case 0xC1766D: {
        Instruction step(cpu, 0x2F, 0x003E20u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:25 JSR GET_BLINKING_PROMPT
    case 0xC1766E: {
        Instruction step(cpu, 0x20, 0x00003Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:26 CMP #0
    case 0xC17671: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:26 CMP #0
    // Overlapping static entry reached from 0xC17671.
    case 0xC17673: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:27 BEQ @UNKNOWN4
    case 0xC17674: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:28 LDX @LOCAL01
    case 0xC17676: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:29 DEX
    case 0xC17678: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:30 LDA CC_ARGUMENT_STORAGE
    case 0xC17679: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:31 AND #$00FF
    case 0xC1767C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC1767C.
    case 0xC1767E: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:32 DEC
    case 0xC1767F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:33 JSL UNKNOWN_C3FAC9
    case 0xC17680: {
        Instruction step(cpu, 0x22, 0xC3F60Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17684: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC17684.
    case 0xC17686: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17687: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17689: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1768B: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1768D: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1768F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17691: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17693: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17695: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:36 JSR SET_WORKING_MEMORY
    case 0xC17697: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:38 LDA #NULL
    case 0xC1769A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:38 LDA #NULL
    // Overlapping static entry reached from 0xC1769A.
    case 0xC1769C: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/display_battle_animation.asm:40 END_C_FUNCTION
    case 0xC1769D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/display_battle_animation.asm:40 END_C_FUNCTION
    case 0xC1769E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
