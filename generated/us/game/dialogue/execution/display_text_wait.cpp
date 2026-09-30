// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/display_text_wait.asm
bool resume_text_display_text_wait(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/display_text_wait.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DC66: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DC68: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DC69: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DC6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DC6A.
    case 0xC1DC6C: {
        Instruction step(cpu, 0xFF, 0x24A55Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DC6D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DC6E: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DC70: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DC72: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DC74: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DC76: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DC78: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DC7A: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DC7C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:11 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    case 0xC1DC7E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B1u : 0x0098B1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/display_text_wait.asm:11 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    // Overlapping static entry reached from 0xC1DC7E.
    case 0xC1DC80: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:12 LDA __BSS_START__,X
    case 0xC1DC81: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:13 AND #$00FF
    case 0xC1DC84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC1DC84.
    case 0xC1DC86: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text_wait.asm:14 BEQ @UNKNOWN0
    case 0xC1DC87: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_text_wait.asm:15 LDA PAD_STATE
    case 0xC1DC89: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:16 AND #PAD::B_BUTTON
    case 0xC1DC8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:16 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC1DC8C.
    case 0xC1DC8E: {
        Instruction step(cpu, 0x80, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/display_text_wait.asm:17 BEQ @UNKNOWN0
    case 0xC1DC8F: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_text_wait.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DC91: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/display_text_wait.asm:19 LDA #0
    case 0xC1DC93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:20 STA __BSS_START__,X
    case 0xC1DC95: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:20 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1DC93.
    case 0xC1DC96: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text_wait.asm:21 JSL UNKNOWN_C20293
    case 0xC1DC98: {
        Instruction step(cpu, 0x22, 0xC20293u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DC9C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DC9E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCA0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCA2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:24 JSR UNKNOWN_C1AD0A
    case 0xC1DCA4: {
        Instruction step(cpu, 0x20, 0x00AD0Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/display_text_wait.asm:26 LDA BATTLE_MODE_FLAG
    case 0xC1DCA7: {
        Instruction step(cpu, 0xAD, 0x009643u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:27 BEQ @UNKNOWN1
    case 0xC1DCAA: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_text_wait.asm:28 LDA #2
    case 0xC1DCAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:28 LDA #2
    // Overlapping static entry reached from 0xC1DCAC.
    case 0xC1DCAE: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_text_wait.asm:29 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DCAF: {
        Instruction step(cpu, 0x20, 0x000036u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:34 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DCB2: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:34 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DCB4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:34 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DCB6: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:34 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DCB8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCBA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCBC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCBE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCC0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_text_wait.asm:37 JSL DISPLAY_TEXT
    case 0xC1DCC2: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/display_text_wait.asm:38 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DCC6: {
        Instruction step(cpu, 0x20, 0x00003Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/display_text_wait.asm:39 END_C_FUNCTION
    case 0xC1DCC9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/display_text_wait.asm:39 END_C_FUNCTION
    case 0xC1DCCA: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
