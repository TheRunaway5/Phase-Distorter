// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/file_select/open_sound_menu.asm
bool resume_introduction_file_select_open_sound_menu(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_sound_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1F568: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_sound_menu.asm:9 END_STACK_VARS
    case 0xC1F56A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_sound_menu.asm:9 END_STACK_VARS
    case 0xC1F56B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_sound_menu.asm:9 END_STACK_VARS
    case 0xC1F56C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_sound_menu.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F56C.
    case 0xC1F56E: {
        Instruction step(cpu, 0xFF, 0x19A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_sound_menu.asm:9 END_STACK_VARS
    case 0xC1F56F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_sound_menu.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F570: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_sound_menu.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F570.
    case 0xC1F572: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_sound_menu.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F573: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:11 JSR SET_INSTANT_PRINTING
    case 0xC1F576: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F57A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FEu : 0x00C0FEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F57A.
    case 0xC1F57C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F57D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F57C.
    case 0xC1F57E: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F57F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F57F.
    case 0xC1F581: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F582: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:13 LDA #28
    case 0xC1F584: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:13 LDA #28
    // Overlapping static entry reached from 0xC1F584.
    case 0xC1F586: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:14 JSR PRINT_STRING
    case 0xC1F587: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F58A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x00C11Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F58A.
    case 0xC1F58C: {
        Instruction step(cpu, 0xC1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F58D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F58C.
    case 0xC1F58E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F58F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F58F.
    case 0xC1F591: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F592: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F594: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F594.
    case 0xC1F596: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F597: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F599: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F599.
    case 0xC1F59B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F59C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F59E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F5A0: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F5A2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F5A4: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5A6: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5A8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5AA: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5AC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F5AE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F5B0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F5B2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F5B4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5B6: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5B8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5BA: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5BC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5BE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5C0: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5C2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5C4: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:22 LDX #1
    case 0xC1F5C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:22 LDX #1
    // Overlapping static entry reached from 0xC1F5C6.
    case 0xC1F5C8: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:23 LDA #0
    case 0xC1F5C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:23 LDA #0
    // Overlapping static entry reached from 0xC1F5C9.
    case 0xC1F5CB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:24 JSR UNKNOWN_C114B1
    case 0xC1F5CC: {
        Instruction step(cpu, 0x20, 0x0014B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:25 LDA #SOUND_SETTING_STRING_LENGTH
    case 0xC1F5CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:25 LDA #SOUND_SETTING_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F5CF.
    case 0xC1F5D1: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:26 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5D2: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:26 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5D4: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:26 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5D6: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:26 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5D8: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:27 CLC
    case 0xC1F5DA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:28 ADC @VIRTUAL06
    case 0xC1F5DB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:29 STA @VIRTUAL06
    case 0xC1F5DD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:30 STA @LOCAL00
    case 0xC1F5DF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:31 LDA @VIRTUAL06+2
    case 0xC1F5E1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:32 STA @LOCAL00+2
    case 0xC1F5E3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5E5: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5E7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5E9: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5EB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5ED: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5EF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5F1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5F3: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:35 LDX #2
    case 0xC1F5F5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:35 LDX #2
    // Overlapping static entry reached from 0xC1F5F5.
    case 0xC1F5F7: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:36 LDA #0
    case 0xC1F5F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1F5F8.
    case 0xC1F5FA: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:37 JSR UNKNOWN_C114B1
    case 0xC1F5FB: {
        Instruction step(cpu, 0x20, 0x0014B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:38 LDA GAME_STATE + game_state::sound_setting
    case 0xC1F5FE: {
        Instruction step(cpu, 0xAD, 0x0098B7u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:39 AND #$00FF
    case 0xC1F601: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC1F601.
    case 0xC1F603: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:40 BEQ @UNKNOWN0
    case 0xC1F604: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:41 AND #$00FF
    case 0xC1F606: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC1F606.
    case 0xC1F608: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:42 TAX
    case 0xC1F609: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:43 DEX
    case 0xC1F60A: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:44 BRA @UNKNOWN1
    case 0xC1F60B: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:46 LDX #0
    case 0xC1F60D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:46 LDX #0
    // Overlapping static entry reached from 0xC1F60D.
    case 0xC1F60F: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:48 TXA
    case 0xC1F610: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_sound_menu.asm:49 JSR UNKNOWN_C11887
    case 0xC1F611: {
        Instruction step(cpu, 0x20, 0x001887u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_sound_menu.asm:50 END_C_FUNCTION
    case 0xC1F614: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select/open_sound_menu.asm:50 END_C_FUNCTION
    case 0xC1F615: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
