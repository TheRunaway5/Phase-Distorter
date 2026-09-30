// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/file_select/open_flavour_menu.asm
bool resume_introduction_file_select_open_flavour_menu(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1F6E3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F6E5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F6E6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F6E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F6E7.
    case 0xC1F6E9: {
        Instruction step(cpu, 0xFF, 0x32A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F6EA: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F6EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    // Overlapping static entry reached from 0xC1F6EB.
    case 0xC1F6ED: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F6EE: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:18 JSR SET_INSTANT_PRINTING
    case 0xC1F6F1: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F6F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x00C128u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F6F5.
    case 0xC1F6F7: {
        Instruction step(cpu, 0xC1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F6F8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F6F7.
    case 0xC1F6F9: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F6FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F6FA.
    case 0xC1F6FC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F6FD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:20 LDA #@FLAVOURDESCLENGTH
    case 0xC1F6FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:20 LDA #@FLAVOURDESCLENGTH
    // Overlapping static entry reached from 0xC1F6FF.
    case 0xC1F701: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:21 JSR PRINT_STRING
    case 0xC1F702: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F705: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F705.
    case 0xC1F707: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F708: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F70A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F70A.
    case 0xC1F70C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F70D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F70F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Du : 0x00C14Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F70F.
    case 0xC1F711: {
        Instruction step(cpu, 0xC1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F712: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F711.
    case 0xC1F713: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F714: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F714.
    case 0xC1F716: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F717: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F719: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F71B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F71D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F71F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:25 LDX #@FLAVOURSTARTLINE
    case 0xC1F721: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:25 LDX #@FLAVOURSTARTLINE
    // Overlapping static entry reached from 0xC1F721.
    case 0xC1F723: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:26 LDA #0
    case 0xC1F724: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:26 LDA #0
    // Overlapping static entry reached from 0xC1F724.
    case 0xC1F726: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:27 JSR UNKNOWN_C114B1
    case 0xC1F727: {
        Instruction step(cpu, 0x20, 0x0014B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F72A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Au : 0x00C15Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F72A.
    case 0xC1F72C: {
        Instruction step(cpu, 0xC1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F72D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F72C.
    case 0xC1F72E: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F72F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F72F.
    case 0xC1F731: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F732: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F734: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F736: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F738: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F73A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:30 LDX #@FLAVOURSTARTLINE+1
    case 0xC1F73C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:30 LDX #@FLAVOURSTARTLINE+1
    // Overlapping static entry reached from 0xC1F73C.
    case 0xC1F73E: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:31 LDA #0
    case 0xC1F73F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:31 LDA #0
    // Overlapping static entry reached from 0xC1F73F.
    case 0xC1F741: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:32 JSR UNKNOWN_C114B1
    case 0xC1F742: {
        Instruction step(cpu, 0x20, 0x0014B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F745: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000066u : 0x00C166u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F745.
    case 0xC1F747: {
        Instruction step(cpu, 0xC1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F748: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F747.
    case 0xC1F749: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F74A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F74A.
    case 0xC1F74C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F74D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F74F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F751: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F753: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F755: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:35 LDX #@FLAVOURSTARTLINE+2
    case 0xC1F757: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:35 LDX #@FLAVOURSTARTLINE+2
    // Overlapping static entry reached from 0xC1F757.
    case 0xC1F759: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:36 LDA #0
    case 0xC1F75A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1F75A.
    case 0xC1F75C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:37 JSR UNKNOWN_C114B1
    case 0xC1F75D: {
        Instruction step(cpu, 0x20, 0x0014B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F760: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x00C178u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F760.
    case 0xC1F762: {
        Instruction step(cpu, 0xC1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F763: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F762.
    case 0xC1F764: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F765: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F765.
    case 0xC1F767: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F768: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F76A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F76C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F76E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F770: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:40 LDX #@FLAVOURSTARTLINE+3
    case 0xC1F772: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:40 LDX #@FLAVOURSTARTLINE+3
    // Overlapping static entry reached from 0xC1F772.
    case 0xC1F774: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:41 LDA #0
    case 0xC1F775: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:41 LDA #0
    // Overlapping static entry reached from 0xC1F775.
    case 0xC1F777: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:42 JSR UNKNOWN_C114B1
    case 0xC1F778: {
        Instruction step(cpu, 0x20, 0x0014B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F77B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000086u : 0x00C186u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F77B.
    case 0xC1F77D: {
        Instruction step(cpu, 0xC1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F77E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F77D.
    case 0xC1F77F: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F780: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F780.
    case 0xC1F782: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F783: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F785: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F787: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F789: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F78B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:45 LDX #@FLAVOURSTARTLINE+4
    case 0xC1F78D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:45 LDX #@FLAVOURSTARTLINE+4
    // Overlapping static entry reached from 0xC1F78D.
    case 0xC1F78F: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:46 LDA #0
    case 0xC1F790: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:46 LDA #0
    // Overlapping static entry reached from 0xC1F790.
    case 0xC1F792: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:47 JSR UNKNOWN_C114B1
    case 0xC1F793: {
        Instruction step(cpu, 0x20, 0x0014B1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:48 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    case 0xC1F796: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000CDu : 0x0099CDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:48 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    // Overlapping static entry reached from 0xC1F796.
    case 0xC1F798: {
        Instruction step(cpu, 0x99, 0x0000BDu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:49 LDA __BSS_START__,X
    case 0xC1F799: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:49 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC1F798.
    case 0xC1F79B: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:50 AND #$00FF
    case 0xC1F79C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC1F79C.
    case 0xC1F79E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:51 BNE @UNKNOWN0
    case 0xC1F79F: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F7A1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:53 LDA #1
    case 0xC1F7A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:54 STA __BSS_START__,X
    case 0xC1F7A5: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:54 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1F7A3.
    case 0xC1F7A6: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:56 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    case 0xC1F7A8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000CDu : 0x0099CDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:56 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    // Overlapping static entry reached from 0xC1F7A8.
    case 0xC1F7AA: {
        Instruction step(cpu, 0x99, 0x001886u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:57 STX @LOCAL03
    case 0xC1F7AB: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1F7AD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:59 LDA __BSS_START__,X
    case 0xC1F7AF: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:60 AND #$00FF
    case 0xC1F7B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC1F7B2.
    case 0xC1F7B4: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:61 DEC
    case 0xC1F7B5: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:62 JSR UNKNOWN_C11887
    case 0xC1F7B6: {
        Instruction step(cpu, 0x20, 0x001887u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F7B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Fu : 0x00EC8Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    // Overlapping static entry reached from 0xC1F7B9.
    case 0xC1F7BB: {
        Instruction step(cpu, 0xEC, 0x000E85u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F7BC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F7BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    // Overlapping static entry reached from 0xC1F7BE.
    case 0xC1F7C0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F7C1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:64 JSR UNKNOWN_C11F5A
    case 0xC1F7C3: {
        Instruction step(cpu, 0x20, 0x001F5Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:65 LDA #1
    case 0xC1F7C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:65 LDA #1
    // Overlapping static entry reached from 0xC1F7C6.
    case 0xC1F7C8: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:66 JSR SELECTION_MENU
    case 0xC1F7C9: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:67 TAY
    case 0xC1F7CC: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:68 STY @LOCAL02
    case 0xC1F7CD: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:69 BEQ @UNKNOWN1
    case 0xC1F7CF: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:70 TYA
    case 0xC1F7D1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F7D2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:72 LDX @LOCAL03
    case 0xC1F7D4: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:73 STA __BSS_START__,X
    case 0xC1F7D6: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:74 BRA @UNKNOWN4
    case 0xC1F7D9: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:77 LDX @LOCAL03
    case 0xC1F7DB: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:78 LDA __BSS_START__,X
    case 0xC1F7DD: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:79 AND #$00FF
    case 0xC1F7E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC1F7E0.
    case 0xC1F7E2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:80 BEQ @UNKNOWN2
    case 0xC1F7E3: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:81 AND #$00FF
    case 0xC1F7E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1F7E5.
    case 0xC1F7E7: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:82 TAX
    case 0xC1F7E8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:83 BRA @UNKNOWN3
    case 0xC1F7E9: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:85 LDX #1
    case 0xC1F7EB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:85 LDX #1
    // Overlapping static entry reached from 0xC1F7EB.
    case 0xC1F7ED: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:87 TXA
    case 0xC1F7EE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:88 JSL UNKNOWN_C1EC8F
    case 0xC1F7EF: {
        Instruction step(cpu, 0x22, 0xC1EC8Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC1F7F3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:95 LDA CURRENT_SAVE_SLOT
    case 0xC1F7F5: {
        Instruction step(cpu, 0xAD, 0x00B4A1u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:96 AND #$00FF
    case 0xC1F7F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC1F7F8.
    case 0xC1F7FA: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:97 DEC
    case 0xC1F7FB: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:98 JSL SAVE_GAME_SLOT
    case 0xC1F7FC: {
        Instruction step(cpu, 0x22, 0xEF0A4Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:99 LDY @LOCAL02
    case 0xC1F800: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select/open_flavour_menu.asm:100 TYA
    case 0xC1F802: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:101 END_C_FUNCTION
    case 0xC1F803: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:101 END_C_FUNCTION
    case 0xC1F804: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
