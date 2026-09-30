// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/display_in_battle_text.asm
bool resume_text_display_in_battle_text(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/display_in_battle_text.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1D9FF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DA01: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DA02: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DA03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DA03.
    case 0xC1DA05: {
        Instruction step(cpu, 0xFF, 0x20A55Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DA06: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DA07: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DA09: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DA0B: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DA0D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:9 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    case 0xC1DA0F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000062u : 0x009B62u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:9 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    // Overlapping static entry reached from 0xC1DA0F.
    case 0xC1DA11: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:10 LDA __BSS_START__,X
    case 0xC1DA12: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:11 AND #$00FF
    case 0xC1DA15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC1DA15.
    case 0xC1DA17: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:12 BEQ @UNKNOWN0
    case 0xC1DA18: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:13 LDA PAD_STATE
    case 0xC1DA1A: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:14 AND #PAD::B_BUTTON
    case 0xC1DA1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:14 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC1DA1D.
    case 0xC1DA1F: {
        Instruction step(cpu, 0x80, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:15 BEQ @UNKNOWN0
    case 0xC1DA20: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DA22: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:17 LDA #0
    case 0xC1DA24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:18 STA __BSS_START__,X
    case 0xC1DA26: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:18 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1DA24.
    case 0xC1DA27: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:19 JSL UNKNOWN_C20293
    case 0xC1DA29: {
        Instruction step(cpu, 0x22, 0xC2022Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:22 LDA BATTLE_MODE_FLAG
    case 0xC1DA2D: {
        Instruction step(cpu, 0xAD, 0x00993Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:23 BEQ @NO_PROMPT
    case 0xC1DA30: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:24 LDA #2
    case 0xC1DA32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:24 LDA #2
    // Overlapping static entry reached from 0xC1DA32.
    case 0xC1DA34: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:25 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DA35: {
        Instruction step(cpu, 0x20, 0x000032u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA38: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA3A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA3C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA3E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:28 JSL DISPLAY_TEXT
    case 0xC1DA40: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/display_in_battle_text.asm:29 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DA44: {
        Instruction step(cpu, 0x20, 0x000038u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/display_in_battle_text.asm:30 END_C_FUNCTION
    case 0xC1DA47: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/display_in_battle_text.asm:30 END_C_FUNCTION
    case 0xC1DA48: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
