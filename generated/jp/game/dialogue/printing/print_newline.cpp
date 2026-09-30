// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/print_newline.asm
bool resume_text_print_newline(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_newline.asm:4 BEGIN_C_FUNCTION
    case 0xC11174: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC11176: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC11177: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC11178: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC11178.
    case 0xC1117A: {
        Instruction step(cpu, 0xFF, 0x96AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC1117B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/print_newline.asm:17 LDA CURRENT_FOCUS_WINDOW
    case 0xC1117C: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:17 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1117A.
    case 0xC1117E: {
        Instruction step(cpu, 0x8C, 0x00AA0Au, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/print_newline.asm:18 ASL
    case 0xC1117F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_newline.asm:19 TAX
    case 0xC11180: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_newline.asm:20 LDA OPEN_WINDOW_TABLE,X
    case 0xC11181: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:21 LDY #.SIZEOF(window_stats)
    case 0xC11184: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/print_newline.asm:21 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11184.
    case 0xC11186: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_newline.asm:22 JSL MULT168
    case 0xC11187: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_newline.asm:23 CLC
    case 0xC1118B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_newline.asm:24 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1118C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_newline.asm:24 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1118C.
    case 0xC1118E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000A8u : 0x0084A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/print_newline.asm:25 TAY
    case 0xC1118F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/print_newline.asm:26 STY @LOCAL01
    case 0xC11190: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/print_newline.asm:26 STY @LOCAL01
    // Overlapping static entry reached from 0xC1118E.
    case 0xC11191: {
        Instruction step(cpu, 0x10, 0x0000B9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/print_newline.asm:31 LDA a:window_stats::font,Y
    case 0xC11192: {
        Instruction step(cpu, 0xB9, 0x000015u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:31 LDA a:window_stats::font,Y
    // Overlapping static entry reached from 0xC11191.
    case 0xC11193: {
        Instruction step(cpu, 0x15, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:32 BEQ @UNKNOWN0
    case 0xC11195: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_newline.asm:33 JSL UNKNOWN_C45E96
    case 0xC11197: {
        Instruction step(cpu, 0x22, 0xC43BE8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_newline.asm:35 LDY @LOCAL01
    case 0xC1119B: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/print_newline.asm:36 TYA
    case 0xC1119D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:37 CLC
    case 0xC1119E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_newline.asm:38 ADC #window_stats::text_y
    case 0xC1119F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_newline.asm:38 ADC #window_stats::text_y
    // Overlapping static entry reached from 0xC1119F.
    case 0xC111A1: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_newline.asm:39 TAX
    case 0xC111A2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_newline.asm:40 LDA __BSS_START__,X
    case 0xC111A3: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:41 STA @LOCAL00
    case 0xC111A6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:42 LDA a:window_stats::height,Y
    case 0xC111A8: {
        Instruction step(cpu, 0xB9, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:43 LSR
    case 0xC111AB: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/print_newline.asm:44 DEC
    case 0xC111AC: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/print_newline.asm:45 STA @VIRTUAL02
    case 0xC111AD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:46 LDA @LOCAL00
    case 0xC111AF: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:47 CMP @VIRTUAL02
    case 0xC111B1: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:48 BEQ @UNKNOWN1
    case 0xC111B3: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_newline.asm:49 INC
    case 0xC111B5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/print_newline.asm:50 STA __BSS_START__,X
    case 0xC111B6: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:51 BRA @UNKNOWN2
    case 0xC111B9: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_newline.asm:53 LDA CURRENT_FOCUS_WINDOW
    case 0xC111BB: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_newline.asm:55 JSR UNKNOWN_C437B8
    case 0xC111BE: {
        Instruction step(cpu, 0x20, 0x000F65u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_newline.asm:60 LDY @LOCAL01
    case 0xC111C1: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/print_newline.asm:61 TYX
    case 0xC111C3: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/print_newline.asm:62 STZ a:window_stats::text_x,X
    case 0xC111C4: {
        Instruction step(cpu, 0x9E, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_newline.asm:64 END_C_FUNCTION
    case 0xC111C7: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_newline.asm:64 END_C_FUNCTION
    case 0xC111C8: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
