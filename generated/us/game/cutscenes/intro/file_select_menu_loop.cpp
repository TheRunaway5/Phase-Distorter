// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/file_select_menu_loop.asm
bool resume_introduction_file_select_menu_loop(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select_menu_loop.asm:3 BEGIN_C_FUNCTION
    case 0xC1F805: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select_menu_loop.asm:16 END_STACK_VARS
    case 0xC1F807: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select_menu_loop.asm:16 END_STACK_VARS
    case 0xC1F808: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu_loop.asm:16 END_STACK_VARS
    case 0xC1F809: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DAu : 0x00FFDAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu_loop.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F809.
    case 0xC1F80B: {
        Instruction step(cpu, 0xFF, 0xD4225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select_menu_loop.asm:16 END_STACK_VARS
    case 0xC1F80C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:29 JSR SET_INSTANT_PRINTING
    case 0xC1F80D: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:29 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1F80B.
    case 0xC1F80F: {
        Instruction step(cpu, 0xE4, 0x0000C3u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:30 LDA #0
    case 0xC1F811: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:30 LDA #0
    // Overlapping static entry reached from 0xC1F811.
    case 0xC1F813: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:31 JSR FILE_SELECT_MENU
    case 0xC1F814: {
        Instruction step(cpu, 0x20, 0x00ED5Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:32 TAX
    case 0xC1F817: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:33 DEX
    case 0xC1F818: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:34 LDA SAVE_FILES_PRESENT,X
    case 0xC1F819: {
        Instruction step(cpu, 0xBD, 0x00B49Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:35 AND #$00FF
    case 0xC1F81C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC1F81C.
    case 0xC1F81E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select_menu_loop.asm:36 BEQL @EMPTY_FILE_SELECTED
    case 0xC1F81F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select_menu_loop.asm:36 BEQL @EMPTY_FILE_SELECTED
    case 0xC1F821: {
        Instruction step(cpu, 0x4C, 0x00F8B9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:38 JSR UNKNOWN_C1F07E
    case 0xC1F824: {
        Instruction step(cpu, 0x20, 0x00F07Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:39 CMP #0
    case 0xC1F827: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:39 CMP #0
    // Overlapping static entry reached from 0xC1F827.
    case 0xC1F829: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:40 BEQ @MENU_B_PRESSED
    case 0xC1F82A: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:41 CMP #1
    case 0xC1F82C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:41 CMP #1
    // Overlapping static entry reached from 0xC1F82C.
    case 0xC1F82E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:42 BEQ @MENU_STARTGAME_SELECTED
    case 0xC1F82F: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:43 CMP #2
    case 0xC1F831: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:43 CMP #2
    // Overlapping static entry reached from 0xC1F831.
    case 0xC1F833: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:44 BEQ @MENU_COPY_SELECTED
    case 0xC1F834: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:45 CMP #3
    case 0xC1F836: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:45 CMP #3
    // Overlapping static entry reached from 0xC1F836.
    case 0xC1F838: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:46 BEQ @MENU_DELETE_SELECTED
    case 0xC1F839: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:47 CMP #4
    case 0xC1F83B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:47 CMP #4
    // Overlapping static entry reached from 0xC1F83B.
    case 0xC1F83D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:48 BEQ @MENU_SETUP_SELECTED
    case 0xC1F83E: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:49 BRA @MENU_OTHER_SELECTED
    case 0xC1F840: {
        Instruction step(cpu, 0x80, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:51 JSR CLOSE_FOCUS_WINDOW
    case 0xC1F842: {
        Instruction step(cpu, 0x20, 0x000084u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:52 BRA @UNKNOWN0
    case 0xC1F845: {
        Instruction step(cpu, 0x80, 0x0000C6u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:54 JSL UNKNOWN_C064D4
    case 0xC1F847: {
        Instruction step(cpu, 0x22, 0xC064D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:55 JSL RELOAD_HOTSPOTS
    case 0xC1F84B: {
        Instruction step(cpu, 0x22, 0xC07213u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:56 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1F84F: {
        Instruction step(cpu, 0xAD, 0x009877u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:57 STA RESPAWN_X
    case 0xC1F852: {
        Instruction step(cpu, 0x8D, 0x009D1Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:58 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC1F855: {
        Instruction step(cpu, 0xAD, 0x00987Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:59 STA RESPAWN_Y
    case 0xC1F858: {
        Instruction step(cpu, 0x8D, 0x009D21u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:60 JMP @UNKNOWN59
    case 0xC1F85B: {
        Instruction step(cpu, 0x4C, 0x00FEC2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:62 JSR UNKNOWN_C1F14F
    case 0xC1F85E: {
        Instruction step(cpu, 0x20, 0x00F14Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:63 CMP #0
    case 0xC1F861: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:63 CMP #0
    // Overlapping static entry reached from 0xC1F861.
    case 0xC1F863: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:64 BEQ @VALID_FILE_SELECTED
    case 0xC1F864: {
        Instruction step(cpu, 0xF0, 0x0000BEu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:65 BRA @MENU_OTHER_SELECTED
    case 0xC1F866: {
        Instruction step(cpu, 0x80, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:67 JSR UNKNOWN_C1F2A8
    case 0xC1F868: {
        Instruction step(cpu, 0x20, 0x00F2A8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:68 CMP #0
    case 0xC1F86B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:68 CMP #0
    // Overlapping static entry reached from 0xC1F86B.
    case 0xC1F86D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:69 BEQ @VALID_FILE_SELECTED
    case 0xC1F86E: {
        Instruction step(cpu, 0xF0, 0x0000B4u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:70 BRA @MENU_OTHER_SELECTED
    case 0xC1F870: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:72 JSL OPEN_TEXT_SPEED_MENU
    case 0xC1F872: {
        Instruction step(cpu, 0x22, 0xC1F3C2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:74 LDA #0
    case 0xC1F876: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:74 LDA #0
    // Overlapping static entry reached from 0xC1F876.
    case 0xC1F878: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:75 JSL UNKNOWN_C1F497
    case 0xC1F879: {
        Instruction step(cpu, 0x22, 0xC1F497u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:76 CMP #0
    case 0xC1F87D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:76 CMP #0
    // Overlapping static entry reached from 0xC1F87D.
    case 0xC1F87F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:77 BNE @MENU_SETUP_SELECTED2
    case 0xC1F880: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:78 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F882: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:78 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F882.
    case 0xC1F884: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:79 JSR CLOSE_WINDOW
    case 0xC1F885: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:80 BRA @VALID_FILE_SELECTED
    case 0xC1F889: {
        Instruction step(cpu, 0x80, 0x000099u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:82 JSR OPEN_SOUND_MENU
    case 0xC1F88B: {
        Instruction step(cpu, 0x20, 0x00F568u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:84 LDA #0
    case 0xC1F88E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:84 LDA #0
    // Overlapping static entry reached from 0xC1F88E.
    case 0xC1F890: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:85 JSR UNKNOWN_C1F616
    case 0xC1F891: {
        Instruction step(cpu, 0x20, 0x00F616u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:86 CMP #0
    case 0xC1F894: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:86 CMP #0
    // Overlapping static entry reached from 0xC1F894.
    case 0xC1F896: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:87 BNE @MENU_SETUP_SELECTED3
    case 0xC1F897: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:88 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F899: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:88 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F899.
    case 0xC1F89B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:89 JSR CLOSE_WINDOW
    case 0xC1F89C: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:90 BRA @UNKNOWN7
    case 0xC1F8A0: {
        Instruction step(cpu, 0x80, 0x0000D4u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:92 JSR OPEN_FLAVOUR_MENU
    case 0xC1F8A2: {
        Instruction step(cpu, 0x20, 0x00F6E3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:93 CMP #0
    case 0xC1F8A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:93 CMP #0
    // Overlapping static entry reached from 0xC1F8A5.
    case 0xC1F8A7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:94 BNE @MENU_OTHER_SELECTED
    case 0xC1F8A8: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:95 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F8AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:95 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    // Overlapping static entry reached from 0xC1F8AA.
    case 0xC1F8AC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:96 JSR CLOSE_WINDOW
    case 0xC1F8AD: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:97 BRA @UNKNOWN9
    case 0xC1F8B1: {
        Instruction step(cpu, 0x80, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:99 JSR UNKNOWN_C1008E
    case 0xC1F8B3: {
        Instruction step(cpu, 0x20, 0x00008Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:100 JMP @UNKNOWN0
    case 0xC1F8B6: {
        Instruction step(cpu, 0x4C, 0x00F80Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:102 JSL OPEN_TEXT_SPEED_MENU
    case 0xC1F8B9: {
        Instruction step(cpu, 0x22, 0xC1F3C2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:104 LDA #0
    case 0xC1F8BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:104 LDA #0
    // Overlapping static entry reached from 0xC1F8BD.
    case 0xC1F8BF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:105 JSL UNKNOWN_C1F497
    case 0xC1F8C0: {
        Instruction step(cpu, 0x22, 0xC1F497u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:106 CMP #0
    case 0xC1F8C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:106 CMP #0
    // Overlapping static entry reached from 0xC1F8C4.
    case 0xC1F8C6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:107 BNE @UNKNOWN14
    case 0xC1F8C7: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:108 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F8C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:108 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F8C9.
    case 0xC1F8CB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:109 JSR CLOSE_WINDOW
    case 0xC1F8CC: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:110 JMP @UNKNOWN0
    case 0xC1F8D0: {
        Instruction step(cpu, 0x4C, 0x00F80Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:112 JSR OPEN_SOUND_MENU
    case 0xC1F8D3: {
        Instruction step(cpu, 0x20, 0x00F568u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:114 LDA #0
    case 0xC1F8D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:114 LDA #0
    // Overlapping static entry reached from 0xC1F8D6.
    case 0xC1F8D8: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:115 JSR UNKNOWN_C1F616
    case 0xC1F8D9: {
        Instruction step(cpu, 0x20, 0x00F616u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:116 CMP #0
    case 0xC1F8DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:116 CMP #0
    // Overlapping static entry reached from 0xC1F8DC.
    case 0xC1F8DE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:117 BNE @UNKNOWN16
    case 0xC1F8DF: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:118 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F8E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:118 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F8E1.
    case 0xC1F8E3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:119 JSR CLOSE_WINDOW
    case 0xC1F8E4: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:120 BRA @UNKNOWN13
    case 0xC1F8E8: {
        Instruction step(cpu, 0x80, 0x0000D3u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:122 JSR OPEN_FLAVOUR_MENU
    case 0xC1F8EA: {
        Instruction step(cpu, 0x20, 0x00F6E3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:123 CMP #0
    case 0xC1F8ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:123 CMP #0
    // Overlapping static entry reached from 0xC1F8ED.
    case 0xC1F8EF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:124 BNE @CHANGE_TO_NAMING_SCREEN_MUSIC
    case 0xC1F8F0: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:125 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F8F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:125 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    // Overlapping static entry reached from 0xC1F8F2.
    case 0xC1F8F4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:126 JSR CLOSE_WINDOW
    case 0xC1F8F5: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:127 BRA @UNKNOWN15
    case 0xC1F8F9: {
        Instruction step(cpu, 0x80, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:129 LDA #MUSIC::NAMING_SCREEN
    case 0xC1F8FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:129 LDA #MUSIC::NAMING_SCREEN
    // Overlapping static entry reached from 0xC1F8FB.
    case 0xC1F8FD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:130 JSL CHANGE_MUSIC
    case 0xC1F8FE: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:132 JSR UNKNOWN_C1008E
    case 0xC1F902: {
        Instruction step(cpu, 0x20, 0x00008Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:133 LDA #0
    case 0xC1F905: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:133 LDA #0
    // Overlapping static entry reached from 0xC1F905.
    case 0xC1F907: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:134 STA @VIRTUAL04
    case 0xC1F908: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:135 STA @LOCAL08
    case 0xC1F90A: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:136 JMP @UNKNOWN31
    case 0xC1F90C: {
        Instruction step(cpu, 0x4C, 0x00FAAEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:138 LDA @VIRTUAL04
    case 0xC1F90F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:139 CMP #$FFFF
    case 0xC1F911: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:139 CMP #$FFFF
    // Overlapping static entry reached from 0xC1F911.
    case 0xC1F913: {
        Instruction step(cpu, 0xFF, 0x201FD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:140 BNE @UNKNOWN20
    case 0xC1F914: {
        Instruction step(cpu, 0xD0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:141 JSR UNKNOWN_C1008E
    case 0xC1F916: {
        Instruction step(cpu, 0x20, 0x00008Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:141 JSR UNKNOWN_C1008E
    // Overlapping static entry reached from 0xC1F913.
    case 0xC1F917: {
        Instruction step(cpu, 0x8E, 0x00A900u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:142 LDA #1
    case 0xC1F919: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:142 LDA #1
    // Overlapping static entry reached from 0xC1F917.
    case 0xC1F91A: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:142 LDA #1
    // Overlapping static entry reached from 0xC1F919.
    case 0xC1F91B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:143 JSR FILE_SELECT_MENU
    case 0xC1F91C: {
        Instruction step(cpu, 0x20, 0x00ED5Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:144 LDA #1
    case 0xC1F91F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:144 LDA #1
    // Overlapping static entry reached from 0xC1F91F.
    case 0xC1F921: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:145 JSL UNKNOWN_C1F497
    case 0xC1F922: {
        Instruction step(cpu, 0x22, 0xC1F497u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:146 LDA #1
    case 0xC1F926: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:146 LDA #1
    // Overlapping static entry reached from 0xC1F926.
    case 0xC1F928: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:147 JSR UNKNOWN_C1F616
    case 0xC1F929: {
        Instruction step(cpu, 0x20, 0x00F616u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:148 LDA #MUSIC::SETUP_SCREEN
    case 0xC1F92C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:148 LDA #MUSIC::SETUP_SCREEN
    // Overlapping static entry reached from 0xC1F92C.
    case 0xC1F92E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:149 JSL CHANGE_MUSIC
    case 0xC1F92F: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:150 BRA @UNKNOWN16
    case 0xC1F933: {
        Instruction step(cpu, 0x80, 0x0000B5u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:152 LDA @VIRTUAL04
    case 0xC1F935: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:153 JSL DISPLAY_ANIMATED_NAMING_SPRITE
    case 0xC1F937: {
        Instruction step(cpu, 0x22, 0xC4D7D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:154 LDA #FILE_MENU_NEW_GAME_NAME::DOG
    case 0xC1F93B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:154 LDA #FILE_MENU_NEW_GAME_NAME::DOG
    // Overlapping static entry reached from 0xC1F93B.
    case 0xC1F93D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:155 CLC
    case 0xC1F93E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:156 SBC @VIRTUAL04
    case 0xC1F93F: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/intro/file_select_menu_loop.asm:157 BRANCHLTEQS @UNKNOWN24
    case 0xC1F941: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/intro/file_select_menu_loop.asm:157 BRANCHLTEQS @UNKNOWN24
    case 0xC1F943: {
        Instruction step(cpu, 0x10, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/intro/file_select_menu_loop.asm:157 BRANCHLTEQS @UNKNOWN24
    case 0xC1F945: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/intro/file_select_menu_loop.asm:157 BRANCHLTEQS @UNKNOWN24
    case 0xC1F947: {
        Instruction step(cpu, 0x30, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F949: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000094u : 0x00C194u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F949.
    case 0xC1F94B: {
        Instruction step(cpu, 0xC1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F94C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F94B.
    case 0xC1F94D: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F94E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F94D.
    case 0xC1F94F: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F94E.
    case 0xC1F950: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F951: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:159 LDA @VIRTUAL04
    case 0xC1F953: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:662 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F955: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:663 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F957: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:664 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F958: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:665 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F959: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:666 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F95B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:667 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F95C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:668 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F95D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:161 CLC
    case 0xC1F95E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:162 ADC @VIRTUAL06
    case 0xC1F95F: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:163 STA @VIRTUAL06
    case 0xC1F961: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:164 STA @LOCAL00
    case 0xC1F963: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:165 LDA @VIRTUAL06+2
    case 0xC1F965: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:166 STA @LOCAL00+2
    case 0xC1F967: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:167 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F969: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:167 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F969.
    case 0xC1F96B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:168 STA @LOCAL01
    case 0xC1F96C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:169 LDA @LOCAL08
    case 0xC1F96E: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:170 STA @VIRTUAL04
    case 0xC1F970: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:171 LDY @VIRTUAL04
    case 0xC1F972: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:172 STY @LOCAL07
    case 0xC1F974: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:173 LDA @VIRTUAL04
    case 0xC1F976: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:174 LDY #.SIZEOF(char_struct)
    case 0xC1F978: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:174 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1F978.
    case 0xC1F97A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:175 JSL MULT168
    case 0xC1F97B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:176 CLC
    case 0xC1F97F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:177 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1F980: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:177 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1F980.
    case 0xC1F982: {
        Instruction step(cpu, 0x99, 0x00A9AAu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:178 TAX
    case 0xC1F983: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:179 LDA #.SIZEOF(char_struct::name)
    case 0xC1F984: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:179 LDA #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1F982.
    case 0xC1F985: {
        Instruction step(cpu, 0x05, 0x000000u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:179 LDA #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1F984.
    case 0xC1F986: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:180 LDY @LOCAL07
    case 0xC1F987: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:181 JSR NAME_A_CHARACTER
    case 0xC1F989: {
        Instruction step(cpu, 0x20, 0x00EC04u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:182 CMP #0
    case 0xC1F98C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:182 CMP #0
    // Overlapping static entry reached from 0xC1F98C.
    case 0xC1F98E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:183 BEQ @UNKNOWN23
    case 0xC1F98F: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:184 LDA #$FFFF
    case 0xC1F991: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:184 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F991.
    case 0xC1F993: {
        Instruction step(cpu, 0xFF, 0x850285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:185 STA @VIRTUAL02
    case 0xC1F994: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:186 STA @LOCAL06
    case 0xC1F996: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:186 STA @LOCAL06
    // Overlapping static entry reached from 0xC1F993.
    case 0xC1F997: {
        Instruction step(cpu, 0x20, 0x009B4Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:187 JMP @UNKNOWN30
    case 0xC1F998: {
        Instruction step(cpu, 0x4C, 0x00FA9Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:187 JMP @UNKNOWN30
    // Overlapping static entry reached from 0xC1F997.
    case 0xC1F99A: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:189 LDA #1
    case 0xC1F99B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:189 LDA #1
    // Overlapping static entry reached from 0xC1F99B.
    case 0xC1F99D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:190 STA @VIRTUAL02
    case 0xC1F99E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:191 STA @LOCAL06
    case 0xC1F9A0: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:192 JMP @UNKNOWN30
    case 0xC1F9A2: {
        Instruction step(cpu, 0x4C, 0x00FA9Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:194 LDA @VIRTUAL04
    case 0xC1F9A5: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:195 CMP #FILE_MENU_NEW_GAME_NAME::DOG
    case 0xC1F9A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:195 CMP #FILE_MENU_NEW_GAME_NAME::DOG
    // Overlapping static entry reached from 0xC1F9A7.
    case 0xC1F9A9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:196 BNE @UNKNOWN26
    case 0xC1F9AA: {
        Instruction step(cpu, 0xD0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F9AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000094u : 0x00C194u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F9AC.
    case 0xC1F9AE: {
        Instruction step(cpu, 0xC1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F9AF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F9AE.
    case 0xC1F9B0: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F9B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F9B0.
    case 0xC1F9B2: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F9B1.
    case 0xC1F9B3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F9B4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:198 LDA @VIRTUAL04
    case 0xC1F9B6: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:662 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9B8: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:663 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9BA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:664 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9BB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:665 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9BC: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:666 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:667 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:668 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9C0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:200 CLC
    case 0xC1F9C1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:201 ADC @VIRTUAL06
    case 0xC1F9C2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:202 STA @VIRTUAL06
    case 0xC1F9C4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:203 STA @LOCAL00
    case 0xC1F9C6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:204 LDA @VIRTUAL06+2
    case 0xC1F9C8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:205 STA @LOCAL00+2
    case 0xC1F9CA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:206 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F9CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:206 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F9CC.
    case 0xC1F9CE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:207 STA @LOCAL01
    case 0xC1F9CF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:208 LDA @LOCAL08
    case 0xC1F9D1: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:209 STA @VIRTUAL04
    case 0xC1F9D3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:210 LDY @VIRTUAL04
    case 0xC1F9D5: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:211 LDX #.LOWORD(GAME_STATE) + game_state::pet_name
    case 0xC1F9D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000019u : 0x009819u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:211 LDX #.LOWORD(GAME_STATE) + game_state::pet_name
    // Overlapping static entry reached from 0xC1F9D7.
    case 0xC1F9D9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:212 LDA #.SIZEOF(game_state::pet_name)
    case 0xC1F9DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:212 LDA #.SIZEOF(game_state::pet_name)
    // Overlapping static entry reached from 0xC1F9DA.
    case 0xC1F9DC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:213 JSR NAME_A_CHARACTER
    case 0xC1F9DD: {
        Instruction step(cpu, 0x20, 0x00EC04u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:214 CMP #0
    case 0xC1F9E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:214 CMP #0
    // Overlapping static entry reached from 0xC1F9E0.
    case 0xC1F9E2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:215 BEQ @UNKNOWN25
    case 0xC1F9E3: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:216 LDA #$FFFF
    case 0xC1F9E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:216 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F9E5.
    case 0xC1F9E7: {
        Instruction step(cpu, 0xFF, 0x850285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:217 STA @VIRTUAL02
    case 0xC1F9E8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:218 STA @LOCAL06
    case 0xC1F9EA: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:218 STA @LOCAL06
    // Overlapping static entry reached from 0xC1F9E7.
    case 0xC1F9EB: {
        Instruction step(cpu, 0x20, 0x009B4Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:219 JMP @UNKNOWN30
    case 0xC1F9EC: {
        Instruction step(cpu, 0x4C, 0x00FA9Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:219 JMP @UNKNOWN30
    // Overlapping static entry reached from 0xC1F9EB.
    case 0xC1F9EE: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:221 LDA #1
    case 0xC1F9EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:221 LDA #1
    // Overlapping static entry reached from 0xC1F9EF.
    case 0xC1F9F1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:222 STA @VIRTUAL02
    case 0xC1F9F2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:223 STA @LOCAL06
    case 0xC1F9F4: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:224 JMP @UNKNOWN30
    case 0xC1F9F6: {
        Instruction step(cpu, 0x4C, 0x00FA9Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:226 LDA @VIRTUAL04
    case 0xC1F9F9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:227 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_FOOD
    case 0xC1F9FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:227 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_FOOD
    // Overlapping static entry reached from 0xC1F9FB.
    case 0xC1F9FD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:228 BNE @UNKNOWN28
    case 0xC1F9FE: {
        Instruction step(cpu, 0xD0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000094u : 0x00C194u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA00.
    case 0xC1FA02: {
        Instruction step(cpu, 0xC1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA03: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA02.
    case 0xC1FA04: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA04.
    case 0xC1FA06: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA05.
    case 0xC1FA07: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA08: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:230 LDA @VIRTUAL04
    case 0xC1FA0A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:662 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA0C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:663 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA0E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:664 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA0F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:665 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA10: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:666 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA12: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:667 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA13: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:668 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA14: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:232 CLC
    case 0xC1FA15: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:233 ADC @VIRTUAL06
    case 0xC1FA16: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:234 STA @VIRTUAL06
    case 0xC1FA18: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:235 STA @LOCAL00
    case 0xC1FA1A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:236 LDA @VIRTUAL06+2
    case 0xC1FA1C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:237 STA @LOCAL00+2
    case 0xC1FA1E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:238 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1FA20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:238 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1FA20.
    case 0xC1FA22: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:239 STA @LOCAL01
    case 0xC1FA23: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:240 LDA @LOCAL08
    case 0xC1FA25: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:241 STA @VIRTUAL04
    case 0xC1FA27: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:242 LDY @VIRTUAL04
    case 0xC1FA29: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:243 LDX #.LOWORD(GAME_STATE) + game_state::favourite_food
    case 0xC1FA2B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Fu : 0x00981Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:243 LDX #.LOWORD(GAME_STATE) + game_state::favourite_food
    // Overlapping static entry reached from 0xC1FA2B.
    case 0xC1FA2D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:244 LDA #.SIZEOF(game_state::favourite_food)
    case 0xC1FA2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:244 LDA #.SIZEOF(game_state::favourite_food)
    // Overlapping static entry reached from 0xC1FA2E.
    case 0xC1FA30: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:245 JSR NAME_A_CHARACTER
    case 0xC1FA31: {
        Instruction step(cpu, 0x20, 0x00EC04u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:246 CMP #0
    case 0xC1FA34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:246 CMP #0
    // Overlapping static entry reached from 0xC1FA34.
    case 0xC1FA36: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:247 BEQ @UNKNOWN27
    case 0xC1FA37: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:248 LDA #$FFFF
    case 0xC1FA39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:248 LDA #$FFFF
    // Overlapping static entry reached from 0xC1FA39.
    case 0xC1FA3B: {
        Instruction step(cpu, 0xFF, 0x850285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:249 STA @VIRTUAL02
    case 0xC1FA3C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:250 STA @LOCAL06
    case 0xC1FA3E: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:250 STA @LOCAL06
    // Overlapping static entry reached from 0xC1FA3B.
    case 0xC1FA3F: {
        Instruction step(cpu, 0x20, 0x005980u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:251 BRA @UNKNOWN30
    case 0xC1FA40: {
        Instruction step(cpu, 0x80, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:253 LDA #1
    case 0xC1FA42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:253 LDA #1
    // Overlapping static entry reached from 0xC1FA42.
    case 0xC1FA44: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:254 STA @VIRTUAL02
    case 0xC1FA45: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:255 STA @LOCAL06
    case 0xC1FA47: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:256 BRA @UNKNOWN30
    case 0xC1FA49: {
        Instruction step(cpu, 0x80, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:258 LDA @VIRTUAL04
    case 0xC1FA4B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:259 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_THING
    case 0xC1FA4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:259 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_THING
    // Overlapping static entry reached from 0xC1FA4D.
    case 0xC1FA4F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:260 BNE @UNKNOWN30
    case 0xC1FA50: {
        Instruction step(cpu, 0xD0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000094u : 0x00C194u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA52.
    case 0xC1FA54: {
        Instruction step(cpu, 0xC1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA55: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA54.
    case 0xC1FA56: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA56.
    case 0xC1FA58: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA57.
    case 0xC1FA59: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA5A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:262 LDA @VIRTUAL04
    case 0xC1FA5C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:662 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA5E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:663 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA60: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:664 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA61: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:665 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA62: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:666 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA64: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:667 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA65: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:668 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA66: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:264 CLC
    case 0xC1FA67: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:265 ADC @VIRTUAL06
    case 0xC1FA68: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:266 STA @VIRTUAL06
    case 0xC1FA6A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:267 STA @LOCAL00
    case 0xC1FA6C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:268 LDA @VIRTUAL06+2
    case 0xC1FA6E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:269 STA @LOCAL00+2
    case 0xC1FA70: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:270 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1FA72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:270 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1FA72.
    case 0xC1FA74: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:271 STA @LOCAL01
    case 0xC1FA75: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:272 LDA @LOCAL08
    case 0xC1FA77: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:273 STA @VIRTUAL04
    case 0xC1FA79: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:274 LDY @VIRTUAL04
    case 0xC1FA7B: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:275 LDX #.LOWORD(GAME_STATE) + game_state::favourite_thing + 4 ; part after 'PSI ' prefix
    case 0xC1FA7D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000029u : 0x009829u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:275 LDX #.LOWORD(GAME_STATE) + game_state::favourite_thing + 4 ; part after 'PSI ' prefix
    // Overlapping static entry reached from 0xC1FA7D.
    case 0xC1FA7F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:279 LDA #.SIZEOF(game_state::favourite_thing) - 6
    case 0xC1FA80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:279 LDA #.SIZEOF(game_state::favourite_thing) - 6
    // Overlapping static entry reached from 0xC1FA80.
    case 0xC1FA82: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:281 JSR NAME_A_CHARACTER
    case 0xC1FA83: {
        Instruction step(cpu, 0x20, 0x00EC04u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:282 CMP #0
    case 0xC1FA86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:282 CMP #0
    // Overlapping static entry reached from 0xC1FA86.
    case 0xC1FA88: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:283 BEQ @UNKNOWN29
    case 0xC1FA89: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:284 LDA #$FFFF
    case 0xC1FA8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:284 LDA #$FFFF
    // Overlapping static entry reached from 0xC1FA8B.
    case 0xC1FA8D: {
        Instruction step(cpu, 0xFF, 0x850285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:285 STA @VIRTUAL02
    case 0xC1FA8E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:286 STA @LOCAL06
    case 0xC1FA90: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:286 STA @LOCAL06
    // Overlapping static entry reached from 0xC1FA8D.
    case 0xC1FA91: {
        Instruction step(cpu, 0x20, 0x000780u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:287 BRA @UNKNOWN30
    case 0xC1FA92: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:289 LDA #1
    case 0xC1FA94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:289 LDA #1
    // Overlapping static entry reached from 0xC1FA94.
    case 0xC1FA96: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:290 STA @VIRTUAL02
    case 0xC1FA97: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:291 STA @LOCAL06
    case 0xC1FA99: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:293 LDA @VIRTUAL04
    case 0xC1FA9B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:294 JSL UNKNOWN_C4D830
    case 0xC1FA9D: {
        Instruction step(cpu, 0x22, 0xC4D830u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:295 LDA @LOCAL06
    case 0xC1FAA1: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:296 STA @VIRTUAL02
    case 0xC1FAA3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:297 LDA @VIRTUAL04
    case 0xC1FAA5: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:298 CLC
    case 0xC1FAA7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:299 ADC @VIRTUAL02
    case 0xC1FAA8: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:300 STA @VIRTUAL04
    case 0xC1FAAA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:301 STA @LOCAL08
    case 0xC1FAAC: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:303 LDA #THINGS_NAMED_COUNT
    case 0xC1FAAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:303 LDA #THINGS_NAMED_COUNT
    // Overlapping static entry reached from 0xC1FAAE.
    case 0xC1FAB0: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:304 CLC
    case 0xC1FAB1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:305 SBC @VIRTUAL04
    case 0xC1FAB2: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/intro/file_select_menu_loop.asm:306 JUMPGTS @UNKNOWN19
    case 0xC1FAB4: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/intro/file_select_menu_loop.asm:306 JUMPGTS @UNKNOWN19
    case 0xC1FAB6: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/intro/file_select_menu_loop.asm:306 JUMPGTS @UNKNOWN19
    case 0xC1FAB8: {
        Instruction step(cpu, 0x4C, 0x00F90Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/intro/file_select_menu_loop.asm:306 JUMPGTS @UNKNOWN19
    case 0xC1FABB: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/intro/file_select_menu_loop.asm:306 JUMPGTS @UNKNOWN19
    case 0xC1FABD: {
        Instruction step(cpu, 0x4C, 0x00F90Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:307 JSR UNKNOWN_C1008E
    case 0xC1FAC0: {
        Instruction step(cpu, 0x20, 0x00008Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:308 JSR SET_INSTANT_PRINTING
    case 0xC1FAC3: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:309 LDX #0
    case 0xC1FAC7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:309 LDX #0
    // Overlapping static entry reached from 0xC1FAC7.
    case 0xC1FAC9: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:310 STX @LOCAL08
    case 0xC1FACA: {
        Instruction step(cpu, 0x86, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:311 BRA @UNKNOWN35
    case 0xC1FACC: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:313 TXA
    case 0xC1FACE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:314 CLC
    case 0xC1FACF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:315 ADC #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_NESS
    case 0xC1FAD0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:315 ADC #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_NESS
    // Overlapping static entry reached from 0xC1FAD0.
    case 0xC1FAD2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:316 JSR CREATE_WINDOW
    case 0xC1FAD3: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:317 LDX @LOCAL08
    case 0xC1FAD6: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:318 INX
    case 0xC1FAD8: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:319 STX @LOCAL08
    case 0xC1FAD9: {
        Instruction step(cpu, 0x86, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:320 TXA
    case 0xC1FADB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:321 JSR UNKNOWN_C1931B
    case 0xC1FADC: {
        Instruction step(cpu, 0x20, 0x00931Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:322 LDX @LOCAL08
    case 0xC1FADF: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:323 STX @LOCAL08
    case 0xC1FAE1: {
        Instruction step(cpu, 0x86, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:325 STX @VIRTUAL04
    case 0xC1FAE3: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:326 LDA #PLAYER_CHAR_COUNT
    case 0xC1FAE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:326 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC1FAE5.
    case 0xC1FAE7: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:327 CLC
    case 0xC1FAE8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:328 SBC @VIRTUAL04
    case 0xC1FAE9: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/file_select_menu_loop.asm:329 BRANCHGTS @UNKNOWN34
    case 0xC1FAEB: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/file_select_menu_loop.asm:329 BRANCHGTS @UNKNOWN34
    case 0xC1FAED: {
        Instruction step(cpu, 0x10, 0x0000DFu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/file_select_menu_loop.asm:329 BRANCHGTS @UNKNOWN34
    case 0xC1FAEF: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/file_select_menu_loop.asm:329 BRANCHGTS @UNKNOWN34
    case 0xC1FAF1: {
        Instruction step(cpu, 0x30, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop.asm:330 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    case 0xC1FAF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop.asm:330 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    // Overlapping static entry reached from 0xC1FAF3.
    case 0xC1FAF5: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select_menu_loop.asm:330 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    case 0xC1FAF6: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:331 LDA #7
    case 0xC1FAF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:331 LDA #7
    // Overlapping static entry reached from 0xC1FAF9.
    case 0xC1FAFB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:332 JSR UNKNOWN_C1931B
    case 0xC1FAFC: {
        Instruction step(cpu, 0x20, 0x00931Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:333 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD
    case 0xC1FAFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:333 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD
    // Overlapping static entry reached from 0xC1FAFF.
    case 0xC1FB01: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:334 JSR CREATE_WINDOW
    case 0xC1FB02: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1FB05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ACu : 0x00C2ACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1FB05.
    case 0xC1FB07: {
        Instruction step(cpu, 0xC2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1FB08: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1FB07.
    case 0xC1FB09: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1FB0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1FB0A.
    case 0xC1FB0C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1FB0D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:336 LDA #14
    case 0xC1FB0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:336 LDA #14
    // Overlapping static entry reached from 0xC1FB0F.
    case 0xC1FB11: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:337 JSR PRINT_STRING
    case 0xC1FB12: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00981Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB15.
    case 0xC1FB17: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB18: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB1A: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB1B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB1D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB1E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB20: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:339 REP #PROC_FLAGS::ACCUM8
    case 0xC1FB22: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:340 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB24: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:340 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB26: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:340 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB28: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:340 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB2A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:341 JSL STRLEN
    case 0xC1FB2C: {
        Instruction step(cpu, 0x22, 0xC08F22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:342 STA @LOCAL05
    case 0xC1FB30: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:343 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB32: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:343 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB34: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:343 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB36: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:343 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB38: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:344 LDX #0
    case 0xC1FB3A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:344 LDX #0
    // Overlapping static entry reached from 0xC1FB3A.
    case 0xC1FB3C: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:345 LDA @LOCAL05
    case 0xC1FB3D: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:346 JSL UNKNOWN_C44FF3
    case 0xC1FB3F: {
        Instruction step(cpu, 0x22, 0xC44FF3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:347 TAX
    case 0xC1FB43: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:348 ASL
    case 0xC1FB44: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:349 PHP
    case 0xC1FB45: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:350 LSR
    case 0xC1FB46: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:351 LSR
    case 0xC1FB47: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:352 LSR
    case 0xC1FB48: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:353 LSR
    case 0xC1FB49: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:354 PLP
    case 0xC1FB4A: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:355 BCC @UNKNOWN38
    case 0xC1FB4B: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:356 ORA #$F000
    case 0xC1FB4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00F000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:356 ORA #$F000
    // Overlapping static entry reached from 0xC1FB4D.
    case 0xC1FB4F: {
        Instruction step(cpu, 0xF0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:358 STA @LOCAL08
    case 0xC1FB50: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:358 STA @LOCAL08
    // Overlapping static entry reached from 0xC1FB4F.
    case 0xC1FB51: {
        Instruction step(cpu, 0x24, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:359 LDY #8
    case 0xC1FB52: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:359 LDY #8
    // Overlapping static entry reached from 0xC1FB51.
    case 0xC1FB53: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:359 LDY #8
    // Overlapping static entry reached from 0xC1FB52.
    case 0xC1FB54: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:360 TXA
    case 0xC1FB55: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:361 JSL MODULUS16S
    case 0xC1FB56: {
        Instruction step(cpu, 0x22, 0xC091F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:362 CMP #0
    case 0xC1FB5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:362 CMP #0
    // Overlapping static entry reached from 0xC1FB5A.
    case 0xC1FB5C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:363 BNE @UNKNOWN39
    case 0xC1FB5D: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:364 LDA @LOCAL08
    case 0xC1FB5F: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:365 CMP #6
    case 0xC1FB61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:365 CMP #6
    // Overlapping static entry reached from 0xC1FB61.
    case 0xC1FB63: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:366 BNE @UNKNOWN40
    case 0xC1FB64: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:368 LDA @LOCAL08
    case 0xC1FB66: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:369 INC
    case 0xC1FB68: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:371 LDX #1
    case 0xC1FB69: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:371 LDX #1
    // Overlapping static entry reached from 0xC1FB69.
    case 0xC1FB6B: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:372 STX @LOCAL04
    case 0xC1FB6C: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:373 STA @VIRTUAL04
    case 0xC1FB6E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:374 LDA OPEN_WINDOW_TABLE + WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD * 2
    case 0xC1FB70: {
        Instruction step(cpu, 0xAD, 0x008928u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:375 LDY #.SIZEOF(window_stats)
    case 0xC1FB73: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:375 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1FB73.
    case 0xC1FB75: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:376 JSL MULT168
    case 0xC1FB76: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:377 TAX
    case 0xC1FB7A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:378 LDA WINDOW_STATS+window_stats::width,X
    case 0xC1FB7B: {
        Instruction step(cpu, 0xBD, 0x00865Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:379 SEC
    case 0xC1FB7E: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:380 SBC @VIRTUAL04
    case 0xC1FB7F: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:381 LDX @LOCAL04
    case 0xC1FB81: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:382 JSL UNKNOWN_C438A5
    case 0xC1FB83: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00981Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FC01.
    case 0xC1FB88: {
        Instruction step(cpu, 0x1F, 0x068598u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB87.
    case 0xC1FB89: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB8A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB8C: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB8D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB8F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB90: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB92: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:384 REP #PROC_FLAGS::ACCUM8
    case 0xC1FB94: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:385 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB96: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:385 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB98: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:385 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB9A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:385 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB9C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:386 JSL STRLEN
    case 0xC1FB9E: {
        Instruction step(cpu, 0x22, 0xC08F22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:387 STA @LOCAL08
    case 0xC1FBA2: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:388 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBA4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:388 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBA6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:388 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBA8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:388 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBAA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:389 LDA @LOCAL08
    case 0xC1FBAC: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:390 JSR PRINT_STRING
    case 0xC1FBAE: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:391 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING
    case 0xC1FBB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:391 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING
    // Overlapping static entry reached from 0xC1FBB1.
    case 0xC1FBB3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:392 JSR CREATE_WINDOW
    case 0xC1FBB4: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1FBB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BAu : 0x00C2BAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1FBB7.
    case 0xC1FBB9: {
        Instruction step(cpu, 0xC2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1FBBA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1FBB9.
    case 0xC1FBBB: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1FBBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1FBBC.
    case 0xC1FBBE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1FBBF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:394 LDA #14
    case 0xC1FBC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:394 LDA #14
    // Overlapping static entry reached from 0xC1FBC1.
    case 0xC1FBC3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:395 JSR PRINT_STRING
    case 0xC1FBC4: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000029u : 0x009829u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    // Overlapping static entry reached from 0xC1FBC7.
    case 0xC1FBC9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBCA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBCC: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBCD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBCF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBD0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBD2: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:397 REP #PROC_FLAGS::ACCUM8
    case 0xC1FBD4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:398 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBD6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:398 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBD8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:398 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBDA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:398 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBDC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:399 JSL STRLEN
    case 0xC1FBDE: {
        Instruction step(cpu, 0x22, 0xC08F22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:400 STA @LOCAL05
    case 0xC1FBE2: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:401 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBE4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:401 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBE6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:401 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBE8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:401 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBEA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:402 LDX #0
    case 0xC1FBEC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:402 LDX #0
    // Overlapping static entry reached from 0xC1FBEC.
    case 0xC1FBEE: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:403 LDA @LOCAL05
    case 0xC1FBEF: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:404 JSL UNKNOWN_C44FF3
    case 0xC1FBF1: {
        Instruction step(cpu, 0x22, 0xC44FF3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:406 TAX
    case 0xC1FBF5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:408 ASL
    case 0xC1FBF6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:409 PHP
    case 0xC1FBF7: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:410 LSR
    case 0xC1FBF8: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:411 LSR
    case 0xC1FBF9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:412 LSR
    case 0xC1FBFA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:413 LSR
    case 0xC1FBFB: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:414 PLP
    case 0xC1FBFC: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:415 BCC @UNKNOWN41
    case 0xC1FBFD: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:416 ORA #$F000
    case 0xC1FBFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00F000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:416 ORA #$F000
    // Overlapping static entry reached from 0xC1FBFF.
    case 0xC1FC01: {
        Instruction step(cpu, 0xF0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:418 STA @LOCAL08
    case 0xC1FC02: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:418 STA @LOCAL08
    // Overlapping static entry reached from 0xC1FC01.
    case 0xC1FC03: {
        Instruction step(cpu, 0x24, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:419 LDY #8
    case 0xC1FC04: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:419 LDY #8
    // Overlapping static entry reached from 0xC1FC03.
    case 0xC1FC05: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:419 LDY #8
    // Overlapping static entry reached from 0xC1FC04.
    case 0xC1FC06: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:421 TXA
    case 0xC1FC07: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:423 JSL MODULUS16S
    case 0xC1FC08: {
        Instruction step(cpu, 0x22, 0xC091F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:424 CMP #0
    case 0xC1FC0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:424 CMP #0
    // Overlapping static entry reached from 0xC1FC0C.
    case 0xC1FC0E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:425 BNE @UNKNOWN42
    case 0xC1FC0F: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:426 LDA @LOCAL08
    case 0xC1FC11: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:427 CMP #6
    case 0xC1FC13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:427 CMP #6
    // Overlapping static entry reached from 0xC1FC13.
    case 0xC1FC15: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:428 BNE @UNKNOWN43
    case 0xC1FC16: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:430 LDA @LOCAL08
    case 0xC1FC18: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:431 INC
    case 0xC1FC1A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:433 LDX #1
    case 0xC1FC1B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:433 LDX #1
    // Overlapping static entry reached from 0xC1FC1B.
    case 0xC1FC1D: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:434 STX @LOCAL07
    case 0xC1FC1E: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:435 STA @VIRTUAL04
    case 0xC1FC20: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:436 LDA OPEN_WINDOW_TABLE + WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING * 2
    case 0xC1FC22: {
        Instruction step(cpu, 0xAD, 0x00892Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:437 LDY #.SIZEOF(window_stats)
    case 0xC1FC25: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:437 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1FC25.
    case 0xC1FC27: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:438 JSL MULT168
    case 0xC1FC28: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:439 TAX
    case 0xC1FC2C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:440 LDA WINDOW_STATS+window_stats::width,X
    case 0xC1FC2D: {
        Instruction step(cpu, 0xBD, 0x00865Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:441 SEC
    case 0xC1FC30: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:442 SBC @VIRTUAL04
    case 0xC1FC31: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:443 LDX @LOCAL07
    case 0xC1FC33: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:444 JSL UNKNOWN_C438A5
    case 0xC1FC35: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000029u : 0x009829u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    // Overlapping static entry reached from 0xC1FC39.
    case 0xC1FC3B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC3C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC3E: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC3F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC41: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC42: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC44: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:446 REP #PROC_FLAGS::ACCUM8
    case 0xC1FC46: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:447 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC48: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:447 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC4A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:447 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC4C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:447 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC4E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:448 JSL STRLEN
    case 0xC1FC50: {
        Instruction step(cpu, 0x22, 0xC08F22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:449 STA @LOCAL08
    case 0xC1FC54: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:450 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC56: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:450 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC58: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:450 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC5A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:450 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC5C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:451 LDA @LOCAL08
    case 0xC1FC5E: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:452 JSR PRINT_STRING
    case 0xC1FC60: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop.asm:453 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    case 0xC1FC63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x000024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop.asm:453 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    // Overlapping static entry reached from 0xC1FC63.
    case 0xC1FC65: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select_menu_loop.asm:453 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    case 0xC1FC66: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FC69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x00C2C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FC69.
    case 0xC1FC6B: {
        Instruction step(cpu, 0xC2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FC6C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FC6B.
    case 0xC1FC6D: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FC6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FC6E.
    case 0xC1FC70: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FC71: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:455 LDA #13
    case 0xC1FC73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:455 LDA #13
    // Overlapping static entry reached from 0xC1FC73.
    case 0xC1FC75: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:456 JSR PRINT_STRING
    case 0xC1FC76: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FC79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FC79.
    case 0xC1FC7B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FC7C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FC7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FC7E.
    case 0xC1FC80: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FC81: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FC83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x00C2D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FC83.
    case 0xC1FC85: {
        Instruction step(cpu, 0xC2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FC86: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FC85.
    case 0xC1FC87: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FC88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FC88.
    case 0xC1FC8A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FC8B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:459 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FC8D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:459 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FC8F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:459 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FC91: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:459 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FC93: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:460 LDY #0
    case 0xC1FC95: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:460 LDY #0
    // Overlapping static entry reached from 0xC1FC95.
    case 0xC1FC97: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:461 LDX #14
    case 0xC1FC98: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:461 LDX #14
    // Overlapping static entry reached from 0xC1FC98.
    case 0xC1FC9A: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:462 LDA #1
    case 0xC1FC9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:462 LDA #1
    // Overlapping static entry reached from 0xC1FC9B.
    case 0xC1FC9D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:463 JSR UNKNOWN_C1153B
    case 0xC1FC9E: {
        Instruction step(cpu, 0x20, 0x00153Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FCA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D9u : 0x00C2D9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FCA1.
    case 0xC1FCA3: {
        Instruction step(cpu, 0xC2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FCA4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FCA3.
    case 0xC1FCA5: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FCA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FCA6.
    case 0xC1FCA8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FCA9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:465 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FCAB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:465 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FCAD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:465 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FCAF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:465 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FCB1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:466 LDY #0
    case 0xC1FCB3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:466 LDY #0
    // Overlapping static entry reached from 0xC1FCB3.
    case 0xC1FCB5: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:467 LDX #18
    case 0xC1FCB6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:467 LDX #18
    // Overlapping static entry reached from 0xC1FCB6.
    case 0xC1FCB8: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:468 TYA
    case 0xC1FCB9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:469 JSR UNKNOWN_C1153B
    case 0xC1FCBA: {
        Instruction step(cpu, 0x20, 0x00153Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:470 JSR PRINT_MENU_ITEMS
    case 0xC1FCBD: {
        Instruction step(cpu, 0x20, 0x00163Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:471 JSL UNKNOWN_C4D8FA
    case 0xC1FCC0: {
        Instruction step(cpu, 0x22, 0xC4D8FAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:472 LDA #$00FF
    case 0xC1FCC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:472 LDA #$00FF
    // Overlapping static entry reached from 0xC1FCC4.
    case 0xC1FCC6: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:473 STA ENABLE_WORD_WRAP
    case 0xC1FCC7: {
        Instruction step(cpu, 0x8D, 0x005E6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:474 LDA #1
    case 0xC1FCCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:474 LDA #1
    // Overlapping static entry reached from 0xC1FCCA.
    case 0xC1FCCC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:475 JSR SELECTION_MENU
    case 0xC1FCCD: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:476 TAX
    case 0xC1FCD0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:477 BNE @EVERYTHING_OKAY
    case 0xC1FCD1: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:478 JSL UNKNOWN_C021E6
    case 0xC1FCD3: {
        Instruction step(cpu, 0x22, 0xC021E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:479 JMP @UNKNOWN18
    case 0xC1FCD7: {
        Instruction step(cpu, 0x4C, 0x00F902u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:481 LDA #MUSIC::NAME_CONFIRMATION
    case 0xC1FCDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00009Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:481 LDA #MUSIC::NAME_CONFIRMATION
    // Overlapping static entry reached from 0xC1FCDA.
    case 0xC1FCDC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:482 JSL CHANGE_MUSIC
    case 0xC1FCDD: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:483 JSL WINDOW_TICK
    case 0xC1FCE1: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:484 LDX #0
    case 0xC1FCE5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:484 LDX #0
    // Overlapping static entry reached from 0xC1FCE5.
    case 0xC1FCE7: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:485 STX @LOCAL08ALT
    case 0xC1FCE8: {
        Instruction step(cpu, 0x86, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:486 BRA @UNKNOWN46
    case 0xC1FCEA: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:488 JSL UNKNOWN_C1004E
    case 0xC1FCEC: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:489 LDX @LOCAL08ALT
    case 0xC1FCF0: {
        Instruction step(cpu, 0xA6, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:490 INX
    case 0xC1FCF2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:491 STX @LOCAL08ALT
    case 0xC1FCF3: {
        Instruction step(cpu, 0x86, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:493 STX @VIRTUAL02
    case 0xC1FCF5: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:494 LDA #180
    case 0xC1FCF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B4u : 0x0000B4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:494 LDA #180
    // Overlapping static entry reached from 0xC1FCF7.
    case 0xC1FCF9: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:495 CLC
    case 0xC1FCFA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:496 SBC @VIRTUAL02
    case 0xC1FCFB: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/file_select_menu_loop.asm:497 BRANCHGTS @UNKNOWN45
    case 0xC1FCFD: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/file_select_menu_loop.asm:497 BRANCHGTS @UNKNOWN45
    case 0xC1FCFF: {
        Instruction step(cpu, 0x10, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/file_select_menu_loop.asm:497 BRANCHGTS @UNKNOWN45
    case 0xC1FD01: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/file_select_menu_loop.asm:497 BRANCHGTS @UNKNOWN45
    case 0xC1FD03: {
        Instruction step(cpu, 0x30, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:498 JSL UNKNOWN_C021E6
    case 0xC1FD05: {
        Instruction step(cpu, 0x22, 0xC021E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:499 STZ @LOCAL05
    case 0xC1FD09: {
        Instruction step(cpu, 0x64, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:500 JMP @UNKNOWN51
    case 0xC1FD0B: {
        Instruction step(cpu, 0x4C, 0x00FDE4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:502 LDA @LOCAL05
    case 0xC1FD0E: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:503 STA @VIRTUAL04
    case 0xC1FD10: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:504 INC @VIRTUAL04
    case 0xC1FD12: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:505 LDA @VIRTUAL04
    case 0xC1FD14: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:506 STA @LOCAL08ALT2
    case 0xC1FD16: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FD18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F5u : 0x00F5F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FD18.
    case 0xC1FD1A: {
        Instruction step(cpu, 0xF5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FD1B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FD1A.
    case 0xC1FD1C: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FD1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FD1C.
    case 0xC1FD1E: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FD1D.
    case 0xC1FD1F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FD20: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:508 LDA @LOCAL05
    case 0xC1FD22: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:616 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD24: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:617 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD26: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:618 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD27: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD28: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:620 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD2A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:621 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD2B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:510 STA @VIRTUAL02
    case 0xC1FD2C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:511 LDY #0
    case 0xC1FD2E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:511 LDY #0
    // Overlapping static entry reached from 0xC1FD2E.
    case 0xC1FD30: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:512 LDA @VIRTUAL02
    case 0xC1FD31: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:513 CLC
    case 0xC1FD33: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:514 ADC #initial_stats::level
    case 0xC1FD34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:514 ADC #initial_stats::level
    // Overlapping static entry reached from 0xC1FD34.
    case 0xC1FD36: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select_menu_loop.asm:515 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FD37: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select_menu_loop.asm:515 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FD39: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:515 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FD3B: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:515 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FD3D: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:516 CLC
    case 0xC1FD3F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:517 ADC @VIRTUAL0A
    case 0xC1FD40: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:518 STA @VIRTUAL0A
    case 0xC1FD42: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:519 LDA [@VIRTUAL0A]
    case 0xC1FD44: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:520 TAX
    case 0xC1FD46: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:521 LDA @LOCAL08ALT2
    case 0xC1FD47: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:522 STA @VIRTUAL04
    case 0xC1FD49: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:523 JSR RESET_CHAR_LEVEL_ONE
    case 0xC1FD4B: {
        Instruction step(cpu, 0x20, 0x00D8D0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:524 LDA @VIRTUAL02
    case 0xC1FD4E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:525 CLC
    case 0xC1FD50: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:526 ADC #initial_stats::exp
    case 0xC1FD51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:526 ADC #initial_stats::exp
    // Overlapping static entry reached from 0xC1FD51.
    case 0xC1FD53: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:527 CLC
    case 0xC1FD54: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:528 ADC @VIRTUAL06
    case 0xC1FD55: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:529 STA @VIRTUAL06
    case 0xC1FD57: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:530 LDA [@VIRTUAL06]
    case 0xC1FD59: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:531 BEQ @UNKNOWN50
    case 0xC1FD5B: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:532 STORE_INT1632 @VIRTUAL06
    case 0xC1FD5D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:532 STORE_INT1632 @VIRTUAL06
    case 0xC1FD5F: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:533 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FD61: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:533 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FD63: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:533 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FD65: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:533 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FD67: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:534 LDX #0
    case 0xC1FD69: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:534 LDX #0
    // Overlapping static entry reached from 0xC1FD69.
    case 0xC1FD6B: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:535 LDA @VIRTUAL04
    case 0xC1FD6C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:536 JSL GAIN_EXP
    case 0xC1FD6E: {
        Instruction step(cpu, 0x22, 0xC1D9E9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:538 LDA @LOCAL05
    case 0xC1FD72: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:539 LDY #.SIZEOF(char_struct)
    case 0xC1FD74: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:539 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1FD74.
    case 0xC1FD76: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:540 JSL MULT168
    case 0xC1FD77: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:541 TAY
    case 0xC1FD7B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:542 STY @LOCAL03T
    case 0xC1FD7C: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:543 LDA PARTY_CHARACTERS+char_struct::max_hp,Y
    case 0xC1FD7E: {
        Instruction step(cpu, 0xB9, 0x0099D8u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:544 STA PARTY_CHARACTERS+char_struct::current_hp,Y
    case 0xC1FD81: {
        Instruction step(cpu, 0x99, 0x009A13u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:545 STA PARTY_CHARACTERS+char_struct::current_hp_target,Y
    case 0xC1FD84: {
        Instruction step(cpu, 0x99, 0x009A15u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:546 LDA PARTY_CHARACTERS+char_struct::max_pp,Y
    case 0xC1FD87: {
        Instruction step(cpu, 0xB9, 0x0099DAu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:547 STA PARTY_CHARACTERS+char_struct::current_pp,Y
    case 0xC1FD8A: {
        Instruction step(cpu, 0x99, 0x009A19u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:548 STA PARTY_CHARACTERS+char_struct::current_pp_target,Y
    case 0xC1FD8D: {
        Instruction step(cpu, 0x99, 0x009A1Bu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:549 TYX
    case 0xC1FD90: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:550 STZ PARTY_CHARACTERS+char_struct::current_pp_fraction,X
    case 0xC1FD91: {
        Instruction step(cpu, 0x9E, 0x009A17u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:551 TYX
    case 0xC1FD94: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:552 STZ PARTY_CHARACTERS+char_struct::current_hp_fraction,X
    case 0xC1FD95: {
        Instruction step(cpu, 0x9E, 0x009A11u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:553 TYA
    case 0xC1FD98: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:554 CLC
    case 0xC1FD99: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:555 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1FD9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:555 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1FD9A.
    case 0xC1FD9C: {
        Instruction step(cpu, 0x99, 0x000285u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:556 STA @VIRTUAL02
    case 0xC1FD9D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:557 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FD9F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/intro/file_select_menu_loop.asm:558 STZ_BADOPT @LOCAL00
    case 0xC1FDA1: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:559 LDX #14
    case 0xC1FDA3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:559 LDX #14
    // Overlapping static entry reached from 0xC1FDA3.
    case 0xC1FDA5: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:560 REP #PROC_FLAGS::ACCUM8
    case 0xC1FDA6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:561 LDA @VIRTUAL02
    case 0xC1FDA8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:562 JSL MEMSET16
    case 0xC1FDAA: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F5u : 0x00F5F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDAE.
    case 0xC1FDB0: {
        Instruction step(cpu, 0xF5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDB1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDB0.
    case 0xC1FDB2: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDB2.
    case 0xC1FDB4: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDB3.
    case 0xC1FDB5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDB6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:564 LDA @LOCAL05
    case 0xC1FDB8: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:616 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDBA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:617 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDBC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:618 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDBD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDBE: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:620 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDC0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:621 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDC1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:566 CLC
    case 0xC1FDC2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:567 ADC #initial_stats::items
    case 0xC1FDC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:567 ADC #initial_stats::items
    // Overlapping static entry reached from 0xC1FDC3.
    case 0xC1FDC5: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:568 CLC
    case 0xC1FDC6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:569 ADC @VIRTUAL06
    case 0xC1FDC7: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:570 STA @VIRTUAL06
    case 0xC1FDC9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:571 STA @LOCAL00
    case 0xC1FDCB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:572 LDA @VIRTUAL06+2
    case 0xC1FDCD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:573 STA @LOCAL00+2
    case 0xC1FDCF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:574 LDX #.SIZEOF(initial_stats::items)
    case 0xC1FDD1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:574 LDX #.SIZEOF(initial_stats::items)
    // Overlapping static entry reached from 0xC1FDD1.
    case 0xC1FDD3: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:575 LDA @VIRTUAL02
    case 0xC1FDD4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:576 JSL MEMCPY16
    case 0xC1FDD6: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:577 LDA #$0400
    case 0xC1FDDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:577 LDA #$0400
    // Overlapping static entry reached from 0xC1FDDA.
    case 0xC1FDDC: {
        Instruction step(cpu, 0x04, 0x0000A4u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:578 LDY @LOCAL03T
    case 0xC1FDDD: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:578 LDY @LOCAL03T
    // Overlapping static entry reached from 0xC1FDDC.
    case 0xC1FDDE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:579 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,Y
    case 0xC1FDDF: {
        Instruction step(cpu, 0x99, 0x009A1Du, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:580 INC @LOCAL05
    case 0xC1FDE2: {
        Instruction step(cpu, 0xE6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:582 LDA #PLAYER_CHAR_COUNT
    case 0xC1FDE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:582 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC1FDE4.
    case 0xC1FDE6: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:583 CLC
    case 0xC1FDE7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:584 SBC @LOCAL05
    case 0xC1FDE8: {
        Instruction step(cpu, 0xE5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/intro/file_select_menu_loop.asm:585 JUMPGTS @UNKNOWN49
    case 0xC1FDEA: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/intro/file_select_menu_loop.asm:585 JUMPGTS @UNKNOWN49
    case 0xC1FDEC: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/intro/file_select_menu_loop.asm:585 JUMPGTS @UNKNOWN49
    case 0xC1FDEE: {
        Instruction step(cpu, 0x4C, 0x00FD0Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/intro/file_select_menu_loop.asm:585 JUMPGTS @UNKNOWN49
    case 0xC1FDF1: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/intro/file_select_menu_loop.asm:585 JUMPGTS @UNKNOWN49
    case 0xC1FDF3: {
        Instruction step(cpu, 0x4C, 0x00FD0Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F5u : 0x00F5F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDF6.
    case 0xC1FDF8: {
        Instruction step(cpu, 0xF5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDF9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDF8.
    case 0xC1FDFA: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDFA.
    case 0xC1FDFC: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDFB.
    case 0xC1FDFD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDFE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:587 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FE00: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:587 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FE02: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:587 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FE04: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:587 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FE06: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:588 LDY #initial_stats::money
    case 0xC1FE08: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:588 LDY #initial_stats::money
    // Overlapping static entry reached from 0xC1FE08.
    case 0xC1FE0A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:589 LDA [@VIRTUAL06],Y
    case 0xC1FE0B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:590 STORE_INT1632 @VIRTUAL06
    case 0xC1FE0D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:590 STORE_INT1632 @VIRTUAL06
    case 0xC1FE0F: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:591 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FE11: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:591 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FE13: {
        Instruction step(cpu, 0x8D, 0x009831u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:591 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FE16: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:591 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FE18: {
        Instruction step(cpu, 0x8D, 0x009833u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:592 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FE1B: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:592 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FE1D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:592 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FE1F: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:592 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FE21: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:593 LDY #initial_stats::unknown2
    case 0xC1FE23: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:593 LDY #initial_stats::unknown2
    // Overlapping static entry reached from 0xC1FE23.
    case 0xC1FE25: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:594 LDA [@VIRTUAL06],Y
    case 0xC1FE26: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:595 ASL
    case 0xC1FE28: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:596 ASL
    case 0xC1FE29: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:597 ASL
    case 0xC1FE2A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:598 TAX
    case 0xC1FE2B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:599 LDA [@VIRTUAL06]
    case 0xC1FE2C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:600 ASL
    case 0xC1FE2E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:601 ASL
    case 0xC1FE2F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:602 ASL
    case 0xC1FE30: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:603 JSL UNKNOWN_C0B65F
    case 0xC1FE31: {
        Instruction step(cpu, 0x22, 0xC0B65Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:604 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FE35: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:605 LDA #CHAR::P
    case 0xC1FE37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x008D80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:606 STA GAME_STATE+game_state::favourite_thing
    case 0xC1FE39: {
        Instruction step(cpu, 0x8D, 0x009825u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:606 STA GAME_STATE+game_state::favourite_thing
    // Overlapping static entry reached from 0xC1FE37.
    case 0xC1FE3A: {
        Instruction step(cpu, 0x25, 0x000098u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:607 LDA #CHAR::S_
    case 0xC1FE3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000083u : 0x008D83u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:608 STA GAME_STATE+game_state::favourite_thing+1
    case 0xC1FE3E: {
        Instruction step(cpu, 0x8D, 0x009826u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:608 STA GAME_STATE+game_state::favourite_thing+1
    // Overlapping static entry reached from 0xC1FE3C.
    case 0xC1FE3F: {
        Instruction step(cpu, 0x26, 0x000098u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:609 LDA #CHAR::I
    case 0xC1FE41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000079u : 0x008D79u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:610 STA GAME_STATE+game_state::favourite_thing+2
    case 0xC1FE43: {
        Instruction step(cpu, 0x8D, 0x009827u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:610 STA GAME_STATE+game_state::favourite_thing+2
    // Overlapping static entry reached from 0xC1FE41.
    case 0xC1FE44: {
        Instruction step(cpu, 0x27, 0x000098u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:611 LDA #CHAR::SPACE
    case 0xC1FE46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x008D50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:612 STA GAME_STATE+game_state::favourite_thing+3
    case 0xC1FE48: {
        Instruction step(cpu, 0x8D, 0x009828u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:612 STA GAME_STATE+game_state::favourite_thing+3
    // Overlapping static entry reached from 0xC1FE46.
    case 0xC1FE49: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:612 STA GAME_STATE+game_state::favourite_thing+3
    // Overlapping static entry reached from 0xC1FE49.
    case 0xC1FE4A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:614 REP #PROC_FLAGS::ACCUM8
    case 0xC1FE4B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:615 LDA #4 ;Length of 'PSI ' string
    case 0xC1FE4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:615 LDA #4 ;Length of 'PSI ' string
    // Overlapping static entry reached from 0xC1FE4D.
    case 0xC1FE4F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:616 STA @LOCAL05
    case 0xC1FE50: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:617 BRA @UNKNOWN56
    case 0xC1FE52: {
        Instruction step(cpu, 0x80, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:619 LDA @LOCAL05
    case 0xC1FE54: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:620 CLC
    case 0xC1FE56: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:621 ADC #.LOWORD(GAME_STATE) + game_state::favourite_thing
    case 0xC1FE57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000025u : 0x009825u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:621 ADC #.LOWORD(GAME_STATE) + game_state::favourite_thing
    // Overlapping static entry reached from 0xC1FE57.
    case 0xC1FE59: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:622 TAX
    case 0xC1FE5A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:623 LDA __BSS_START__,X
    case 0xC1FE5B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:624 AND #$00FF
    case 0xC1FE5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:624 AND #$00FF
    // Overlapping static entry reached from 0xC1FE5E.
    case 0xC1FE60: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:625 BNE @UNKNOWN55
    case 0xC1FE61: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:626 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FE63: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:627 LDA #CHAR::SPACE
    case 0xC1FE65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x009D50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:628 STA __BSS_START__,X
    case 0xC1FE67: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:628 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1FE65.
    case 0xC1FE68: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:629 BRA @UNKNOWN58
    case 0xC1FE6A: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:631 LDA @LOCAL05
    case 0xC1FE6C: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:632 INC
    case 0xC1FE6E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:633 STA @LOCAL05
    case 0xC1FE6F: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:636 STA @VIRTUAL02
    case 0xC1FE71: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:637 LDA #.SIZEOF(game_state::favourite_thing) - 1 ;Last byte should be \0
    case 0xC1FE73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:637 LDA #.SIZEOF(game_state::favourite_thing) - 1 ;Last byte should be \0
    // Overlapping static entry reached from 0xC1FE73.
    case 0xC1FE75: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:638 CLC
    case 0xC1FE76: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:639 SBC @VIRTUAL02
    case 0xC1FE77: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/file_select_menu_loop.asm:640 BRANCHGTS @UNKNOWN54
    case 0xC1FE79: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/file_select_menu_loop.asm:640 BRANCHGTS @UNKNOWN54
    case 0xC1FE7B: {
        Instruction step(cpu, 0x10, 0x0000D7u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/file_select_menu_loop.asm:640 BRANCHGTS @UNKNOWN54
    case 0xC1FE7D: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/file_select_menu_loop.asm:640 BRANCHGTS @UNKNOWN54
    case 0xC1FE7F: {
        Instruction step(cpu, 0x30, 0x0000D3u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:642 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FE81: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:644 LDA #1
    case 0xC1FE83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:645 STA GAME_STATE + game_state::unknownC3
    case 0xC1FE85: {
        Instruction step(cpu, 0x8D, 0x0098B8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:645 STA GAME_STATE + game_state::unknownC3
    // Overlapping static entry reached from 0xC1FE83.
    case 0xC1FE86: {
        Instruction step(cpu, 0xB8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_overflow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:645 STA GAME_STATE + game_state::unknownC3
    // Overlapping static entry reached from 0xC1FE86.
    case 0xC1FE87: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:646 REP #PROC_FLAGS::ACCUM8
    case 0xC1FE88: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:647 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1FE8A: {
        Instruction step(cpu, 0xAD, 0x009877u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:648 STA RESPAWN_X
    case 0xC1FE8D: {
        Instruction step(cpu, 0x8D, 0x009D1Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:649 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC1FE90: {
        Instruction step(cpu, 0xAD, 0x00987Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:650 STA RESPAWN_Y
    case 0xC1FE93: {
        Instruction step(cpu, 0x8D, 0x009D21u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:651 JSL UNKNOWN_C064D4
    case 0xC1FE96: {
        Instruction step(cpu, 0x22, 0xC064D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:652 LDX #1768
    case 0xC1FE9A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E8u : 0x0006E8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:652 LDX #1768
    // Overlapping static entry reached from 0xC1FE9A.
    case 0xC1FE9C: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:653 LDA #2112
    case 0xC1FE9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000840u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:653 LDA #2112
    // Overlapping static entry reached from 0xC1FE9C.
    case 0xC1FE9E: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:653 LDA #2112
    // Overlapping static entry reached from 0xC1FE9D.
    case 0xC1FE9F: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:654 JSL UNKNOWN_C0B65F
    case 0xC1FEA0: {
        Instruction step(cpu, 0x22, 0xC0B65Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FEA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x00E70Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FEA4.
    case 0xC1FEA6: {
        Instruction step(cpu, 0xE7, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FEA7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FEA6.
    case 0xC1FEA8: {
        Instruction step(cpu, 0x0E, 0x00C5A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FEA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C5u : 0x0000C5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FEA9.
    case 0xC1FEAB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FEAC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:656 JSL UNKNOWN_C46881
    case 0xC1FEAE: {
        Instruction step(cpu, 0x22, 0xC46881u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:657 LDX #1
    case 0xC1FEB2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:657 LDX #1
    // Overlapping static entry reached from 0xC1FEB2.
    case 0xC1FEB4: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:658 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    case 0xC1FEB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:658 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    // Overlapping static entry reached from 0xC1FEB5.
    case 0xC1FEB7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:659 JSL SET_EVENT_FLAG
    case 0xC1FEB8: {
        Instruction step(cpu, 0x22, 0xC2165Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:660 LDA #1
    case 0xC1FEBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:660 LDA #1
    // Overlapping static entry reached from 0xC1FEBC.
    case 0xC1FEBE: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:661 STA SHOW_NPC_FLAG
    case 0xC1FEBF: {
        Instruction step(cpu, 0x8D, 0x004A66u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:663 JSR UNKNOWN_C1008E
    case 0xC1FEC2: {
        Instruction step(cpu, 0x20, 0x00008Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:664 JSL UNKNOWN_C3EBCA
    case 0xC1FEC5: {
        Instruction step(cpu, 0x22, 0xC3EBCAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:665 LDA GAME_STATE+game_state::text_speed
    case 0xC1FEC9: {
        Instruction step(cpu, 0xAD, 0x0098B6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:666 AND #$00FF
    case 0xC1FECC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:666 AND #$00FF
    // Overlapping static entry reached from 0xC1FECC.
    case 0xC1FECE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:667 STA @LOCAL06ALT
    case 0xC1FECF: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:668 TAX
    case 0xC1FED1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:669 DEX
    case 0xC1FED2: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FED3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00FB1Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1FED3.
    case 0xC1FED5: {
        Instruction step(cpu, 0xFB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_carry_emulation();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FED6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FED8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1FED8.
    case 0xC1FEDA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FEDB: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:671 TXA
    case 0xC1FEDD: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:672 ASL
    case 0xC1FEDE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:673 ASL
    case 0xC1FEDF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:674 CLC
    case 0xC1FEE0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:675 ADC @VIRTUAL0A
    case 0xC1FEE1: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:676 STA @VIRTUAL0A
    case 0xC1FEE3: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEE5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FEE5.
    case 0xC1FEE7: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEE8: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEEA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEEB: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEED: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEEF: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:678 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FEF1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:678 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FEF3: {
        Instruction step(cpu, 0x8D, 0x009627u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:678 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FEF6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:678 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FEF8: {
        Instruction step(cpu, 0x8D, 0x009629u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:679 STX SELECTED_TEXT_SPEED
    case 0xC1FEFB: {
        Instruction step(cpu, 0x8E, 0x009625u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:680 LDA @LOCAL06ALT
    case 0xC1FEFE: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:681 CMP #3
    case 0xC1FF00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:681 CMP #3
    // Overlapping static entry reached from 0xC1FF00.
    case 0xC1FF02: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:682 BNE @UNKNOWN60
    case 0xC1FF03: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:683 LDA #0
    case 0xC1FF05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:683 LDA #0
    // Overlapping static entry reached from 0xC1FF05.
    case 0xC1FF07: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:684 BRA @UNKNOWN61
    case 0xC1FF08: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:647 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF0A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:648 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF0C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:649 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF0D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:650 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF0F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:651 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF10: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:652 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF12: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:653 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF13: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:654 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF15: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:688 STA TEXT_SPEED_BASED_WAIT
    case 0xC1FF16: {
        Instruction step(cpu, 0x8D, 0x00964Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop.asm:689 STZ UNREAD_7E5DBA
    case 0xC1FF19: {
        Instruction step(cpu, 0x9C, 0x005DBAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FF1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Bu : 0x00DE2Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    // Overlapping static entry reached from 0xC1FF1C.
    case 0xC1FF1E: {
        Instruction step(cpu, 0xDE, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FF1F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FF21: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    // Overlapping static entry reached from 0xC1FF21.
    case 0xC1FF23: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FF24: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FF26: {
        Instruction step(cpu, 0x22, 0xC186B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select_menu_loop.asm:691 END_C_FUNCTION
    case 0xC1FF2A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select_menu_loop.asm:691 END_C_FUNCTION
    case 0xC1FF2B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
