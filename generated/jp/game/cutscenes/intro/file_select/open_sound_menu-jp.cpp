// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/file_select/open_sound_menu-jp.asm
bool resume_introduction_file_select_open_sound_menu_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1F408: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F40A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F40B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F40C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F40D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F40D.
    case 0xC1F40F: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F410: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F411: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:13 TAY
    case 0xC1F412: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:14 STY @LOCAL04
    case 0xC1F413: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F415: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F415.
    case 0xC1F417: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F418: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:16 JSR SET_INSTANT_PRINTING
    case 0xC1F41B: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F41E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F3u : 0x0094F3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F41E.
    case 0xC1F420: {
        Instruction step(cpu, 0x94, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F421: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F420.
    case 0xC1F422: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F423: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F423.
    case 0xC1F425: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F426: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:18 LDA #6
    case 0xC1F428: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:18 LDA #6
    // Overlapping static entry reached from 0xC1F428.
    case 0xC1F42A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:19 JSR PRINT_STRING
    case 0xC1F42B: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F42E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F9u : 0x0094F9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F42E.
    case 0xC1F430: {
        Instruction step(cpu, 0x94, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F431: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F430.
    case 0xC1F432: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F433: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F433.
    case 0xC1F435: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F436: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F438: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F438.
    case 0xC1F43A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F43B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F43D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F43D.
    case 0xC1F43F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F440: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F442: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F444: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F446: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F448: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F44A: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F44C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F44E: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F450: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F452: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F454: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F456: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F458: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:25 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1F45A: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:25 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1F45C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:25 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1F45E: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:25 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1F460: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F462: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F464: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F466: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F468: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:27 LDX #1
    case 0xC1F46A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:27 LDX #1
    // Overlapping static entry reached from 0xC1F46A.
    case 0xC1F46C: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:28 LDA #0
    case 0xC1F46D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:28 LDA #0
    // Overlapping static entry reached from 0xC1F46D.
    case 0xC1F46F: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:29 JSR UNKNOWN_C114B1
    case 0xC1F470: {
        Instruction step(cpu, 0x20, 0x001AE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:30 LDA #SOUND_SETTING_STRING_LENGTH
    case 0xC1F473: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:30 LDA #SOUND_SETTING_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F473.
    case 0xC1F475: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:31 CLC
    case 0xC1F476: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:32 ADC @VIRTUAL0A
    case 0xC1F477: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:33 STA @VIRTUAL0A
    case 0xC1F479: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:34 STA @LOCAL00
    case 0xC1F47B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:35 LDA @VIRTUAL0A+2
    case 0xC1F47D: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:36 STA @LOCAL00+2
    case 0xC1F47F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F481: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F483: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F485: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F487: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:38 LDX #2
    case 0xC1F489: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:38 LDX #2
    // Overlapping static entry reached from 0xC1F489.
    case 0xC1F48B: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:39 LDA #0
    case 0xC1F48C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:39 LDA #0
    // Overlapping static entry reached from 0xC1F48C.
    case 0xC1F48E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:40 JSR UNKNOWN_C114B1
    case 0xC1F48F: {
        Instruction step(cpu, 0x20, 0x001AE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:41 LDA GAME_STATE + game_state::sound_setting
    case 0xC1F492: {
        Instruction step(cpu, 0xAD, 0x009B68u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:42 AND #$00FF
    case 0xC1F495: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC1F495.
    case 0xC1F497: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:43 BEQ @UNKNOWN0
    case 0xC1F498: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:44 AND #$00FF
    case 0xC1F49A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC1F49A.
    case 0xC1F49C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:45 TAX
    case 0xC1F49D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:46 DEX
    case 0xC1F49E: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:47 BRA @UNKNOWN1
    case 0xC1F49F: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:49 LDX #0
    case 0xC1F4A1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:49 LDX #0
    // Overlapping static entry reached from 0xC1F4A1.
    case 0xC1F4A3: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:51 TXA
    case 0xC1F4A4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:52 JSR UNKNOWN_C11887
    case 0xC1F4A5: {
        Instruction step(cpu, 0x20, 0x002022u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:53 LDY @LOCAL04
    case 0xC1F4A8: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:54 BEQL @UNKNOWN5
    case 0xC1F4AA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:54 BEQL @UNKNOWN5
    case 0xC1F4AC: {
        Instruction step(cpu, 0x4C, 0x00F53Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:55 LDA CURRENT_FOCUS_WINDOW
    case 0xC1F4AF: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:56 ASL
    case 0xC1F4B2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:57 TAX
    case 0xC1F4B3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:58 LDA OPEN_WINDOW_TABLE,X
    case 0xC1F4B4: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1F4B7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1F4B7.
    case 0xC1F4B9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1F4BA: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:60 TAX
    case 0xC1F4BE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:61 LDA WINDOW_STATS + window_stats::current_option,X
    case 0xC1F4BF: {
        Instruction step(cpu, 0xBD, 0x0089EDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4CB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4CC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:63 CLC
    case 0xC1F4CD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:64 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F4CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:64 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F4CE.
    case 0xC1F4D0: {
        Instruction step(cpu, 0x8D, 0x0084A8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:65 TAY
    case 0xC1F4D1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:66 STY @LOCAL04
    case 0xC1F4D2: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:66 STY @LOCAL04
    // Overlapping static entry reached from 0xC1F4D0.
    case 0xC1F4D3: {
        Instruction step(cpu, 0x1C, 0x0068ADu, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:67 LDA GAME_STATE + game_state::sound_setting
    case 0xC1F4D4: {
        Instruction step(cpu, 0xAD, 0x009B68u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:67 LDA GAME_STATE + game_state::sound_setting
    // Overlapping static entry reached from 0xC1F4D3.
    case 0xC1F4D6: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:68 AND #$00FF
    case 0xC1F4D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC1F4D7.
    case 0xC1F4D9: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:69 TAX
    case 0xC1F4DA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:70 DEX
    case 0xC1F4DB: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:71 BRA @UNKNOWN4
    case 0xC1F4DC: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:73 LDA __BSS_START__ + menu_option::next,Y
    case 0xC1F4DE: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E5: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E8: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4EA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4EB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:75 CLC
    case 0xC1F4EC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:76 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F4ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:76 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F4ED.
    case 0xC1F4EF: {
        Instruction step(cpu, 0x8D, 0x0084A8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:77 TAY
    case 0xC1F4F0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:78 STY @LOCAL04
    case 0xC1F4F1: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:78 STY @LOCAL04
    // Overlapping static entry reached from 0xC1F4EF.
    case 0xC1F4F2: {
        Instruction step(cpu, 0x1C, 0x00D0CAu, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:79 DEX
    case 0xC1F4F3: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:81 BNE @UNKNOWN3
    case 0xC1F4F4: {
        Instruction step(cpu, 0xD0, 0x0000E8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:81 BNE @UNKNOWN3
    // Overlapping static entry reached from 0xC1F4F2.
    case 0xC1F4F5: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:82 LDA #6
    case 0xC1F4F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:82 LDA #6
    // Overlapping static entry reached from 0xC1F4F6.
    case 0xC1F4F8: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:83 JSR UNKNOWN_C10FEA
    case 0xC1F4F9: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:84 LDY @LOCAL04
    case 0xC1F4FC: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:85 LDA __BSS_START__ + menu_option::text_y,Y
    case 0xC1F4FE: {
        Instruction step(cpu, 0xB9, 0x00000Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:86 TAX
    case 0xC1F501: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:87 LDA __BSS_START__ + menu_option::text_x,Y
    case 0xC1F502: {
        Instruction step(cpu, 0xB9, 0x000008u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:88 INC
    case 0xC1F505: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:89 JSR UNKNOWN_C438A5
    case 0xC1F506: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:90 LDY @LOCAL04
    case 0xC1F509: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:91 TYA
    case 0xC1F50B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:92 CLC
    case 0xC1F50C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:93 ADC #menu_option::label
    case 0xC1F50D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:93 ADC #menu_option::label
    // Overlapping static entry reached from 0xC1F50D.
    case 0xC1F50F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F510: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F512: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F513: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F515: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F516: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F518: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC1F51A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F51C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F51E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F520: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F522: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:97 LDA #$FFFF
    case 0xC1F524: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:97 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F524.
    case 0xC1F526: {
        Instruction step(cpu, 0xFF, 0x14DD20u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:98 JSR PRINT_STRING
    case 0xC1F527: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:99 LDA #0
    case 0xC1F52A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:99 LDA #0
    // Overlapping static entry reached from 0xC1F52A.
    case 0xC1F52C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:100 JSR UNKNOWN_C10FEA
    case 0xC1F52D: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:101 LDA GAME_STATE + game_state::sound_setting
    case 0xC1F530: {
        Instruction step(cpu, 0xAD, 0x009B68u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:102 AND #$00FF
    case 0xC1F533: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC1F533.
    case 0xC1F535: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:103 TAX
    case 0xC1F536: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:104 STX @LOCAL02
    case 0xC1F537: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:105 BRA @UNKNOWN7
    case 0xC1F539: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:107 LDA #1
    case 0xC1F53B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:107 LDA #1
    // Overlapping static entry reached from 0xC1F53B.
    case 0xC1F53D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:108 JSR SELECTION_MENU
    case 0xC1F53E: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:109 TAX
    case 0xC1F541: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:110 STX @LOCAL02
    case 0xC1F542: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:111 BEQ @UNKNOWN6
    case 0xC1F544: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:112 TXA
    case 0xC1F546: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F547: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:114 STA GAME_STATE + game_state::sound_setting
    case 0xC1F549: {
        Instruction step(cpu, 0x8D, 0x009B68u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:116 REP #PROC_FLAGS::ACCUM8
    case 0xC1F54C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:117 LDA CURRENT_SAVE_SLOT
    case 0xC1F54E: {
        Instruction step(cpu, 0xAD, 0x00B675u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:118 AND #$00FF
    case 0xC1F551: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:118 AND #$00FF
    // Overlapping static entry reached from 0xC1F551.
    case 0xC1F553: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:119 DEC
    case 0xC1F554: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:120 JSL SAVE_GAME_SLOT
    case 0xC1F555: {
        Instruction step(cpu, 0x22, 0xC0F962u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:122 LDX @LOCAL02
    case 0xC1F559: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu-jp.asm:123 TXA
    case 0xC1F55B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:124 END_C_FUNCTION
    case 0xC1F55C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:124 END_C_FUNCTION
    case 0xC1F55D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
