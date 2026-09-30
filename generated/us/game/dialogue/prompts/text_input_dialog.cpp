// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/text_input_dialog.asm
bool resume_text_text_input_dialog(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/text_input_dialog.asm:3 BEGIN_C_FUNCTION
    case 0xC1E57F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E581: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E582: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E583: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E584: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D0u : 0x00FFD0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E584.
    case 0xC1E586: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E587: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E588: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:28 STY @LOCAL0F
    case 0xC1E589: {
        Instruction step(cpu, 0x84, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:28 STY @LOCAL0F
    // Overlapping static entry reached from 0xC1E586.
    case 0xC1E58A: {
        Instruction step(cpu, 0x2E, 0x002C86u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:29 STX @LOCAL0E
    case 0xC1E58B: {
        Instruction step(cpu, 0x86, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:30 STA @LOCAL0D
    case 0xC1E58D: {
        Instruction step(cpu, 0x85, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:31 LDY @PARAM04
    case 0xC1E58F: {
        Instruction step(cpu, 0xA4, 0x000040u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:32 STY @LOCAL0C
    case 0xC1E591: {
        Instruction step(cpu, 0x84, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:33 LDX @PARAM03
    case 0xC1E593: {
        Instruction step(cpu, 0xA6, 0x00003Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:34 STX @LOCAL0B
    case 0xC1E595: {
        Instruction step(cpu, 0x86, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:35 LDA #.LOWORD(-1)
    case 0xC1E597: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E597.
    case 0xC1E599: {
        Instruction step(cpu, 0xFF, 0x642485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:36 STA @LOCAL0A
    case 0xC1E59A: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:37 STZ @LOCAL09
    case 0xC1E59C: {
        Instruction step(cpu, 0x64, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:37 STZ @LOCAL09
    // Overlapping static entry reached from 0xC1E599.
    case 0xC1E59D: {
        Instruction step(cpu, 0x22, 0x8522A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:38 LDA @LOCAL09
    case 0xC1E59E: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:39 STA @LOCAL08
    case 0xC1E5A0: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:39 STA @LOCAL08
    // Overlapping static entry reached from 0xC1E59D.
    case 0xC1E5A1: {
        Instruction step(cpu, 0x20, 0x0026A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:40 LDA @LOCAL0B
    case 0xC1E5A2: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:41 STA @LOCAL07
    case 0xC1E5A4: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:42 JSL SET_INSTANT_PRINTING
    case 0xC1E5A6: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog.asm:43 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E5AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog.asm:43 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1E5AA.
    case 0xC1E5AC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/text_input_dialog.asm:43 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E5AD: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:44 LDA @LOCAL0C
    case 0xC1E5B0: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:45 CMP #.LOWORD(-1)
    case 0xC1E5B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:45 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E5B2.
    case 0xC1E5B4: {
        Instruction step(cpu, 0xFF, 0xAF1AD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:46 BNE @UNKNOWN0
    case 0xC1E5B5: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E5B7: {
        Instruction step(cpu, 0xAF, 0xEFA6E7u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5B4.
    case 0xC1E5B8: {
        Instruction step(cpu, 0xE7, 0x0000A6u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5B8.
    case 0xC1E5BA: {
        Instruction step(cpu, 0xEF, 0xAF0685u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E5BB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E5BD: {
        Instruction step(cpu, 0xAF, 0xEFA6E9u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5BA.
    case 0xC1E5BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000A6u : 0x00EFA6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5BE.
    case 0xC1E5C0: {
        Instruction step(cpu, 0xEF, 0xA50885u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E5C1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5C3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC1E5C0.
    case 0xC1E5C4: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5C5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC1E5C4.
    case 0xC1E5C6: {
        Instruction step(cpu, 0x0E, 0x0008A5u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5C9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:49 JSL DISPLAY_TEXT
    case 0xC1E5CB: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:50 BRA @UNKNOWN1
    case 0xC1E5CF: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:52 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E5D1: {
        Instruction step(cpu, 0xAF, 0xEFA6E3u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:52 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E5D5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:52 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E5D7: {
        Instruction step(cpu, 0xAF, 0xEFA6E5u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:52 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E5DB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5DD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5DF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5E1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5E3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:54 JSL DISPLAY_TEXT
    case 0xC1E5E5: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E5E9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:57 STZ CHARACTER_PADDING
    case 0xC1E5EB: {
        Instruction step(cpu, 0x9C, 0x005E6Du, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1E5EE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:59 LDA @LOCAL0C
    case 0xC1E5F0: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:60 CMP #.LOWORD(-1)
    case 0xC1E5F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:60 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E5F2.
    case 0xC1E5F4: {
        Instruction step(cpu, 0xFF, 0xA931D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:61 BNE @UNKNOWN2
    case 0xC1E5F5: {
        Instruction step(cpu, 0xD0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E5F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D3u : 0x00A6D3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E5F4.
    case 0xC1E5F8: {
        Instruction step(cpu, 0xD3, 0x0000A6u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E5F7.
    case 0xC1E5F9: {
        Instruction step(cpu, 0xA6, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E5FA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E5F9.
    case 0xC1E5FB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E5FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E5FC.
    case 0xC1E5FE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E5FF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:63 LDA @LOCAL0B
    case 0xC1E601: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:64 ASL
    case 0xC1E603: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:65 ASL
    case 0xC1E604: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:66 CLC
    case 0xC1E605: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:67 ADC #8
    case 0xC1E606: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:67 ADC #8
    // Overlapping static entry reached from 0xC1E606.
    case 0xC1E608: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:68 CLC
    case 0xC1E609: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:69 ADC @VIRTUAL0A
    case 0xC1E60A: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:70 STA @VIRTUAL0A
    case 0xC1E60C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E60E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E60E.
    case 0xC1E610: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E611: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E613: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E614: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E616: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E618: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E61A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E61C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E61E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E620: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:73 JSL DISPLAY_TEXT
    case 0xC1E622: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:74 BRA @UNKNOWN3
    case 0xC1E626: {
        Instruction step(cpu, 0x80, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E628: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D3u : 0x00A6D3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E628.
    case 0xC1E62A: {
        Instruction step(cpu, 0xA6, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E62B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E62A.
    case 0xC1E62C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E62D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E62D.
    case 0xC1E62F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E630: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:77 LDA @LOCAL0B
    case 0xC1E632: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:78 ASL
    case 0xC1E634: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:79 ASL
    case 0xC1E635: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:80 CLC
    case 0xC1E636: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:81 ADC @VIRTUAL0A
    case 0xC1E637: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:82 STA @VIRTUAL0A
    case 0xC1E639: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E63B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E63B.
    case 0xC1E63D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E63E: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E640: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E641: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E643: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E645: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E647: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E649: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E64B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E64D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:85 JSL DISPLAY_TEXT
    case 0xC1E64F: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E653: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:88 LDA #1
    case 0xC1E655: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:89 STA CHARACTER_PADDING
    case 0xC1E657: {
        Instruction step(cpu, 0x8D, 0x005E6Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:89 STA CHARACTER_PADDING
    // Overlapping static entry reached from 0xC1E655.
    case 0xC1E658: {
        Instruction step(cpu, 0x6D, 0x00225Eu, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:91 JSL SET_INSTANT_PRINTING
    case 0xC1E65A: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:91 JSL SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1E658.
    case 0xC1E65B: {
        Instruction step(cpu, 0xD4, 0x0000E4u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:91 JSL SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1E65B.
    case 0xC1E65D: {
        Instruction step(cpu, 0xC3, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:92 LDA @LOCAL07
    case 0xC1E65E: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:92 LDA @LOCAL07
    // Overlapping static entry reached from 0xC1E65D.
    case 0xC1E65F: {
        Instruction step(cpu, 0x1E, 0x0026C5u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:93 CMP @LOCAL0B
    case 0xC1E660: {
        Instruction step(cpu, 0xC5, 0x000026u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:94 BEQL @UNKNOWN10
    case 0xC1E662: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:94 BEQL @UNKNOWN10
    case 0xC1E664: {
        Instruction step(cpu, 0x4C, 0x00E71Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog.asm:96 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E667: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog.asm:96 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1E667.
    case 0xC1E669: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/text_input_dialog.asm:96 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E66A: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:97 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1E66D: {
        Instruction step(cpu, 0x22, 0xC3E4E0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:99 LDA @LOCAL0C
    case 0xC1E671: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:100 CMP #.LOWORD(-1)
    case 0xC1E673: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:100 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E673.
    case 0xC1E675: {
        Instruction step(cpu, 0xFF, 0xAF1AD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:101 BNE @UNKNOWN6
    case 0xC1E676: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E678: {
        Instruction step(cpu, 0xAF, 0xEFA6E7u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E675.
    case 0xC1E679: {
        Instruction step(cpu, 0xE7, 0x0000A6u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E679.
    case 0xC1E67B: {
        Instruction step(cpu, 0xEF, 0xAF0685u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E67C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E67E: {
        Instruction step(cpu, 0xAF, 0xEFA6E9u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E67B.
    case 0xC1E67F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000A6u : 0x00EFA6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E67F.
    case 0xC1E681: {
        Instruction step(cpu, 0xEF, 0xA50885u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E682: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E684: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC1E681.
    case 0xC1E685: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E686: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC1E685.
    case 0xC1E687: {
        Instruction step(cpu, 0x0E, 0x0008A5u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E688: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E68A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:104 JSL DISPLAY_TEXT
    case 0xC1E68C: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:105 BRA @UNKNOWN7
    case 0xC1E690: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:107 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E692: {
        Instruction step(cpu, 0xAF, 0xEFA6E3u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:107 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E696: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:107 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E698: {
        Instruction step(cpu, 0xAF, 0xEFA6E5u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:107 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E69C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E69E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6A0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6A2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6A4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:109 JSL DISPLAY_TEXT
    case 0xC1E6A6: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:111 LDA @LOCAL0B
    case 0xC1E6AA: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:112 STA @LOCAL07
    case 0xC1E6AC: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E6AE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:114 STZ CHARACTER_PADDING
    case 0xC1E6B0: {
        Instruction step(cpu, 0x9C, 0x005E6Du, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC1E6B3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:116 LDA @LOCAL0C
    case 0xC1E6B5: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:117 CMP #.LOWORD(-1)
    case 0xC1E6B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:117 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E6B7.
    case 0xC1E6B9: {
        Instruction step(cpu, 0xFF, 0xA931D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:118 BNE @UNKNOWN8
    case 0xC1E6BA: {
        Instruction step(cpu, 0xD0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D3u : 0x00A6D3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6B9.
    case 0xC1E6BD: {
        Instruction step(cpu, 0xD3, 0x0000A6u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6BC.
    case 0xC1E6BE: {
        Instruction step(cpu, 0xA6, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6BF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6BE.
    case 0xC1E6C0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6C1.
    case 0xC1E6C3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6C4: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:120 LDA @LOCAL0B
    case 0xC1E6C6: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/text/text_input_dialog.asm:121 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E6C8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/text/text_input_dialog.asm:121 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E6C9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:122 CLC
    case 0xC1E6CA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:123 ADC #8
    case 0xC1E6CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:123 ADC #8
    // Overlapping static entry reached from 0xC1E6CB.
    case 0xC1E6CD: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:124 CLC
    case 0xC1E6CE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:125 ADC @VIRTUAL0A
    case 0xC1E6CF: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:126 STA @VIRTUAL0A
    case 0xC1E6D1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6D3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E6D3.
    case 0xC1E6D5: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6D6: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6D8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6D9: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6DB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6DD: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6DF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6E1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6E3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6E5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:129 JSL DISPLAY_TEXT
    case 0xC1E6E7: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:130 BRA @UNKNOWN9
    case 0xC1E6EB: {
        Instruction step(cpu, 0x80, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D3u : 0x00A6D3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6ED.
    case 0xC1E6EF: {
        Instruction step(cpu, 0xA6, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6F0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6EF.
    case 0xC1E6F1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6F2.
    case 0xC1E6F4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6F5: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:133 LDA @LOCAL0B
    case 0xC1E6F7: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/text/text_input_dialog.asm:134 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E6F9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/text/text_input_dialog.asm:134 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E6FA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:135 CLC
    case 0xC1E6FB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:136 ADC @VIRTUAL0A
    case 0xC1E6FC: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:137 STA @VIRTUAL0A
    case 0xC1E6FE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E700: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E700.
    case 0xC1E702: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E703: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E705: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E706: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E708: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E70A: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:139 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E70C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:139 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E70E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:139 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E710: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:139 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E712: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:140 JSL DISPLAY_TEXT
    case 0xC1E714: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:142 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E718: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:143 LDA #1
    case 0xC1E71A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:144 STA CHARACTER_PADDING
    case 0xC1E71C: {
        Instruction step(cpu, 0x8D, 0x005E6Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:144 STA CHARACTER_PADDING
    // Overlapping static entry reached from 0xC1E71A.
    case 0xC1E71D: {
        Instruction step(cpu, 0x6D, 0x00C25Eu, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:146 REP #PROC_FLAGS::ACCUM8
    case 0xC1E71F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:146 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1E71D.
    case 0xC1E720: {
        Instruction step(cpu, 0x20, 0x0058ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:147 LDA CURRENT_FOCUS_WINDOW
    case 0xC1E721: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:147 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1E80A.
    case 0xC1E722: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:147 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1E720.
    case 0xC1E723: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x00000Au : 0x00AA0Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:148 ASL
    case 0xC1E724: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:149 TAX
    case 0xC1E725: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:150 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E726: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:151 LDY #.SIZEOF(window_stats)
    case 0xC1E729: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:151 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E729.
    case 0xC1E72B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:152 JSL MULT168
    case 0xC1E72C: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:153 CLC
    case 0xC1E730: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:154 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1E731: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:154 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1E731.
    case 0xC1E733: {
        Instruction step(cpu, 0x86, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:155 STA @LOCAL06
    case 0xC1E734: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:155 STA @LOCAL06
    // Overlapping static entry reached from 0xC1E733.
    case 0xC1E735: {
        Instruction step(cpu, 0x1C, 0x00CA22u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:157 JSL CLEAR_INSTANT_PRINTING
    case 0xC1E736: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:157 JSL CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1E735.
    case 0xC1E738: {
        Instruction step(cpu, 0xE4, 0x0000C3u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:158 LDX @LOCAL09
    case 0xC1E73A: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:159 LDA @LOCAL08
    case 0xC1E73C: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:160 JSL UNKNOWN_C438A5
    case 0xC1E73E: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:161 LDA #1
    case 0xC1E742: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:161 LDA #1
    // Overlapping static entry reached from 0xC1E742.
    case 0xC1E744: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:162 JSR UNKNOWN_C10FEA
    case 0xC1E745: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:163 LDA #33
    case 0xC1E748: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:163 LDA #33
    // Overlapping static entry reached from 0xC1E748.
    case 0xC1E74A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:164 JSR UNKNOWN_C10D60
    case 0xC1E74B: {
        Instruction step(cpu, 0x20, 0x000D60u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:165 LDA #0
    case 0xC1E74E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:165 LDA #0
    // Overlapping static entry reached from 0xC1E74E.
    case 0xC1E750: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:166 JSR UNKNOWN_C10FEA
    case 0xC1E751: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:167 JSL WINDOW_TICK
    case 0xC1E754: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:168 LDA #1
    case 0xC1E758: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:168 LDA #1
    // Overlapping static entry reached from 0xC1E758.
    case 0xC1E75A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:169 STA @VIRTUAL04
    case 0xC1E75B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:171 LDA @VIRTUAL04
    case 0xC1E75D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:172 EOR #$0001
    case 0xC1E75F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:172 EOR #$0001
    // Overlapping static entry reached from 0xC1E75F.
    case 0xC1E761: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:173 STA @VIRTUAL04
    case 0xC1E762: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:174 LDY #window_stats::text_y
    case 0xC1E764: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:174 LDY #window_stats::text_y
    // Overlapping static entry reached from 0xC1E764.
    case 0xC1E766: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:175 LDA (@LOCAL06),Y
    case 0xC1E767: {
        Instruction step(cpu, 0xB1, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:176 ASL
    case 0xC1E769: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:177 LDY #window_stats::window_y
    case 0xC1E76A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:177 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC1E76A.
    case 0xC1E76C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:178 CLC
    case 0xC1E76D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:179 ADC (@LOCAL06),Y
    case 0xC1E76E: {
        Instruction step(cpu, 0x71, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/text_input_dialog.asm:180 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E770: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/text_input_dialog.asm:180 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E771: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/text_input_dialog.asm:180 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E772: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/text_input_dialog.asm:180 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E773: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/text_input_dialog.asm:180 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E774: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:181 STA @VIRTUAL02
    case 0xC1E775: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:182 LDY #window_stats::window_x
    case 0xC1E777: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:182 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC1E777.
    case 0xC1E779: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:183 LDA (@LOCAL06),Y
    case 0xC1E77A: {
        Instruction step(cpu, 0xB1, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:184 LDY #window_stats::text_x
    case 0xC1E77C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:184 LDY #window_stats::text_x
    // Overlapping static entry reached from 0xC1E77C.
    case 0xC1E77E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:185 CLC
    case 0xC1E77F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:186 ADC (@LOCAL06),Y
    case 0xC1E780: {
        Instruction step(cpu, 0x71, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:187 CLC
    case 0xC1E782: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:188 ADC @VIRTUAL02
    case 0xC1E783: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:189 CLC
    case 0xC1E785: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:190 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC1E786: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x007C20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:190 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC1E786.
    case 0xC1E788: {
        Instruction step(cpu, 0x7C, 0x001A85u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:191 STA @LOCAL05
    case 0xC1E789: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:192 LDA @VIRTUAL04
    case 0xC1E78B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:193 ASL
    case 0xC1E78D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:194 STA @VIRTUAL02
    case 0xC1E78E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E790: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x00E406u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E790.
    case 0xC1E792: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E793: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E792.
    case 0xC1E794: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E795: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E794.
    case 0xC1E796: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E795.
    case 0xC1E797: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E798: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:196 LDA @VIRTUAL02
    case 0xC1E79A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:197 CLC
    case 0xC1E79C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:198 ADC @VIRTUAL06
    case 0xC1E79D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:199 STA @VIRTUAL06
    case 0xC1E79F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:200 STA @LOCAL00
    case 0xC1E7A1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:201 LDA @VIRTUAL06+2
    case 0xC1E7A3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:202 STA @LOCAL00+2
    case 0xC1E7A5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:203 LDY @LOCAL05
    case 0xC1E7A7: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:204 LDX #2
    case 0xC1E7A9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:204 LDX #2
    // Overlapping static entry reached from 0xC1E7A9.
    case 0xC1E7AB: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:205 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E7AC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:206 LDA #0
    case 0xC1E7AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:207 JSL PREPARE_VRAM_COPY
    case 0xC1E7B0: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:207 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E7AE.
    case 0xC1E7B1: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:207 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E7B1.
    case 0xC1E7B3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x000AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E7B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00E40Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E7B3.
    case 0xC1E7B5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E7B4.
    case 0xC1E7B6: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E7B7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E7B6.
    case 0xC1E7B8: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E7B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E7B8.
    case 0xC1E7BA: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E7B9.
    case 0xC1E7BB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E7BC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:210 LDA @VIRTUAL02
    case 0xC1E7BE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:211 CLC
    case 0xC1E7C0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:212 ADC @VIRTUAL06
    case 0xC1E7C1: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:213 STA @VIRTUAL06
    case 0xC1E7C3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:214 STA @LOCAL00
    case 0xC1E7C5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:215 LDA @VIRTUAL06+2
    case 0xC1E7C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:216 STA @LOCAL00+2
    case 0xC1E7C9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:217 LDA @LOCAL05
    case 0xC1E7CB: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:218 CLC
    case 0xC1E7CD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:219 ADC #32
    case 0xC1E7CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:219 ADC #32
    // Overlapping static entry reached from 0xC1E7CE.
    case 0xC1E7D0: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:220 TAY
    case 0xC1E7D1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:221 LDX #2
    case 0xC1E7D2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:221 LDX #2
    // Overlapping static entry reached from 0xC1E7D2.
    case 0xC1E7D4: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:222 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E7D5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:223 LDA #0
    case 0xC1E7D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:224 JSL PREPARE_VRAM_COPY
    case 0xC1E7D9: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:224 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E7D7.
    case 0xC1E7DA: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:224 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E7DA.
    case 0xC1E7DC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x0000A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:226 LDX #0
    case 0xC1E7DD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:226 LDX #0
    // Overlapping static entry reached from 0xC1E7DC.
    case 0xC1E7DE: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:226 LDX #0
    // Overlapping static entry reached from 0xC1E7DD.
    case 0xC1E7DF: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:227 STX @LOCAL04
    case 0xC1E7E0: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:228 JMP @UNKNOWN37
    case 0xC1E7E2: {
        Instruction step(cpu, 0x4C, 0x00EA0Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:230 JSL UNKNOWN_C1004E
    case 0xC1E7E5: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:231 LDA PAD_PRESS
    case 0xC1E7E9: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:232 AND #PAD::UP
    case 0xC1E7EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:232 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E7EC.
    case 0xC1E7EE: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:233 BEQ @UNKNOWN14
    case 0xC1E7EF: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:234 STZ @LOCAL00
    case 0xC1E7F1: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:235 LDA #SFX::UNKNOWN7C
    case 0xC1E7F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x00007Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:235 LDA #SFX::UNKNOWN7C
    // Overlapping static entry reached from 0xC1E7F3.
    case 0xC1E7F5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:236 STA @LOCAL00+2
    case 0xC1E7F6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:237 LDA @LOCAL08
    case 0xC1E7F8: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:238 STA @LOCAL01
    case 0xC1E7FA: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:239 LDY #window_stats::height
    case 0xC1E7FC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:239 LDY #window_stats::height
    // Overlapping static entry reached from 0xC1E7FC.
    case 0xC1E7FE: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:240 LDA (@LOCAL06),Y
    case 0xC1E7FF: {
        Instruction step(cpu, 0xB1, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:241 LSR
    case 0xC1E801: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:242 STA @LOCAL02
    case 0xC1E802: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:243 LDY #.LOWORD(-1)
    case 0xC1E804: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:243 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E804.
    case 0xC1E806: {
        Instruction step(cpu, 0xFF, 0xA522A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:244 LDX @LOCAL09
    case 0xC1E807: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:245 LDA @LOCAL08
    case 0xC1E809: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:245 LDA @LOCAL08
    // Overlapping static entry reached from 0xC1E806.
    case 0xC1E80A: {
        Instruction step(cpu, 0x20, 0x00E722u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:246 JSL MOVE_CURSOR
    case 0xC1E80B: {
        Instruction step(cpu, 0x22, 0xC118E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:246 JSL MOVE_CURSOR
    // Overlapping static entry reached from 0xC1E80A.
    case 0xC1E80D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:246 JSL MOVE_CURSOR
    // Overlapping static entry reached from 0xC1E80D.
    case 0xC1E80E: {
        Instruction step(cpu, 0xC1, 0x0000A8u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:247 TAY
    case 0xC1E80F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:248 STY @LOCAL03
    case 0xC1E810: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:249 JMP @UNKNOWN40
    case 0xC1E812: {
        Instruction step(cpu, 0x4C, 0x00EA23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:251 LDA PAD_PRESS
    case 0xC1E815: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:252 AND #PAD::LEFT
    case 0xC1E818: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:252 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E818.
    case 0xC1E81A: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:253 BEQ @UNKNOWN15
    case 0xC1E81B: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:254 LDA #.LOWORD(-1)
    case 0xC1E81D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:254 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E81D.
    case 0xC1E81F: {
        Instruction step(cpu, 0xFF, 0xA90E85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:255 STA @LOCAL00
    case 0xC1E820: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:256 LDA #$007B
    case 0xC1E822: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00007Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:256 LDA #$007B
    // Overlapping static entry reached from 0xC1E81F.
    case 0xC1E823: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:256 LDA #$007B
    // Overlapping static entry reached from 0xC1E822.
    case 0xC1E824: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:257 STA @LOCAL00+2
    case 0xC1E825: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:258 LDY #window_stats::width
    case 0xC1E827: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:258 LDY #window_stats::width
    // Overlapping static entry reached from 0xC1E827.
    case 0xC1E829: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:259 LDA (@LOCAL06),Y
    case 0xC1E82A: {
        Instruction step(cpu, 0xB1, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:260 STA @LOCAL01
    case 0xC1E82C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:261 LDA @LOCAL09
    case 0xC1E82E: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:262 STA @LOCAL02
    case 0xC1E830: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:263 LDY #0
    case 0xC1E832: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:263 LDY #0
    // Overlapping static entry reached from 0xC1E832.
    case 0xC1E834: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:264 LDX @LOCAL09
    case 0xC1E835: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:265 LDA @LOCAL08
    case 0xC1E837: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:266 JSL MOVE_CURSOR
    case 0xC1E839: {
        Instruction step(cpu, 0x22, 0xC118E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:267 TAY
    case 0xC1E83D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:268 STY @LOCAL03
    case 0xC1E83E: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:269 JMP @UNKNOWN40
    case 0xC1E840: {
        Instruction step(cpu, 0x4C, 0x00EA23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:271 LDA PAD_PRESS
    case 0xC1E843: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:272 AND #PAD::DOWN
    case 0xC1E846: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:272 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E846.
    case 0xC1E848: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:273 BEQ @UNKNOWN16
    case 0xC1E849: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:273 BEQ @UNKNOWN16
    // Overlapping static entry reached from 0xC1E848.
    case 0xC1E84A: {
        Instruction step(cpu, 0x21, 0x000064u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:274 STZ @LOCAL00
    case 0xC1E84B: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:274 STZ @LOCAL00
    // Overlapping static entry reached from 0xC1E84A.
    case 0xC1E84C: {
        Instruction step(cpu, 0x0E, 0x007CA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:275 LDA #SFX::UNKNOWN7C
    case 0xC1E84D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x00007Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:275 LDA #SFX::UNKNOWN7C
    // Overlapping static entry reached from 0xC1E84D.
    case 0xC1E84F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:276 STA @LOCAL00+2
    case 0xC1E850: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:277 LDA @LOCAL08
    case 0xC1E852: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:278 STA @LOCAL01
    case 0xC1E854: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:279 LDA #.LOWORD(-1)
    case 0xC1E856: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:279 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E856.
    case 0xC1E858: {
        Instruction step(cpu, 0xFF, 0xA01485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:280 STA @LOCAL02
    case 0xC1E859: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:281 LDY #1
    case 0xC1E85B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:281 LDY #1
    // Overlapping static entry reached from 0xC1E858.
    case 0xC1E85C: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:281 LDY #1
    // Overlapping static entry reached from 0xC1E85B.
    case 0xC1E85D: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:282 LDX @LOCAL09
    case 0xC1E85E: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:283 LDA @LOCAL08
    case 0xC1E860: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:284 JSL MOVE_CURSOR
    case 0xC1E862: {
        Instruction step(cpu, 0x22, 0xC118E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:285 TAY
    case 0xC1E866: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:286 STY @LOCAL03
    case 0xC1E867: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:287 JMP @UNKNOWN40
    case 0xC1E869: {
        Instruction step(cpu, 0x4C, 0x00EA23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:289 LDA PAD_PRESS
    case 0xC1E86C: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:290 AND #PAD::RIGHT
    case 0xC1E86F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:290 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E86F.
    case 0xC1E871: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:291 BEQ @UNKNOWN17
    case 0xC1E872: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:291 BEQ @UNKNOWN17
    // Overlapping static entry reached from 0xC1E871.
    case 0xC1E873: {
        Instruction step(cpu, 0x24, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:292 LDA #1
    case 0xC1E874: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:292 LDA #1
    // Overlapping static entry reached from 0xC1E873.
    case 0xC1E875: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:292 LDA #1
    // Overlapping static entry reached from 0xC1E874.
    case 0xC1E876: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:293 STA @LOCAL00
    case 0xC1E877: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:294 LDA #$007B
    case 0xC1E879: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00007Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:294 LDA #$007B
    // Overlapping static entry reached from 0xC1E879.
    case 0xC1E87B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:295 STA @LOCAL00+2
    case 0xC1E87C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:296 LDA #.LOWORD(-1)
    case 0xC1E87E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:296 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E87E.
    case 0xC1E880: {
        Instruction step(cpu, 0xFF, 0xA51285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:297 STA @LOCAL01
    case 0xC1E881: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:298 LDA @LOCAL09
    case 0xC1E883: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:298 LDA @LOCAL09
    // Overlapping static entry reached from 0xC1E880.
    case 0xC1E884: {
        Instruction step(cpu, 0x22, 0xA01485u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:299 STA @LOCAL02
    case 0xC1E885: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:300 LDY #0
    case 0xC1E887: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:300 LDY #0
    // Overlapping static entry reached from 0xC1E884.
    case 0xC1E888: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:300 LDY #0
    // Overlapping static entry reached from 0xC1E887.
    case 0xC1E889: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:301 LDX @LOCAL09
    case 0xC1E88A: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:302 LDA @LOCAL08
    case 0xC1E88C: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:303 JSL MOVE_CURSOR
    case 0xC1E88E: {
        Instruction step(cpu, 0x22, 0xC118E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:304 TAY
    case 0xC1E892: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:305 STY @LOCAL03
    case 0xC1E893: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:306 JMP @UNKNOWN40
    case 0xC1E895: {
        Instruction step(cpu, 0x4C, 0x00EA23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:308 LDA PAD_HELD
    case 0xC1E898: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:309 AND #PAD::UP
    case 0xC1E89B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:309 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E89B.
    case 0xC1E89D: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:310 BEQ @UNKNOWN18
    case 0xC1E89E: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:311 STZ @LOCAL00
    case 0xC1E8A0: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:312 LDA #SFX::UNKNOWN7C
    case 0xC1E8A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x00007Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:312 LDA #SFX::UNKNOWN7C
    // Overlapping static entry reached from 0xC1E8A2.
    case 0xC1E8A4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:313 STA @LOCAL00+2
    case 0xC1E8A5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:314 LDY #.LOWORD(-1)
    case 0xC1E8A7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:314 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E8A7.
    case 0xC1E8A9: {
        Instruction step(cpu, 0xFF, 0xA522A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:315 LDX @LOCAL09
    case 0xC1E8AA: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:316 LDA @LOCAL08
    case 0xC1E8AC: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:316 LDA @LOCAL08
    // Overlapping static entry reached from 0xC1E8A9.
    case 0xC1E8AD: {
        Instruction step(cpu, 0x20, 0x006522u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:317 JSL UNKNOWN_C20B65
    case 0xC1E8AE: {
        Instruction step(cpu, 0x22, 0xC20B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:317 JSL UNKNOWN_C20B65
    // Overlapping static entry reached from 0xC1E8AD.
    case 0xC1E8B0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:317 JSL UNKNOWN_C20B65
    // Overlapping static entry reached from 0xC1E8B0.
    case 0xC1E8B1: {
        Instruction step(cpu, 0xC2, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:318 TAY
    case 0xC1E8B2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:319 STY @LOCAL03
    case 0xC1E8B3: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:320 JMP @UNKNOWN40
    case 0xC1E8B5: {
        Instruction step(cpu, 0x4C, 0x00EA23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:322 LDA PAD_HELD
    case 0xC1E8B8: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:323 AND #PAD::DOWN
    case 0xC1E8BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:323 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E8BB.
    case 0xC1E8BD: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:324 BEQ @UNKNOWN19
    case 0xC1E8BE: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:324 BEQ @UNKNOWN19
    // Overlapping static entry reached from 0xC1E8BD.
    case 0xC1E8BF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:325 STZ @LOCAL00
    case 0xC1E8C0: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:326 LDA #SFX::UNKNOWN7C
    case 0xC1E8C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x00007Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:326 LDA #SFX::UNKNOWN7C
    // Overlapping static entry reached from 0xC1E8C2.
    case 0xC1E8C4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:327 STA @LOCAL00+2
    case 0xC1E8C5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:328 LDY #1
    case 0xC1E8C7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:328 LDY #1
    // Overlapping static entry reached from 0xC1E8C7.
    case 0xC1E8C9: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:329 LDX @LOCAL09
    case 0xC1E8CA: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:330 LDA @LOCAL08
    case 0xC1E8CC: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:331 JSL UNKNOWN_C20B65
    case 0xC1E8CE: {
        Instruction step(cpu, 0x22, 0xC20B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:332 TAY
    case 0xC1E8D2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:333 STY @LOCAL03
    case 0xC1E8D3: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:334 JMP @UNKNOWN40
    case 0xC1E8D5: {
        Instruction step(cpu, 0x4C, 0x00EA23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:336 LDA PAD_HELD
    case 0xC1E8D8: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:337 AND #PAD::LEFT
    case 0xC1E8DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:337 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E8DB.
    case 0xC1E8DD: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:338 BEQ @UNKNOWN20
    case 0xC1E8DE: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:339 LDA #.LOWORD(-1)
    case 0xC1E8E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:339 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E8E0.
    case 0xC1E8E2: {
        Instruction step(cpu, 0xFF, 0xA90E85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:340 STA @LOCAL00
    case 0xC1E8E3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:341 LDA #$007B
    case 0xC1E8E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00007Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:341 LDA #$007B
    // Overlapping static entry reached from 0xC1E8E2.
    case 0xC1E8E6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:341 LDA #$007B
    // Overlapping static entry reached from 0xC1E8E5.
    case 0xC1E8E7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:342 STA @LOCAL00+2
    case 0xC1E8E8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:343 LDY #0
    case 0xC1E8EA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:343 LDY #0
    // Overlapping static entry reached from 0xC1E8EA.
    case 0xC1E8EC: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:344 LDX @LOCAL09
    case 0xC1E8ED: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:345 LDA @LOCAL08
    case 0xC1E8EF: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:346 JSL UNKNOWN_C20B65
    case 0xC1E8F1: {
        Instruction step(cpu, 0x22, 0xC20B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:347 TAY
    case 0xC1E8F5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:348 STY @LOCAL03
    case 0xC1E8F6: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:349 JMP @UNKNOWN40
    case 0xC1E8F8: {
        Instruction step(cpu, 0x4C, 0x00EA23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:351 LDA PAD_HELD
    case 0xC1E8FB: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:352 AND #PAD::RIGHT
    case 0xC1E8FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:352 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E8FE.
    case 0xC1E900: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:353 BEQ @UNKNOWN21
    case 0xC1E901: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:353 BEQ @UNKNOWN21
    // Overlapping static entry reached from 0xC1E900.
    case 0xC1E902: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:354 LDA #1
    case 0xC1E903: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:354 LDA #1
    // Overlapping static entry reached from 0xC1E903.
    case 0xC1E905: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:355 STA @LOCAL00
    case 0xC1E906: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:356 LDA #$007B
    case 0xC1E908: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00007Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:356 LDA #$007B
    // Overlapping static entry reached from 0xC1E908.
    case 0xC1E90A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:357 STA @LOCAL00+2
    case 0xC1E90B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:358 LDY #0
    case 0xC1E90D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:358 LDY #0
    // Overlapping static entry reached from 0xC1E90D.
    case 0xC1E90F: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:359 LDX @LOCAL09
    case 0xC1E910: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:360 LDA @LOCAL08
    case 0xC1E912: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:361 JSL UNKNOWN_C20B65
    case 0xC1E914: {
        Instruction step(cpu, 0x22, 0xC20B65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:362 TAY
    case 0xC1E918: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:363 STY @LOCAL03
    case 0xC1E919: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:364 JMP @UNKNOWN40
    case 0xC1E91B: {
        Instruction step(cpu, 0x4C, 0x00EA23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:366 LDA PAD_PRESS
    case 0xC1E91E: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:367 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1E921: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:367 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1E921.
    case 0xC1E923: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:368 BEQL @UNKNOWN32
    case 0xC1E924: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:368 BEQL @UNKNOWN32
    case 0xC1E926: {
        Instruction step(cpu, 0x4C, 0x00E9C5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:369 LDA @LOCAL09
    case 0xC1E929: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:370 CMP #6
    case 0xC1E92B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:370 CMP #6
    // Overlapping static entry reached from 0xC1E92B.
    case 0xC1E92D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:371 BNE @SELECTION_NOT_IN_LINE_6
    case 0xC1E92E: {
        Instruction step(cpu, 0xD0, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:372 LDA @LOCAL08
    case 0xC1E930: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:373 BEQ @DONTCARE_SELECTED
    case 0xC1E932: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:374 CMP #17
    case 0xC1E934: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:374 CMP #17
    // Overlapping static entry reached from 0xC1E934.
    case 0xC1E936: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:375 BEQ @BACKSPACE_SELECTED
    case 0xC1E937: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:376 CMP #25
    case 0xC1E939: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:376 CMP #25
    // Overlapping static entry reached from 0xC1E939.
    case 0xC1E93B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:377 BEQ @OK_SELECTED
    case 0xC1E93C: {
        Instruction step(cpu, 0xF0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:378 JMP @UNKNOWN36
    case 0xC1E93E: {
        Instruction step(cpu, 0x4C, 0x00EA07u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:380 LDA #SFX::TEXT_INPUT
    case 0xC1E941: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Au : 0x00007Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:380 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E941.
    case 0xC1E943: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:381 JSL PLAY_SOUND
    case 0xC1E944: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:382 LDY @LOCAL0A
    case 0xC1E948: {
        Instruction step(cpu, 0xA4, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:383 LDX @LOCAL0C
    case 0xC1E94A: {
        Instruction step(cpu, 0xA6, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:384 LDA @LOCAL0D
    case 0xC1E94C: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:385 JSR UNKNOWN_C1E4BE
    case 0xC1E94E: {
        Instruction step(cpu, 0x20, 0x00E4BEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:386 STA @LOCAL0A
    case 0xC1E951: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:387 JMP @UNKNOWN11
    case 0xC1E953: {
        Instruction step(cpu, 0x4C, 0x00E736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:389 LDA #SFX::TEXT_INPUT
    case 0xC1E956: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Au : 0x00007Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:389 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E956.
    case 0xC1E958: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:390 JSL PLAY_SOUND
    case 0xC1E959: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:391 LDY #.LOWORD(-1)
    case 0xC1E95D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:391 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E95D.
    case 0xC1E95F: {
        Instruction step(cpu, 0xFF, 0xA52CA6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:392 LDX @LOCAL0E
    case 0xC1E960: {
        Instruction step(cpu, 0xA6, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:393 LDA @LOCAL0D
    case 0xC1E962: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:393 LDA @LOCAL0D
    // Overlapping static entry reached from 0xC1E95F.
    case 0xC1E963: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:394 JSR UNKNOWN_C1E48D
    case 0xC1E964: {
        Instruction step(cpu, 0x20, 0x00E48Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:395 CMP #0
    case 0xC1E967: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:395 CMP #0
    // Overlapping static entry reached from 0xC1E967.
    case 0xC1E969: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:396 BEQL @UNKNOWN11
    case 0xC1E96A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:396 BEQL @UNKNOWN11
    case 0xC1E96C: {
        Instruction step(cpu, 0x4C, 0x00E736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:397 LDA @LOCAL0C
    case 0xC1E96F: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:398 CMP #.LOWORD(-1)
    case 0xC1E971: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:398 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E971.
    case 0xC1E973: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:399 BEQL @UNKNOWN11
    case 0xC1E974: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:399 BEQL @UNKNOWN11
    case 0xC1E976: {
        Instruction step(cpu, 0x4C, 0x00E736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:399 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC1E973.
    case 0xC1E977: {
        Instruction step(cpu, 0x36, 0x0000E7u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:400 LDA #1
    case 0xC1E979: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:400 LDA #1
    // Overlapping static entry reached from 0xC1E979.
    case 0xC1E97B: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:401 JMP @UNKNOWN48
    case 0xC1E97C: {
        Instruction step(cpu, 0x4C, 0x00EAA4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:403 LDA #SFX::UNKNOWN5E
    case 0xC1E97F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:403 LDA #SFX::UNKNOWN5E
    // Overlapping static entry reached from 0xC1E97F.
    case 0xC1E981: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:404 JSL PLAY_SOUND
    case 0xC1E982: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:405 JMP @UNKNOWN42
    case 0xC1E986: {
        Instruction step(cpu, 0x4C, 0x00EA4Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:407 LDA #SFX::TEXT_INPUT
    case 0xC1E989: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Au : 0x00007Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:407 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E989.
    case 0xC1E98B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:408 JSL PLAY_SOUND
    case 0xC1E98C: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:409 LDA @LOCAL09
    case 0xC1E990: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:410 CMP #4
    case 0xC1E992: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:410 CMP #4
    // Overlapping static entry reached from 0xC1E992.
    case 0xC1E994: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:411 BNE @UNKNOWN31
    case 0xC1E995: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:412 LDA @LOCAL08
    case 0xC1E997: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:413 BEQ @UNKNOWN29
    case 0xC1E999: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:414 CMP #7
    case 0xC1E99B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:414 CMP #7
    // Overlapping static entry reached from 0xC1E99B.
    case 0xC1E99D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:415 BEQ @UNKNOWN30
    case 0xC1E99E: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:416 BRA @UNKNOWN31
    case 0xC1E9A0: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:418 STZ @LOCAL0B
    case 0xC1E9A2: {
        Instruction step(cpu, 0x64, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:419 JMP @UNKNOWN4
    case 0xC1E9A4: {
        Instruction step(cpu, 0x4C, 0x00E65Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:421 LDA #1
    case 0xC1E9A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:421 LDA #1
    // Overlapping static entry reached from 0xC1E9A7.
    case 0xC1E9A9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:422 STA @LOCAL0B
    case 0xC1E9AA: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:423 JMP @UNKNOWN4
    case 0xC1E9AC: {
        Instruction step(cpu, 0x4C, 0x00E65Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:425 LDY @LOCAL0B
    case 0xC1E9AF: {
        Instruction step(cpu, 0xA4, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:426 LDX @LOCAL09
    case 0xC1E9B1: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:427 LDA @LOCAL08
    case 0xC1E9B3: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:428 LSR
    case 0xC1E9B5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:429 JSL GET_CHARACTER_AT_CURSOR_POSITION
    case 0xC1E9B6: {
        Instruction step(cpu, 0x22, 0xC4406Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:430 TAY
    case 0xC1E9BA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:431 LDX @LOCAL0E
    case 0xC1E9BB: {
        Instruction step(cpu, 0xA6, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:432 LDA @LOCAL0D
    case 0xC1E9BD: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:433 JSR UNKNOWN_C1E48D
    case 0xC1E9BF: {
        Instruction step(cpu, 0x20, 0x00E48Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:434 JMP @UNKNOWN11
    case 0xC1E9C2: {
        Instruction step(cpu, 0x4C, 0x00E736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:436 LDA PAD_PRESS
    case 0xC1E9C5: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:437 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC1E9C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:437 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC1E9C8.
    case 0xC1E9CA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x0029F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:438 BEQ @UNKNOWN35
    case 0xC1E9CB: {
        Instruction step(cpu, 0xF0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:438 BEQ @UNKNOWN35
    // Overlapping static entry reached from 0xC1E9CA.
    case 0xC1E9CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A9u : 0x007DA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:439 LDA #SFX::UNKNOWN7D
    case 0xC1E9CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00007Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:439 LDA #SFX::UNKNOWN7D
    // Overlapping static entry reached from 0xC1E9CC.
    case 0xC1E9CE: {
        Instruction step(cpu, 0x7D, 0x002200u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:439 LDA #SFX::UNKNOWN7D
    // Overlapping static entry reached from 0xC1E9CD.
    case 0xC1E9CF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:440 JSL PLAY_SOUND
    case 0xC1E9D0: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:440 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1E9CE.
    case 0xC1E9D1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000ABu : 0x00C0ABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:440 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1E9D1.
    case 0xC1E9D3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A0u : 0x00FFA0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:441 LDY #.LOWORD(-1)
    case 0xC1E9D4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:441 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E9D3.
    case 0xC1E9D5: {
        Instruction step(cpu, 0xFF, 0x2CA6FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:441 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E9D4.
    case 0xC1E9D6: {
        Instruction step(cpu, 0xFF, 0xA52CA6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:442 LDX @LOCAL0E
    case 0xC1E9D7: {
        Instruction step(cpu, 0xA6, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:443 LDA @LOCAL0D
    case 0xC1E9D9: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:443 LDA @LOCAL0D
    // Overlapping static entry reached from 0xC1E9D6.
    case 0xC1E9DA: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:444 JSR UNKNOWN_C1E48D
    case 0xC1E9DB: {
        Instruction step(cpu, 0x20, 0x00E48Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:445 CMP #0
    case 0xC1E9DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:445 CMP #0
    // Overlapping static entry reached from 0xC1E9DE.
    case 0xC1E9E0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:446 BEQL @UNKNOWN11
    case 0xC1E9E1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:446 BEQL @UNKNOWN11
    case 0xC1E9E3: {
        Instruction step(cpu, 0x4C, 0x00E736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:447 LDA @LOCAL0C
    case 0xC1E9E6: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:448 CMP #.LOWORD(-1)
    case 0xC1E9E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:448 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E9E8.
    case 0xC1E9EA: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:449 BEQL @UNKNOWN11
    case 0xC1E9EB: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:449 BEQL @UNKNOWN11
    case 0xC1E9ED: {
        Instruction step(cpu, 0x4C, 0x00E736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:449 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC1E9EA.
    case 0xC1E9EE: {
        Instruction step(cpu, 0x36, 0x0000E7u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:450 LDA #1
    case 0xC1E9F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:450 LDA #1
    // Overlapping static entry reached from 0xC1E9F0.
    case 0xC1E9F2: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:451 JMP @UNKNOWN48
    case 0xC1E9F3: {
        Instruction step(cpu, 0x4C, 0x00EAA4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:453 LDA PAD_PRESS
    case 0xC1E9F6: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:454 AND #PAD::START_BUTTON
    case 0xC1E9F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:454 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC1E9F9.
    case 0xC1E9FB: {
        Instruction step(cpu, 0x10, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:455 BEQ @UNKNOWN36
    case 0xC1E9FC: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:455 BEQ @UNKNOWN36
    // Overlapping static entry reached from 0xC1E9FB.
    case 0xC1E9FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000A9u : 0x007EA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:456 LDA #SFX::UNKNOWN7E
    case 0xC1E9FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:456 LDA #SFX::UNKNOWN7E
    // Overlapping static entry reached from 0xC1E9FD.
    case 0xC1E9FF: {
        Instruction step(cpu, 0x7E, 0x002200u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:456 LDA #SFX::UNKNOWN7E
    // Overlapping static entry reached from 0xC1E9FE.
    case 0xC1EA00: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:457 JSL PLAY_SOUND
    case 0xC1EA01: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:457 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1E9FF.
    case 0xC1EA02: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000ABu : 0x00C0ABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:457 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1EA02.
    case 0xC1EA04: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000080u : 0x004780u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:458 BRA @UNKNOWN42
    case 0xC1EA05: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:458 BRA @UNKNOWN42
    // Overlapping static entry reached from 0xC1EA04.
    case 0xC1EA06: {
        Instruction step(cpu, 0x47, 0x0000A6u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:460 LDX @LOCAL04
    case 0xC1EA07: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:460 LDX @LOCAL04
    // Overlapping static entry reached from 0xC1EA06.
    case 0xC1EA08: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:461 INX
    case 0xC1EA09: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:462 STX @LOCAL04
    case 0xC1EA0A: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:464 STX @VIRTUAL02
    case 0xC1EA0C: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:465 LDA #10
    case 0xC1EA0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:465 LDA #10
    // Overlapping static entry reached from 0xC1EA0E.
    case 0xC1EA10: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:466 CLC
    case 0xC1EA11: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:467 SBC @VIRTUAL02
    case 0xC1EA12: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/text_input_dialog.asm:468 JUMPGTS @UNKNOWN13
    case 0xC1EA14: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/text_input_dialog.asm:468 JUMPGTS @UNKNOWN13
    case 0xC1EA16: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:468 JUMPGTS @UNKNOWN13
    case 0xC1EA18: {
        Instruction step(cpu, 0x4C, 0x00E7E5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/text_input_dialog.asm:468 JUMPGTS @UNKNOWN13
    case 0xC1EA1B: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:468 JUMPGTS @UNKNOWN13
    case 0xC1EA1D: {
        Instruction step(cpu, 0x4C, 0x00E7E5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:469 JMP @UNKNOWN12
    case 0xC1EA20: {
        Instruction step(cpu, 0x4C, 0x00E75Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:471 LDX @LOCAL09
    case 0xC1EA23: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:472 LDA @LOCAL08
    case 0xC1EA25: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:473 JSL UNKNOWN_C438A5
    case 0xC1EA27: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:474 LDA #47
    case 0xC1EA2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:474 LDA #47
    // Overlapping static entry reached from 0xC1EA2B.
    case 0xC1EA2D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:475 JSR UNKNOWN_C10D60
    case 0xC1EA2E: {
        Instruction step(cpu, 0x20, 0x000D60u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:476 LDY @LOCAL03
    case 0xC1EA31: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:477 CPY #.LOWORD(-1)
    case 0xC1EA33: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:477 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1EA33.
    case 0xC1EA35: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:478 BEQL @UNKNOWN11
    case 0xC1EA36: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:478 BEQL @UNKNOWN11
    case 0xC1EA38: {
        Instruction step(cpu, 0x4C, 0x00E736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:478 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC1EA35.
    case 0xC1EA39: {
        Instruction step(cpu, 0x36, 0x0000E7u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:479 TYA
    case 0xC1EA3B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:480 AND #$00FF
    case 0xC1EA3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:480 AND #$00FF
    // Overlapping static entry reached from 0xC1EA3C.
    case 0xC1EA3E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:481 STA @LOCAL08
    case 0xC1EA3F: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:482 TYA
    case 0xC1EA41: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:483 AND #$FF00
    case 0xC1EA42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:483 AND #$FF00
    // Overlapping static entry reached from 0xC1EA42.
    case 0xC1EA44: {
        Instruction step(cpu, 0xFF, 0xFF29EBu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:484 XBA
    case 0xC1EA45: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:485 AND #$00FF
    case 0xC1EA46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:485 AND #$00FF
    // Overlapping static entry reached from 0xC1EA46.
    case 0xC1EA48: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:486 STA @LOCAL09
    case 0xC1EA49: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:487 JMP @UNKNOWN11
    case 0xC1EA4B: {
        Instruction step(cpu, 0x4C, 0x00E736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000086u : 0x001B86u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EA4E.
    case 0xC1EA50: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA51: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA53: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA54: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA56: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA57: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA59: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:490 REP #PROC_FLAGS::ACCUM8
    case 0xC1EA5B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:491 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA5D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:491 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA5F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:491 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA61: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:491 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA63: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:492 JSL STRLEN
    case 0xC1EA65: {
        Instruction step(cpu, 0x22, 0xC08F22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:493 CMP #0
    case 0xC1EA69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:493 CMP #0
    // Overlapping static entry reached from 0xC1EA69.
    case 0xC1EA6B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:494 BEQL @UNKNOWN11
    case 0xC1EA6C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:494 BEQL @UNKNOWN11
    case 0xC1EA6E: {
        Instruction step(cpu, 0x4C, 0x00E736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:495 LDA @LOCAL0D
    case 0xC1EA71: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:496 JSR SET_WINDOW_FOCUS
    case 0xC1EA73: {
        Instruction step(cpu, 0x20, 0x00007Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:497 LDX #0
    case 0xC1EA76: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:497 LDX #0
    // Overlapping static entry reached from 0xC1EA76.
    case 0xC1EA78: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:498 BRA @UNKNOWN45
    case 0xC1EA79: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:500 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EA7B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:501 STA (@LOCAL0F)
    case 0xC1EA7D: {
        Instruction step(cpu, 0x92, 0x00002Eu, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:502 REP #PROC_FLAGS::ACCUM8
    case 0xC1EA7F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:503 INC @LOCAL0F
    case 0xC1EA81: {
        Instruction step(cpu, 0xE6, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:504 INX
    case 0xC1EA83: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:506 LDA KEYBOARD_INPUT_CHARACTERS,X
    case 0xC1EA84: {
        Instruction step(cpu, 0xBD, 0x001B86u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:507 AND #$00FF
    case 0xC1EA87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:507 AND #$00FF
    // Overlapping static entry reached from 0xC1EA87.
    case 0xC1EA89: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:508 BEQ @UNKNOWN47
    case 0xC1EA8A: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:509 CPX @LOCAL0E
    case 0xC1EA8C: {
        Instruction step(cpu, 0xE4, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:510 BCC @UNKNOWN44
    case 0xC1EA8E: {
        Instruction step(cpu, 0x90, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:511 BRA @UNKNOWN47
    case 0xC1EA90: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:513 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EA92: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:514 LDA #0
    case 0xC1EA94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:515 STA (@LOCAL0F)
    case 0xC1EA96: {
        Instruction step(cpu, 0x92, 0x00002Eu, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:515 STA (@LOCAL0F)
    // Overlapping static entry reached from 0xC1EA94.
    case 0xC1EA97: {
        Instruction step(cpu, 0x2E, 0x0020C2u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:516 REP #PROC_FLAGS::ACCUM8
    case 0xC1EA98: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:517 INC @LOCAL0F
    case 0xC1EA9A: {
        Instruction step(cpu, 0xE6, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:518 INX
    case 0xC1EA9C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:520 CPX @LOCAL0E
    case 0xC1EA9D: {
        Instruction step(cpu, 0xE4, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:521 BCC @UNKNOWN46
    case 0xC1EA9F: {
        Instruction step(cpu, 0x90, 0x0000F1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:522 LDA #0
    case 0xC1EAA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog.asm:522 LDA #0
    // Overlapping static entry reached from 0xC1EAA1.
    case 0xC1EAA3: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/text_input_dialog.asm:524 END_C_FUNCTION
    case 0xC1EAA4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/text_input_dialog.asm:524 END_C_FUNCTION
    case 0xC1EAA5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
