// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/change_current_window_font.asm
bool resume_text_change_current_window_font(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/change_current_window_font.asm:3 BEGIN_C_FUNCTION
    case 0xC10FAC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FAE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FAF: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FB0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10FB1.
    case 0xC10FB3: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FB4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FB5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:8 STA @LOCAL00
    case 0xC10FB6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC10FB3.
    case 0xC10FB7: {
        Instruction step(cpu, 0x0E, 0x0058ADu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0xC10FB8: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10FB7.
    case 0xC10FBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000C9u : 0x00FFC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:10 CMP #$FFFF
    case 0xC10FBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:10 CMP #$FFFF
    // Overlapping static entry reached from 0xC10FBA.
    case 0xC10FBC: {
        Instruction step(cpu, 0xFF, 0x28F0FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:10 CMP #$FFFF
    // Overlapping static entry reached from 0xC10FBB.
    case 0xC10FBD: {
        Instruction step(cpu, 0xFF, 0xA528F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:11 BEQ @RETURN
    case 0xC10FBE: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:12 LDA @LOCAL00
    case 0xC10FC0: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:12 LDA @LOCAL00
    // Overlapping static entry reached from 0xC10FBD.
    case 0xC10FC1: {
        Instruction step(cpu, 0x0E, 0x0030C9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:13 CMP #WINDOW::UNKNOWN30
    case 0xC10FC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:13 CMP #WINDOW::UNKNOWN30
    // Overlapping static entry reached from 0xC10FC2.
    case 0xC10FC4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:14 BNE @LOAD_MR_SATURN_FONT_ID
    case 0xC10FC5: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:15 LDA #0
    case 0xC10FC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:15 LDA #0
    // Overlapping static entry reached from 0xC10FC7.
    case 0xC10FC9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:16 STA @LOCAL00
    case 0xC10FCA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:17 BRA @SKIP_MR_SATURN_FONT_ID
    case 0xC10FCC: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:19 LDA #1
    case 0xC10FCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:19 LDA #1
    // Overlapping static entry reached from 0xC10FCE.
    case 0xC10FD0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:20 STA @LOCAL00
    case 0xC10FD1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:22 LDA CURRENT_FOCUS_WINDOW
    case 0xC10FD3: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:23 ASL
    case 0xC10FD6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:24 TAX
    case 0xC10FD7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:25 LDA OPEN_WINDOW_TABLE,X
    case 0xC10FD8: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:26 LDY #.SIZEOF(window_stats)
    case 0xC10FDB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10FDB.
    case 0xC10FDD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:27 JSL MULT168
    case 0xC10FDE: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:28 TAX
    case 0xC10FE2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:29 LDA @LOCAL00
    case 0xC10FE3: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/change_current_window_font.asm:30 STA WINDOW_STATS+window_stats::font,X
    case 0xC10FE5: {
        Instruction step(cpu, 0x9D, 0x008665u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/change_current_window_font.asm:32 END_C_FUNCTION
    case 0xC10FE8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/change_current_window_font.asm:32 END_C_FUNCTION
    case 0xC10FE9: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
