// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/file_select_menu_loop-jp.asm
bool resume_introduction_file_select_menu_loop_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1F685: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:15 END_STACK_VARS
    case 0xC1F687: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:15 END_STACK_VARS
    case 0xC1F688: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:15 END_STACK_VARS
    case 0xC1F689: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D8u : 0x00FFD8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F689.
    case 0xC1F68B: {
        Instruction step(cpu, 0xFF, 0xF7205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:15 END_STACK_VARS
    case 0xC1F68C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:17 JSR SET_INSTANT_PRINTING
    case 0xC1F68D: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:17 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1F68B.
    case 0xC1F68F: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:18 LDA #0
    case 0xC1F690: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:18 LDA #0
    // Overlapping static entry reached from 0xC1F690.
    case 0xC1F692: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:19 JSR FILE_SELECT_MENU
    case 0xC1F693: {
        Instruction step(cpu, 0x20, 0x00ECD9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:20 TAX
    case 0xC1F696: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:21 DEX
    case 0xC1F697: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:22 LDA SAVE_FILES_PRESENT,X
    case 0xC1F698: {
        Instruction step(cpu, 0xBD, 0x00B672u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:23 AND #$00FF
    case 0xC1F69B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC1F69B.
    case 0xC1F69D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:24 BEQL @EMPTY_FILE_SELECTED
    case 0xC1F69E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:24 BEQL @EMPTY_FILE_SELECTED
    case 0xC1F6A0: {
        Instruction step(cpu, 0x4C, 0x00F725u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:26 JSR UNKNOWN_C1F07E
    case 0xC1F6A3: {
        Instruction step(cpu, 0x20, 0x00EF83u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:27 CMP #0
    case 0xC1F6A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:27 CMP #0
    // Overlapping static entry reached from 0xC1F6A6.
    case 0xC1F6A8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:28 BEQ @MENU_B_PRESSED
    case 0xC1F6A9: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:29 CMP #1
    case 0xC1F6AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:29 CMP #1
    // Overlapping static entry reached from 0xC1F6AB.
    case 0xC1F6AD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:30 BEQ @MENU_STARTGAME_SELECTED
    case 0xC1F6AE: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:31 CMP #2
    case 0xC1F6B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:31 CMP #2
    // Overlapping static entry reached from 0xC1F6B0.
    case 0xC1F6B2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:32 BEQ @MENU_COPY_SELECTED
    case 0xC1F6B3: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:33 CMP #3
    case 0xC1F6B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:33 CMP #3
    // Overlapping static entry reached from 0xC1F6B5.
    case 0xC1F6B7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:34 BEQ @MENU_DELETE_SELECTED
    case 0xC1F6B8: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:35 CMP #4
    case 0xC1F6BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:35 CMP #4
    // Overlapping static entry reached from 0xC1F6BA.
    case 0xC1F6BC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:36 BEQ @MENU_SETUP_SELECTED
    case 0xC1F6BD: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:37 BRA @MENU_OTHER_SELECTED
    case 0xC1F6BF: {
        Instruction step(cpu, 0x80, 0x00005Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:39 JSR UNKNOWN_C1008E
    case 0xC1F6C1: {
        Instruction step(cpu, 0x20, 0x0002AFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:40 BRA @UNKNOWN0
    case 0xC1F6C4: {
        Instruction step(cpu, 0x80, 0x0000C7u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:42 JSL UNKNOWN_C064D4
    case 0xC1F6C6: {
        Instruction step(cpu, 0x22, 0xC06702u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:43 JSL RELOAD_HOTSPOTS
    case 0xC1F6CA: {
        Instruction step(cpu, 0x22, 0xC07447u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:44 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1F6CE: {
        Instruction step(cpu, 0xAD, 0x009B28u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:45 STA RESPAWN_X
    case 0xC1F6D1: {
        Instruction step(cpu, 0x8D, 0x009FA5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:46 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC1F6D4: {
        Instruction step(cpu, 0xAD, 0x009B2Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:47 STA RESPAWN_Y
    case 0xC1F6D7: {
        Instruction step(cpu, 0x8D, 0x009FA7u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:48 JMP @UNKNOWN59
    case 0xC1F6DA: {
        Instruction step(cpu, 0x4C, 0x00FC3Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:50 JSR UNKNOWN_C1F14F
    case 0xC1F6DD: {
        Instruction step(cpu, 0x20, 0x00F04Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:51 CMP #0
    case 0xC1F6E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:51 CMP #0
    // Overlapping static entry reached from 0xC1F6E0.
    case 0xC1F6E2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:52 BEQ @VALID_FILE_SELECTED
    case 0xC1F6E3: {
        Instruction step(cpu, 0xF0, 0x0000BEu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:53 BRA @MENU_OTHER_SELECTED
    case 0xC1F6E5: {
        Instruction step(cpu, 0x80, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:55 JSR UNKNOWN_C1F2A8
    case 0xC1F6E7: {
        Instruction step(cpu, 0x20, 0x00F1A2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:56 CMP #0
    case 0xC1F6EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:56 CMP #0
    // Overlapping static entry reached from 0xC1F6EA.
    case 0xC1F6EC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:57 BEQ @VALID_FILE_SELECTED
    case 0xC1F6ED: {
        Instruction step(cpu, 0xF0, 0x0000B4u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:58 BRA @MENU_OTHER_SELECTED
    case 0xC1F6EF: {
        Instruction step(cpu, 0x80, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:60 LDA #0
    case 0xC1F6F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:60 LDA #0
    // Overlapping static entry reached from 0xC1F6F1.
    case 0xC1F6F3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:61 JSR OPEN_TEXT_SPEED_MENU
    case 0xC1F6F4: {
        Instruction step(cpu, 0x20, 0x00F293u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:62 CMP #0
    case 0xC1F6F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:62 CMP #0
    // Overlapping static entry reached from 0xC1F6F7.
    case 0xC1F6F9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:63 BNE @MENU_SETUP_SELECTED2
    case 0xC1F6FA: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:64 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F6FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:64 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F6FC.
    case 0xC1F6FE: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:65 JSR CLOSE_WINDOW
    case 0xC1F6FF: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:66 BRA @VALID_FILE_SELECTED
    case 0xC1F702: {
        Instruction step(cpu, 0x80, 0x00009Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:68 LDA #0
    case 0xC1F704: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:68 LDA #0
    // Overlapping static entry reached from 0xC1F704.
    case 0xC1F706: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:69 JSR OPEN_SOUND_MENU
    case 0xC1F707: {
        Instruction step(cpu, 0x20, 0x00F408u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:70 CMP #0
    case 0xC1F70A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:70 CMP #0
    // Overlapping static entry reached from 0xC1F70A.
    case 0xC1F70C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:71 BNE @MENU_SETUP_SELECTED3
    case 0xC1F70D: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:72 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F70F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:72 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F70F.
    case 0xC1F711: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:73 JSR CLOSE_WINDOW
    case 0xC1F712: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:74 BRA @MENU_SETUP_SELECTED
    case 0xC1F715: {
        Instruction step(cpu, 0x80, 0x0000DAu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:76 JSR OPEN_FLAVOUR_MENU
    case 0xC1F717: {
        Instruction step(cpu, 0x20, 0x00F55Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:77 CMP #0
    case 0xC1F71A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:77 CMP #0
    // Overlapping static entry reached from 0xC1F71A.
    case 0xC1F71C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:78 BEQ @MENU_SETUP_SELECTED2
    case 0xC1F71D: {
        Instruction step(cpu, 0xF0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:80 JSR UNKNOWN_C1008E
    case 0xC1F71F: {
        Instruction step(cpu, 0x20, 0x0002AFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:81 JMP @UNKNOWN0
    case 0xC1F722: {
        Instruction step(cpu, 0x4C, 0x00F68Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:83 LDA #0
    case 0xC1F725: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:83 LDA #0
    // Overlapping static entry reached from 0xC1F725.
    case 0xC1F727: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:84 JSR OPEN_TEXT_SPEED_MENU
    case 0xC1F728: {
        Instruction step(cpu, 0x20, 0x00F293u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:85 CMP #0
    case 0xC1F72B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:85 CMP #0
    // Overlapping static entry reached from 0xC1F72B.
    case 0xC1F72D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:86 BNE @UNKNOWN14
    case 0xC1F72E: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:87 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F730: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:87 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F730.
    case 0xC1F732: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:88 JSR CLOSE_WINDOW
    case 0xC1F733: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:89 JMP @UNKNOWN0
    case 0xC1F736: {
        Instruction step(cpu, 0x4C, 0x00F68Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:91 LDA #0
    case 0xC1F739: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:91 LDA #0
    // Overlapping static entry reached from 0xC1F739.
    case 0xC1F73B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:92 JSR OPEN_SOUND_MENU
    case 0xC1F73C: {
        Instruction step(cpu, 0x20, 0x00F408u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:93 CMP #0
    case 0xC1F73F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:93 CMP #0
    // Overlapping static entry reached from 0xC1F73F.
    case 0xC1F741: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:94 BNE @UNKNOWN16
    case 0xC1F742: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:95 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F744: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:95 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F744.
    case 0xC1F746: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:96 JSR CLOSE_WINDOW
    case 0xC1F747: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:97 BRA @EMPTY_FILE_SELECTED
    case 0xC1F74A: {
        Instruction step(cpu, 0x80, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:99 JSR OPEN_FLAVOUR_MENU
    case 0xC1F74C: {
        Instruction step(cpu, 0x20, 0x00F55Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:100 CMP #0
    case 0xC1F74F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:100 CMP #0
    // Overlapping static entry reached from 0xC1F74F.
    case 0xC1F751: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:101 BEQ @UNKNOWN14
    case 0xC1F752: {
        Instruction step(cpu, 0xF0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:103 LDA #MUSIC::NAMING_SCREEN
    case 0xC1F754: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:103 LDA #MUSIC::NAMING_SCREEN
    // Overlapping static entry reached from 0xC1F754.
    case 0xC1F756: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:104 JSL CHANGE_MUSIC
    case 0xC1F757: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:106 JSR UNKNOWN_C1008E
    case 0xC1F75B: {
        Instruction step(cpu, 0x20, 0x0002AFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:107 LDA #0
    case 0xC1F75E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:107 LDA #0
    // Overlapping static entry reached from 0xC1F75E.
    case 0xC1F760: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:108 STA @VIRTUAL02
    case 0xC1F761: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:109 JMP @UNKNOWN31
    case 0xC1F763: {
        Instruction step(cpu, 0x4C, 0x00F8FAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:111 LDA @VIRTUAL02
    case 0xC1F766: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:112 CMP #$FFFF
    case 0xC1F768: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:112 CMP #$FFFF
    // Overlapping static entry reached from 0xC1F768.
    case 0xC1F76A: {
        Instruction step(cpu, 0xFF, 0x201ED0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:113 BNE @UNKNOWN20
    case 0xC1F76B: {
        Instruction step(cpu, 0xD0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:114 JSR UNKNOWN_C1008E
    case 0xC1F76D: {
        Instruction step(cpu, 0x20, 0x0002AFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:114 JSR UNKNOWN_C1008E
    // Overlapping static entry reached from 0xC1F76A.
    case 0xC1F76E: {
        Instruction step(cpu, 0xAF, 0x01A902u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:115 LDA #1
    case 0xC1F770: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:115 LDA #1
    // Overlapping static entry reached from 0xC1F770.
    case 0xC1F772: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:116 JSR FILE_SELECT_MENU
    case 0xC1F773: {
        Instruction step(cpu, 0x20, 0x00ECD9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:117 LDA #1
    case 0xC1F776: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:117 LDA #1
    // Overlapping static entry reached from 0xC1F776.
    case 0xC1F778: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:118 JSR OPEN_TEXT_SPEED_MENU
    case 0xC1F779: {
        Instruction step(cpu, 0x20, 0x00F293u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:119 LDA #1
    case 0xC1F77C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:119 LDA #1
    // Overlapping static entry reached from 0xC1F77C.
    case 0xC1F77E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:120 JSR OPEN_SOUND_MENU
    case 0xC1F77F: {
        Instruction step(cpu, 0x20, 0x00F408u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:121 LDA #MUSIC::SETUP_SCREEN
    case 0xC1F782: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:121 LDA #MUSIC::SETUP_SCREEN
    // Overlapping static entry reached from 0xC1F782.
    case 0xC1F784: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:122 JSL CHANGE_MUSIC
    case 0xC1F785: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:123 BRA @UNKNOWN16
    case 0xC1F789: {
        Instruction step(cpu, 0x80, 0x0000C1u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:125 LDA @VIRTUAL02
    case 0xC1F78B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:126 JSL DISPLAY_ANIMATED_NAMING_SPRITE
    case 0xC1F78D: {
        Instruction step(cpu, 0x22, 0xC4AAA9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:127 LDA #FILE_MENU_NEW_GAME_NAME::DOG
    case 0xC1F791: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:127 LDA #FILE_MENU_NEW_GAME_NAME::DOG
    // Overlapping static entry reached from 0xC1F791.
    case 0xC1F793: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:128 CLC
    case 0xC1F794: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:129 SBC @VIRTUAL02
    case 0xC1F795: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:130 BRANCHLTEQS @UNKNOWN24
    case 0xC1F797: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:130 BRANCHLTEQS @UNKNOWN24
    case 0xC1F799: {
        Instruction step(cpu, 0x10, 0x00005Eu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:130 BRANCHLTEQS @UNKNOWN24
    case 0xC1F79B: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:130 BRANCHLTEQS @UNKNOWN24
    case 0xC1F79D: {
        Instruction step(cpu, 0x30, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F79F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x009525u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F79F.
    case 0xC1F7A1: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F7A2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F7A1.
    case 0xC1F7A3: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F7A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F7A3.
    case 0xC1F7A5: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F7A4.
    case 0xC1F7A6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F7A7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:132 LDA @VIRTUAL02
    case 0xC1F7A9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7AB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7AD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7AE: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7B0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7B1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7B3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7B4: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:134 CLC
    case 0xC1F7B6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:135 ADC @VIRTUAL06
    case 0xC1F7B7: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:136 STA @VIRTUAL06
    case 0xC1F7B9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:137 STA @LOCAL00
    case 0xC1F7BB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:138 LDA @VIRTUAL06+2
    case 0xC1F7BD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:139 STA @LOCAL00+2
    case 0xC1F7BF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:140 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F7C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:140 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F7C1.
    case 0xC1F7C3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:141 STA @LOCAL01
    case 0xC1F7C4: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:142 LDY @VIRTUAL02
    case 0xC1F7C6: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:143 STY @LOCAL09
    case 0xC1F7C8: {
        Instruction step(cpu, 0x84, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:144 LDA @VIRTUAL02
    case 0xC1F7CA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:145 LDY #.SIZEOF(char_struct)
    case 0xC1F7CC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:145 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1F7CC.
    case 0xC1F7CE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:146 JSL MULT168
    case 0xC1F7CF: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:147 CLC
    case 0xC1F7D3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:148 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1F7D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:148 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1F7D4.
    case 0xC1F7D6: {
        Instruction step(cpu, 0x9C, 0x00A9AAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:149 TAX
    case 0xC1F7D7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:150 LDA #.SIZEOF(char_struct::name)
    case 0xC1F7D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:150 LDA #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1F7D6.
    case 0xC1F7D9: {
        Instruction step(cpu, 0x04, 0x000000u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:150 LDA #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1F7D8.
    case 0xC1F7DA: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:151 LDY @LOCAL09
    case 0xC1F7DB: {
        Instruction step(cpu, 0xA4, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:152 JSR NAME_A_CHARACTER
    case 0xC1F7DD: {
        Instruction step(cpu, 0x20, 0x00EAF3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:153 CMP #0
    case 0xC1F7E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:153 CMP #0
    // Overlapping static entry reached from 0xC1F7E0.
    case 0xC1F7E2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:154 BEQ @UNKNOWN23
    case 0xC1F7E3: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:155 LDA #$FFFF
    case 0xC1F7E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:155 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F7E5.
    case 0xC1F7E7: {
        Instruction step(cpu, 0xFF, 0x850485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:156 STA @VIRTUAL04
    case 0xC1F7E8: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:157 STA @LOCAL08
    case 0xC1F7EA: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:157 STA @LOCAL08
    // Overlapping static entry reached from 0xC1F7E7.
    case 0xC1F7EB: {
        Instruction step(cpu, 0x24, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:158 JMP @UNKNOWN30
    case 0xC1F7EC: {
        Instruction step(cpu, 0x4C, 0x00F8E9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:158 JMP @UNKNOWN30
    // Overlapping static entry reached from 0xC1F7EB.
    case 0xC1F7ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000F8u : 0x00A9F8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:160 LDA #1
    case 0xC1F7EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:160 LDA #1
    // Overlapping static entry reached from 0xC1F7ED.
    case 0xC1F7F0: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:160 LDA #1
    // Overlapping static entry reached from 0xC1F7EF.
    case 0xC1F7F1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:161 STA @VIRTUAL04
    case 0xC1F7F2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:162 STA @LOCAL08
    case 0xC1F7F4: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:163 JMP @UNKNOWN30
    case 0xC1F7F6: {
        Instruction step(cpu, 0x4C, 0x00F8E9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:165 LDA @VIRTUAL02
    case 0xC1F7F9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:166 CMP #FILE_MENU_NEW_GAME_NAME::DOG
    case 0xC1F7FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:166 CMP #FILE_MENU_NEW_GAME_NAME::DOG
    // Overlapping static entry reached from 0xC1F7FB.
    case 0xC1F7FD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:167 BNE @UNKNOWN26
    case 0xC1F7FE: {
        Instruction step(cpu, 0xD0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F800: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x009525u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F800.
    case 0xC1F802: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F803: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F802.
    case 0xC1F804: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F805: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F804.
    case 0xC1F806: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F805.
    case 0xC1F807: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F808: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:169 LDA @VIRTUAL02
    case 0xC1F80A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F80C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F80E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F80F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F811: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F812: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F814: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F815: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:171 CLC
    case 0xC1F817: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:172 ADC @VIRTUAL06
    case 0xC1F818: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:173 STA @VIRTUAL06
    case 0xC1F81A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:174 STA @LOCAL00
    case 0xC1F81C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:175 LDA @VIRTUAL06+2
    case 0xC1F81E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:176 STA @LOCAL00+2
    case 0xC1F820: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:177 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F822: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:177 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F822.
    case 0xC1F824: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:178 STA @LOCAL01
    case 0xC1F825: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:179 LDY @VIRTUAL02
    case 0xC1F827: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:180 LDX #.LOWORD(GAME_STATE) + game_state::pet_name
    case 0xC1F829: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000CDu : 0x009ACDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:180 LDX #.LOWORD(GAME_STATE) + game_state::pet_name
    // Overlapping static entry reached from 0xC1F829.
    case 0xC1F82B: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:181 LDA #.SIZEOF(game_state::pet_name)
    case 0xC1F82C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:181 LDA #.SIZEOF(game_state::pet_name)
    // Overlapping static entry reached from 0xC1F82C.
    case 0xC1F82E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:182 JSR NAME_A_CHARACTER
    case 0xC1F82F: {
        Instruction step(cpu, 0x20, 0x00EAF3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:183 CMP #0
    case 0xC1F832: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:183 CMP #0
    // Overlapping static entry reached from 0xC1F832.
    case 0xC1F834: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:184 BEQ @UNKNOWN25
    case 0xC1F835: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:185 LDA #$FFFF
    case 0xC1F837: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:185 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F837.
    case 0xC1F839: {
        Instruction step(cpu, 0xFF, 0x850485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:186 STA @VIRTUAL04
    case 0xC1F83A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:187 STA @LOCAL08
    case 0xC1F83C: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:187 STA @LOCAL08
    // Overlapping static entry reached from 0xC1F839.
    case 0xC1F83D: {
        Instruction step(cpu, 0x24, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:188 JMP @UNKNOWN30
    case 0xC1F83E: {
        Instruction step(cpu, 0x4C, 0x00F8E9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:188 JMP @UNKNOWN30
    // Overlapping static entry reached from 0xC1F83D.
    case 0xC1F83F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000F8u : 0x00A9F8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:190 LDA #1
    case 0xC1F841: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:190 LDA #1
    // Overlapping static entry reached from 0xC1F83F.
    case 0xC1F842: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:190 LDA #1
    // Overlapping static entry reached from 0xC1F841.
    case 0xC1F843: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:191 STA @VIRTUAL04
    case 0xC1F844: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:192 STA @LOCAL08
    case 0xC1F846: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:193 JMP @UNKNOWN30
    case 0xC1F848: {
        Instruction step(cpu, 0x4C, 0x00F8E9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:195 LDA @VIRTUAL02
    case 0xC1F84B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:196 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_FOOD
    case 0xC1F84D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:196 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_FOOD
    // Overlapping static entry reached from 0xC1F84D.
    case 0xC1F84F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:197 BNE @UNKNOWN28
    case 0xC1F850: {
        Instruction step(cpu, 0xD0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F852: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x009525u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F852.
    case 0xC1F854: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F855: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F854.
    case 0xC1F856: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F857: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F856.
    case 0xC1F858: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F857.
    case 0xC1F859: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F85A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:199 LDA @VIRTUAL02
    case 0xC1F85C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F85E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F860: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F861: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F863: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F864: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F866: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F867: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:201 CLC
    case 0xC1F869: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:202 ADC @VIRTUAL06
    case 0xC1F86A: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:203 STA @VIRTUAL06
    case 0xC1F86C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:204 STA @LOCAL00
    case 0xC1F86E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:205 LDA @VIRTUAL06+2
    case 0xC1F870: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:206 STA @LOCAL00+2
    case 0xC1F872: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:207 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F874: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:207 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F874.
    case 0xC1F876: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:208 STA @LOCAL01
    case 0xC1F877: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:209 LDY @VIRTUAL02
    case 0xC1F879: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:210 LDX #.LOWORD(GAME_STATE) + game_state::favourite_food
    case 0xC1F87B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000D3u : 0x009AD3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:210 LDX #.LOWORD(GAME_STATE) + game_state::favourite_food
    // Overlapping static entry reached from 0xC1F87B.
    case 0xC1F87D: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:211 LDA #.SIZEOF(game_state::favourite_food)
    case 0xC1F87E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:211 LDA #.SIZEOF(game_state::favourite_food)
    // Overlapping static entry reached from 0xC1F87E.
    case 0xC1F880: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:212 JSR NAME_A_CHARACTER
    case 0xC1F881: {
        Instruction step(cpu, 0x20, 0x00EAF3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:213 CMP #0
    case 0xC1F884: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:213 CMP #0
    // Overlapping static entry reached from 0xC1F884.
    case 0xC1F886: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:214 BEQ @UNKNOWN27
    case 0xC1F887: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:215 LDA #$FFFF
    case 0xC1F889: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:215 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F889.
    case 0xC1F88B: {
        Instruction step(cpu, 0xFF, 0x850485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:216 STA @VIRTUAL04
    case 0xC1F88C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:217 STA @LOCAL08
    case 0xC1F88E: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:217 STA @LOCAL08
    // Overlapping static entry reached from 0xC1F88B.
    case 0xC1F88F: {
        Instruction step(cpu, 0x24, 0x000080u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:218 BRA @UNKNOWN30
    case 0xC1F890: {
        Instruction step(cpu, 0x80, 0x000057u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:218 BRA @UNKNOWN30
    // Overlapping static entry reached from 0xC1F88F.
    case 0xC1F891: {
        Instruction step(cpu, 0x57, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:220 LDA #1
    case 0xC1F892: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:220 LDA #1
    // Overlapping static entry reached from 0xC1F891.
    case 0xC1F893: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:220 LDA #1
    // Overlapping static entry reached from 0xC1F892.
    case 0xC1F894: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:221 STA @VIRTUAL04
    case 0xC1F895: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:222 STA @LOCAL08
    case 0xC1F897: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:223 BRA @UNKNOWN30
    case 0xC1F899: {
        Instruction step(cpu, 0x80, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:225 LDA @VIRTUAL02
    case 0xC1F89B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:226 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_THING
    case 0xC1F89D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:226 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_THING
    // Overlapping static entry reached from 0xC1F89D.
    case 0xC1F89F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:227 BNE @UNKNOWN30
    case 0xC1F8A0: {
        Instruction step(cpu, 0xD0, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F8A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x009525u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F8A2.
    case 0xC1F8A4: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F8A5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F8A4.
    case 0xC1F8A6: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F8A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F8A6.
    case 0xC1F8A8: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F8A7.
    case 0xC1F8A9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F8AA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:229 LDA @VIRTUAL02
    case 0xC1F8AC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:581 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8AE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:582 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:584 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B4: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:586 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B7: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:231 CLC
    case 0xC1F8B9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:232 ADC @VIRTUAL06
    case 0xC1F8BA: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:233 STA @VIRTUAL06
    case 0xC1F8BC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:234 STA @LOCAL00
    case 0xC1F8BE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:235 LDA @VIRTUAL06+2
    case 0xC1F8C0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:236 STA @LOCAL00+2
    case 0xC1F8C2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:237 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F8C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:237 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F8C4.
    case 0xC1F8C6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:238 STA @LOCAL01
    case 0xC1F8C7: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:239 LDY @VIRTUAL02
    case 0xC1F8C9: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:240 LDX #.LOWORD(GAME_STATE) + game_state::favourite_thing + 2 ; part after 'PK ' prefix
    case 0xC1F8CB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000DBu : 0x009ADBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:240 LDX #.LOWORD(GAME_STATE) + game_state::favourite_thing + 2 ; part after 'PK ' prefix
    // Overlapping static entry reached from 0xC1F8CB.
    case 0xC1F8CD: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:241 LDA #.SIZEOF(game_state::favourite_thing) - 3
    case 0xC1F8CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:241 LDA #.SIZEOF(game_state::favourite_thing) - 3
    // Overlapping static entry reached from 0xC1F8CE.
    case 0xC1F8D0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:242 JSR NAME_A_CHARACTER
    case 0xC1F8D1: {
        Instruction step(cpu, 0x20, 0x00EAF3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:243 CMP #0
    case 0xC1F8D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:243 CMP #0
    // Overlapping static entry reached from 0xC1F8D4.
    case 0xC1F8D6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:244 BEQ @UNKNOWN29
    case 0xC1F8D7: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:245 LDA #$FFFF
    case 0xC1F8D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:245 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F8D9.
    case 0xC1F8DB: {
        Instruction step(cpu, 0xFF, 0x850485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:246 STA @VIRTUAL04
    case 0xC1F8DC: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:247 STA @LOCAL08
    case 0xC1F8DE: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:247 STA @LOCAL08
    // Overlapping static entry reached from 0xC1F8DB.
    case 0xC1F8DF: {
        Instruction step(cpu, 0x24, 0x000080u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:248 BRA @UNKNOWN30
    case 0xC1F8E0: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:248 BRA @UNKNOWN30
    // Overlapping static entry reached from 0xC1F8DF.
    case 0xC1F8E1: {
        Instruction step(cpu, 0x07, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:250 LDA #1
    case 0xC1F8E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:250 LDA #1
    // Overlapping static entry reached from 0xC1F8E1.
    case 0xC1F8E3: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:250 LDA #1
    // Overlapping static entry reached from 0xC1F8E2.
    case 0xC1F8E4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:251 STA @VIRTUAL04
    case 0xC1F8E5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:252 STA @LOCAL08
    case 0xC1F8E7: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:254 LDA @VIRTUAL02
    case 0xC1F8E9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:255 JSL UNKNOWN_C4D830
    case 0xC1F8EB: {
        Instruction step(cpu, 0x22, 0xC4AB03u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:256 LDA @LOCAL08
    case 0xC1F8EF: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:257 STA @VIRTUAL04
    case 0xC1F8F1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:258 LDA @VIRTUAL02
    case 0xC1F8F3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:259 CLC
    case 0xC1F8F5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:260 ADC @VIRTUAL04
    case 0xC1F8F6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:261 STA @VIRTUAL02
    case 0xC1F8F8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:263 LDA #THINGS_NAMED_COUNT
    case 0xC1F8FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:263 LDA #THINGS_NAMED_COUNT
    // Overlapping static entry reached from 0xC1F8FA.
    case 0xC1F8FC: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:264 CLC
    case 0xC1F8FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:265 SBC @VIRTUAL02
    case 0xC1F8FE: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:266 JUMPGTS @UNKNOWN19
    case 0xC1F900: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:266 JUMPGTS @UNKNOWN19
    case 0xC1F902: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:266 JUMPGTS @UNKNOWN19
    case 0xC1F904: {
        Instruction step(cpu, 0x4C, 0x00F766u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:266 JUMPGTS @UNKNOWN19
    case 0xC1F907: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:266 JUMPGTS @UNKNOWN19
    case 0xC1F909: {
        Instruction step(cpu, 0x4C, 0x00F766u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:267 JSR UNKNOWN_C1008E
    case 0xC1F90C: {
        Instruction step(cpu, 0x20, 0x0002AFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:268 JSR SET_INSTANT_PRINTING
    case 0xC1F90F: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:269 LDX #0
    case 0xC1F912: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:269 LDX #0
    // Overlapping static entry reached from 0xC1F912.
    case 0xC1F914: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:270 STX @LOCAL07
    case 0xC1F915: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:271 BRA @UNKNOWN35
    case 0xC1F917: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:273 TXA
    case 0xC1F919: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:274 CLC
    case 0xC1F91A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:275 ADC #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_NESS
    case 0xC1F91B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:275 ADC #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_NESS
    // Overlapping static entry reached from 0xC1F91B.
    case 0xC1F91D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:276 JSR CREATE_WINDOW
    case 0xC1F91E: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:277 LDX @LOCAL07
    case 0xC1F921: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:278 INX
    case 0xC1F923: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:279 STX @LOCAL06
    case 0xC1F924: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:280 TXA
    case 0xC1F926: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:281 JSR UNKNOWN_C1931B
    case 0xC1F927: {
        Instruction step(cpu, 0x20, 0x00940Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:282 LDX @LOCAL06
    case 0xC1F92A: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:283 STX @LOCAL07
    case 0xC1F92C: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:285 STX @VIRTUAL02
    case 0xC1F92E: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:286 LDA #PLAYER_CHAR_COUNT
    case 0xC1F930: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:286 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC1F930.
    case 0xC1F932: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:287 CLC
    case 0xC1F933: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:288 SBC @VIRTUAL02
    case 0xC1F934: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:289 BRANCHGTS @UNKNOWN34
    case 0xC1F936: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:289 BRANCHGTS @UNKNOWN34
    case 0xC1F938: {
        Instruction step(cpu, 0x10, 0x0000DFu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:289 BRANCHGTS @UNKNOWN34
    case 0xC1F93A: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:289 BRANCHGTS @UNKNOWN34
    case 0xC1F93C: {
        Instruction step(cpu, 0x30, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:290 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    case 0xC1F93E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:290 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    // Overlapping static entry reached from 0xC1F93E.
    case 0xC1F940: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:290 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    case 0xC1F941: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:291 LDA #7
    case 0xC1F944: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:291 LDA #7
    // Overlapping static entry reached from 0xC1F944.
    case 0xC1F946: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:292 JSR UNKNOWN_C1931B
    case 0xC1F947: {
        Instruction step(cpu, 0x20, 0x00940Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:293 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD
    case 0xC1F94A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:293 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD
    // Overlapping static entry reached from 0xC1F94A.
    case 0xC1F94C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:294 JSR CREATE_WINDOW
    case 0xC1F94D: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1F950: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Eu : 0x00958Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1F950.
    case 0xC1F952: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1F953: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1F952.
    case 0xC1F954: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1F955: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1F955.
    case 0xC1F957: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1F958: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:296 LDA #9
    case 0xC1F95A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:296 LDA #9
    // Overlapping static entry reached from 0xC1F95A.
    case 0xC1F95C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:297 JSR PRINT_STRING
    case 0xC1F95D: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:298 LDA #.LOWORD(WINDOW_STATS) + window_stats::width
    case 0xC1F960: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x0089CCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:298 LDA #.LOWORD(WINDOW_STATS) + window_stats::width
    // Overlapping static entry reached from 0xC1F960.
    case 0xC1F962: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:299 STA @VIRTUAL02
    case 0xC1F963: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:299 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1F962.
    case 0xC1F964: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:300 STA @LOCAL07
    case 0xC1F965: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:301 LDY #.LOWORD(GAME_STATE) + game_state::favourite_food
    case 0xC1F967: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D3u : 0x009AD3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:301 LDY #.LOWORD(GAME_STATE) + game_state::favourite_food
    // Overlapping static entry reached from 0xC1F967.
    case 0xC1F969: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:302 STY @LOCAL06
    case 0xC1F96A: {
        Instruction step(cpu, 0x84, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:303 LDX #6
    case 0xC1F96C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:303 LDX #6
    // Overlapping static entry reached from 0xC1F96C.
    case 0xC1F96E: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:304 TYA
    case 0xC1F96F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:305 JSR UNKNOWN_C117E2
    case 0xC1F970: {
        Instruction step(cpu, 0x20, 0x001DBFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:306 LDX #1
    case 0xC1F973: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:306 LDX #1
    // Overlapping static entry reached from 0xC1F973.
    case 0xC1F975: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:307 STX @LOCAL05
    case 0xC1F976: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:308 PHA
    case 0xC1F978: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:309 LDA OPEN_WINDOW_TABLE + WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD * 2
    case 0xC1F979: {
        Instruction step(cpu, 0xAD, 0x008C6Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:310 LDY #.SIZEOF(window_stats)
    case 0xC1F97C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:310 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1F97C.
    case 0xC1F97E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:311 JSL MULT168
    case 0xC1F97F: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:312 CLC
    case 0xC1F983: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:313 ADC @VIRTUAL02
    case 0xC1F984: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:314 TAX
    case 0xC1F986: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:315 LDA __BSS_START__,X
    case 0xC1F987: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:316 PLY
    case 0xC1F98A: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:317 STY @VIRTUAL02
    case 0xC1F98B: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:318 SEC
    case 0xC1F98D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:319 SBC @VIRTUAL02
    case 0xC1F98E: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:320 LDX @LOCAL05
    case 0xC1F990: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:321 JSR UNKNOWN_C438A5
    case 0xC1F992: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:322 LDY @LOCAL06
    case 0xC1F995: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:323 TYA
    case 0xC1F997: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F998: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F99A: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F99B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F99D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F99E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F9A0: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:325 REP #PROC_FLAGS::ACCUM8
    case 0xC1F9A2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:326 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F9A4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:326 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F9A6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:326 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F9A8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:326 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F9AA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:327 LDA #6
    case 0xC1F9AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:327 LDA #6
    // Overlapping static entry reached from 0xC1F9AC.
    case 0xC1F9AE: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:328 JSR PRINT_STRING
    case 0xC1F9AF: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:329 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING
    case 0xC1F9B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:329 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING
    // Overlapping static entry reached from 0xC1F9B2.
    case 0xC1F9B4: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:330 JSR CREATE_WINDOW
    case 0xC1F9B5: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1F9B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000097u : 0x009597u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1F9B8.
    case 0xC1F9BA: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1F9BB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1F9BA.
    case 0xC1F9BC: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1F9BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1F9BD.
    case 0xC1F9BF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1F9C0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:332 LDA #11
    case 0xC1F9C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:332 LDA #11
    // Overlapping static entry reached from 0xC1F9C2.
    case 0xC1F9C4: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:333 JSR PRINT_STRING
    case 0xC1F9C5: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:334 LDY #.LOWORD(GAME_STATE) + game_state::favourite_thing + 2 ; part after 'PSI ' prefix
    case 0xC1F9C8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000DBu : 0x009ADBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:334 LDY #.LOWORD(GAME_STATE) + game_state::favourite_thing + 2 ; part after 'PSI ' prefix
    // Overlapping static entry reached from 0xC1F9C8.
    case 0xC1F9CA: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:335 STY @LOCAL04
    case 0xC1F9CB: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:336 LDX #6
    case 0xC1F9CD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:336 LDX #6
    // Overlapping static entry reached from 0xC1F9CD.
    case 0xC1F9CF: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:337 TYA
    case 0xC1F9D0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:338 JSR UNKNOWN_C117E2
    case 0xC1F9D1: {
        Instruction step(cpu, 0x20, 0x001DBFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:339 LDX #1
    case 0xC1F9D4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:339 LDX #1
    // Overlapping static entry reached from 0xC1F9D4.
    case 0xC1F9D6: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:340 STX @LOCAL05
    case 0xC1F9D7: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:341 PHA
    case 0xC1F9D9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:342 LDA @LOCAL07
    case 0xC1F9DA: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:343 STA @VIRTUAL02
    case 0xC1F9DC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:344 LDA OPEN_WINDOW_TABLE + WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING * 2
    case 0xC1F9DE: {
        Instruction step(cpu, 0xAD, 0x008C6Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:345 LDY #.SIZEOF(window_stats)
    case 0xC1F9E1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:345 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1F9E1.
    case 0xC1F9E3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:346 JSL MULT168
    case 0xC1F9E4: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:347 CLC
    case 0xC1F9E8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:348 ADC @VIRTUAL02
    case 0xC1F9E9: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:349 TAX
    case 0xC1F9EB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:350 LDA __BSS_START__,X
    case 0xC1F9EC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:351 PLY
    case 0xC1F9EF: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:352 STY @VIRTUAL02
    case 0xC1F9F0: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:353 SEC
    case 0xC1F9F2: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:354 SBC @VIRTUAL02
    case 0xC1F9F3: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:355 LDX @LOCAL05
    case 0xC1F9F5: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:356 JSR UNKNOWN_C438A5
    case 0xC1F9F7: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:357 LDY @LOCAL04
    case 0xC1F9FA: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:358 TYA
    case 0xC1F9FC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F9FD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F9FF: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1FA00: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1FA02: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1FA03: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1FA05: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:360 REP #PROC_FLAGS::ACCUM8
    case 0xC1FA07: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:361 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FA09: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:361 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FA0B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:361 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FA0D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:361 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FA0F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:362 LDA #7
    case 0xC1FA11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:362 LDA #7
    // Overlapping static entry reached from 0xC1FA11.
    case 0xC1FA13: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:363 JSR PRINT_STRING
    case 0xC1FA14: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    case 0xC1FA17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x000024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    // Overlapping static entry reached from 0xC1FA17.
    case 0xC1FA19: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    case 0xC1FA1A: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FA1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A2u : 0x0095A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA1D.
    case 0xC1FA1F: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FA20: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA1F.
    case 0xC1FA21: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FA22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA22.
    case 0xC1FA24: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FA25: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:366 LDA #12
    case 0xC1FA27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:366 LDA #12
    // Overlapping static entry reached from 0xC1FA27.
    case 0xC1FA29: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:367 JSR PRINT_STRING
    case 0xC1FA2A: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FA2D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA2D.
    case 0xC1FA2F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FA30: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FA32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA32.
    case 0xC1FA34: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FA35: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FA37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x0095AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FA37.
    case 0xC1FA39: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FA3A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FA39.
    case 0xC1FA3B: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FA3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FA3C.
    case 0xC1FA3E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FA3F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:370 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA41: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:370 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA43: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:370 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA45: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:370 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA47: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:371 LDY #0
    case 0xC1FA49: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:371 LDY #0
    // Overlapping static entry reached from 0xC1FA49.
    case 0xC1FA4B: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:372 LDX #13
    case 0xC1FA4C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:372 LDX #13
    // Overlapping static entry reached from 0xC1FA4C.
    case 0xC1FA4E: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:373 LDA #1
    case 0xC1FA4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:373 LDA #1
    // Overlapping static entry reached from 0xC1FA4F.
    case 0xC1FA51: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:374 JSR UNKNOWN_C1153B
    case 0xC1FA52: {
        Instruction step(cpu, 0x20, 0x001B27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FA55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B1u : 0x0095B1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA55.
    case 0xC1FA57: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FA58: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA57.
    case 0xC1FA59: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FA5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA5A.
    case 0xC1FA5C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FA5D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:376 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA5F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:376 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA61: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:376 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA63: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:376 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA65: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:377 LDY #0
    case 0xC1FA67: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:377 LDY #0
    // Overlapping static entry reached from 0xC1FA67.
    case 0xC1FA69: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:378 LDX #17
    case 0xC1FA6A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:378 LDX #17
    // Overlapping static entry reached from 0xC1FA6A.
    case 0xC1FA6C: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:379 TYA
    case 0xC1FA6D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:380 JSR UNKNOWN_C1153B
    case 0xC1FA6E: {
        Instruction step(cpu, 0x20, 0x001B27u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:381 JSR PRINT_MENU_ITEMS
    case 0xC1FA71: {
        Instruction step(cpu, 0x20, 0x001BF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:382 JSL UNKNOWN_C4D8FA
    case 0xC1FA74: {
        Instruction step(cpu, 0x22, 0xC4ABCDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:383 LDA #1
    case 0xC1FA78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:383 LDA #1
    // Overlapping static entry reached from 0xC1FA78.
    case 0xC1FA7A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:384 JSR SELECTION_MENU
    case 0xC1FA7B: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:385 TAX
    case 0xC1FA7E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:386 BNE @EVERYTHING_OKAY
    case 0xC1FA7F: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:387 JSL UNKNOWN_C021E6
    case 0xC1FA81: {
        Instruction step(cpu, 0x22, 0xC021F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:388 JMP @UNKNOWN18
    case 0xC1FA85: {
        Instruction step(cpu, 0x4C, 0x00F75Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:390 LDA #MUSIC::NAME_CONFIRMATION
    case 0xC1FA88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00009Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:390 LDA #MUSIC::NAME_CONFIRMATION
    // Overlapping static entry reached from 0xC1FA88.
    case 0xC1FA8A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:391 JSL CHANGE_MUSIC
    case 0xC1FA8B: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:392 JSL WINDOW_TICK
    case 0xC1FA8F: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:393 LDX #0
    case 0xC1FA93: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:393 LDX #0
    // Overlapping static entry reached from 0xC1FA93.
    case 0xC1FA95: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:394 STX @LOCAL03
    case 0xC1FA96: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:395 BRA @UNKNOWN46
    case 0xC1FA98: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:397 JSL UNKNOWN_C1004E
    case 0xC1FA9A: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:398 LDX @LOCAL03
    case 0xC1FA9E: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:399 INX
    case 0xC1FAA0: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:400 STX @LOCAL03
    case 0xC1FAA1: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:402 STX @VIRTUAL02
    case 0xC1FAA3: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:403 LDA #180
    case 0xC1FAA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B4u : 0x0000B4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:403 LDA #180
    // Overlapping static entry reached from 0xC1FAA5.
    case 0xC1FAA7: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:404 CLC
    case 0xC1FAA8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:405 SBC @VIRTUAL02
    case 0xC1FAA9: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:406 BRANCHGTS @UNKNOWN45
    case 0xC1FAAB: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:406 BRANCHGTS @UNKNOWN45
    case 0xC1FAAD: {
        Instruction step(cpu, 0x10, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:406 BRANCHGTS @UNKNOWN45
    case 0xC1FAAF: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:406 BRANCHGTS @UNKNOWN45
    case 0xC1FAB1: {
        Instruction step(cpu, 0x30, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:407 JSL UNKNOWN_C021E6
    case 0xC1FAB3: {
        Instruction step(cpu, 0x22, 0xC021F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:408 STZ @LOCAL03
    case 0xC1FAB7: {
        Instruction step(cpu, 0x64, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:409 JMP @UNKNOWN51
    case 0xC1FAB9: {
        Instruction step(cpu, 0x4C, 0x00FBA3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:411 LDA @LOCAL03
    case 0xC1FABC: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:412 STA @VIRTUAL04
    case 0xC1FABE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:413 INC @VIRTUAL04
    case 0xC1FAC0: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:414 LDA @VIRTUAL04
    case 0xC1FAC2: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:415 STA @LOCAL07
    case 0xC1FAC4: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FAC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000055u : 0x00F555u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FAC6.
    case 0xC1FAC8: {
        Instruction step(cpu, 0xF5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FAC9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FAC8.
    case 0xC1FACA: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FACB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FACA.
    case 0xC1FACC: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FACB.
    case 0xC1FACD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FACE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:417 LDA @LOCAL03
    case 0xC1FAD0: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:616 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:617 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:618 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:620 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:621 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:419 STA @VIRTUAL02
    case 0xC1FADA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:420 LDY #0
    case 0xC1FADC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:420 LDY #0
    // Overlapping static entry reached from 0xC1FADC.
    case 0xC1FADE: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:421 LDA @VIRTUAL02
    case 0xC1FADF: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:422 CLC
    case 0xC1FAE1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:423 ADC #initial_stats::level
    case 0xC1FAE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:423 ADC #initial_stats::level
    // Overlapping static entry reached from 0xC1FAE2.
    case 0xC1FAE4: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:424 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FAE5: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:424 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FAE7: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:424 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FAE9: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:424 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FAEB: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:425 CLC
    case 0xC1FAED: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:426 ADC @VIRTUAL0A
    case 0xC1FAEE: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:427 STA @VIRTUAL0A
    case 0xC1FAF0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:428 LDA [@VIRTUAL0A]
    case 0xC1FAF2: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:429 TAX
    case 0xC1FAF4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:430 LDA @LOCAL07
    case 0xC1FAF5: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:431 STA @VIRTUAL04
    case 0xC1FAF7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:432 JSR RESET_CHAR_LEVEL_ONE
    case 0xC1FAF9: {
        Instruction step(cpu, 0x20, 0x00D6CBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:433 LDA @VIRTUAL02
    case 0xC1FAFC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:434 CLC
    case 0xC1FAFE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:435 ADC #initial_stats::exp
    case 0xC1FAFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:435 ADC #initial_stats::exp
    // Overlapping static entry reached from 0xC1FAFF.
    case 0xC1FB01: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:436 CLC
    case 0xC1FB02: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:437 ADC @VIRTUAL06
    case 0xC1FB03: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:438 STA @VIRTUAL06
    case 0xC1FB05: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:439 LDA [@VIRTUAL06]
    case 0xC1FB07: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:440 BEQ @UNKNOWN50
    case 0xC1FB09: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:441 STORE_INT1632 @VIRTUAL06
    case 0xC1FB0B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:441 STORE_INT1632 @VIRTUAL06
    case 0xC1FB0D: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:442 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB0F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:442 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB11: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:442 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB13: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:442 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB15: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:443 LDX #0
    case 0xC1FB17: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:443 LDX #0
    // Overlapping static entry reached from 0xC1FB17.
    case 0xC1FB19: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:444 LDA @VIRTUAL04
    case 0xC1FB1A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:445 JSL GAIN_EXP
    case 0xC1FB1C: {
        Instruction step(cpu, 0x22, 0xC1D7E4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:447 LDA @LOCAL03
    case 0xC1FB20: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:448 LDY #.SIZEOF(char_struct)
    case 0xC1FB22: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:448 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1FB22.
    case 0xC1FB24: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:449 JSL MULT168
    case 0xC1FB25: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:450 STA @VIRTUAL02
    case 0xC1FB29: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:451 LDX @VIRTUAL02
    case 0xC1FB2B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:452 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC1FB2D: {
        Instruction step(cpu, 0xBD, 0x009C88u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:453 LDX @VIRTUAL02
    case 0xC1FB30: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:454 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC1FB32: {
        Instruction step(cpu, 0x9D, 0x009CC3u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:455 LDX @VIRTUAL02
    case 0xC1FB35: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:456 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC1FB37: {
        Instruction step(cpu, 0x9D, 0x009CC5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:457 LDX @VIRTUAL02
    case 0xC1FB3A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:458 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC1FB3C: {
        Instruction step(cpu, 0xBD, 0x009C8Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:459 LDX @VIRTUAL02
    case 0xC1FB3F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:460 STA PARTY_CHARACTERS+char_struct::current_pp,X
    case 0xC1FB41: {
        Instruction step(cpu, 0x9D, 0x009CC9u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:461 LDX @VIRTUAL02
    case 0xC1FB44: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:462 STA PARTY_CHARACTERS+char_struct::current_pp_target,X
    case 0xC1FB46: {
        Instruction step(cpu, 0x9D, 0x009CCBu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:463 LDX @VIRTUAL02
    case 0xC1FB49: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:464 STZ PARTY_CHARACTERS+char_struct::current_pp_fraction,X
    case 0xC1FB4B: {
        Instruction step(cpu, 0x9E, 0x009CC7u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:465 LDX @VIRTUAL02
    case 0xC1FB4E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:466 STZ PARTY_CHARACTERS+char_struct::current_hp_fraction,X
    case 0xC1FB50: {
        Instruction step(cpu, 0x9E, 0x009CC1u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:467 LDA @VIRTUAL02
    case 0xC1FB53: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:468 CLC
    case 0xC1FB55: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:469 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1FB56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:469 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1FB56.
    case 0xC1FB58: {
        Instruction step(cpu, 0x9C, 0x0084A8u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:470 TAY
    case 0xC1FB59: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:471 STY @LOCAL07
    case 0xC1FB5A: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:471 STY @LOCAL07
    // Overlapping static entry reached from 0xC1FB58.
    case 0xC1FB5B: {
        Instruction step(cpu, 0x22, 0xA920E2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:472 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FB5C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:473 STZ_BADOPT @LOCAL00
    case 0xC1FB5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:473 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC1FB5B.
    case 0xC1FB5F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:473 STZ_BADOPT @LOCAL00
    case 0xC1FB60: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:473 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC1FB5E.
    case 0xC1FB61: {
        Instruction step(cpu, 0x0E, 0x000EA2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:474 LDX #14
    case 0xC1FB62: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:474 LDX #14
    // Overlapping static entry reached from 0xC1FB62.
    case 0xC1FB64: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:475 REP #PROC_FLAGS::ACCUM8
    case 0xC1FB65: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:476 TYA
    case 0xC1FB67: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:477 JSL MEMSET16
    case 0xC1FB68: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FB6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000055u : 0x00F555u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB6C.
    case 0xC1FB6E: {
        Instruction step(cpu, 0xF5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FB6F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB6E.
    case 0xC1FB70: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FB71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB70.
    case 0xC1FB72: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB71.
    case 0xC1FB73: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FB74: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:479 LDA @LOCAL03
    case 0xC1FB76: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:616 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB78: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:617 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB7A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:618 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB7B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB7C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:620 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB7E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:621 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB7F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:481 CLC
    case 0xC1FB80: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:482 ADC #initial_stats::items
    case 0xC1FB81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:482 ADC #initial_stats::items
    // Overlapping static entry reached from 0xC1FB81.
    case 0xC1FB83: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:483 CLC
    case 0xC1FB84: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:484 ADC @VIRTUAL06
    case 0xC1FB85: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:485 STA @VIRTUAL06
    case 0xC1FB87: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:486 STA @LOCAL00
    case 0xC1FB89: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:487 LDA @VIRTUAL06+2
    case 0xC1FB8B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:488 STA @LOCAL00+2
    case 0xC1FB8D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:489 LDX #.SIZEOF(initial_stats::items)
    case 0xC1FB8F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:489 LDX #.SIZEOF(initial_stats::items)
    // Overlapping static entry reached from 0xC1FB8F.
    case 0xC1FB91: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:490 LDY @LOCAL07
    case 0xC1FB92: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:491 TYA
    case 0xC1FB94: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:492 JSL MEMCPY16
    case 0xC1FB95: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:493 LDA #$0400
    case 0xC1FB99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:493 LDA #$0400
    // Overlapping static entry reached from 0xC1FB99.
    case 0xC1FB9B: {
        Instruction step(cpu, 0x04, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:494 LDX @VIRTUAL02
    case 0xC1FB9C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:494 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC1FB9B.
    case 0xC1FB9D: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:495 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    case 0xC1FB9E: {
        Instruction step(cpu, 0x9D, 0x009CCDu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:496 INC @LOCAL03
    case 0xC1FBA1: {
        Instruction step(cpu, 0xE6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:498 LDA #PLAYER_CHAR_COUNT
    case 0xC1FBA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:498 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC1FBA3.
    case 0xC1FBA5: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:499 CLC
    case 0xC1FBA6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:500 SBC @LOCAL03
    case 0xC1FBA7: {
        Instruction step(cpu, 0xE5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:501 JUMPGTS @UNKNOWN49
    case 0xC1FBA9: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:501 JUMPGTS @UNKNOWN49
    case 0xC1FBAB: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:501 JUMPGTS @UNKNOWN49
    case 0xC1FBAD: {
        Instruction step(cpu, 0x4C, 0x00FABCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:501 JUMPGTS @UNKNOWN49
    case 0xC1FBB0: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:501 JUMPGTS @UNKNOWN49
    case 0xC1FBB2: {
        Instruction step(cpu, 0x4C, 0x00FABCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FBB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000055u : 0x00F555u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FBB5.
    case 0xC1FBB7: {
        Instruction step(cpu, 0xF5, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FBB8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FBB7.
    case 0xC1FBB9: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FBBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FBB9.
    case 0xC1FBBB: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FBBA.
    case 0xC1FBBC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FBBD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:503 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FBBF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:503 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FBC1: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:503 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FBC3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:503 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FBC5: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:504 LDY #initial_stats::money
    case 0xC1FBC7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:504 LDY #initial_stats::money
    // Overlapping static entry reached from 0xC1FBC7.
    case 0xC1FBC9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:505 LDA [@VIRTUAL06],Y
    case 0xC1FBCA: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:506 STORE_INT1632 @VIRTUAL06
    case 0xC1FBCC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:506 STORE_INT1632 @VIRTUAL06
    case 0xC1FBCE: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:507 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FBD0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:507 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FBD2: {
        Instruction step(cpu, 0x8D, 0x009AE2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:507 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FBD5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:507 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FBD7: {
        Instruction step(cpu, 0x8D, 0x009AE4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:508 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FBDA: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:508 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FBDC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:508 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FBDE: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:508 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FBE0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:509 LDY #initial_stats::unknown2
    case 0xC1FBE2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:509 LDY #initial_stats::unknown2
    // Overlapping static entry reached from 0xC1FBE2.
    case 0xC1FBE4: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:510 LDA [@VIRTUAL06],Y
    case 0xC1FBE5: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:511 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBE7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:511 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBE8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:511 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBE9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:512 TAX
    case 0xC1FBEA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:513 LDA [@VIRTUAL06]
    case 0xC1FBEB: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:514 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBED: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:514 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBEE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:514 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBEF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:515 JSL UNKNOWN_C0B65F
    case 0xC1FBF0: {
        Instruction step(cpu, 0x22, 0xC0B632u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:516 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FBF4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:517 LDA #CHAR::P
    case 0xC1FBF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x008D50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:518 STA GAME_STATE+game_state::favourite_thing
    case 0xC1FBF8: {
        Instruction step(cpu, 0x8D, 0x009AD9u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:518 STA GAME_STATE+game_state::favourite_thing
    // Overlapping static entry reached from 0xC1FBF6.
    case 0xC1FBF9: {
        Instruction step(cpu, 0xD9, 0x00A99Au, 3u, AddressMode::AbsoluteIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:519 LDA #CHAR::K
    case 0xC1FBFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Bu : 0x008D4Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:519 LDA #CHAR::K
    // Overlapping static entry reached from 0xC1FBF9.
    case 0xC1FBFC: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:520 STA GAME_STATE+game_state::favourite_thing+1
    case 0xC1FBFD: {
        Instruction step(cpu, 0x8D, 0x009ADAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:520 STA GAME_STATE+game_state::favourite_thing+1
    // Overlapping static entry reached from 0xC1FBFB.
    case 0xC1FBFE: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:520 STA GAME_STATE+game_state::favourite_thing+1
    // Overlapping static entry reached from 0xC1FBFE.
    case 0xC1FBFF: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:521 LDA #1
    case 0xC1FC00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:522 STA GAME_STATE + game_state::unknownC3
    case 0xC1FC02: {
        Instruction step(cpu, 0x8D, 0x009B69u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:522 STA GAME_STATE + game_state::unknownC3
    // Overlapping static entry reached from 0xC1FC00.
    case 0xC1FC03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00009Bu : 0x00C29Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:523 REP #PROC_FLAGS::ACCUM8
    case 0xC1FC05: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:523 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1FC03.
    case 0xC1FC06: {
        Instruction step(cpu, 0x20, 0x0028ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:524 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1FC07: {
        Instruction step(cpu, 0xAD, 0x009B28u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:524 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC1FC06.
    case 0xC1FC09: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:525 STA RESPAWN_X
    case 0xC1FC0A: {
        Instruction step(cpu, 0x8D, 0x009FA5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:526 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC1FC0D: {
        Instruction step(cpu, 0xAD, 0x009B2Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:527 STA RESPAWN_Y
    case 0xC1FC10: {
        Instruction step(cpu, 0x8D, 0x009FA7u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:528 JSL UNKNOWN_C064D4
    case 0xC1FC13: {
        Instruction step(cpu, 0x22, 0xC06702u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:529 LDX #1768
    case 0xC1FC17: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E8u : 0x0006E8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:529 LDX #1768
    // Overlapping static entry reached from 0xC1FC17.
    case 0xC1FC19: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:530 LDA #2112
    case 0xC1FC1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000840u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:530 LDA #2112
    // Overlapping static entry reached from 0xC1FC19.
    case 0xC1FC1B: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:530 LDA #2112
    // Overlapping static entry reached from 0xC1FC1A.
    case 0xC1FC1C: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:531 JSL UNKNOWN_C0B65F
    case 0xC1FC1D: {
        Instruction step(cpu, 0x22, 0xC0B632u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FC21: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Fu : 0x00014Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FC21.
    case 0xC1FC23: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FC24: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FC23.
    case 0xC1FC25: {
        Instruction step(cpu, 0x0E, 0x00C5A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FC26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C5u : 0x0000C5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FC26.
    case 0xC1FC28: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FC29: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:533 JSL UNKNOWN_C46881
    case 0xC1FC2B: {
        Instruction step(cpu, 0x22, 0xC44603u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:534 LDX #1
    case 0xC1FC2F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:534 LDX #1
    // Overlapping static entry reached from 0xC1FC2F.
    case 0xC1FC31: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:535 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    case 0xC1FC32: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:535 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    // Overlapping static entry reached from 0xC1FC32.
    case 0xC1FC34: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:536 JSL SET_EVENT_FLAG
    case 0xC1FC35: {
        Instruction step(cpu, 0x22, 0xC21506u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:537 LDA #1
    case 0xC1FC39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:537 LDA #1
    // Overlapping static entry reached from 0xC1FC39.
    case 0xC1FC3B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:538 STA SHOW_NPC_FLAG
    case 0xC1FC3C: {
        Instruction step(cpu, 0x8D, 0x004DECu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:540 JSR UNKNOWN_C1008E
    case 0xC1FC3F: {
        Instruction step(cpu, 0x20, 0x0002AFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:541 JSL UNKNOWN_C3EBCA
    case 0xC1FC42: {
        Instruction step(cpu, 0x22, 0xC3E790u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:542 LDA GAME_STATE+game_state::text_speed
    case 0xC1FC46: {
        Instruction step(cpu, 0xAD, 0x009B67u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:543 AND #$00FF
    case 0xC1FC49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:543 AND #$00FF
    // Overlapping static entry reached from 0xC1FC49.
    case 0xC1FC4B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:544 TAX
    case 0xC1FC4C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:545 DEC
    case 0xC1FC4D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:546 STA @LOCAL07
    case 0xC1FC4E: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FC50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x00F664u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1FC50.
    case 0xC1FC52: {
        Instruction step(cpu, 0xF6, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FC53: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1FC52.
    case 0xC1FC54: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FC55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1FC55.
    case 0xC1FC57: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FC58: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:548 LDA @LOCAL07
    case 0xC1FC5A: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:549 ASL
    case 0xC1FC5C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:550 ASL
    case 0xC1FC5D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:551 CLC
    case 0xC1FC5E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:552 ADC @VIRTUAL0A
    case 0xC1FC5F: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:553 STA @VIRTUAL0A
    case 0xC1FC61: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC63: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FC63.
    case 0xC1FC65: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC66: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC68: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC69: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC6B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC6D: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:555 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FC6F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:555 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FC71: {
        Instruction step(cpu, 0x8D, 0x00991Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:555 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FC74: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:555 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FC76: {
        Instruction step(cpu, 0x8D, 0x009921u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:556 LDA @LOCAL07
    case 0xC1FC79: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:557 STA SELECTED_TEXT_SPEED
    case 0xC1FC7B: {
        Instruction step(cpu, 0x8D, 0x00991Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:558 CPX #3
    case 0xC1FC7E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:558 CPX #3
    // Overlapping static entry reached from 0xC1FC7E.
    case 0xC1FC80: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:559 BNE @UNKNOWN60
    case 0xC1FC81: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:560 LDA #0
    case 0xC1FC83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:560 LDA #0
    // Overlapping static entry reached from 0xC1FC83.
    case 0xC1FC85: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:561 BRA @UNKNOWN61
    case 0xC1FC86: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:563 TXA
    case 0xC1FC88: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:647 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC89: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:648 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC8B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:649 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC8C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:650 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC8E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:651 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC8F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:652 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC91: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:653 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC92: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:654 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC94: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:566 STA TEXT_SPEED_BASED_WAIT
    case 0xC1FC95: {
        Instruction step(cpu, 0x8D, 0x009943u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu_loop-jp.asm:567 STZ UNREAD_7E5DBA
    case 0xC1FC98: {
        Instruction step(cpu, 0x9C, 0x006140u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FC9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F3u : 0x003BF3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    // Overlapping static entry reached from 0xC1FC9B.
    case 0xC1FC9D: {
        Instruction step(cpu, 0x3B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FC9E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FCA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    // Overlapping static entry reached from 0xC1FCA0.
    case 0xC1FCA2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FCA3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FCA5: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:569 END_C_FUNCTION
    case 0xC1FCA9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:569 END_C_FUNCTION
    case 0xC1FCAA: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
