// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/debug/y_button_flag.asm
bool resume_overworld_debug_y_button_flag(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/y_button_flag.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13D03: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC13D05: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC13D06: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC13D07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC13D07.
    case 0xC13D09: {
        Instruction step(cpu, 0xFF, 0x01A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC13D0A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:8 LDX #EVENT_FLAG::FLG_TEMP_0
    case 0xC13D0B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:8 LDX #EVENT_FLAG::FLG_TEMP_0
    // Overlapping static entry reached from 0xC13D0B.
    case 0xC13D0D: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:9 STX @VIRTUAL02
    case 0xC13D0E: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:11 JSR SET_INSTANT_PRINTING
    case 0xC13D10: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13D14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13D14.
    case 0xC13D16: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13D17: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:13 LDA #3
    case 0xC13D1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:13 LDA #3
    // Overlapping static entry reached from 0xC13D1A.
    case 0xC13D1C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:14 JSR UNKNOWN_C10EB4
    case 0xC13D1D: {
        Instruction step(cpu, 0x20, 0x000EB4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13D20: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13D22: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC13D24: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D26: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D28: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D2A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D2C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:17 JSR PRINT_NUMBER
    case 0xC13D2E: {
        Instruction step(cpu, 0x20, 0x000DF6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:18 LDA #$0020
    case 0xC13D31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:18 LDA #$0020
    // Overlapping static entry reached from 0xC13D31.
    case 0xC13D33: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:22 JSL UNKNOWN_C43F77
    case 0xC13D34: {
        Instruction step(cpu, 0x22, 0xC43F77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:23 JSL UNKNOWN_C43CAA
    case 0xC13D38: {
        Instruction step(cpu, 0x22, 0xC43CAAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:25 LDA @VIRTUAL02
    case 0xC13D3C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:26 JSL GET_EVENT_FLAG
    case 0xC13D3E: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:27 CMP #0
    case 0xC13D42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:27 CMP #0
    // Overlapping static entry reached from 0xC13D42.
    case 0xC13D44: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:28 BEQ @UNKNOWN1
    case 0xC13D45: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC13D47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000070u : 0x00E970u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D47.
    case 0xC13D49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC13D4A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D49.
    case 0xC13D4B: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC13D4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D4B.
    case 0xC13D4D: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D4C.
    case 0xC13D4E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC13D4F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:30 BRA @UNKNOWN2
    case 0xC13D51: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC13D53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000073u : 0x00E973u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D53.
    case 0xC13D55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC13D56: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D55.
    case 0xC13D57: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC13D58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D57.
    case 0xC13D59: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC13D58.
    case 0xC13D5A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC13D5B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D5D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D5F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D61: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13D63: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:35 LDA #$0100
    case 0xC13D65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:35 LDA #$0100
    // Overlapping static entry reached from 0xC13D65.
    case 0xC13D67: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:36 JSR PRINT_STRING
    case 0xC13D68: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:36 JSR PRINT_STRING
    // Overlapping static entry reached from 0xC13D67.
    case 0xC13D69: {
        Instruction step(cpu, 0xFC, 0x00220Eu, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:37 JSR CLEAR_INSTANT_PRINTING
    case 0xC13D6B: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:37 JSR CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC13D69.
    case 0xC13D6C: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:37 JSR CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC13D6C.
    case 0xC13D6D: {
        Instruction step(cpu, 0xE4, 0x0000C3u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:38 JSL WINDOW_TICK
    case 0xC13D6F: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:39 LDY @VIRTUAL02
    case 0xC13D73: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:40 STY @LOCAL01
    case 0xC13D75: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:42 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC13D77: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:43 LDA PAD_HELD
    case 0xC13D7B: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:44 AND #PAD::UP
    case 0xC13D7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:44 AND #PAD::UP
    // Overlapping static entry reached from 0xC13D7E.
    case 0xC13D80: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:45 BEQ @UNKNOWN4
    case 0xC13D81: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:46 LDY @LOCAL01
    case 0xC13D83: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:47 INY
    case 0xC13D85: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:48 STY @LOCAL01
    case 0xC13D86: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:49 BRA @UNKNOWN11
    case 0xC13D88: {
        Instruction step(cpu, 0x80, 0x00006Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:51 LDA PAD_HELD
    case 0xC13D8A: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:52 AND #PAD::DOWN
    case 0xC13D8D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:52 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC13D8D.
    case 0xC13D8F: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:53 BEQ @UNKNOWN5
    case 0xC13D90: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:53 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC13D8F.
    case 0xC13D91: {
        Instruction step(cpu, 0x07, 0x0000A4u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:54 LDY @LOCAL01
    case 0xC13D92: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:54 LDY @LOCAL01
    // Overlapping static entry reached from 0xC13D91.
    case 0xC13D93: {
        Instruction step(cpu, 0x12, 0x000088u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:55 DEY
    case 0xC13D94: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:56 STY @LOCAL01
    case 0xC13D95: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:57 BRA @UNKNOWN11
    case 0xC13D97: {
        Instruction step(cpu, 0x80, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:59 LDA PAD_HELD
    case 0xC13D99: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:60 AND #PAD::RIGHT
    case 0xC13D9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:60 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC13D9C.
    case 0xC13D9E: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:61 BEQ @UNKNOWN6
    case 0xC13D9F: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:61 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC13D9E.
    case 0xC13DA0: {
        Instruction step(cpu, 0x0C, 0x0012A4u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:62 LDY @LOCAL01
    case 0xC13DA1: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:63 TYA
    case 0xC13DA3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:64 CLC
    case 0xC13DA4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:65 ADC #10
    case 0xC13DA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:65 ADC #10
    // Overlapping static entry reached from 0xC13DA5.
    case 0xC13DA7: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:66 TAY
    case 0xC13DA8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:67 STY @LOCAL01
    case 0xC13DA9: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:68 BRA @UNKNOWN11
    case 0xC13DAB: {
        Instruction step(cpu, 0x80, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:70 LDA PAD_HELD
    case 0xC13DAD: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:71 AND #PAD::LEFT
    case 0xC13DB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:71 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC13DB0.
    case 0xC13DB2: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:72 BEQ @UNKNOWN7
    case 0xC13DB3: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:73 LDY @LOCAL01
    case 0xC13DB5: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:74 TYA
    case 0xC13DB7: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:75 SEC
    case 0xC13DB8: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:76 SBC #10
    case 0xC13DB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:76 SBC #10
    // Overlapping static entry reached from 0xC13DB9.
    case 0xC13DBB: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:77 TAY
    case 0xC13DBC: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:78 STY @LOCAL01
    case 0xC13DBD: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:79 BRA @UNKNOWN11
    case 0xC13DBF: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:81 LDA PAD_PRESS
    case 0xC13DC1: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:82 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC13DC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:82 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC13DC4.
    case 0xC13DC6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:83 BEQ @UNKNOWN10
    case 0xC13DC7: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:84 LDA @VIRTUAL02
    case 0xC13DC9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:85 JSL GET_EVENT_FLAG
    case 0xC13DCB: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:86 CMP #0
    case 0xC13DCF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:86 CMP #0
    // Overlapping static entry reached from 0xC13DCF.
    case 0xC13DD1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:87 BEQ @UNKNOWN8
    case 0xC13DD2: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:88 LDX #0
    case 0xC13DD4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:88 LDX #0
    // Overlapping static entry reached from 0xC13DD4.
    case 0xC13DD6: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:89 BRA @UNKNOWN9
    case 0xC13DD7: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:91 LDX #1
    case 0xC13DD9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:91 LDX #1
    // Overlapping static entry reached from 0xC13DD9.
    case 0xC13DDB: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:93 LDA @VIRTUAL02
    case 0xC13DDC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:94 JSL SET_EVENT_FLAG
    case 0xC13DDE: {
        Instruction step(cpu, 0x22, 0xC2165Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:95 BRA @UNKNOWN11
    case 0xC13DE2: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:97 LDA PAD_PRESS
    case 0xC13DE4: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:98 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC13DE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:98 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC13DE7.
    case 0xC13DE9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x008BF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:99 BEQ @UNKNOWN3
    case 0xC13DEA: {
        Instruction step(cpu, 0xF0, 0x00008Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:99 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC13DE9.
    case 0xC13DEB: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:100 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC13DEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:100 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13DEC.
    case 0xC13DEE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:101 JSR CLOSE_WINDOW
    case 0xC13DEF: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:102 BRA @UNKNOWN14
    case 0xC13DF3: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:104 LDY @LOCAL01
    case 0xC13DF5: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:105 CPY #2000
    case 0xC13DF7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000D0u : 0x0007D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:105 CPY #2000
    // Overlapping static entry reached from 0xC13DF7.
    case 0xC13DF9: {
        Instruction step(cpu, 0x07, 0x000090u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:106 BCC @UNKNOWN12
    case 0xC13DFA: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:106 BCC @UNKNOWN12
    // Overlapping static entry reached from 0xC13DF9.
    case 0xC13DFB: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:107 JMP @UNKNOWN0
    case 0xC13DFC: {
        Instruction step(cpu, 0x4C, 0x003D10u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:107 JMP @UNKNOWN0
    // Overlapping static entry reached from 0xC13DFB.
    case 0xC13DFD: {
        Instruction step(cpu, 0x10, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:109 CPY #0
    case 0xC13DFF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:109 CPY #0
    // Overlapping static entry reached from 0xC13DFF.
    case 0xC13E01: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/debug/y_button_flag.asm:110 BEQL @UNKNOWN0
    case 0xC13E02: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:110 BEQL @UNKNOWN0
    case 0xC13E04: {
        Instruction step(cpu, 0x4C, 0x003D10u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:111 STY @VIRTUAL02
    case 0xC13E07: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:112 JMP @UNKNOWN0
    case 0xC13E09: {
        Instruction step(cpu, 0x4C, 0x003D10u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/y_button_flag.asm:114 END_C_FUNCTION
    case 0xC13E0C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/y_button_flag.asm:114 END_C_FUNCTION
    case 0xC13E0D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
