// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/file_select/open_flavour_menu.asm
bool resume_introduction_file_select_open_flavour_menu(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1F55E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F560: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F561: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F562: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F562.
    case 0xC1F564: {
        Instruction step(cpu, 0xFF, 0x32A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F565: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F566: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    // Overlapping static entry reached from 0xC1F566.
    case 0xC1F568: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F569: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:18 JSR SET_INSTANT_PRINTING
    case 0xC1F56C: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F56F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x009503u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F56F.
    case 0xC1F571: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F572: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F571.
    case 0xC1F573: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F574: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F574.
    case 0xC1F576: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F577: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:20 LDA #@FLAVOURDESCLENGTH
    case 0xC1F579: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:20 LDA #@FLAVOURDESCLENGTH
    // Overlapping static entry reached from 0xC1F579.
    case 0xC1F57B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:21 JSR PRINT_STRING
    case 0xC1F57C: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F57F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F57F.
    case 0xC1F581: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F582: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F584: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F584.
    case 0xC1F586: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F587: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F589: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00950Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F589.
    case 0xC1F58B: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F58C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F58B.
    case 0xC1F58D: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F58E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F58E.
    case 0xC1F590: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F591: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F593: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F595: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F597: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F599: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:25 LDX #@FLAVOURSTARTLINE
    case 0xC1F59B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:25 LDX #@FLAVOURSTARTLINE
    // Overlapping static entry reached from 0xC1F59B.
    case 0xC1F59D: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:26 LDA #0
    case 0xC1F59E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:26 LDA #0
    // Overlapping static entry reached from 0xC1F59E.
    case 0xC1F5A0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:27 JSR UNKNOWN_C114B1
    case 0xC1F5A1: {
        Instruction step(cpu, 0x20, 0x001AE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F5A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x009512u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5A4.
    case 0xC1F5A6: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F5A7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5A6.
    case 0xC1F5A8: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F5A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5A9.
    case 0xC1F5AB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F5AC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5AE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5B0: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5B2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5B4: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:30 LDX #@FLAVOURSTARTLINE+1
    case 0xC1F5B6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:30 LDX #@FLAVOURSTARTLINE+1
    // Overlapping static entry reached from 0xC1F5B6.
    case 0xC1F5B8: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:31 LDA #0
    case 0xC1F5B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:31 LDA #0
    // Overlapping static entry reached from 0xC1F5B9.
    case 0xC1F5BB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:32 JSR UNKNOWN_C114B1
    case 0xC1F5BC: {
        Instruction step(cpu, 0x20, 0x001AE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F5BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x009516u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F5BF.
    case 0xC1F5C1: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F5C2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F5C1.
    case 0xC1F5C3: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F5C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F5C4.
    case 0xC1F5C6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F5C7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5C9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5CB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5CD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5CF: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:35 LDX #@FLAVOURSTARTLINE+2
    case 0xC1F5D1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:35 LDX #@FLAVOURSTARTLINE+2
    // Overlapping static entry reached from 0xC1F5D1.
    case 0xC1F5D3: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:36 LDA #0
    case 0xC1F5D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1F5D4.
    case 0xC1F5D6: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:37 JSR UNKNOWN_C114B1
    case 0xC1F5D7: {
        Instruction step(cpu, 0x20, 0x001AE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F5DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Du : 0x00951Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F5DA.
    case 0xC1F5DC: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F5DD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F5DC.
    case 0xC1F5DE: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F5DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F5DF.
    case 0xC1F5E1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F5E2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5E4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5E6: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5E8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5EA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:40 LDX #@FLAVOURSTARTLINE+3
    case 0xC1F5EC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:40 LDX #@FLAVOURSTARTLINE+3
    // Overlapping static entry reached from 0xC1F5EC.
    case 0xC1F5EE: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:41 LDA #0
    case 0xC1F5EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:41 LDA #0
    // Overlapping static entry reached from 0xC1F5EF.
    case 0xC1F5F1: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:42 JSR UNKNOWN_C114B1
    case 0xC1F5F2: {
        Instruction step(cpu, 0x20, 0x001AE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F5F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x009521u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5F5.
    case 0xC1F5F7: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F5F8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5F7.
    case 0xC1F5F9: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F5FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5FA.
    case 0xC1F5FC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F5FD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5FF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F601: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F603: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F605: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:45 LDX #@FLAVOURSTARTLINE+4
    case 0xC1F607: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:45 LDX #@FLAVOURSTARTLINE+4
    // Overlapping static entry reached from 0xC1F607.
    case 0xC1F609: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:46 LDA #0
    case 0xC1F60A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:46 LDA #0
    // Overlapping static entry reached from 0xC1F60A.
    case 0xC1F60C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:47 JSR UNKNOWN_C114B1
    case 0xC1F60D: {
        Instruction step(cpu, 0x20, 0x001AE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:48 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    case 0xC1F610: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00007Eu : 0x009C7Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:48 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    // Overlapping static entry reached from 0xC1F610.
    case 0xC1F612: {
        Instruction step(cpu, 0x9C, 0x0000BDu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:49 LDA __BSS_START__,X
    case 0xC1F613: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:49 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC1F612.
    case 0xC1F615: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:50 AND #$00FF
    case 0xC1F616: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC1F616.
    case 0xC1F618: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:51 BNE @UNKNOWN0
    case 0xC1F619: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F61B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:53 LDA #1
    case 0xC1F61D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:54 STA __BSS_START__,X
    case 0xC1F61F: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:54 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1F61D.
    case 0xC1F620: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:56 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    case 0xC1F622: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00007Eu : 0x009C7Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:56 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    // Overlapping static entry reached from 0xC1F622.
    case 0xC1F624: {
        Instruction step(cpu, 0x9C, 0x001886u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:57 STX @LOCAL03
    case 0xC1F625: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1F627: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:59 LDA __BSS_START__,X
    case 0xC1F629: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:60 AND #$00FF
    case 0xC1F62C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC1F62C.
    case 0xC1F62E: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:61 DEC
    case 0xC1F62F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:62 JSR UNKNOWN_C11887
    case 0xC1F630: {
        Instruction step(cpu, 0x20, 0x002022u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F633: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F6u : 0x00EBF6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    // Overlapping static entry reached from 0xC1F633.
    case 0xC1F635: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F636: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F638: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    // Overlapping static entry reached from 0xC1F638.
    case 0xC1F63A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F63B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:64 JSR UNKNOWN_C11F5A
    case 0xC1F63D: {
        Instruction step(cpu, 0x20, 0x00267Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:65 LDA #1
    case 0xC1F640: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:65 LDA #1
    // Overlapping static entry reached from 0xC1F640.
    case 0xC1F642: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:66 JSR SELECTION_MENU
    case 0xC1F643: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:67 TAY
    case 0xC1F646: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:68 STY @LOCAL02
    case 0xC1F647: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:69 BEQ @UNKNOWN1
    case 0xC1F649: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:70 TYA
    case 0xC1F64B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F64C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:72 LDX @LOCAL03
    case 0xC1F64E: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:73 STA __BSS_START__,X
    case 0xC1F650: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:74 BRA @UNKNOWN4
    case 0xC1F653: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:77 LDX @LOCAL03
    case 0xC1F655: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:78 LDA __BSS_START__,X
    case 0xC1F657: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:79 AND #$00FF
    case 0xC1F65A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC1F65A.
    case 0xC1F65C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:80 BEQ @UNKNOWN2
    case 0xC1F65D: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:81 AND #$00FF
    case 0xC1F65F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1F65F.
    case 0xC1F661: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:82 TAX
    case 0xC1F662: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:83 BRA @UNKNOWN3
    case 0xC1F663: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:85 LDX #1
    case 0xC1F665: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:85 LDX #1
    // Overlapping static entry reached from 0xC1F665.
    case 0xC1F667: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:87 TXA
    case 0xC1F668: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:88 JSL UNKNOWN_C1EC8F
    case 0xC1F669: {
        Instruction step(cpu, 0x22, 0xC1EBF6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC1F66D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:92 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F66F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:92 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    // Overlapping static entry reached from 0xC1F66F.
    case 0xC1F671: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:93 JSR CLOSE_WINDOW
    case 0xC1F672: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:95 LDA CURRENT_SAVE_SLOT
    case 0xC1F675: {
        Instruction step(cpu, 0xAD, 0x00B675u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:96 AND #$00FF
    case 0xC1F678: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC1F678.
    case 0xC1F67A: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:97 DEC
    case 0xC1F67B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:98 JSL SAVE_GAME_SLOT
    case 0xC1F67C: {
        Instruction step(cpu, 0x22, 0xC0F962u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:99 LDY @LOCAL02
    case 0xC1F680: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:100 TYA
    case 0xC1F682: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:101 END_C_FUNCTION
    case 0xC1F683: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:101 END_C_FUNCTION
    case 0xC1F684: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
