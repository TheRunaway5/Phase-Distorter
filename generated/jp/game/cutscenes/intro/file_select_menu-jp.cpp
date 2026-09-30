// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/file_select_menu-jp.asm
bool resume_introduction_file_select_menu_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select_menu-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1ECD9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECDB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECDC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECDD: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECDE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1ECDE.
    case 0xC1ECE0: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECE1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECE2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:12 STA @VIRTUAL04
    case 0xC1ECE3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1ECE0.
    case 0xC1ECE4: {
        Instruction step(cpu, 0x04, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:13 LDA #WINDOW::FILE_SELECT_MAIN
    case 0xC1ECE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:13 LDA #WINDOW::FILE_SELECT_MAIN
    // Overlapping static entry reached from 0xC1ECE4.
    case 0xC1ECE6: {
        Instruction step(cpu, 0x13, 0x000000u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:13 LDA #WINDOW::FILE_SELECT_MAIN
    // Overlapping static entry reached from 0xC1ECE5.
    case 0xC1ECE7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:14 JSR CREATE_WINDOW
    case 0xC1ECE8: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:15 LDY #0
    case 0xC1ECEB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:15 LDY #0
    // Overlapping static entry reached from 0xC1ECEB.
    case 0xC1ECED: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:16 STY @LOCAL03
    case 0xC1ECEE: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:17 JMP @UNKNOWN14
    case 0xC1ECF0: {
        Instruction step(cpu, 0x4C, 0x00EEA5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:19 TYA
    case 0xC1ECF3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:20 JSL LOAD_GAME_SLOT
    case 0xC1ECF4: {
        Instruction step(cpu, 0x22, 0xC0F97Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:21 LDA GAME_STATE + game_state::favourite_thing + 1
    case 0xC1ECF8: {
        Instruction step(cpu, 0xAD, 0x009ADAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:22 AND #$00FF
    case 0xC1ECFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC1ECFB.
    case 0xC1ECFD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select_menu-jp.asm:23 BEQL @UNKNOWN8
    case 0xC1ECFE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select_menu-jp.asm:23 BEQL @UNKNOWN8
    case 0xC1ED00: {
        Instruction step(cpu, 0x4C, 0x00EE2Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:24 LDY @LOCAL03
    case 0xC1ED03: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:25 TYA
    case 0xC1ED05: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED06: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:27 CLC
    case 0xC1ED08: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:28 ADC #CHAR::ONE
    case 0xC1ED09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000031u : 0x008D31u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:29 STA TEMPORARY_TEXT_BUFFER
    case 0xC1ED0B: {
        Instruction step(cpu, 0x8D, 0x009F4Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:29 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1ED09.
    case 0xC1ED0C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:29 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1ED0C.
    case 0xC1ED0D: {
        Instruction step(cpu, 0x9F, 0x8D5BA9u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:30 LDA #CHAR::COLON
    case 0xC1ED0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Bu : 0x008D5Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:31 STA TEMPORARY_TEXT_BUFFER + 1
    case 0xC1ED10: {
        Instruction step(cpu, 0x8D, 0x009F4Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:31 STA TEMPORARY_TEXT_BUFFER + 1
    // Overlapping static entry reached from 0xC1ED0E.
    case 0xC1ED11: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:31 STA TEMPORARY_TEXT_BUFFER + 1
    // Overlapping static entry reached from 0xC1ED11.
    case 0xC1ED12: {
        Instruction step(cpu, 0x9F, 0x8D20A9u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:32 LDA #CHAR::SPACE
    case 0xC1ED13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x008D20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:33 STA TEMPORARY_TEXT_BUFFER + 2
    case 0xC1ED15: {
        Instruction step(cpu, 0x8D, 0x009F4Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:33 STA TEMPORARY_TEXT_BUFFER + 2
    // Overlapping static entry reached from 0xC1ED13.
    case 0xC1ED16: {
        Instruction step(cpu, 0x4C, 0x00A29Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:34 LDX #0
    case 0xC1ED18: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:34 LDX #0
    // Overlapping static entry reached from 0xC1ED18.
    case 0xC1ED1A: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:35 BRA @UNKNOWN4
    case 0xC1ED1B: {
        Instruction step(cpu, 0x80, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED1D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:38 STA TEMPORARY_TEXT_BUFFER + 3,X
    case 0xC1ED1F: {
        Instruction step(cpu, 0x9D, 0x009F4Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:39 INX
    case 0xC1ED22: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED23: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:42 LDA PARTY_CHARACTERS + char_struct::name,X
    case 0xC1ED25: {
        Instruction step(cpu, 0xBD, 0x009C7Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:43 AND #$00FF
    case 0xC1ED28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC1ED28.
    case 0xC1ED2A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:44 BEQ @UNKNOWN3
    case 0xC1ED2B: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:45 CPX #.SIZEOF(char_struct::name)
    case 0xC1ED2D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:45 CPX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1ED2D.
    case 0xC1ED2F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:46 BCC @UNKNOWN1
    case 0xC1ED30: {
        Instruction step(cpu, 0x90, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED32: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:49 LDA #CHAR::SPACE
    case 0xC1ED34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x009D20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:50 STA TEMPORARY_TEXT_BUFFER + 3,X
    case 0xC1ED36: {
        Instruction step(cpu, 0x9D, 0x009F4Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:50 STA TEMPORARY_TEXT_BUFFER + 3,X
    // Overlapping static entry reached from 0xC1ED34.
    case 0xC1ED37: {
        Instruction step(cpu, 0x4D, 0x00E89Fu, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:51 INX
    case 0xC1ED39: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:53 CPX #.SIZEOF(char_struct::name)
    case 0xC1ED3A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:53 CPX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1ED3A.
    case 0xC1ED3C: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:54 BCC @UNKNOWN2
    case 0xC1ED3D: {
        Instruction step(cpu, 0x90, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED3F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000051u : 0x009F51u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ED41.
    case 0xC1ED43: {
        Instruction step(cpu, 0x9F, 0x8B0685u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED44: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED46: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED47: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED49: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED4A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED4C: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED4E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED50: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED52: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED54: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED56: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1ED58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A3u : 0x0094A3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1ED58.
    case 0xC1ED5A: {
        Instruction step(cpu, 0x94, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1ED5B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1ED5A.
    case 0xC1ED5C: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1ED5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1ED5C.
    case 0xC1ED5E: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1ED5D.
    case 0xC1ED5F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1ED60: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:61 LDA #FILE_SELECT_TEXT_LEVEL_LENGTH
    case 0xC1ED62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:61 LDA #FILE_SELECT_TEXT_LEVEL_LENGTH
    // Overlapping static entry reached from 0xC1ED62.
    case 0xC1ED64: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:62 JSL MEMCPY24
    case 0xC1ED65: {
        Instruction step(cpu, 0x22, 0xC08EDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED69: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:64 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1ED6B: {
        Instruction step(cpu, 0xAD, 0x009C83u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:64 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1ED6E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:64 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1ED70: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:64 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1ED72: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/intro/file_select_menu-jp.asm:64 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1ED74: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED76: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED78: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED7A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED7C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED7E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:67 JSR UNKNOWN_C10D7C
    case 0xC1ED80: {
        Instruction step(cpu, 0x20, 0x0012CAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:68 TAX
    case 0xC1ED83: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:69 CPX #1
    case 0xC1ED84: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:69 CPX #1
    // Overlapping static entry reached from 0xC1ED84.
    case 0xC1ED86: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:70 BNE @UNKNOWN6
    case 0xC1ED87: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:71 LDA #CHAR::SPACE
    case 0xC1ED89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:71 LDA #CHAR::SPACE
    // Overlapping static entry reached from 0xC1ED89.
    case 0xC1ED8B: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:72 BRA @UNKNOWN6_
    case 0xC1ED8C: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:74 STX @VIRTUAL02
    case 0xC1ED8E: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:75 LDA #7
    case 0xC1ED90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:75 LDA #7
    // Overlapping static entry reached from 0xC1ED90.
    case 0xC1ED92: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:76 SEC
    case 0xC1ED93: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:77 SBC @VIRTUAL02
    case 0xC1ED94: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:78 TAX
    case 0xC1ED96: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:79 LDA NUMBER_TEXT_BUFFER,X
    case 0xC1ED97: {
        Instruction step(cpu, 0xBD, 0x008C98u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:80 AND #$00FF
    case 0xC1ED9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC1ED9A.
    case 0xC1ED9C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:81 CLC
    case 0xC1ED9D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:82 ADC #CHAR::ZERO
    case 0xC1ED9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:82 ADC #CHAR::ZERO
    // Overlapping static entry reached from 0xC1ED9E.
    case 0xC1EDA0: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EDA1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:85 STA TEMPORARY_TEXT_BUFFER + 12
    case 0xC1EDA3: {
        Instruction step(cpu, 0x8D, 0x009F56u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:86 LDA NUMBER_TEXT_BUFFER + 6
    case 0xC1EDA6: {
        Instruction step(cpu, 0xAD, 0x008C9Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:87 CLC
    case 0xC1EDA9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:88 ADC #CHAR::ZERO
    case 0xC1EDAA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000030u : 0x008D30u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:89 STA TEMPORARY_TEXT_BUFFER + 13
    case 0xC1EDAC: {
        Instruction step(cpu, 0x8D, 0x009F57u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:89 STA TEMPORARY_TEXT_BUFFER + 13
    // Overlapping static entry reached from 0xC1EDAA.
    case 0xC1EDAD: {
        Instruction step(cpu, 0x57, 0x00009Fu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDAF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000058u : 0x009F58u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDB1.
    case 0xC1EDB3: {
        Instruction step(cpu, 0x9F, 0x8B0685u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDB4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDB6: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDB7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDB9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDBA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDBC: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDBE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDC0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDC2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDC4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDC6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EDC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A8u : 0x0094A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EDC8.
    case 0xC1EDCA: {
        Instruction step(cpu, 0x94, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EDCB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EDCA.
    case 0xC1EDCC: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EDCD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EDCC.
    case 0xC1EDCE: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EDCD.
    case 0xC1EDCF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EDD0: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:96 LDA #FILE_SELECT_TEXT_TEXT_SPEED_LENGTH
    case 0xC1EDD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:96 LDA #FILE_SELECT_TEXT_TEXT_SPEED_LENGTH
    // Overlapping static entry reached from 0xC1EDD2.
    case 0xC1EDD4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:97 JSL MEMCPY24
    case 0xC1EDD5: {
        Instruction step(cpu, 0x22, 0xC08EDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Eu : 0x009F5Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDD9.
    case 0xC1EDDB: {
        Instruction step(cpu, 0x9F, 0x8B0685u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDDC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDDE: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDDF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDE1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDE2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDE4: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDE6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDE8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDEA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDEC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDEE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EDF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x0094AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDF0.
    case 0xC1EDF2: {
        Instruction step(cpu, 0x94, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EDF3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDF2.
    case 0xC1EDF4: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EDF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDF4.
    case 0xC1EDF6: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDF5.
    case 0xC1EDF7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EDF8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:102 LDA GAME_STATE + game_state::text_speed
    case 0xC1EDFA: {
        Instruction step(cpu, 0xAD, 0x009B67u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:103 AND #$00FF
    case 0xC1EDFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:103 AND #$00FF
    // Overlapping static entry reached from 0xC1EDFD.
    case 0xC1EDFF: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:104 DEC
    case 0xC1EE00: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:105 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EE01: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:105 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EE02: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:106 CLC
    case 0xC1EE03: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:107 ADC @VIRTUAL06
    case 0xC1EE04: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:108 STA @VIRTUAL06
    case 0xC1EE06: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:109 STA @LOCAL01
    case 0xC1EE08: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:110 LDA @VIRTUAL06+2
    case 0xC1EE0A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:111 STA @LOCAL01+2
    case 0xC1EE0C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:112 LDA #TEXT_SPEED_STRING_LENGTH
    case 0xC1EE0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:112 LDA #TEXT_SPEED_STRING_LENGTH
    // Overlapping static entry reached from 0xC1EE0E.
    case 0xC1EE10: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:113 JSL MEMCPY24
    case 0xC1EE11: {
        Instruction step(cpu, 0x22, 0xC08EDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:114 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EE15: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:115 LDA #1
    case 0xC1EE17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A401u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:116 LDY @LOCAL03
    case 0xC1EE19: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:116 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1EE17.
    case 0xC1EE1A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:117 STA SAVE_FILES_PRESENT,Y
    case 0xC1EE1B: {
        Instruction step(cpu, 0x99, 0x00B672u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:118 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE1E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:119 LDA GAME_STATE + game_state::text_flavour
    case 0xC1EE20: {
        Instruction step(cpu, 0xAD, 0x009C7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:120 AND #$00FF
    case 0xC1EE23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:120 AND #$00FF
    // Overlapping static entry reached from 0xC1EE23.
    case 0xC1EE25: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:121 XBA
    case 0xC1EE26: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:122 AND #$FF00
    case 0xC1EE27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:122 AND #$FF00
    // Overlapping static entry reached from 0xC1EE27.
    case 0xC1EE29: {
        Instruction step(cpu, 0xFF, 0x801685u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:123 STA @LOCAL02
    case 0xC1EE2A: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:124 BRA @UNKNOWN7
    case 0xC1EE2C: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:124 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC1EE29.
    case 0xC1EE2D: {
        Instruction step(cpu, 0x47, 0x0000A4u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:126 LDY @LOCAL03
    case 0xC1EE2E: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:126 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1EE2D.
    case 0xC1EE2F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:127 TYA
    case 0xC1EE30: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:128 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EE31: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:129 CLC
    case 0xC1EE33: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:130 ADC #CHAR::ONE
    case 0xC1EE34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000031u : 0x008D31u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:131 STA TEMPORARY_TEXT_BUFFER
    case 0xC1EE36: {
        Instruction step(cpu, 0x8D, 0x009F4Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:131 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1EE34.
    case 0xC1EE37: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:131 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1EE37.
    case 0xC1EE38: {
        Instruction step(cpu, 0x9F, 0xA920C2u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE39: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Bu : 0x009F4Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EE38.
    case 0xC1EE3C: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EE3B.
    case 0xC1EE3D: {
        Instruction step(cpu, 0x9F, 0x8B0685u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE3E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE40: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE41: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE43: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE44: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE46: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE48: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE4A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE4C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE4E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE50: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000099u : 0x009499u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE52.
    case 0xC1EE54: {
        Instruction step(cpu, 0x94, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE55: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE54.
    case 0xC1EE56: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE56.
    case 0xC1EE58: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE57.
    case 0xC1EE59: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE5A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:137 LDA #FILE_SELECT_TEXT_NEW_GAME_LENGTH
    case 0xC1EE5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:137 LDA #FILE_SELECT_TEXT_NEW_GAME_LENGTH
    // Overlapping static entry reached from 0xC1EE5C.
    case 0xC1EE5E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:138 JSL MEMCPY24
    case 0xC1EE5F: {
        Instruction step(cpu, 0x22, 0xC08EDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:139 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EE63: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:140 STZ TEMPORARY_TEXT_BUFFER + 11
    case 0xC1EE65: {
        Instruction step(cpu, 0x9C, 0x009F55u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:141 LDY @LOCAL03
    case 0xC1EE68: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:142 TYX
    case 0xC1EE6A: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:143 STZ SAVE_FILES_PRESENT,X
    case 0xC1EE6B: {
        Instruction step(cpu, 0x9E, 0x00B672u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:144 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE6E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:145 LDA #$100
    case 0xC1EE70: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:145 LDA #$100
    // Overlapping static entry reached from 0xC1EE70.
    case 0xC1EE72: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:146 STA @LOCAL02
    case 0xC1EE73: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:146 STA @LOCAL02
    // Overlapping static entry reached from 0xC1EE72.
    case 0xC1EE74: {
        Instruction step(cpu, 0x16, 0x000084u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:148 STY @VIRTUAL02
    case 0xC1EE75: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:148 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC1EE74.
    case 0xC1EE76: {
        Instruction step(cpu, 0x02, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:149 INC @VIRTUAL02
    case 0xC1EE77: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x009F4Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EE79.
    case 0xC1EE7B: {
        Instruction step(cpu, 0x9F, 0x8B0685u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE7C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE7E: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE7F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE81: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE82: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE84: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:151 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE86: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:152 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE88: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:152 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE8A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:152 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE8C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:152 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE8E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE90.
    case 0xC1EE92: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE93: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE95.
    case 0xC1EE97: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE98: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:154 LDA @LOCAL02
    case 0xC1EE9A: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:155 ORA @VIRTUAL02
    case 0xC1EE9C: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:156 JSR UNKNOWN_C115F4
    case 0xC1EE9E: {
        Instruction step(cpu, 0x20, 0x001BB0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:157 LDY @VIRTUAL02
    case 0xC1EEA1: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:158 STY @LOCAL03
    case 0xC1EEA3: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:160 CPY #3
    case 0xC1EEA5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:160 CPY #3
    // Overlapping static entry reached from 0xC1EEA5.
    case 0xC1EEA7: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/intro/file_select_menu-jp.asm:161 BCCL @UNKNOWN0
    case 0xC1EEA8: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/intro/file_select_menu-jp.asm:161 BCCL @UNKNOWN0
    case 0xC1EEAA: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/intro/file_select_menu-jp.asm:161 BCCL @UNKNOWN0
    case 0xC1EEAC: {
        Instruction step(cpu, 0x4C, 0x00ECF3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:162 LDY #0
    case 0xC1EEAF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:162 LDY #0
    // Overlapping static entry reached from 0xC1EEAF.
    case 0xC1EEB1: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:163 TYX
    case 0xC1EEB2: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:164 LDA #1
    case 0xC1EEB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:164 LDA #1
    // Overlapping static entry reached from 0xC1EEB3.
    case 0xC1EEB5: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:165 JSR UNKNOWN_C1180D
    case 0xC1EEB6: {
        Instruction step(cpu, 0x20, 0x001FA6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:166 LDA @VIRTUAL04
    case 0xC1EEB9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select_menu-jp.asm:167 BEQL @UNKNOWN18
    case 0xC1EEBB: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select_menu-jp.asm:167 BEQL @UNKNOWN18
    case 0xC1EEBD: {
        Instruction step(cpu, 0x4C, 0x00EF43u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:168 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EEC0: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:169 ASL
    case 0xC1EEC3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:170 TAX
    case 0xC1EEC4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:171 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EEC5: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:172 LDY #.SIZEOF(window_stats)
    case 0xC1EEC8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:172 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EEC8.
    case 0xC1EECA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:173 JSL MULT168
    case 0xC1EECB: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:174 TAX
    case 0xC1EECF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:175 LDA WINDOW_STATS + WINDOW::UNKNOWN2B,X
    case 0xC1EED0: {
        Instruction step(cpu, 0xBD, 0x0089EDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EED3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EED5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EED6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EED7: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EED9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEDA: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEDC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEDD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:177 CLC
    case 0xC1EEDE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:178 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1EEDF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:178 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1EEDF.
    case 0xC1EEE1: {
        Instruction step(cpu, 0x8D, 0x0084A8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:179 TAY
    case 0xC1EEE2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:180 STY @LOCAL02
    case 0xC1EEE3: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:180 STY @LOCAL02
    // Overlapping static entry reached from 0xC1EEE1.
    case 0xC1EEE4: {
        Instruction step(cpu, 0x16, 0x0000ADu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:181 LDA CURRENT_SAVE_SLOT
    case 0xC1EEE5: {
        Instruction step(cpu, 0xAD, 0x00B675u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:181 LDA CURRENT_SAVE_SLOT
    // Overlapping static entry reached from 0xC1EEE4.
    case 0xC1EEE6: {
        Instruction step(cpu, 0x75, 0x0000B6u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:182 AND #$00FF
    case 0xC1EEE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:182 AND #$00FF
    // Overlapping static entry reached from 0xC1EEE8.
    case 0xC1EEEA: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:183 TAX
    case 0xC1EEEB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:184 DEX
    case 0xC1EEEC: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:185 BRA @UNKNOWN17
    case 0xC1EEED: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:187 LDA __BSS_START__ + menu_option::next,Y
    case 0xC1EEEF: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEFB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEFC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:189 CLC
    case 0xC1EEFD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:190 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1EEFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:190 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1EEFE.
    case 0xC1EF00: {
        Instruction step(cpu, 0x8D, 0x0084A8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:191 TAY
    case 0xC1EF01: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:192 STY @LOCAL02
    case 0xC1EF02: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:192 STY @LOCAL02
    // Overlapping static entry reached from 0xC1EF00.
    case 0xC1EF03: {
        Instruction step(cpu, 0x16, 0x0000CAu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:193 DEX
    case 0xC1EF04: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:195 BNE @UNKNOWN16
    case 0xC1EF05: {
        Instruction step(cpu, 0xD0, 0x0000E8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:196 LDA #6
    case 0xC1EF07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:196 LDA #6
    // Overlapping static entry reached from 0xC1EF07.
    case 0xC1EF09: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:197 JSR UNKNOWN_C10FEA
    case 0xC1EF0A: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:198 LDY @LOCAL02
    case 0xC1EF0D: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:199 LDA a:menu_option::text_y,Y
    case 0xC1EF0F: {
        Instruction step(cpu, 0xB9, 0x00000Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:200 TAX
    case 0xC1EF12: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:201 LDA a:menu_option::text_x,Y
    case 0xC1EF13: {
        Instruction step(cpu, 0xB9, 0x000008u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:202 INC
    case 0xC1EF16: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:203 JSR UNKNOWN_C438A5
    case 0xC1EF17: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:204 LDY @LOCAL02
    case 0xC1EF1A: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:205 TYA
    case 0xC1EF1C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:206 CLC
    case 0xC1EF1D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:207 ADC #menu_option::label
    case 0xC1EF1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:207 ADC #menu_option::label
    // Overlapping static entry reached from 0xC1EF1E.
    case 0xC1EF20: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF21: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF23: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF24: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF26: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF27: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF29: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:209 REP #PROC_FLAGS::ACCUM8
    case 0xC1EF2B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF2D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF2F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF31: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF33: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:211 LDA #$FFFF
    case 0xC1EF35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:211 LDA #$FFFF
    // Overlapping static entry reached from 0xC1EF35.
    case 0xC1EF37: {
        Instruction step(cpu, 0xFF, 0x14DD20u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:212 JSR PRINT_STRING
    case 0xC1EF38: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:213 LDA #0
    case 0xC1EF3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:213 LDA #0
    // Overlapping static entry reached from 0xC1EF3B.
    case 0xC1EF3D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:214 JSR UNKNOWN_C10FEA
    case 0xC1EF3E: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:215 BRA @UNKNOWN20
    case 0xC1EF41: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:217 JSR CORRUPTION_CHECK
    case 0xC1EF43: {
        Instruction step(cpu, 0x20, 0x00EC5Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:219 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC1EF46: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:220 AND #$00FF
    case 0xC1EF49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:220 AND #$00FF
    // Overlapping static entry reached from 0xC1EF49.
    case 0xC1EF4B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:221 BNE @UNKNOWN19
    case 0xC1EF4C: {
        Instruction step(cpu, 0xD0, 0x0000F8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:222 LDA #MUSIC::SETUP_SCREEN
    case 0xC1EF4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:222 LDA #MUSIC::SETUP_SCREEN
    // Overlapping static entry reached from 0xC1EF4E.
    case 0xC1EF50: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:223 JSL CHANGE_MUSIC
    case 0xC1EF51: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1EF55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Fu : 0x00EC4Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    // Overlapping static entry reached from 0xC1EF55.
    case 0xC1EF57: {
        Instruction step(cpu, 0xEC, 0x000E85u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1EF58: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1EF5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    // Overlapping static entry reached from 0xC1EF5A.
    case 0xC1EF5C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1EF5D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:225 JSR UNKNOWN_C11F5A
    case 0xC1EF5F: {
        Instruction step(cpu, 0x20, 0x00267Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:226 LDA #0
    case 0xC1EF62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:226 LDA #0
    // Overlapping static entry reached from 0xC1EF62.
    case 0xC1EF64: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:227 JSR SELECTION_MENU
    case 0xC1EF65: {
        Instruction step(cpu, 0x20, 0x002109u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:228 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EF68: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:229 STA CURRENT_SAVE_SLOT
    case 0xC1EF6A: {
        Instruction step(cpu, 0x8D, 0x00B675u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:230 JSR UNKNOWN_C11F8A
    case 0xC1EF6D: {
        Instruction step(cpu, 0x20, 0x0026ABu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:233 LDA CURRENT_SAVE_SLOT
    case 0xC1EF70: {
        Instruction step(cpu, 0xAD, 0x00B675u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:234 AND #$00FF
    case 0xC1EF73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:234 AND #$00FF
    // Overlapping static entry reached from 0xC1EF73.
    case 0xC1EF75: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:235 DEC
    case 0xC1EF76: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:236 JSL LOAD_GAME_SLOT
    case 0xC1EF77: {
        Instruction step(cpu, 0x22, 0xC0F97Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:237 LDA CURRENT_SAVE_SLOT
    case 0xC1EF7B: {
        Instruction step(cpu, 0xAD, 0x00B675u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:238 AND #$00FF
    case 0xC1EF7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu-jp.asm:238 AND #$00FF
    // Overlapping static entry reached from 0xC1EF7E.
    case 0xC1EF80: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select_menu-jp.asm:239 END_C_FUNCTION
    case 0xC1EF81: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select_menu-jp.asm:239 END_C_FUNCTION
    case 0xC1EF82: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
