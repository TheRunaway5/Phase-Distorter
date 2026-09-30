// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/display_battle_animation.asm
bool resume_text_ccs_display_battle_animation(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/display_battle_animation.asm:3 BEGIN_C_FUNCTION
    case 0xC173C0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC173C5.
    case 0xC173C7: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:11 STX @LOCAL01
    case 0xC173CA: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC173C7.
    case 0xC173CB: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    case 0xC173CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    // Overlapping static entry reached from 0xC173CB.
    case 0xC173CD: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    // Overlapping static entry reached from 0xC173CC.
    case 0xC173CE: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:13 CLC
    case 0xC173CF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173D0: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC173D3: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC173D5: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC173D7: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC173D9: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:16 TXA
    case 0xC173DB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC173DC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173DE: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC173E1: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC173E4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173E6: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:22 LDA #.LOWORD(CC_1C_13)
    case 0xC173E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0073C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:22 LDA #.LOWORD(CC_1C_13)
    // Overlapping static entry reached from 0xC173E9.
    case 0xC173EB: {
        Instruction step(cpu, 0x73, 0x000080u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:23 BRA @UNKNOWN5
    case 0xC173EC: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:23 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC173EB.
    case 0xC173ED: {
        Instruction step(cpu, 0x2F, 0x004220u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:25 JSR GET_BLINKING_PROMPT
    case 0xC173EE: {
        Instruction step(cpu, 0x20, 0x000042u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:26 CMP #0
    case 0xC173F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:26 CMP #0
    // Overlapping static entry reached from 0xC173F1.
    case 0xC173F3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:27 BEQ @UNKNOWN4
    case 0xC173F4: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:28 LDX @LOCAL01
    case 0xC173F6: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:29 DEX
    case 0xC173F8: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:30 LDA CC_ARGUMENT_STORAGE
    case 0xC173F9: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:31 AND #$00FF
    case 0xC173FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC173FC.
    case 0xC173FE: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:32 DEC
    case 0xC173FF: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:33 JSL UNKNOWN_C3FAC9
    case 0xC17400: {
        Instruction step(cpu, 0x22, 0xC3FAC9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17404: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC17404.
    case 0xC17406: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17407: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17409: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1740B: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1740D: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1740F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17411: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17413: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17415: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:36 JSR SET_WORKING_MEMORY
    case 0xC17417: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:38 LDA #NULL
    case 0xC1741A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/display_battle_animation.asm:38 LDA #NULL
    // Overlapping static entry reached from 0xC1741A.
    case 0xC1741C: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/display_battle_animation.asm:40 END_C_FUNCTION
    case 0xC1741D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/display_battle_animation.asm:40 END_C_FUNCTION
    case 0xC1741E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
