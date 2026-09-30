// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/text_input_dialog-jp.asm
bool resume_text_text_input_dialog_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/text_input_dialog-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1E498: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E49A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E49B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E49C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E49D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x00FFD4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E49D.
    case 0xC1E49F: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E4A0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/text_input_dialog-jp.asm:25 END_STACK_VARS
    case 0xC1E4A1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:26 STY @LOCAL0D
    case 0xC1E4A2: {
        Instruction step(cpu, 0x84, 0x00002Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:26 STY @LOCAL0D
    // Overlapping static entry reached from 0xC1E49F.
    case 0xC1E4A3: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:27 STX @LOCAL0C
    case 0xC1E4A4: {
        Instruction step(cpu, 0x86, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:28 STA @LOCAL0B
    case 0xC1E4A6: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:29 LDX @PARAM04
    case 0xC1E4A8: {
        Instruction step(cpu, 0xA6, 0x00003Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:30 STX @LOCAL0A
    case 0xC1E4AA: {
        Instruction step(cpu, 0x86, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:31 LDY @PARAM03
    case 0xC1E4AC: {
        Instruction step(cpu, 0xA4, 0x00003Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:32 TYX
    case 0xC1E4AE: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:33 STX @LOCAL09
    case 0xC1E4AF: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:34 LDA #.LOWORD(-1)
    case 0xC1E4B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:34 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E4B1.
    case 0xC1E4B3: {
        Instruction step(cpu, 0xFF, 0xA92085u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:35 STA @LOCAL08
    case 0xC1E4B4: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:36 LDA #0
    case 0xC1E4B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1E4B3.
    case 0xC1E4B7: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1E4B6.
    case 0xC1E4B8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:37 STA @VIRTUAL04
    case 0xC1E4B9: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:38 STA @LOCAL07
    case 0xC1E4BB: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:40 JSR SET_INSTANT_PRINTING
    case 0xC1E4BD: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog-jp.asm:41 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E4C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog-jp.asm:41 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1E4C0.
    case 0xC1E4C2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/text_input_dialog-jp.asm:41 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E4C3: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:42 LDA CURRENT_FOCUS_WINDOW
    case 0xC1E4C6: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:43 ASL
    case 0xC1E4C9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:44 TAX
    case 0xC1E4CA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:45 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E4CB: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E4CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E4CE.
    case 0xC1E4D0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/text_input_dialog-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E4D1: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:47 CLC
    case 0xC1E4D5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:48 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1E4D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:48 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1E4D6.
    case 0xC1E4D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x001C85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:49 STA @LOCAL06
    case 0xC1E4D9: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:49 STA @LOCAL06
    // Overlapping static entry reached from 0xC1E4D8.
    case 0xC1E4DA: {
        Instruction step(cpu, 0x1C, 0x0024A5u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:50 LDA @LOCAL0A
    case 0xC1E4DB: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:51 CMP #.LOWORD(-1)
    case 0xC1E4DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:51 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E4DD.
    case 0xC1E4DF: {
        Instruction step(cpu, 0xFF, 0xA932D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:52 BNE @UNKNOWN2
    case 0xC1E4E0: {
        Instruction step(cpu, 0xD0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E4E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x00E264u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E4DF.
    case 0xC1E4E3: {
        Instruction step(cpu, 0x64, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E4E2.
    case 0xC1E4E4: {
        Instruction step(cpu, 0xE2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E4E5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E4E4.
    case 0xC1E4E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E4E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E4E7.
    case 0xC1E4E9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog-jp.asm:53 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E4EA: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:54 LDX @LOCAL09
    case 0xC1E4EC: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:55 TXA
    case 0xC1E4EE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E4EF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E4F0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:57 CLC
    case 0xC1E4F1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:58 ADC #4 * 3
    case 0xC1E4F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:58 ADC #4 * 3
    // Overlapping static entry reached from 0xC1E4F2.
    case 0xC1E4F4: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:59 CLC
    case 0xC1E4F5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:60 ADC @VIRTUAL0A
    case 0xC1E4F6: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:61 STA @VIRTUAL0A
    case 0xC1E4F8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E4FA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E4FA.
    case 0xC1E4FC: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E4FD: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E4FF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E500: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E502: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog-jp.asm:62 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E504: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog-jp.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E506: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog-jp.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E508: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog-jp.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E50A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog-jp.asm:63 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E50C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:64 JSL DISPLAY_TEXT
    case 0xC1E50E: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:65 BRA @UNKNOWN3
    case 0xC1E512: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E514: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x00E264u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E514.
    case 0xC1E516: {
        Instruction step(cpu, 0xE2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E517: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E516.
    case 0xC1E518: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E519: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E519.
    case 0xC1E51B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog-jp.asm:67 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E51C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:68 LDX @LOCAL09
    case 0xC1E51E: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:69 TXA
    case 0xC1E520: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:70 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E521: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:70 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E522: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:71 CLC
    case 0xC1E523: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:72 ADC @VIRTUAL0A
    case 0xC1E524: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:73 STA @VIRTUAL0A
    case 0xC1E526: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E528: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E528.
    case 0xC1E52A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E52B: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E52D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E52E: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E530: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog-jp.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E532: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog-jp.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E534: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog-jp.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E536: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog-jp.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E538: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog-jp.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E53A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:76 JSL DISPLAY_TEXT
    case 0xC1E53C: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:78 LDX #3
    case 0xC1E540: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:78 LDX #3
    // Overlapping static entry reached from 0xC1E540.
    case 0xC1E542: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:79 LDA #25
    case 0xC1E543: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:79 LDA #25
    // Overlapping static entry reached from 0xC1E543.
    case 0xC1E545: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:80 JSR UNKNOWN_C438A5
    case 0xC1E546: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:81 LDA #$001A
    case 0xC1E549: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:81 LDA #$001A
    // Overlapping static entry reached from 0xC1E549.
    case 0xC1E54B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:82 JSR PRINT_LETTER
    case 0xC1E54C: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:83 LDX #4
    case 0xC1E54F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:83 LDX #4
    // Overlapping static entry reached from 0xC1E54F.
    case 0xC1E551: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:84 LDA #25
    case 0xC1E552: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:84 LDA #25
    // Overlapping static entry reached from 0xC1E552.
    case 0xC1E554: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:85 JSR UNKNOWN_C438A5
    case 0xC1E555: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:86 LDA #$001B
    case 0xC1E558: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:86 LDA #$001B
    // Overlapping static entry reached from 0xC1E558.
    case 0xC1E55A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:87 JSR PRINT_LETTER
    case 0xC1E55B: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:89 JSR CLEAR_INSTANT_PRINTING
    case 0xC1E55E: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:90 LDX @VIRTUAL04
    case 0xC1E561: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:91 LDA @LOCAL07
    case 0xC1E563: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:92 JSR UNKNOWN_C438A5
    case 0xC1E565: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:93 LDA #1
    case 0xC1E568: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:93 LDA #1
    // Overlapping static entry reached from 0xC1E568.
    case 0xC1E56A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:94 JSR UNKNOWN_C10FEA
    case 0xC1E56B: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:95 LDA #33
    case 0xC1E56E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:95 LDA #33
    // Overlapping static entry reached from 0xC1E56E.
    case 0xC1E570: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:96 JSR UNKNOWN_C10D60
    case 0xC1E571: {
        Instruction step(cpu, 0x20, 0x0012AEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:97 LDA #0
    case 0xC1E574: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:97 LDA #0
    // Overlapping static entry reached from 0xC1E574.
    case 0xC1E576: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:98 JSR UNKNOWN_C10FEA
    case 0xC1E577: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:99 JSL WINDOW_TICK
    case 0xC1E57A: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:100 LDA #1
    case 0xC1E57E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:100 LDA #1
    // Overlapping static entry reached from 0xC1E57E.
    case 0xC1E580: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:101 STA @LOCAL05
    case 0xC1E581: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:103 LDA @LOCAL05
    case 0xC1E583: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:104 EOR #$0001
    case 0xC1E585: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:104 EOR #$0001
    // Overlapping static entry reached from 0xC1E585.
    case 0xC1E587: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:105 STA @LOCAL05
    case 0xC1E588: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:106 LDY #window_stats::text_y
    case 0xC1E58A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:106 LDY #window_stats::text_y
    // Overlapping static entry reached from 0xC1E58A.
    case 0xC1E58C: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:107 LDA (@LOCAL06),Y
    case 0xC1E58D: {
        Instruction step(cpu, 0xB1, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:108 ASL
    case 0xC1E58F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:109 LDY #window_stats::window_y
    case 0xC1E590: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:109 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC1E590.
    case 0xC1E592: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:110 CLC
    case 0xC1E593: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:111 ADC (@LOCAL06),Y
    case 0xC1E594: {
        Instruction step(cpu, 0x71, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:112 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E596: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:112 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E597: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:112 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E598: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:112 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E599: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/text_input_dialog-jp.asm:112 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E59A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:113 STA @VIRTUAL02
    case 0xC1E59B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:114 LDY #window_stats::window_x
    case 0xC1E59D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:114 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC1E59D.
    case 0xC1E59F: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:115 LDA (@LOCAL06),Y
    case 0xC1E5A0: {
        Instruction step(cpu, 0xB1, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:116 LDY #window_stats::text_x
    case 0xC1E5A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:116 LDY #window_stats::text_x
    // Overlapping static entry reached from 0xC1E5A2.
    case 0xC1E5A4: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:117 CLC
    case 0xC1E5A5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:118 ADC (@LOCAL06),Y
    case 0xC1E5A6: {
        Instruction step(cpu, 0x71, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:119 CLC
    case 0xC1E5A8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:120 ADC @VIRTUAL02
    case 0xC1E5A9: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:121 CLC
    case 0xC1E5AB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:122 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC1E5AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x007C20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:122 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC1E5AC.
    case 0xC1E5AE: {
        Instruction step(cpu, 0x7C, 0x002285u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:123 STA @LOCAL09
    case 0xC1E5AF: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:124 LDA @LOCAL05
    case 0xC1E5B1: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:125 ASL
    case 0xC1E5B3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:126 STA @VIRTUAL02
    case 0xC1E5B4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E5B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E8u : 0x00E3E8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5B6.
    case 0xC1E5B8: {
        Instruction step(cpu, 0xE3, 0x000085u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E5B9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5B8.
    case 0xC1E5BA: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E5BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5BA.
    case 0xC1E5BC: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5BB.
    case 0xC1E5BD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog-jp.asm:127 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E5BE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:128 LDA @VIRTUAL02
    case 0xC1E5C0: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:129 CLC
    case 0xC1E5C2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:130 ADC @VIRTUAL06
    case 0xC1E5C3: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:131 STA @VIRTUAL06
    case 0xC1E5C5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:132 STA @LOCAL00
    case 0xC1E5C7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:133 LDA @VIRTUAL06+2
    case 0xC1E5C9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:134 STA @LOCAL00+2
    case 0xC1E5CB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:135 LDY @LOCAL09
    case 0xC1E5CD: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:136 LDX #2
    case 0xC1E5CF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:136 LDX #2
    // Overlapping static entry reached from 0xC1E5CF.
    case 0xC1E5D1: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E5D2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:138 LDA #0
    case 0xC1E5D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:139 JSL PREPARE_VRAM_COPY
    case 0xC1E5D6: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:139 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E5D4.
    case 0xC1E5D7: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:139 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E5D7.
    case 0xC1E5D9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00ECA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E5DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ECu : 0x00E3ECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5D9.
    case 0xC1E5DB: {
        Instruction step(cpu, 0xEC, 0x0085E3u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5DA.
    case 0xC1E5DC: {
        Instruction step(cpu, 0xE3, 0x000085u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E5DD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5DC.
    case 0xC1E5DE: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E5DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5DE.
    case 0xC1E5E0: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5DF.
    case 0xC1E5E1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog-jp.asm:141 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E5E2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:142 LDA @VIRTUAL02
    case 0xC1E5E4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:143 CLC
    case 0xC1E5E6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:144 ADC @VIRTUAL06
    case 0xC1E5E7: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:145 STA @VIRTUAL06
    case 0xC1E5E9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:146 STA @LOCAL00
    case 0xC1E5EB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:147 LDA @VIRTUAL06+2
    case 0xC1E5ED: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:148 STA @LOCAL00+2
    case 0xC1E5EF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:149 LDA @LOCAL09
    case 0xC1E5F1: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:150 CLC
    case 0xC1E5F3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:151 ADC #32
    case 0xC1E5F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:151 ADC #32
    // Overlapping static entry reached from 0xC1E5F4.
    case 0xC1E5F6: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:152 TAY
    case 0xC1E5F7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:153 LDX #2
    case 0xC1E5F8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:153 LDX #2
    // Overlapping static entry reached from 0xC1E5F8.
    case 0xC1E5FA: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E5FB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:155 LDA #0
    case 0xC1E5FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:156 JSL PREPARE_VRAM_COPY
    case 0xC1E5FF: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:156 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E5FD.
    case 0xC1E600: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:156 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E600.
    case 0xC1E602: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x0000A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:158 LDX #0
    case 0xC1E603: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:158 LDX #0
    // Overlapping static entry reached from 0xC1E602.
    case 0xC1E604: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:158 LDX #0
    // Overlapping static entry reached from 0xC1E603.
    case 0xC1E605: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:159 STX @LOCAL04
    case 0xC1E606: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:160 JMP @UNKNOWN18_2
    case 0xC1E608: {
        Instruction step(cpu, 0x4C, 0x00E84Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:162 JSL UNKNOWN_C1004E
    case 0xC1E60B: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:163 LDA PAD_PRESS
    case 0xC1E60F: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:164 AND #PAD::UP
    case 0xC1E612: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:164 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E612.
    case 0xC1E614: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:165 BEQ @UNKNOWN2_
    case 0xC1E615: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:166 LDA #0
    case 0xC1E617: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:166 LDA #0
    // Overlapping static entry reached from 0xC1E617.
    case 0xC1E619: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:167 STA @LOCAL00
    case 0xC1E61A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:168 LDA #$007C
    case 0xC1E61C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x00007Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:168 LDA #$007C
    // Overlapping static entry reached from 0xC1E61C.
    case 0xC1E61E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:169 STA @LOCAL00+2
    case 0xC1E61F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:170 LDA @LOCAL07
    case 0xC1E621: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:171 STA @LOCAL01
    case 0xC1E623: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:172 LDY #window_stats::height
    case 0xC1E625: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:172 LDY #window_stats::height
    // Overlapping static entry reached from 0xC1E625.
    case 0xC1E627: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:173 LDA (@LOCAL06),Y
    case 0xC1E628: {
        Instruction step(cpu, 0xB1, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:174 LSR
    case 0xC1E62A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:175 STA @LOCAL02
    case 0xC1E62B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:176 LDY #.LOWORD(-1)
    case 0xC1E62D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:176 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E62D.
    case 0xC1E62F: {
        Instruction step(cpu, 0xFF, 0xA504A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:177 LDX @VIRTUAL04
    case 0xC1E630: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:178 LDA @LOCAL07
    case 0xC1E632: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:178 LDA @LOCAL07
    // Overlapping static entry reached from 0xC1E62F.
    case 0xC1E633: {
        Instruction step(cpu, 0x1E, 0x008622u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:179 JSL MOVE_CURSOR
    case 0xC1E634: {
        Instruction step(cpu, 0x22, 0xC12086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:179 JSL MOVE_CURSOR
    // Overlapping static entry reached from 0xC1E633.
    case 0xC1E636: {
        Instruction step(cpu, 0x20, 0x00A8C1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:180 TAY
    case 0xC1E638: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:181 STY @LOCAL03
    case 0xC1E639: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:182 JMP @UNKNOWN19
    case 0xC1E63B: {
        Instruction step(cpu, 0x4C, 0x00E866u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:184 LDA PAD_PRESS
    case 0xC1E63E: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:185 AND #PAD::LEFT
    case 0xC1E641: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:185 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E641.
    case 0xC1E643: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:186 BEQ @UNKNOWN3_
    case 0xC1E644: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:187 LDA #.LOWORD(-1)
    case 0xC1E646: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:187 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E646.
    case 0xC1E648: {
        Instruction step(cpu, 0xFF, 0xA90E85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:188 STA @LOCAL00
    case 0xC1E649: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:189 LDA #$007B
    case 0xC1E64B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00007Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:189 LDA #$007B
    // Overlapping static entry reached from 0xC1E648.
    case 0xC1E64C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:189 LDA #$007B
    // Overlapping static entry reached from 0xC1E64B.
    case 0xC1E64D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:190 STA @LOCAL00+2
    case 0xC1E64E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:191 LDY #window_stats::width
    case 0xC1E650: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:191 LDY #window_stats::width
    // Overlapping static entry reached from 0xC1E650.
    case 0xC1E652: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:192 LDA (@LOCAL06),Y
    case 0xC1E653: {
        Instruction step(cpu, 0xB1, 0x00001Cu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:193 STA @LOCAL01
    case 0xC1E655: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:194 LDA @VIRTUAL04
    case 0xC1E657: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:195 STA @LOCAL02
    case 0xC1E659: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:196 LDY #0
    case 0xC1E65B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:196 LDY #0
    // Overlapping static entry reached from 0xC1E65B.
    case 0xC1E65D: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:197 LDX @VIRTUAL04
    case 0xC1E65E: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:198 LDA @LOCAL07
    case 0xC1E660: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:199 JSL MOVE_CURSOR
    case 0xC1E662: {
        Instruction step(cpu, 0x22, 0xC12086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:200 TAY
    case 0xC1E666: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:201 STY @LOCAL03
    case 0xC1E667: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:202 JMP @UNKNOWN19
    case 0xC1E669: {
        Instruction step(cpu, 0x4C, 0x00E866u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:204 LDA PAD_PRESS
    case 0xC1E66C: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:205 AND #PAD::DOWN
    case 0xC1E66F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:205 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E66F.
    case 0xC1E671: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:206 BEQ @UNKNOWN3_2
    case 0xC1E672: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:206 BEQ @UNKNOWN3_2
    // Overlapping static entry reached from 0xC1E671.
    case 0xC1E673: {
        Instruction step(cpu, 0x24, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:207 LDA #0
    case 0xC1E674: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:207 LDA #0
    // Overlapping static entry reached from 0xC1E673.
    case 0xC1E675: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:207 LDA #0
    // Overlapping static entry reached from 0xC1E674.
    case 0xC1E676: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:208 STA @LOCAL00
    case 0xC1E677: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:209 LDA #$007C
    case 0xC1E679: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x00007Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:209 LDA #$007C
    // Overlapping static entry reached from 0xC1E679.
    case 0xC1E67B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:210 STA @LOCAL00+2
    case 0xC1E67C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:211 LDA @LOCAL07
    case 0xC1E67E: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:212 STA @LOCAL01
    case 0xC1E680: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:213 LDA #.LOWORD(-1)
    case 0xC1E682: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:213 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E682.
    case 0xC1E684: {
        Instruction step(cpu, 0xFF, 0xA01485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:214 STA @LOCAL02
    case 0xC1E685: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:215 LDY #1
    case 0xC1E687: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:215 LDY #1
    // Overlapping static entry reached from 0xC1E684.
    case 0xC1E688: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:215 LDY #1
    // Overlapping static entry reached from 0xC1E687.
    case 0xC1E689: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:216 LDX @VIRTUAL04
    case 0xC1E68A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:217 LDA @LOCAL07
    case 0xC1E68C: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:218 JSL MOVE_CURSOR
    case 0xC1E68E: {
        Instruction step(cpu, 0x22, 0xC12086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:219 TAY
    case 0xC1E692: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:220 STY @LOCAL03
    case 0xC1E693: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:221 JMP @UNKNOWN19
    case 0xC1E695: {
        Instruction step(cpu, 0x4C, 0x00E866u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:223 LDA PAD_PRESS
    case 0xC1E698: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:224 AND #PAD::RIGHT
    case 0xC1E69B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:224 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E69B.
    case 0xC1E69D: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:225 BEQ @UNKNOWN3_3
    case 0xC1E69E: {
        Instruction step(cpu, 0xF0, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:225 BEQ @UNKNOWN3_3
    // Overlapping static entry reached from 0xC1E69D.
    case 0xC1E69F: {
        Instruction step(cpu, 0x24, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:226 LDA #1
    case 0xC1E6A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:226 LDA #1
    // Overlapping static entry reached from 0xC1E69F.
    case 0xC1E6A1: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:226 LDA #1
    // Overlapping static entry reached from 0xC1E6A0.
    case 0xC1E6A2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:227 STA @LOCAL00
    case 0xC1E6A3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:228 LDA #$007B
    case 0xC1E6A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00007Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:228 LDA #$007B
    // Overlapping static entry reached from 0xC1E6A5.
    case 0xC1E6A7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:229 STA @LOCAL00+2
    case 0xC1E6A8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:230 LDA #.LOWORD(-1)
    case 0xC1E6AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:230 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E6AA.
    case 0xC1E6AC: {
        Instruction step(cpu, 0xFF, 0xA51285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:231 STA @LOCAL01
    case 0xC1E6AD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:232 LDA @VIRTUAL04
    case 0xC1E6AF: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:232 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC1E6AC.
    case 0xC1E6B0: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:233 STA @LOCAL02
    case 0xC1E6B1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:233 STA @LOCAL02
    // Overlapping static entry reached from 0xC1E6B0.
    case 0xC1E6B2: {
        Instruction step(cpu, 0x14, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:234 LDY #0
    case 0xC1E6B3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:234 LDY #0
    // Overlapping static entry reached from 0xC1E6B2.
    case 0xC1E6B4: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:234 LDY #0
    // Overlapping static entry reached from 0xC1E6B3.
    case 0xC1E6B5: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:235 LDX @VIRTUAL04
    case 0xC1E6B6: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:236 LDA @LOCAL07
    case 0xC1E6B8: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:237 JSL MOVE_CURSOR
    case 0xC1E6BA: {
        Instruction step(cpu, 0x22, 0xC12086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:238 TAY
    case 0xC1E6BE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:239 STY @LOCAL03
    case 0xC1E6BF: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:240 JMP @UNKNOWN19
    case 0xC1E6C1: {
        Instruction step(cpu, 0x4C, 0x00E866u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:242 LDA PAD_HELD
    case 0xC1E6C4: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:243 AND #PAD::UP
    case 0xC1E6C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:243 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E6C7.
    case 0xC1E6C9: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:244 BEQ @UNKNOWN4
    case 0xC1E6CA: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:245 LDA #0
    case 0xC1E6CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:245 LDA #0
    // Overlapping static entry reached from 0xC1E6CC.
    case 0xC1E6CE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:246 STA @LOCAL00
    case 0xC1E6CF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:247 LDA #$007C
    case 0xC1E6D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x00007Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:247 LDA #$007C
    // Overlapping static entry reached from 0xC1E6D1.
    case 0xC1E6D3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:248 STA @LOCAL00+2
    case 0xC1E6D4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:249 LDY #.LOWORD(-1)
    case 0xC1E6D6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:249 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E6D6.
    case 0xC1E6D8: {
        Instruction step(cpu, 0xFF, 0xA504A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:250 LDX @VIRTUAL04
    case 0xC1E6D9: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:251 LDA @LOCAL07
    case 0xC1E6DB: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:251 LDA @LOCAL07
    // Overlapping static entry reached from 0xC1E6D8.
    case 0xC1E6DC: {
        Instruction step(cpu, 0x1E, 0x00F622u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:252 JSL UNKNOWN_C20B65
    case 0xC1E6DD: {
        Instruction step(cpu, 0x22, 0xC209F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:252 JSL UNKNOWN_C20B65
    // Overlapping static entry reached from 0xC1E6DC.
    case 0xC1E6DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000C2u : 0x00A8C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:253 TAY
    case 0xC1E6E1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:254 STY @LOCAL03
    case 0xC1E6E2: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:255 JMP @UNKNOWN19
    case 0xC1E6E4: {
        Instruction step(cpu, 0x4C, 0x00E866u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:257 LDA PAD_HELD
    case 0xC1E6E7: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:258 AND #PAD::DOWN
    case 0xC1E6EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:258 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E6EA.
    case 0xC1E6EC: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:259 BEQ @UNKNOWN4_2
    case 0xC1E6ED: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:259 BEQ @UNKNOWN4_2
    // Overlapping static entry reached from 0xC1E6EC.
    case 0xC1E6EE: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:260 LDA #0
    case 0xC1E6EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:260 LDA #0
    // Overlapping static entry reached from 0xC1E6EF.
    case 0xC1E6F1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:261 STA @LOCAL00
    case 0xC1E6F2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:262 LDA #$007C
    case 0xC1E6F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x00007Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:262 LDA #$007C
    // Overlapping static entry reached from 0xC1E6F4.
    case 0xC1E6F6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:263 STA @LOCAL00+2
    case 0xC1E6F7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:264 LDY #1
    case 0xC1E6F9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:264 LDY #1
    // Overlapping static entry reached from 0xC1E6F9.
    case 0xC1E6FB: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:265 LDX @VIRTUAL04
    case 0xC1E6FC: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:266 LDA @LOCAL07
    case 0xC1E6FE: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:267 JSL UNKNOWN_C20B65
    case 0xC1E700: {
        Instruction step(cpu, 0x22, 0xC209F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:268 TAY
    case 0xC1E704: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:269 STY @LOCAL03
    case 0xC1E705: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:270 JMP @UNKNOWN19
    case 0xC1E707: {
        Instruction step(cpu, 0x4C, 0x00E866u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:272 LDA PAD_HELD
    case 0xC1E70A: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:273 AND #PAD::LEFT
    case 0xC1E70D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:273 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E70D.
    case 0xC1E70F: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:274 BEQ @UNKNOWN5
    case 0xC1E710: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:275 LDA #.LOWORD(-1)
    case 0xC1E712: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:275 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E712.
    case 0xC1E714: {
        Instruction step(cpu, 0xFF, 0xA90E85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:276 STA @LOCAL00
    case 0xC1E715: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:277 LDA #$007B
    case 0xC1E717: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00007Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:277 LDA #$007B
    // Overlapping static entry reached from 0xC1E714.
    case 0xC1E718: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:277 LDA #$007B
    // Overlapping static entry reached from 0xC1E717.
    case 0xC1E719: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:278 STA @LOCAL00+2
    case 0xC1E71A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:279 LDY #0
    case 0xC1E71C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:279 LDY #0
    // Overlapping static entry reached from 0xC1E71C.
    case 0xC1E71E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:280 LDX @VIRTUAL04
    case 0xC1E71F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:281 LDA @LOCAL07
    case 0xC1E721: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:282 JSL UNKNOWN_C20B65
    case 0xC1E723: {
        Instruction step(cpu, 0x22, 0xC209F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:283 TAY
    case 0xC1E727: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:284 STY @LOCAL03
    case 0xC1E728: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:285 JMP @UNKNOWN19
    case 0xC1E72A: {
        Instruction step(cpu, 0x4C, 0x00E866u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:287 LDA PAD_HELD
    case 0xC1E72D: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:288 AND #PAD::RIGHT
    case 0xC1E730: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:288 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E730.
    case 0xC1E732: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:289 BEQ @UNKNOWN5_2
    case 0xC1E733: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:289 BEQ @UNKNOWN5_2
    // Overlapping static entry reached from 0xC1E732.
    case 0xC1E734: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:290 LDA #1
    case 0xC1E735: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:290 LDA #1
    // Overlapping static entry reached from 0xC1E735.
    case 0xC1E737: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:291 STA @LOCAL00
    case 0xC1E738: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:292 LDA #$007B
    case 0xC1E73A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00007Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:292 LDA #$007B
    // Overlapping static entry reached from 0xC1E73A.
    case 0xC1E73C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:293 STA @LOCAL00+2
    case 0xC1E73D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:294 LDY #0
    case 0xC1E73F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:294 LDY #0
    // Overlapping static entry reached from 0xC1E73F.
    case 0xC1E741: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:295 LDX @VIRTUAL04
    case 0xC1E742: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:296 LDA @LOCAL07
    case 0xC1E744: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:297 JSL UNKNOWN_C20B65
    case 0xC1E746: {
        Instruction step(cpu, 0x22, 0xC209F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:298 TAY
    case 0xC1E74A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:299 STY @LOCAL03
    case 0xC1E74B: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:300 JMP @UNKNOWN19
    case 0xC1E74D: {
        Instruction step(cpu, 0x4C, 0x00E866u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:302 LDA PAD_PRESS
    case 0xC1E750: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:303 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1E753: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:303 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1E753.
    case 0xC1E755: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:304 BEQL @UNKNOWN16
    case 0xC1E756: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:304 BEQL @UNKNOWN16
    case 0xC1E758: {
        Instruction step(cpu, 0x4C, 0x00E808u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:305 LDA @VIRTUAL04
    case 0xC1E75B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:306 CMP #8
    case 0xC1E75D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:306 CMP #8
    // Overlapping static entry reached from 0xC1E75D.
    case 0xC1E75F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:307 BNE @UNKNOWN11
    case 0xC1E760: {
        Instruction step(cpu, 0xD0, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:308 LDA @LOCAL07
    case 0xC1E762: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:309 BEQ @UNKNOWN7
    case 0xC1E764: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:310 CMP #19
    case 0xC1E766: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:310 CMP #19
    // Overlapping static entry reached from 0xC1E766.
    case 0xC1E768: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:311 BEQ @UNKNOWN8
    case 0xC1E769: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:312 CMP #24
    case 0xC1E76B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:312 CMP #24
    // Overlapping static entry reached from 0xC1E76B.
    case 0xC1E76D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:313 BEQ @UNKNOWN10
    case 0xC1E76E: {
        Instruction step(cpu, 0xF0, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:314 JMP @UNKNOWN18
    case 0xC1E770: {
        Instruction step(cpu, 0x4C, 0x00E84Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:316 LDA #SFX::TEXT_INPUT
    case 0xC1E773: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Au : 0x00007Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:316 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E773.
    case 0xC1E775: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:317 JSL PLAY_SOUND
    case 0xC1E776: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:318 LDY @LOCAL08
    case 0xC1E77A: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:319 LDX @LOCAL0A
    case 0xC1E77C: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:320 LDA @LOCAL0B
    case 0xC1E77E: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:321 JSR UNKNOWN_C1E4BE
    case 0xC1E780: {
        Instruction step(cpu, 0x20, 0x00E3B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:322 STA @LOCAL08
    case 0xC1E783: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:323 JMP @UNKNOWN3_4
    case 0xC1E785: {
        Instruction step(cpu, 0x4C, 0x00E55Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:325 LDA #SFX::TEXT_INPUT
    case 0xC1E788: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Au : 0x00007Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:325 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E788.
    case 0xC1E78A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:326 JSL PLAY_SOUND
    case 0xC1E78B: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:327 LDY #.LOWORD(-1)
    case 0xC1E78F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:327 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E78F.
    case 0xC1E791: {
        Instruction step(cpu, 0xFF, 0xA528A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:328 LDX @LOCAL0C
    case 0xC1E792: {
        Instruction step(cpu, 0xA6, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:329 LDA @LOCAL0B
    case 0xC1E794: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:329 LDA @LOCAL0B
    // Overlapping static entry reached from 0xC1E791.
    case 0xC1E795: {
        Instruction step(cpu, 0x26, 0x000020u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:330 JSR UNKNOWN_C1E48D
    case 0xC1E796: {
        Instruction step(cpu, 0x20, 0x00E24Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:330 JSR UNKNOWN_C1E48D
    // Overlapping static entry reached from 0xC1E795.
    case 0xC1E797: {
        Instruction step(cpu, 0x4F, 0x00C9E2u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:331 CMP #0
    case 0xC1E799: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:331 CMP #0
    // Overlapping static entry reached from 0xC1E799.
    case 0xC1E79B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:332 BEQL @UNKNOWN3_4
    case 0xC1E79C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:332 BEQL @UNKNOWN3_4
    case 0xC1E79E: {
        Instruction step(cpu, 0x4C, 0x00E55Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:333 LDA @LOCAL0A
    case 0xC1E7A1: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:334 CMP #.LOWORD(-1)
    case 0xC1E7A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:334 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E7A3.
    case 0xC1E7A5: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:335 BEQL @UNKNOWN3_4
    case 0xC1E7A6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:335 BEQL @UNKNOWN3_4
    case 0xC1E7A8: {
        Instruction step(cpu, 0x4C, 0x00E55Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:335 BEQL @UNKNOWN3_4
    // Overlapping static entry reached from 0xC1E7A5.
    case 0xC1E7A9: {
        Instruction step(cpu, 0x5E, 0x00A9E5u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:336 LDA #1
    case 0xC1E7AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:336 LDA #1
    // Overlapping static entry reached from 0xC1E7A9.
    case 0xC1E7AC: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:336 LDA #1
    // Overlapping static entry reached from 0xC1E7AB.
    case 0xC1E7AD: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:337 JMP @UNKNOWN48
    case 0xC1E7AE: {
        Instruction step(cpu, 0x4C, 0x00E8F4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:339 LDA #SFX::UNKNOWN5E
    case 0xC1E7B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:339 LDA #SFX::UNKNOWN5E
    // Overlapping static entry reached from 0xC1E7B1.
    case 0xC1E7B3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:340 JSL PLAY_SOUND
    case 0xC1E7B4: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:341 JMP @UNKNOWN21_
    case 0xC1E7B8: {
        Instruction step(cpu, 0x4C, 0x00E890u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:343 LDA #SFX::TEXT_INPUT
    case 0xC1E7BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Au : 0x00007Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:343 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E7BB.
    case 0xC1E7BD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:344 JSL PLAY_SOUND
    case 0xC1E7BE: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:345 LDA @VIRTUAL04
    case 0xC1E7C2: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:346 CMP #6
    case 0xC1E7C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:346 CMP #6
    // Overlapping static entry reached from 0xC1E7C4.
    case 0xC1E7C6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:347 BNE @UNKNOWN15
    case 0xC1E7C7: {
        Instruction step(cpu, 0xD0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:348 LDA @LOCAL07
    case 0xC1E7C9: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:349 CMP #8
    case 0xC1E7CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:349 CMP #8
    // Overlapping static entry reached from 0xC1E7CB.
    case 0xC1E7CD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:350 BEQ @UNKNOWN12
    case 0xC1E7CE: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:351 CMP #14
    case 0xC1E7D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:351 CMP #14
    // Overlapping static entry reached from 0xC1E7D0.
    case 0xC1E7D2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:352 BEQ @UNKNOWN13
    case 0xC1E7D3: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:353 CMP #20
    case 0xC1E7D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:353 CMP #20
    // Overlapping static entry reached from 0xC1E7D5.
    case 0xC1E7D7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:354 BEQ @UNKNOWN14
    case 0xC1E7D8: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:355 BRA @UNKNOWN18
    case 0xC1E7DA: {
        Instruction step(cpu, 0x80, 0x00006Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:357 LDX #0
    case 0xC1E7DC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:357 LDX #0
    // Overlapping static entry reached from 0xC1E7DC.
    case 0xC1E7DE: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:358 STX @LOCAL09
    case 0xC1E7DF: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:359 JMP @UNKNOWN1
    case 0xC1E7E1: {
        Instruction step(cpu, 0x4C, 0x00E4BDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:361 LDX #1
    case 0xC1E7E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:361 LDX #1
    // Overlapping static entry reached from 0xC1E7E4.
    case 0xC1E7E6: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:362 STX @LOCAL09
    case 0xC1E7E7: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:363 JMP @UNKNOWN1
    case 0xC1E7E9: {
        Instruction step(cpu, 0x4C, 0x00E4BDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:365 LDX #2
    case 0xC1E7EC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:365 LDX #2
    // Overlapping static entry reached from 0xC1E7EC.
    case 0xC1E7EE: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:366 STX @LOCAL09
    case 0xC1E7EF: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:367 JMP @UNKNOWN1
    case 0xC1E7F1: {
        Instruction step(cpu, 0x4C, 0x00E4BDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:369 LDX @VIRTUAL04
    case 0xC1E7F4: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:370 LDA @LOCAL07
    case 0xC1E7F6: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:371 INC
    case 0xC1E7F8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:372 JSL UNKNOWN_C208B8
    case 0xC1E7F9: {
        Instruction step(cpu, 0x22, 0xC20859u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:373 TAY
    case 0xC1E7FD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:374 LDX @LOCAL0C
    case 0xC1E7FE: {
        Instruction step(cpu, 0xA6, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:375 LDA @LOCAL0B
    case 0xC1E800: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:376 JSR UNKNOWN_C1E48D
    case 0xC1E802: {
        Instruction step(cpu, 0x20, 0x00E24Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:377 JMP @UNKNOWN3_4
    case 0xC1E805: {
        Instruction step(cpu, 0x4C, 0x00E55Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:379 LDA PAD_PRESS
    case 0xC1E808: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:380 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC1E80B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:380 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC1E80B.
    case 0xC1E80D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x0029F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:381 BEQ @UNKNOWN17_
    case 0xC1E80E: {
        Instruction step(cpu, 0xF0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:381 BEQ @UNKNOWN17_
    // Overlapping static entry reached from 0xC1E80D.
    case 0xC1E80F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A9u : 0x007DA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:382 LDA #SFX::UNKNOWN7D
    case 0xC1E810: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00007Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:382 LDA #SFX::UNKNOWN7D
    // Overlapping static entry reached from 0xC1E80F.
    case 0xC1E811: {
        Instruction step(cpu, 0x7D, 0x002200u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:382 LDA #SFX::UNKNOWN7D
    // Overlapping static entry reached from 0xC1E810.
    case 0xC1E812: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:383 JSL PLAY_SOUND
    case 0xC1E813: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:383 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1E811.
    case 0xC1E814: {
        Instruction step(cpu, 0xBF, 0xA0C0ABu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:384 LDY #.LOWORD(-1)
    case 0xC1E817: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:384 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E814.
    case 0xC1E818: {
        Instruction step(cpu, 0xFF, 0x28A6FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:384 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E817.
    case 0xC1E819: {
        Instruction step(cpu, 0xFF, 0xA528A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:385 LDX @LOCAL0C
    case 0xC1E81A: {
        Instruction step(cpu, 0xA6, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:386 LDA @LOCAL0B
    case 0xC1E81C: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:386 LDA @LOCAL0B
    // Overlapping static entry reached from 0xC1E819.
    case 0xC1E81D: {
        Instruction step(cpu, 0x26, 0x000020u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:387 JSR UNKNOWN_C1E48D
    case 0xC1E81E: {
        Instruction step(cpu, 0x20, 0x00E24Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:387 JSR UNKNOWN_C1E48D
    // Overlapping static entry reached from 0xC1E81D.
    case 0xC1E81F: {
        Instruction step(cpu, 0x4F, 0x00C9E2u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:388 CMP #0
    case 0xC1E821: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:388 CMP #0
    // Overlapping static entry reached from 0xC1E821.
    case 0xC1E823: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:389 BEQL @UNKNOWN3_4
    case 0xC1E824: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:389 BEQL @UNKNOWN3_4
    case 0xC1E826: {
        Instruction step(cpu, 0x4C, 0x00E55Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:390 LDA @LOCAL0A
    case 0xC1E829: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:391 CMP #.LOWORD(-1)
    case 0xC1E82B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:391 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E82B.
    case 0xC1E82D: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:392 BEQL @UNKNOWN3_4
    case 0xC1E82E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:392 BEQL @UNKNOWN3_4
    case 0xC1E830: {
        Instruction step(cpu, 0x4C, 0x00E55Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:392 BEQL @UNKNOWN3_4
    // Overlapping static entry reached from 0xC1E82D.
    case 0xC1E831: {
        Instruction step(cpu, 0x5E, 0x00A9E5u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:393 LDA #1
    case 0xC1E833: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:393 LDA #1
    // Overlapping static entry reached from 0xC1E831.
    case 0xC1E834: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:393 LDA #1
    // Overlapping static entry reached from 0xC1E833.
    case 0xC1E835: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:394 JMP @UNKNOWN48
    case 0xC1E836: {
        Instruction step(cpu, 0x4C, 0x00E8F4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:396 LDA PAD_PRESS
    case 0xC1E839: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:397 AND #PAD::START_BUTTON
    case 0xC1E83C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:397 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC1E83C.
    case 0xC1E83E: {
        Instruction step(cpu, 0x10, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:398 BEQ @UNKNOWN18
    case 0xC1E83F: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:398 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC1E83E.
    case 0xC1E840: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000A9u : 0x007EA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:399 LDA #SFX::UNKNOWN7E
    case 0xC1E841: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:399 LDA #SFX::UNKNOWN7E
    // Overlapping static entry reached from 0xC1E840.
    case 0xC1E842: {
        Instruction step(cpu, 0x7E, 0x002200u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:399 LDA #SFX::UNKNOWN7E
    // Overlapping static entry reached from 0xC1E841.
    case 0xC1E843: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:400 JSL PLAY_SOUND
    case 0xC1E844: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:400 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1E842.
    case 0xC1E845: {
        Instruction step(cpu, 0xBF, 0x80C0ABu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:401 BRA @UNKNOWN21_
    case 0xC1E848: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:401 BRA @UNKNOWN21_
    // Overlapping static entry reached from 0xC1E845.
    case 0xC1E849: {
        Instruction step(cpu, 0x46, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:403 LDX @LOCAL04
    case 0xC1E84A: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:403 LDX @LOCAL04
    // Overlapping static entry reached from 0xC1E849.
    case 0xC1E84B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:404 INX
    case 0xC1E84C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:405 STX @LOCAL04
    case 0xC1E84D: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:407 STX @VIRTUAL02
    case 0xC1E84F: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:408 LDA #10
    case 0xC1E851: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:408 LDA #10
    // Overlapping static entry reached from 0xC1E851.
    case 0xC1E853: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:409 CLC
    case 0xC1E854: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:410 SBC @VIRTUAL02
    case 0xC1E855: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/text_input_dialog-jp.asm:411 JUMPGTS @UNKNOWN2_2
    case 0xC1E857: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/text_input_dialog-jp.asm:411 JUMPGTS @UNKNOWN2_2
    case 0xC1E859: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:411 JUMPGTS @UNKNOWN2_2
    case 0xC1E85B: {
        Instruction step(cpu, 0x4C, 0x00E60Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/text_input_dialog-jp.asm:411 JUMPGTS @UNKNOWN2_2
    case 0xC1E85E: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:411 JUMPGTS @UNKNOWN2_2
    case 0xC1E860: {
        Instruction step(cpu, 0x4C, 0x00E60Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:412 JMP @UNKNOWN3_5
    case 0xC1E863: {
        Instruction step(cpu, 0x4C, 0x00E583u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:414 LDX @VIRTUAL04
    case 0xC1E866: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:415 LDA @LOCAL07
    case 0xC1E868: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:416 JSR UNKNOWN_C438A5
    case 0xC1E86A: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:417 LDA #47
    case 0xC1E86D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:417 LDA #47
    // Overlapping static entry reached from 0xC1E86D.
    case 0xC1E86F: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:418 JSR UNKNOWN_C10D60
    case 0xC1E870: {
        Instruction step(cpu, 0x20, 0x0012AEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:419 LDY @LOCAL03
    case 0xC1E873: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:420 CPY #.LOWORD(-1)
    case 0xC1E875: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:420 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E875.
    case 0xC1E877: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:421 BEQL @UNKNOWN3_4
    case 0xC1E878: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:421 BEQL @UNKNOWN3_4
    case 0xC1E87A: {
        Instruction step(cpu, 0x4C, 0x00E55Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:421 BEQL @UNKNOWN3_4
    // Overlapping static entry reached from 0xC1E877.
    case 0xC1E87B: {
        Instruction step(cpu, 0x5E, 0x0098E5u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:422 TYA
    case 0xC1E87D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:423 AND #$00FF
    case 0xC1E87E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:423 AND #$00FF
    // Overlapping static entry reached from 0xC1E87E.
    case 0xC1E880: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:424 STA @LOCAL07
    case 0xC1E881: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:425 TYA
    case 0xC1E883: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:426 AND #$FF00
    case 0xC1E884: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:426 AND #$FF00
    // Overlapping static entry reached from 0xC1E884.
    case 0xC1E886: {
        Instruction step(cpu, 0xFF, 0xFF29EBu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:427 XBA
    case 0xC1E887: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:428 AND #$00FF
    case 0xC1E888: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:428 AND #$00FF
    // Overlapping static entry reached from 0xC1E888.
    case 0xC1E88A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:429 STA @VIRTUAL04
    case 0xC1E88B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:430 JMP @UNKNOWN3_4
    case 0xC1E88D: {
        Instruction step(cpu, 0x4C, 0x00E55Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:432 LDA @LOCAL0B
    case 0xC1E890: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:433 ASL
    case 0xC1E892: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:434 TAX
    case 0xC1E893: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:435 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E894: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:436 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E897: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:436 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E897.
    case 0xC1E899: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/text_input_dialog-jp.asm:436 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E89A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:437 TAX
    case 0xC1E89E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:438 LDA WINDOW_STATS + window_stats::text_x,X
    case 0xC1E89F: {
        Instruction step(cpu, 0xBD, 0x0089D0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog-jp.asm:439 BEQL @UNKNOWN3_4
    case 0xC1E8A2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog-jp.asm:439 BEQL @UNKNOWN3_4
    case 0xC1E8A4: {
        Instruction step(cpu, 0x4C, 0x00E55Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:440 LDA @LOCAL0B
    case 0xC1E8A7: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:441 JSR SET_WINDOW_FOCUS
    case 0xC1E8A9: {
        Instruction step(cpu, 0x20, 0x00013Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:442 LDY #0
    case 0xC1E8AC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:442 LDY #0
    // Overlapping static entry reached from 0xC1E8AC.
    case 0xC1E8AE: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:443 STY @LOCAL09
    case 0xC1E8AF: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:444 BRA @UNKNOWN24
    case 0xC1E8B1: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:446 LDA WINDOW_STATS + window_stats::text_y,X
    case 0xC1E8B3: {
        Instruction step(cpu, 0xBD, 0x0089D2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:447 TAX
    case 0xC1E8B6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:448 TYA
    case 0xC1E8B7: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:449 JSL UNKNOWN_C208B8
    case 0xC1E8B8: {
        Instruction step(cpu, 0x22, 0xC20859u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:450 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E8BC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:451 STA (@LOCAL0D)
    case 0xC1E8BE: {
        Instruction step(cpu, 0x92, 0x00002Au, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:452 REP #PROC_FLAGS::ACCUM8
    case 0xC1E8C0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:453 INC @LOCAL0D
    case 0xC1E8C2: {
        Instruction step(cpu, 0xE6, 0x00002Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:454 LDY @LOCAL09
    case 0xC1E8C4: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:455 INY
    case 0xC1E8C6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:456 STY @LOCAL09
    case 0xC1E8C7: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:458 LDA @LOCAL0B
    case 0xC1E8C9: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:459 ASL
    case 0xC1E8CB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:460 TAX
    case 0xC1E8CC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:461 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E8CD: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:462 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E8D0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/text_input_dialog-jp.asm:462 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E8D0.
    case 0xC1E8D2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/text_input_dialog-jp.asm:462 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E8D3: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:463 TAX
    case 0xC1E8D7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:464 LDY @LOCAL09
    case 0xC1E8D8: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:465 TYA
    case 0xC1E8DA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:466 CMP WINDOW_STATS + window_stats::text_x,X
    case 0xC1E8DB: {
        Instruction step(cpu, 0xDD, 0x0089D0u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:467 BCC @UNKNOWN23
    case 0xC1E8DE: {
        Instruction step(cpu, 0x90, 0x0000D3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:468 BRA @UNKNOWN47
    case 0xC1E8E0: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:470 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E8E2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:471 LDA #0
    case 0xC1E8E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:472 STA (@LOCAL0D)
    case 0xC1E8E6: {
        Instruction step(cpu, 0x92, 0x00002Au, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:472 STA (@LOCAL0D)
    // Overlapping static entry reached from 0xC1E8E4.
    case 0xC1E8E7: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:473 REP #PROC_FLAGS::ACCUM8
    case 0xC1E8E8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:474 INC @LOCAL0D
    case 0xC1E8EA: {
        Instruction step(cpu, 0xE6, 0x00002Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:475 INY
    case 0xC1E8EC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:477 CPY @LOCAL0C
    case 0xC1E8ED: {
        Instruction step(cpu, 0xC4, 0x000028u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:478 BCC @UNKNOWN46
    case 0xC1E8EF: {
        Instruction step(cpu, 0x90, 0x0000F1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:479 LDA #0
    case 0xC1E8F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:479 LDA #0
    // Overlapping static entry reached from 0xC1E8F1.
    case 0xC1E8F3: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:481 PLD
    case 0xC1E8F4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/text_input_dialog-jp.asm:482 RTS
    case 0xC1E8F5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
