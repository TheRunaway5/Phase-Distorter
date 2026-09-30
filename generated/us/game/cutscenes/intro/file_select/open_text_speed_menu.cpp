// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/file_select/open_text_speed_menu.asm
bool resume_introduction_file_select_open_text_speed_menu(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1F3C2: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:8 END_STACK_VARS
    case 0xC1F3C4: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:8 END_STACK_VARS
    case 0xC1F3C5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:8 END_STACK_VARS
    case 0xC1F3C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F3C6.
    case 0xC1F3C8: {
        Instruction step(cpu, 0xFF, 0x18A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:8 END_STACK_VARS
    case 0xC1F3C9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F3CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F3CA.
    case 0xC1F3CC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F3CD: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:10 JSL SET_INSTANT_PRINTING
    case 0xC1F3D0: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F3D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E5u : 0x00C0E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F3D4.
    case 0xC1F3D6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F3D7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F3D6.
    case 0xC1F3D8: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F3D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F3D9.
    case 0xC1F3DB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F3DC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:12 LDA #25
    case 0xC1F3DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:12 LDA #25
    // Overlapping static entry reached from 0xC1F3DE.
    case 0xC1F3E0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:13 JSR PRINT_STRING
    case 0xC1F3E1: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F3E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00C07Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F3E4.
    case 0xC1F3E6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F3E7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F3E6.
    case 0xC1F3E8: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F3E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F3E8.
    case 0xC1F3EA: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F3E9.
    case 0xC1F3EB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F3EC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F3EE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F3F0: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F3F2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F3F4: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F3F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F3F6.
    case 0xC1F3F8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F3F9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F3FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F3FB.
    case 0xC1F3FD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F3FE: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F400: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F402: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F404: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F406: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F408: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F40A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F40C: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F40E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F410: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F412: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F414: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F416: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:20 LDX #1
    case 0xC1F418: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:20 LDX #1
    // Overlapping static entry reached from 0xC1F418.
    case 0xC1F41A: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:21 LDA #0
    case 0xC1F41B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:21 LDA #0
    // Overlapping static entry reached from 0xC1F41B.
    case 0xC1F41D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:22 JSR UNKNOWN_C114B1
    case 0xC1F41E: {
        Instruction step(cpu, 0x20, 0x0014B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:23 LDA #TEXT_SPEED_STRING_LENGTH
    case 0xC1F421: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:23 LDA #TEXT_SPEED_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F421.
    case 0xC1F423: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:24 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F424: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:24 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F426: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:24 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F428: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:24 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F42A: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:25 CLC
    case 0xC1F42C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:26 ADC @VIRTUAL06
    case 0xC1F42D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:27 STA @VIRTUAL06
    case 0xC1F42F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:28 STA @LOCAL00
    case 0xC1F431: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:29 LDA @VIRTUAL06+2
    case 0xC1F433: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:30 STA @LOCAL00+2
    case 0xC1F435: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F437: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F439: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F43B: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F43D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F43F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F441: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F443: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F445: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:33 LDX #2
    case 0xC1F447: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:33 LDX #2
    // Overlapping static entry reached from 0xC1F447.
    case 0xC1F449: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:34 LDA #0
    case 0xC1F44A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:34 LDA #0
    // Overlapping static entry reached from 0xC1F44A.
    case 0xC1F44C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:35 JSR UNKNOWN_C114B1
    case 0xC1F44D: {
        Instruction step(cpu, 0x20, 0x0014B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:36 LDA #TEXT_SPEED_STRING_LENGTH*2
    case 0xC1F450: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:36 LDA #TEXT_SPEED_STRING_LENGTH*2
    // Overlapping static entry reached from 0xC1F450.
    case 0xC1F452: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:37 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F453: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:37 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F455: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:37 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F457: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:37 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F459: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:38 CLC
    case 0xC1F45B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:39 ADC @VIRTUAL06
    case 0xC1F45C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:40 STA @VIRTUAL06
    case 0xC1F45E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:41 STA @LOCAL00
    case 0xC1F460: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:42 LDA @VIRTUAL06+2
    case 0xC1F462: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:43 STA @LOCAL00+2
    case 0xC1F464: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:44 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F466: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:44 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F468: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:44 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F46A: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:44 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F46C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F46E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F470: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F472: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F474: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:46 LDX #3
    case 0xC1F476: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:46 LDX #3
    // Overlapping static entry reached from 0xC1F476.
    case 0xC1F478: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:47 LDA #0
    case 0xC1F479: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:47 LDA #0
    // Overlapping static entry reached from 0xC1F479.
    case 0xC1F47B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:48 JSR UNKNOWN_C114B1
    case 0xC1F47C: {
        Instruction step(cpu, 0x20, 0x0014B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:49 LDA GAME_STATE+game_state::text_speed
    case 0xC1F47F: {
        Instruction step(cpu, 0xAD, 0x0098B6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:50 AND #$00FF
    case 0xC1F482: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC1F482.
    case 0xC1F484: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:51 BEQ @UNKNOWN0
    case 0xC1F485: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:52 AND #$00FF
    case 0xC1F487: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC1F487.
    case 0xC1F489: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:53 TAX
    case 0xC1F48A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:54 DEX
    case 0xC1F48B: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:55 BRA @UNKNOWN1
    case 0xC1F48C: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:57 LDX #1
    case 0xC1F48E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:57 LDX #1
    // Overlapping static entry reached from 0xC1F48E.
    case 0xC1F490: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:59 TXA
    case 0xC1F491: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_text_speed_menu.asm:60 JSR UNKNOWN_C11887
    case 0xC1F492: {
        Instruction step(cpu, 0x20, 0x001887u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:61 END_C_FUNCTION
    case 0xC1F495: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:61 END_C_FUNCTION
    case 0xC1F496: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
