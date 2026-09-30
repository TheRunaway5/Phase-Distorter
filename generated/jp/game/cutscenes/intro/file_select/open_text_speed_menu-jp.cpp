// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/file_select/open_text_speed_menu-jp.asm
bool resume_introduction_file_select_open_text_speed_menu_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1F293: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F295: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F296: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F297: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F298: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F298.
    case 0xC1F29A: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F29B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F29C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:13 TAY
    case 0xC1F29D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:14 STY @LOCAL04
    case 0xC1F29E: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F2A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F2A0.
    case 0xC1F2A2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F2A3: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:16 JSR SET_INSTANT_PRINTING
    case 0xC1F2A6: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F2A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EAu : 0x0094EAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F2A9.
    case 0xC1F2AB: {
        Instruction step(cpu, 0x94, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F2AC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F2AB.
    case 0xC1F2AD: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F2AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F2AE.
    case 0xC1F2B0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F2B1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:18 LDA #9
    case 0xC1F2B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:18 LDA #9
    // Overlapping static entry reached from 0xC1F2B3.
    case 0xC1F2B5: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:19 JSR PRINT_STRING
    case 0xC1F2B6: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F2B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x0094AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F2B9.
    case 0xC1F2BB: {
        Instruction step(cpu, 0x94, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F2BC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F2BB.
    case 0xC1F2BD: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F2BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F2BD.
    case 0xC1F2BF: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F2BE.
    case 0xC1F2C0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F2C1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F2C3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F2C5: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F2C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F2C9: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F2CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F2CB.
    case 0xC1F2CD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F2CE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F2D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F2D0.
    case 0xC1F2D2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F2D3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F2D5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F2D7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F2D9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F2DB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:24 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F2DD: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:24 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F2DF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:24 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F2E1: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:24 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F2E3: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:25 LDX #1
    case 0xC1F2E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:25 LDX #1
    // Overlapping static entry reached from 0xC1F2E5.
    case 0xC1F2E7: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:26 LDA #0
    case 0xC1F2E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:26 LDA #0
    // Overlapping static entry reached from 0xC1F2E8.
    case 0xC1F2EA: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:27 JSR UNKNOWN_C114B1
    case 0xC1F2EB: {
        Instruction step(cpu, 0x20, 0x001AE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:28 LDA #TEXT_SPEED_STRING_LENGTH
    case 0xC1F2EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:28 LDA #TEXT_SPEED_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F2EE.
    case 0xC1F2F0: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:29 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F2F1: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:29 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F2F3: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:29 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F2F5: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:29 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F2F7: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:30 CLC
    case 0xC1F2F9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:31 ADC @VIRTUAL06
    case 0xC1F2FA: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:32 STA @VIRTUAL06
    case 0xC1F2FC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:33 STA @LOCAL00
    case 0xC1F2FE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:34 LDA @VIRTUAL06+2
    case 0xC1F300: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:35 STA @LOCAL00+2
    case 0xC1F302: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:36 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F304: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:36 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F306: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:36 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F308: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:36 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F30A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:37 LDX #2
    case 0xC1F30C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:37 LDX #2
    // Overlapping static entry reached from 0xC1F30C.
    case 0xC1F30E: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:38 LDA #0
    case 0xC1F30F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:38 LDA #0
    // Overlapping static entry reached from 0xC1F30F.
    case 0xC1F311: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:39 JSR UNKNOWN_C114B1
    case 0xC1F312: {
        Instruction step(cpu, 0x20, 0x001AE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:40 LDA #TEXT_SPEED_STRING_LENGTH*2
    case 0xC1F315: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:40 LDA #TEXT_SPEED_STRING_LENGTH*2
    // Overlapping static entry reached from 0xC1F315.
    case 0xC1F317: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:41 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F318: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:41 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F31A: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:41 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F31C: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:41 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F31E: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:42 CLC
    case 0xC1F320: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:43 ADC @VIRTUAL06
    case 0xC1F321: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:44 STA @VIRTUAL06
    case 0xC1F323: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:45 STA @LOCAL00
    case 0xC1F325: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:46 LDA @VIRTUAL06+2
    case 0xC1F327: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:47 STA @LOCAL00+2
    case 0xC1F329: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:48 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F32B: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:48 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F32D: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:48 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F32F: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:48 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F331: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:49 LDX #3
    case 0xC1F333: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:49 LDX #3
    // Overlapping static entry reached from 0xC1F333.
    case 0xC1F335: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:50 LDA #0
    case 0xC1F336: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:50 LDA #0
    // Overlapping static entry reached from 0xC1F336.
    case 0xC1F338: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:51 JSR UNKNOWN_C114B1
    case 0xC1F339: {
        Instruction step(cpu, 0x20, 0x001AE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:52 LDA GAME_STATE+game_state::text_speed
    case 0xC1F33C: {
        Instruction step(cpu, 0xAD, 0x009B67u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:53 AND #$00FF
    case 0xC1F33F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC1F33F.
    case 0xC1F341: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:54 BEQ @UNKNOWN0
    case 0xC1F342: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:55 AND #$00FF
    case 0xC1F344: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1F344.
    case 0xC1F346: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:56 TAX
    case 0xC1F347: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:57 DEX
    case 0xC1F348: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:58 BRA @UNKNOWN1
    case 0xC1F349: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:60 LDX #1
    case 0xC1F34B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:60 LDX #1
    // Overlapping static entry reached from 0xC1F34B.
    case 0xC1F34D: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:62 TXA
    case 0xC1F34E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:63 JSR UNKNOWN_C11887
    case 0xC1F34F: {
        Instruction step(cpu, 0x20, 0x002022u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:64 LDY @LOCAL04
    case 0xC1F352: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:65 BEQL @UNKNOWN5
    case 0xC1F354: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:65 BEQL @UNKNOWN5
    case 0xC1F356: {
        Instruction step(cpu, 0x4C, 0x00F3E5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:66 LDA CURRENT_FOCUS_WINDOW
    case 0xC1F359: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:67 ASL
    case 0xC1F35C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:68 TAX
    case 0xC1F35D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:69 LDA OPEN_WINDOW_TABLE,X
    case 0xC1F35E: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:70 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1F361: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:70 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1F361.
    case 0xC1F363: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:70 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1F364: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:71 TAX
    case 0xC1F368: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:72 LDA WINDOW_STATS + window_stats::current_option,X
    case 0xC1F369: {
        Instruction step(cpu, 0xBD, 0x0089EDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F36C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F36E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F36F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F370: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F372: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F373: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F375: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F376: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:74 CLC
    case 0xC1F377: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:75 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F378: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:75 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F378.
    case 0xC1F37A: {
        Instruction step(cpu, 0x8D, 0x0084A8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:76 TAY
    case 0xC1F37B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:77 STY @LOCAL04
    case 0xC1F37C: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:77 STY @LOCAL04
    // Overlapping static entry reached from 0xC1F37A.
    case 0xC1F37D: {
        Instruction step(cpu, 0x1C, 0x0067ADu, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:78 LDA GAME_STATE + game_state::text_speed
    case 0xC1F37E: {
        Instruction step(cpu, 0xAD, 0x009B67u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:78 LDA GAME_STATE + game_state::text_speed
    // Overlapping static entry reached from 0xC1F37D.
    case 0xC1F380: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:79 AND #$00FF
    case 0xC1F381: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC1F381.
    case 0xC1F383: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:80 TAX
    case 0xC1F384: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:81 DEX
    case 0xC1F385: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:82 BRA @UNKNOWN4
    case 0xC1F386: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:84 LDA __BSS_START__ + menu_option::next,Y
    case 0xC1F388: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F38B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F38D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F38E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F38F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F391: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F392: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F394: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F395: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:86 CLC
    case 0xC1F396: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:87 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F397: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:87 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F397.
    case 0xC1F399: {
        Instruction step(cpu, 0x8D, 0x0084A8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:88 TAY
    case 0xC1F39A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:89 STY @LOCAL04
    case 0xC1F39B: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:89 STY @LOCAL04
    // Overlapping static entry reached from 0xC1F399.
    case 0xC1F39C: {
        Instruction step(cpu, 0x1C, 0x00D0CAu, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:90 DEX
    case 0xC1F39D: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:92 BNE @UNKNOWN3
    case 0xC1F39E: {
        Instruction step(cpu, 0xD0, 0x0000E8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:92 BNE @UNKNOWN3
    // Overlapping static entry reached from 0xC1F39C.
    case 0xC1F39F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:93 LDA #6
    case 0xC1F3A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:93 LDA #6
    // Overlapping static entry reached from 0xC1F3A0.
    case 0xC1F3A2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:94 JSR UNKNOWN_C10FEA
    case 0xC1F3A3: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:95 LDY @LOCAL04
    case 0xC1F3A6: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:96 LDA __BSS_START__ + menu_option::text_y,Y
    case 0xC1F3A8: {
        Instruction step(cpu, 0xB9, 0x00000Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:97 TAX
    case 0xC1F3AB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:98 LDA __BSS_START__ + menu_option::text_x,Y
    case 0xC1F3AC: {
        Instruction step(cpu, 0xB9, 0x000008u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:99 INC
    case 0xC1F3AF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:100 JSR UNKNOWN_C438A5
    case 0xC1F3B0: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:101 LDY @LOCAL04
    case 0xC1F3B3: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:102 TYA
    case 0xC1F3B5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:103 CLC
    case 0xC1F3B6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:104 ADC #menu_option::label
    case 0xC1F3B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:104 ADC #menu_option::label
    // Overlapping static entry reached from 0xC1F3B7.
    case 0xC1F3B9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3BA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3BC: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3BD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3BF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3C0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3C2: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC1F3C4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F3C6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F3C8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F3CA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F3CC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:108 LDA #$FFFF
    case 0xC1F3CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:108 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F3CE.
    case 0xC1F3D0: {
        Instruction step(cpu, 0xFF, 0x14DD20u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:109 JSR PRINT_STRING
    case 0xC1F3D1: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:110 LDA #0
    case 0xC1F3D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:110 LDA #0
    // Overlapping static entry reached from 0xC1F3D4.
    case 0xC1F3D6: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:111 JSR UNKNOWN_C10FEA
    case 0xC1F3D7: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:112 LDA GAME_STATE + game_state::text_speed
    case 0xC1F3DA: {
        Instruction step(cpu, 0xAD, 0x009B67u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:113 AND #$00FF
    case 0xC1F3DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:113 AND #$00FF
    // Overlapping static entry reached from 0xC1F3DD.
    case 0xC1F3DF: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:114 TAX
    case 0xC1F3E0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:115 STX @LOCAL02
    case 0xC1F3E1: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:116 BRA @UNKNOWN6
    case 0xC1F3E3: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:118 LDA #1
    case 0xC1F3E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:118 LDA #1
    // Overlapping static entry reached from 0xC1F3E5.
    case 0xC1F3E7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:119 JSR SELECTION_MENU
    case 0xC1F3E8: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:120 TAX
    case 0xC1F3EB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:121 STX @LOCAL02
    case 0xC1F3EC: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:122 BEQ @UNKNOWN6
    case 0xC1F3EE: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:123 TXA
    case 0xC1F3F0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:124 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F3F1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:125 STA GAME_STATE + game_state::text_speed
    case 0xC1F3F3: {
        Instruction step(cpu, 0x8D, 0x009B67u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:127 REP #PROC_FLAGS::ACCUM8
    case 0xC1F3F6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:128 LDA CURRENT_SAVE_SLOT
    case 0xC1F3F8: {
        Instruction step(cpu, 0xAD, 0x00B675u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:129 AND #$00FF
    case 0xC1F3FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC1F3FB.
    case 0xC1F3FD: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:130 DEC
    case 0xC1F3FE: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:131 JSL SAVE_GAME_SLOT
    case 0xC1F3FF: {
        Instruction step(cpu, 0x22, 0xC0F962u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:133 LDX @LOCAL02
    case 0xC1F403: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu-jp.asm:134 TXA
    case 0xC1F405: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:135 END_C_FUNCTION
    case 0xC1F406: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:135 END_C_FUNCTION
    case 0xC1F407: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
