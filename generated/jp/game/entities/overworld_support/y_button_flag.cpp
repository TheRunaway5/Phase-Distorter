// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/debug/y_button_flag.asm
bool resume_overworld_debug_y_button_flag(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/y_button_flag.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1416D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC1416F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC14170: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC14171: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC14171.
    case 0xC14173: {
        Instruction step(cpu, 0xFF, 0x01A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/y_button_flag.asm:7 END_STACK_VARS
    case 0xC14174: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:8 LDX #EVENT_FLAG::FLG_TEMP_0
    case 0xC14175: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:8 LDX #EVENT_FLAG::FLG_TEMP_0
    // Overlapping static entry reached from 0xC14175.
    case 0xC14177: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:9 STX @VIRTUAL02
    case 0xC14178: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:11 JSR SET_INSTANT_PRINTING
    case 0xC1417A: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC1417D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1417D.
    case 0xC1417F: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/y_button_flag.asm:12 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC14180: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:13 LDA #3
    case 0xC14183: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:13 LDA #3
    // Overlapping static entry reached from 0xC14183.
    case 0xC14185: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:14 JSR UNKNOWN_C10EB4
    case 0xC14186: {
        Instruction step(cpu, 0x20, 0x001495u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC14189: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC1418B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:15 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC1418D: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1418F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14191: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14193: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14195: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:17 JSR PRINT_NUMBER
    case 0xC14197: {
        Instruction step(cpu, 0x20, 0x001344u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:18 LDA #$0020
    case 0xC1419A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:18 LDA #$0020
    // Overlapping static entry reached from 0xC1419A.
    case 0xC1419C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:20 JSR PRINT_LETTER
    case 0xC1419D: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:25 LDA @VIRTUAL02
    case 0xC141A0: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:26 JSL GET_EVENT_FLAG
    case 0xC141A2: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:27 CMP #0
    case 0xC141A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:27 CMP #0
    // Overlapping static entry reached from 0xC141A6.
    case 0xC141A8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:28 BEQ @UNKNOWN1
    case 0xC141A9: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC141AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000030u : 0x00E530u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141AB.
    case 0xC141AD: {
        Instruction step(cpu, 0xE5, 0x000085u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC141AE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141AD.
    case 0xC141AF: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC141B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141AF.
    case 0xC141B1: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141B0.
    case 0xC141B2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:29 LOADPTR DEBUG_ON_TEXT, @VIRTUAL06
    case 0xC141B3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:30 BRA @UNKNOWN2
    case 0xC141B5: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC141B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000033u : 0x00E533u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141B7.
    case 0xC141B9: {
        Instruction step(cpu, 0xE5, 0x000085u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC141BA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141B9.
    case 0xC141BB: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC141BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141BB.
    case 0xC141BD: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC141BC.
    case 0xC141BE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:32 LOADPTR DEBUG_OFF_TEXT, @VIRTUAL06
    case 0xC141BF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC141C1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC141C3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC141C5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC141C7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:35 LDA #$0100
    case 0xC141C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:35 LDA #$0100
    // Overlapping static entry reached from 0xC141C9.
    case 0xC141CB: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:36 JSR PRINT_STRING
    case 0xC141CC: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:36 JSR PRINT_STRING
    // Overlapping static entry reached from 0xC141CB.
    case 0xC141CD: {
        Instruction step(cpu, 0xDD, 0x002014u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:37 JSR CLEAR_INSTANT_PRINTING
    case 0xC141CF: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:37 JSR CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC141CD.
    case 0xC141D0: {
        Instruction step(cpu, 0xED, 0x002200u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:38 JSL WINDOW_TICK
    case 0xC141D2: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:38 JSL WINDOW_TICK
    // Overlapping static entry reached from 0xC141D0.
    case 0xC141D3: {
        Instruction step(cpu, 0x02, 0x000035u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:39 LDY @VIRTUAL02
    case 0xC141D6: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:40 STY @LOCAL01
    case 0xC141D8: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:42 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC141DA: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:43 LDA PAD_HELD
    case 0xC141DE: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:44 AND #PAD::UP
    case 0xC141E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:44 AND #PAD::UP
    // Overlapping static entry reached from 0xC141E1.
    case 0xC141E3: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:45 BEQ @UNKNOWN4
    case 0xC141E4: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:46 LDY @LOCAL01
    case 0xC141E6: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:47 INY
    case 0xC141E8: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:48 STY @LOCAL01
    case 0xC141E9: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:49 BRA @UNKNOWN11
    case 0xC141EB: {
        Instruction step(cpu, 0x80, 0x00006Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:51 LDA PAD_HELD
    case 0xC141ED: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:52 AND #PAD::DOWN
    case 0xC141F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:52 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC141F0.
    case 0xC141F2: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:53 BEQ @UNKNOWN5
    case 0xC141F3: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:53 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC141F2.
    case 0xC141F4: {
        Instruction step(cpu, 0x07, 0x0000A4u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:54 LDY @LOCAL01
    case 0xC141F5: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:54 LDY @LOCAL01
    // Overlapping static entry reached from 0xC141F4.
    case 0xC141F6: {
        Instruction step(cpu, 0x12, 0x000088u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:55 DEY
    case 0xC141F7: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:56 STY @LOCAL01
    case 0xC141F8: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:57 BRA @UNKNOWN11
    case 0xC141FA: {
        Instruction step(cpu, 0x80, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:59 LDA PAD_HELD
    case 0xC141FC: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:60 AND #PAD::RIGHT
    case 0xC141FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:60 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC141FF.
    case 0xC14201: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:61 BEQ @UNKNOWN6
    case 0xC14202: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:61 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC14201.
    case 0xC14203: {
        Instruction step(cpu, 0x0C, 0x0012A4u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:62 LDY @LOCAL01
    case 0xC14204: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:63 TYA
    case 0xC14206: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:64 CLC
    case 0xC14207: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:65 ADC #10
    case 0xC14208: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:65 ADC #10
    // Overlapping static entry reached from 0xC14208.
    case 0xC1420A: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:66 TAY
    case 0xC1420B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:67 STY @LOCAL01
    case 0xC1420C: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:68 BRA @UNKNOWN11
    case 0xC1420E: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:70 LDA PAD_HELD
    case 0xC14210: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:71 AND #PAD::LEFT
    case 0xC14213: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:71 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC14213.
    case 0xC14215: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:72 BEQ @UNKNOWN7
    case 0xC14216: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:73 LDY @LOCAL01
    case 0xC14218: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:74 TYA
    case 0xC1421A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:75 SEC
    case 0xC1421B: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:76 SBC #10
    case 0xC1421C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:76 SBC #10
    // Overlapping static entry reached from 0xC1421C.
    case 0xC1421E: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:77 TAY
    case 0xC1421F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:78 STY @LOCAL01
    case 0xC14220: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:79 BRA @UNKNOWN11
    case 0xC14222: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:81 LDA PAD_PRESS
    case 0xC14224: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:82 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC14227: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:82 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC14227.
    case 0xC14229: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:83 BEQ @UNKNOWN10
    case 0xC1422A: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:84 LDA @VIRTUAL02
    case 0xC1422C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:85 JSL GET_EVENT_FLAG
    case 0xC1422E: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:86 CMP #0
    case 0xC14232: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:86 CMP #0
    // Overlapping static entry reached from 0xC14232.
    case 0xC14234: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:87 BEQ @UNKNOWN8
    case 0xC14235: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:88 LDX #0
    case 0xC14237: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:88 LDX #0
    // Overlapping static entry reached from 0xC14237.
    case 0xC14239: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:89 BRA @UNKNOWN9
    case 0xC1423A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:91 LDX #1
    case 0xC1423C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:91 LDX #1
    // Overlapping static entry reached from 0xC1423C.
    case 0xC1423E: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:93 LDA @VIRTUAL02
    case 0xC1423F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:94 JSL SET_EVENT_FLAG
    case 0xC14241: {
        Instruction step(cpu, 0x22, 0xC21506u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:95 BRA @UNKNOWN11
    case 0xC14245: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:97 LDA PAD_PRESS
    case 0xC14247: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:98 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC1424A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:98 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC1424A.
    case 0xC1424C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x008BF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:99 BEQ @UNKNOWN3
    case 0xC1424D: {
        Instruction step(cpu, 0xF0, 0x00008Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:99 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC1424C.
    case 0xC1424E: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:100 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC1424F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:100 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1424F.
    case 0xC14251: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:101 JSR CLOSE_WINDOW
    case 0xC14252: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:102 BRA @UNKNOWN14
    case 0xC14255: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:104 LDY @LOCAL01
    case 0xC14257: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:105 CPY #2000
    case 0xC14259: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000D0u : 0x0007D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:105 CPY #2000
    // Overlapping static entry reached from 0xC14259.
    case 0xC1425B: {
        Instruction step(cpu, 0x07, 0x000090u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:106 BCC @UNKNOWN12
    case 0xC1425C: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:106 BCC @UNKNOWN12
    // Overlapping static entry reached from 0xC1425B.
    case 0xC1425D: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:107 JMP @UNKNOWN0
    case 0xC1425E: {
        Instruction step(cpu, 0x4C, 0x00417Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:107 JMP @UNKNOWN0
    // Overlapping static entry reached from 0xC1425D.
    case 0xC1425F: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:107 JMP @UNKNOWN0
    // Overlapping static entry reached from 0xC1425F.
    case 0xC14260: {
        Instruction step(cpu, 0x41, 0x0000C0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:109 CPY #0
    case 0xC14261: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:109 CPY #0
    // Overlapping static entry reached from 0xC14260.
    case 0xC14262: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:109 CPY #0
    // Overlapping static entry reached from 0xC14261.
    case 0xC14263: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/debug/y_button_flag.asm:110 BEQL @UNKNOWN0
    case 0xC14264: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/debug/y_button_flag.asm:110 BEQL @UNKNOWN0
    case 0xC14266: {
        Instruction step(cpu, 0x4C, 0x00417Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:111 STY @VIRTUAL02
    case 0xC14269: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_flag.asm:112 JMP @UNKNOWN0
    case 0xC1426B: {
        Instruction step(cpu, 0x4C, 0x00417Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/y_button_flag.asm:114 END_C_FUNCTION
    case 0xC1426E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/y_button_flag.asm:114 END_C_FUNCTION
    case 0xC1426F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
