// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/file_select_menu.asm
bool resume_introduction_file_select_menu(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1ED5B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED5D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED5E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED5F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E0u : 0x00FFE0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC1ED60.
    case 0xC1ED62: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED63: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED64: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:14 STA @VIRTUAL02
    case 0xC1ED65: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1ED62.
    case 0xC1ED66: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:15 LDA #WINDOW::FILE_SELECT_MAIN
    case 0xC1ED67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:15 LDA #WINDOW::FILE_SELECT_MAIN
    // Overlapping static entry reached from 0xC1ED67.
    case 0xC1ED69: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:16 JSR CREATE_WINDOW
    case 0xC1ED6A: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:17 LDY #0
    case 0xC1ED6D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:17 LDY #0
    // Overlapping static entry reached from 0xC1ED6D.
    case 0xC1ED6F: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:18 STY @LOCAL03
    case 0xC1ED70: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:19 JMP @UNKNOWN7
    case 0xC1ED72: {
        Instruction step(cpu, 0x4C, 0x00EE58u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:21 TYA
    case 0xC1ED75: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:22 JSL LOAD_GAME_SLOT
    case 0xC1ED76: {
        Instruction step(cpu, 0x22, 0xEF0A68u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:23 LDA GAME_STATE + game_state::favourite_thing + 1
    case 0xC1ED7A: {
        Instruction step(cpu, 0xAD, 0x009826u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:24 AND #$00FF
    case 0xC1ED7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC1ED7D.
    case 0xC1ED7F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:25 BEQ @UNKNOWN5
    case 0xC1ED80: {
        Instruction step(cpu, 0xF0, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED82: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:27 STZ @LOCAL00
    case 0xC1ED84: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:28 LDX #32
    case 0xC1ED86: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:28 LDX #32
    // Overlapping static entry reached from 0xC1ED86.
    case 0xC1ED88: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED89: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:30 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1ED8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x009C9Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:30 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1ED8B.
    case 0xC1ED8D: {
        Instruction step(cpu, 0x9C, 0x00FC22u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:31 JSL MEMSET16
    case 0xC1ED8E: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:31 JSL MEMSET16
    // Overlapping static entry reached from 0xC1ED8D.
    case 0xC1ED90: {
        Instruction step(cpu, 0x8E, 0x00A4C0u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:32 LDY @LOCAL03
    case 0xC1ED92: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:32 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1ED90.
    case 0xC1ED93: {
        Instruction step(cpu, 0x1E, 0x00E298u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:33 TYA
    case 0xC1ED94: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED95: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:34 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1ED93.
    case 0xC1ED96: {
        Instruction step(cpu, 0x20, 0x006918u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:35 CLC
    case 0xC1ED97: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:36 ADC #CHAR::ONE
    case 0xC1ED98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000061u : 0x008D61u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:36 ADC #CHAR::ONE
    // Overlapping static entry reached from 0xC1ED96.
    case 0xC1ED99: {
        Instruction step(cpu, 0x61, 0x00008Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:37 STA TEMPORARY_TEXT_BUFFER
    case 0xC1ED9A: {
        Instruction step(cpu, 0x8D, 0x009C9Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:37 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1ED98.
    case 0xC1ED9B: {
        Instruction step(cpu, 0x9F, 0x6AA99Cu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:38 LDA #CHAR::COLON
    case 0xC1ED9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Au : 0x008D6Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:39 STA TEMPORARY_TEXT_BUFFER + 1
    case 0xC1ED9F: {
        Instruction step(cpu, 0x8D, 0x009CA0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:39 STA TEMPORARY_TEXT_BUFFER + 1
    // Overlapping static entry reached from 0xC1ED9D.
    case 0xC1EDA0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00009Cu : 0x00A99Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:40 LDA #CHAR::SPACE
    case 0xC1EDA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x008D50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:40 LDA #CHAR::SPACE
    // Overlapping static entry reached from 0xC1EDA0.
    case 0xC1EDA3: {
        Instruction step(cpu, 0x50, 0x00008Du, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:41 STA TEMPORARY_TEXT_BUFFER + 2
    case 0xC1EDA4: {
        Instruction step(cpu, 0x8D, 0x009CA1u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:41 STA TEMPORARY_TEXT_BUFFER + 2
    // Overlapping static entry reached from 0xC1EDA2.
    case 0xC1EDA5: {
        Instruction step(cpu, 0xA1, 0x00009Cu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:42 LDX #0
    case 0xC1EDA7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:42 LDX #0
    // Overlapping static entry reached from 0xC1EDA7.
    case 0xC1EDA9: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:43 BRA @UNKNOWN4
    case 0xC1EDAA: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EDAC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:46 STA TEMPORARY_TEXT_BUFFER + 3,X
    case 0xC1EDAE: {
        Instruction step(cpu, 0x9D, 0x009CA2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:47 INX
    case 0xC1EDB1: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDB2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:50 LDA PARTY_CHARACTERS + char_struct::name,X
    case 0xC1EDB4: {
        Instruction step(cpu, 0xBD, 0x0099CEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:51 AND #$00FF
    case 0xC1EDB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC1EDB7.
    case 0xC1EDB9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:52 BEQ @UNKNOWN3
    case 0xC1EDBA: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:53 CPX #.SIZEOF(char_struct::name)
    case 0xC1EDBC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:53 CPX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1EDBC.
    case 0xC1EDBE: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:54 BCC @UNKNOWN1
    case 0xC1EDBF: {
        Instruction step(cpu, 0x90, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EDC1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:57 STZ TEMPORARY_TEXT_BUFFER + 3,X
    case 0xC1EDC3: {
        Instruction step(cpu, 0x9E, 0x009CA2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:58 INX
    case 0xC1EDC6: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:60 CPX #.SIZEOF(char_struct::name)
    case 0xC1EDC7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:60 CPX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1EDC7.
    case 0xC1EDC9: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:61 BCC @UNKNOWN2
    case 0xC1EDCA: {
        Instruction step(cpu, 0x90, 0x0000E6u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:62 LDA #1
    case 0xC1EDCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009901u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:63 STA SAVE_FILES_PRESENT,Y
    case 0xC1EDCE: {
        Instruction step(cpu, 0x99, 0x00B49Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:63 STA SAVE_FILES_PRESENT,Y
    // Overlapping static entry reached from 0xC1EDCC.
    case 0xC1EDCF: {
        Instruction step(cpu, 0x9E, 0x00C2B4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDD1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:64 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1EDCF.
    case 0xC1EDD2: {
        Instruction step(cpu, 0x20, 0x00CDADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:65 LDA GAME_STATE + game_state::text_flavour
    case 0xC1EDD3: {
        Instruction step(cpu, 0xAD, 0x0099CDu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:65 LDA GAME_STATE + game_state::text_flavour
    // Overlapping static entry reached from 0xC1EDD2.
    case 0xC1EDD5: {
        Instruction step(cpu, 0x99, 0x00FF29u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:66 AND #$00FF
    case 0xC1EDD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC1EDD6.
    case 0xC1EDD8: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:67 XBA
    case 0xC1EDD9: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:68 AND #$FF00
    case 0xC1EDDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:68 AND #$FF00
    // Overlapping static entry reached from 0xC1EDDA.
    case 0xC1EDDC: {
        Instruction step(cpu, 0xFF, 0x801C85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:69 STA @LOCAL02
    case 0xC1EDDD: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:70 BRA @UNKNOWN6
    case 0xC1EDDF: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:70 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC1EDDC.
    case 0xC1EDE0: {
        Instruction step(cpu, 0x47, 0x0000A4u, 2u, AddressMode::DirectPageIndirectLong);
        step.xor_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:72 LDY @LOCAL03
    case 0xC1EDE1: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:72 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1EDE0.
    case 0xC1EDE2: {
        Instruction step(cpu, 0x1E, 0x00E298u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:73 TYA
    case 0xC1EDE3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EDE4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:74 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1EDE2.
    case 0xC1EDE5: {
        Instruction step(cpu, 0x20, 0x006918u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:75 CLC
    case 0xC1EDE6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:76 ADC #CHAR::ONE
    case 0xC1EDE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000061u : 0x008D61u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:76 ADC #CHAR::ONE
    // Overlapping static entry reached from 0xC1EDE5.
    case 0xC1EDE8: {
        Instruction step(cpu, 0x61, 0x00008Du, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:77 STA TEMPORARY_TEXT_BUFFER
    case 0xC1EDE9: {
        Instruction step(cpu, 0x8D, 0x009C9Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:77 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1EDE7.
    case 0xC1EDEA: {
        Instruction step(cpu, 0x9F, 0x20C29Cu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDEC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A0u : 0x009CA0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDEE.
    case 0xC1EDF0: {
        Instruction step(cpu, 0x9C, 0x000685u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF3: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF9: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:80 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDFB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDFD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDFF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE01: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE03: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Eu : 0x00C05Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE05.
    case 0xC1EE07: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x001285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE08: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE07.
    case 0xC1EE09: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE09.
    case 0xC1EE0B: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE0A.
    case 0xC1EE0C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE0D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:83 LDA #FILE_SELECT_TEXT_NEW_GAME_LENGTH
    case 0xC1EE0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:83 LDA #FILE_SELECT_TEXT_NEW_GAME_LENGTH
    // Overlapping static entry reached from 0xC1EE0F.
    case 0xC1EE11: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:84 JSL MEMCPY24
    case 0xC1EE12: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EE16: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:86 STZ TEMPORARY_TEXT_BUFFER + 17
    case 0xC1EE18: {
        Instruction step(cpu, 0x9C, 0x009CB0u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:87 LDY @LOCAL03
    case 0xC1EE1B: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:88 TYX
    case 0xC1EE1D: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:89 STZ SAVE_FILES_PRESENT,X
    case 0xC1EE1E: {
        Instruction step(cpu, 0x9E, 0x00B49Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE21: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:91 LDA #$100
    case 0xC1EE23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:91 LDA #$100
    // Overlapping static entry reached from 0xC1EE23.
    case 0xC1EE25: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:92 STA @LOCAL02
    case 0xC1EE26: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:92 STA @LOCAL02
    // Overlapping static entry reached from 0xC1EE25.
    case 0xC1EE27: {
        Instruction step(cpu, 0x1C, 0x000484u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:94 STY @VIRTUAL04
    case 0xC1EE28: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:95 INC @VIRTUAL04
    case 0xC1EE2A: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x009C9Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EE2C.
    case 0xC1EE2E: {
        Instruction step(cpu, 0x9C, 0x000685u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE2F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE31: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE32: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE34: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE35: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE37: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:97 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE39: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:98 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE3B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:98 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE3D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:98 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE3F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:98 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE41: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE43.
    case 0xC1EE45: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE46: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE48.
    case 0xC1EE4A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE4B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:100 LDA @LOCAL02
    case 0xC1EE4D: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:101 ORA @VIRTUAL04
    case 0xC1EE4F: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:102 JSR UNKNOWN_C115F4
    case 0xC1EE51: {
        Instruction step(cpu, 0x20, 0x0015F4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:103 LDY @VIRTUAL04
    case 0xC1EE54: {
        Instruction step(cpu, 0xA4, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:104 STY @LOCAL03
    case 0xC1EE56: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:106 CPY #SAVE_COUNT
    case 0xC1EE58: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:106 CPY #SAVE_COUNT
    // Overlapping static entry reached from 0xC1EE58.
    case 0xC1EE5A: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/intro/file_select_menu.asm:107 BCCL @UNKNOWN0
    case 0xC1EE5B: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/intro/file_select_menu.asm:107 BCCL @UNKNOWN0
    case 0xC1EE5D: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/intro/file_select_menu.asm:107 BCCL @UNKNOWN0
    case 0xC1EE5F: {
        Instruction step(cpu, 0x4C, 0x00ED75u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:108 LDY #0
    case 0xC1EE62: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:108 LDY #0
    // Overlapping static entry reached from 0xC1EE62.
    case 0xC1EE64: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:109 TYX
    case 0xC1EE65: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:110 LDA #1
    case 0xC1EE66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:110 LDA #1
    // Overlapping static entry reached from 0xC1EE66.
    case 0xC1EE68: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:111 JSR UNKNOWN_C1180D
    case 0xC1EE69: {
        Instruction step(cpu, 0x20, 0x00180Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:112 LDY #0
    case 0xC1EE6C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:112 LDY #0
    // Overlapping static entry reached from 0xC1EE6C.
    case 0xC1EE6E: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:113 STY @LOCALEB2
    case 0xC1EE6F: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:114 JMP @UNKNOWN14
    case 0xC1EE71: {
        Instruction step(cpu, 0x4C, 0x00EFCEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:116 TYA
    case 0xC1EE74: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:117 JSL LOAD_GAME_SLOT
    case 0xC1EE75: {
        Instruction step(cpu, 0x22, 0xEF0A68u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:118 LDA GAME_STATE + game_state::favourite_thing + 1
    case 0xC1EE79: {
        Instruction step(cpu, 0xAD, 0x009826u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:119 AND #$00FF
    case 0xC1EE7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC1EE7C.
    case 0xC1EE7E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select_menu.asm:120 BEQL @UNKNOWN13
    case 0xC1EE7F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select_menu.asm:120 BEQL @UNKNOWN13
    case 0xC1EE81: {
        Instruction step(cpu, 0x4C, 0x00EFC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x009C9Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EE84.
    case 0xC1EE86: {
        Instruction step(cpu, 0x9C, 0x000685u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE87: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE89: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE8A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE8C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE8D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE8F: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:122 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE91: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE93: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE95: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE97: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE99: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1EE9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00C06Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE9B.
    case 0xC1EE9D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x001285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1EE9E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE9D.
    case 0xC1EE9F: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1EEA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE9F.
    case 0xC1EEA1: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1EEA0.
    case 0xC1EEA2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1EEA3: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:125 LDA #FILE_SELECT_TEXT_LEVEL_LENGTH
    case 0xC1EEA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:125 LDA #FILE_SELECT_TEXT_LEVEL_LENGTH
    // Overlapping static entry reached from 0xC1EEA5.
    case 0xC1EEA7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:126 JSL MEMCPY24
    case 0xC1EEA8: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:127 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EEAC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:128 STZ TEMPORARY_TEXT_BUFFER + 6
    case 0xC1EEAE: {
        Instruction step(cpu, 0x9C, 0x009CA5u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:129 LDY @LOCALEB2
    case 0xC1EEB1: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:130 TYX
    case 0xC1EEB3: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:131 REP #PROC_FLAGS::ACCUM8
    case 0xC1EEB4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:132 LDA #9
    case 0xC1EEB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:132 LDA #9
    // Overlapping static entry reached from 0xC1EEB6.
    case 0xC1EEB8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:133 JSL UNKNOWN_C438A5
    case 0xC1EEB9: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEBD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEBF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEC1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEC3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:135 LDA #32
    case 0xC1EEC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:135 LDA #32
    // Overlapping static entry reached from 0xC1EEC5.
    case 0xC1EEC7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:136 JSR PRINT_STRING
    case 0xC1EEC8: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EECB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/intro/file_select_menu.asm:138 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1EECD: {
        Instruction step(cpu, 0xAD, 0x0099D3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/intro/file_select_menu.asm:138 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1EED0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:138 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1EED2: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/intro/file_select_menu.asm:138 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1EED4: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/intro/file_select_menu.asm:138 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1EED6: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:139 REP #PROC_FLAGS::ACCUM8
    case 0xC1EED8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEDA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEDC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEDE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEE0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:141 JSR UNKNOWN_C10D7C
    case 0xC1EEE2: {
        Instruction step(cpu, 0x20, 0x000D7Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:142 TAX
    case 0xC1EEE5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:143 CPX #1
    case 0xC1EEE6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:143 CPX #1
    // Overlapping static entry reached from 0xC1EEE6.
    case 0xC1EEE8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:144 BNE @UNKNOWN11
    case 0xC1EEE9: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:145 LDA #CHAR::SPACE
    case 0xC1EEEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:145 LDA #CHAR::SPACE
    // Overlapping static entry reached from 0xC1EEEB.
    case 0xC1EEED: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:146 BRA @UNKNOWN12
    case 0xC1EEEE: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:148 STX @VIRTUAL04
    case 0xC1EEF0: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:149 LDA #7
    case 0xC1EEF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:149 LDA #7
    // Overlapping static entry reached from 0xC1EEF2.
    case 0xC1EEF4: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:150 SEC
    case 0xC1EEF5: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:151 SBC @VIRTUAL04
    case 0xC1EEF6: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:152 TAX
    case 0xC1EEF8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:153 LDA NUMBER_TEXT_BUFFER,X
    case 0xC1EEF9: {
        Instruction step(cpu, 0xBD, 0x00895Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:154 AND #$00FF
    case 0xC1EEFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC1EEFC.
    case 0xC1EEFE: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:155 CLC
    case 0xC1EEFF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:156 ADC #CHAR::ZERO
    case 0xC1EF00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x000060u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:156 ADC #CHAR::ZERO
    // Overlapping static entry reached from 0xC1EF00.
    case 0xC1EF02: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EF03: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:159 STA TEMPORARY_TEXT_BUFFER
    case 0xC1EF05: {
        Instruction step(cpu, 0x8D, 0x009C9Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:160 LDA NUMBER_TEXT_BUFFER + 6
    case 0xC1EF08: {
        Instruction step(cpu, 0xAD, 0x008960u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:161 CLC
    case 0xC1EF0B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:162 ADC #CHAR::ZERO
    case 0xC1EF0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x008D60u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:163 STA TEMPORARY_TEXT_BUFFER + 1
    case 0xC1EF0E: {
        Instruction step(cpu, 0x8D, 0x009CA0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:163 STA TEMPORARY_TEXT_BUFFER + 1
    // Overlapping static entry reached from 0xC1EF0C.
    case 0xC1EF0F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00009Cu : 0x009C9Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:164 STZ TEMPORARY_TEXT_BUFFER + 2
    case 0xC1EF11: {
        Instruction step(cpu, 0x9C, 0x009CA1u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:164 STZ TEMPORARY_TEXT_BUFFER + 2
    // Overlapping static entry reached from 0xC1EF0F.
    case 0xC1EF12: {
        Instruction step(cpu, 0xA1, 0x00009Cu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:165 LDY @LOCALEB2
    case 0xC1EF14: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:166 TYX
    case 0xC1EF16: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC1EF17: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:168 LDA #13
    case 0xC1EF19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:168 LDA #13
    // Overlapping static entry reached from 0xC1EF19.
    case 0xC1EF1B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:169 JSL UNKNOWN_C438A5
    case 0xC1EF1C: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x009C9Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF20.
    case 0xC1EF22: {
        Instruction step(cpu, 0x9C, 0x000685u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF23: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF25: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF26: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF28: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF29: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF2B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC1EF2D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:172 MOVE_INT @VIRTUAL06, @LOCALEB1
    case 0xC1EF2F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:172 MOVE_INT @VIRTUAL06, @LOCALEB1
    case 0xC1EF31: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:172 MOVE_INT @VIRTUAL06, @LOCALEB1
    case 0xC1EF33: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:172 MOVE_INT @VIRTUAL06, @LOCALEB1
    case 0xC1EF35: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:173 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF37: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:173 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF39: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:173 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF3B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:173 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF3D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:174 LDA #32
    case 0xC1EF3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:174 LDA #32
    // Overlapping static entry reached from 0xC1EF3F.
    case 0xC1EF41: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:175 JSR PRINT_STRING
    case 0xC1EF42: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:176 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF45: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:176 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF47: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:176 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF49: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:176 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF4B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EF4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000074u : 0x00C074u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EF4D.
    case 0xC1EF4F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x001285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EF50: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EF4F.
    case 0xC1EF51: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EF52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EF51.
    case 0xC1EF53: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EF52.
    case 0xC1EF54: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EF55: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:178 LDA #FILE_SELECT_TEXT_TEXT_SPEED_LENGTH
    case 0xC1EF57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:178 LDA #FILE_SELECT_TEXT_TEXT_SPEED_LENGTH
    // Overlapping static entry reached from 0xC1EF57.
    case 0xC1EF59: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:179 JSL MEMCPY24
    case 0xC1EF5A: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:180 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EF5E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:181 LDA #CHAR::SPACE
    case 0xC1EF60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x008D50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:182 STA TEMPORARY_TEXT_BUFFER + 11
    case 0xC1EF62: {
        Instruction step(cpu, 0x8D, 0x009CAAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:182 STA TEMPORARY_TEXT_BUFFER + 11
    // Overlapping static entry reached from 0xC1EF60.
    case 0xC1EF63: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:182 STA TEMPORARY_TEXT_BUFFER + 11
    // Overlapping static entry reached from 0xC1EF63.
    case 0xC1EF64: {
        Instruction step(cpu, 0x9C, 0x0020C2u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:183 REP #PROC_FLAGS::ACCUM8
    case 0xC1EF65: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ABu : 0x009CABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF67.
    case 0xC1EF69: {
        Instruction step(cpu, 0x9C, 0x000685u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF6A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF6C: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF6D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF6F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF70: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF72: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC1EF74: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF76: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF78: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF7A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF7C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EF7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00C07Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF7E.
    case 0xC1EF80: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EF81: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF80.
    case 0xC1EF82: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EF83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF82.
    case 0xC1EF84: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF83.
    case 0xC1EF85: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EF86: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:188 LDA GAME_STATE + game_state::text_speed
    case 0xC1EF88: {
        Instruction step(cpu, 0xAD, 0x0098B6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:189 AND #$00FF
    case 0xC1EF8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:189 AND #$00FF
    // Overlapping static entry reached from 0xC1EF8B.
    case 0xC1EF8D: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:190 DEC
    case 0xC1EF8E: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/intro/file_select_menu.asm:191 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EF8F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/intro/file_select_menu.asm:191 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EF91: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/intro/file_select_menu.asm:191 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EF92: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/intro/file_select_menu.asm:191 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EF94: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/intro/file_select_menu.asm:191 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EF95: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:192 CLC
    case 0xC1EF97: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:193 ADC @VIRTUAL06
    case 0xC1EF98: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:194 STA @VIRTUAL06
    case 0xC1EF9A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:195 STA @LOCAL01
    case 0xC1EF9C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:196 LDA @VIRTUAL06+2
    case 0xC1EF9E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:197 STA @LOCAL01+2
    case 0xC1EFA0: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:198 LDA #TEXT_SPEED_STRING_LENGTH
    case 0xC1EFA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:198 LDA #TEXT_SPEED_STRING_LENGTH
    // Overlapping static entry reached from 0xC1EFA2.
    case 0xC1EFA4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:199 JSL MEMCPY24
    case 0xC1EFA5: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:200 LDY @LOCALEB2
    case 0xC1EFA9: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:201 TYX
    case 0xC1EFAB: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:202 LDA #16
    case 0xC1EFAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:202 LDA #16
    // Overlapping static entry reached from 0xC1EFAC.
    case 0xC1EFAE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:203 JSL UNKNOWN_C438A5
    case 0xC1EFAF: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:204 MOVE_INT @LOCALEB1, @VIRTUAL06
    case 0xC1EFB3: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:204 MOVE_INT @LOCALEB1, @VIRTUAL06
    case 0xC1EFB5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:204 MOVE_INT @LOCALEB1, @VIRTUAL06
    case 0xC1EFB7: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:204 MOVE_INT @LOCALEB1, @VIRTUAL06
    case 0xC1EFB9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:205 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EFBB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:205 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EFBD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:205 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EFBF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:205 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EFC1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:206 LDA #32
    case 0xC1EFC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:206 LDA #32
    // Overlapping static entry reached from 0xC1EFC3.
    case 0xC1EFC5: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:207 JSR PRINT_STRING
    case 0xC1EFC6: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:209 LDY @LOCALEB2
    case 0xC1EFC9: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:210 INY
    case 0xC1EFCB: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:211 STY @LOCALEB2
    case 0xC1EFCC: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:213 CPY #3
    case 0xC1EFCE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:213 CPY #3
    // Overlapping static entry reached from 0xC1EFCE.
    case 0xC1EFD0: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/intro/file_select_menu.asm:214 BCCL @UNKNOWN9
    case 0xC1EFD1: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/intro/file_select_menu.asm:214 BCCL @UNKNOWN9
    case 0xC1EFD3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/intro/file_select_menu.asm:214 BCCL @UNKNOWN9
    case 0xC1EFD5: {
        Instruction step(cpu, 0x4C, 0x00EE74u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:215 LDA @VIRTUAL02
    case 0xC1EFD8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:216 BEQ @UNKNOWN18
    case 0xC1EFDA: {
        Instruction step(cpu, 0xF0, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:217 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EFDC: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:218 ASL
    case 0xC1EFDF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:219 TAX
    case 0xC1EFE0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:220 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EFE1: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:221 LDY #.SIZEOF(window_stats)
    case 0xC1EFE4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:221 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EFE4.
    case 0xC1EFE6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:222 JSL MULT168
    case 0xC1EFE7: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:223 TAX
    case 0xC1EFEB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:224 LDA WINDOW_STATS + window_stats::current_option,X
    case 0xC1EFEC: {
        Instruction step(cpu, 0xBD, 0x00867Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:225 LDY #.SIZEOF(menu_option)
    case 0xC1EFEF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:225 LDY #.SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1EFEF.
    case 0xC1EFF1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:226 JSL MULT168
    case 0xC1EFF2: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:227 CLC
    case 0xC1EFF6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:228 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1EFF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x0089D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:228 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1EFF7.
    case 0xC1EFF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000A8u : 0x0084A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:229 TAY
    case 0xC1EFFA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:230 STY @LOCAL02
    case 0xC1EFFB: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:230 STY @LOCAL02
    // Overlapping static entry reached from 0xC1EFF9.
    case 0xC1EFFC: {
        Instruction step(cpu, 0x1C, 0x00A1ADu, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:231 LDA CURRENT_SAVE_SLOT
    case 0xC1EFFD: {
        Instruction step(cpu, 0xAD, 0x00B4A1u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:231 LDA CURRENT_SAVE_SLOT
    // Overlapping static entry reached from 0xC1EFFC.
    case 0xC1EFFF: {
        Instruction step(cpu, 0xB4, 0x000029u, 2u, AddressMode::DirectPageIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:232 AND #$00FF
    case 0xC1F000: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:232 AND #$00FF
    // Overlapping static entry reached from 0xC1EFFF.
    case 0xC1F001: {
        Instruction step(cpu, 0xFF, 0xCAAA00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:232 AND #$00FF
    // Overlapping static entry reached from 0xC1F000.
    case 0xC1F002: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:233 TAX
    case 0xC1F003: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:234 DEX
    case 0xC1F004: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:235 BRA @UNKNOWN17
    case 0xC1F005: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:237 LDA __BSS_START__ + menu_option::next,Y
    case 0xC1F007: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:238 LDY #.SIZEOF(menu_option)
    case 0xC1F00A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:238 LDY #.SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1F00A.
    case 0xC1F00C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:239 JSL MULT168
    case 0xC1F00D: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:240 CLC
    case 0xC1F011: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:241 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F012: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x0089D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:241 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F012.
    case 0xC1F014: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000A8u : 0x0084A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:242 TAY
    case 0xC1F015: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:243 STY @LOCAL02
    case 0xC1F016: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:243 STY @LOCAL02
    // Overlapping static entry reached from 0xC1F014.
    case 0xC1F017: {
        Instruction step(cpu, 0x1C, 0x00D0CAu, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:244 DEX
    case 0xC1F018: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:246 BNE @UNKNOWN16
    case 0xC1F019: {
        Instruction step(cpu, 0xD0, 0x0000ECu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:246 BNE @UNKNOWN16
    // Overlapping static entry reached from 0xC1F017.
    case 0xC1F01A: {
        Instruction step(cpu, 0xEC, 0x0006A9u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:247 LDA #6
    case 0xC1F01B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:247 LDA #6
    // Overlapping static entry reached from 0xC1F01B.
    case 0xC1F01D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:248 JSR UNKNOWN_C10FEA
    case 0xC1F01E: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:249 LDY @LOCAL02
    case 0xC1F021: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:250 LDA a:menu_option::text_y,Y
    case 0xC1F023: {
        Instruction step(cpu, 0xB9, 0x00000Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:251 TAX
    case 0xC1F026: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:252 LDA a:menu_option::text_x,Y
    case 0xC1F027: {
        Instruction step(cpu, 0xB9, 0x000008u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:253 INC
    case 0xC1F02A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:254 JSL UNKNOWN_C438A5
    case 0xC1F02B: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:255 STZ ENABLE_WORD_WRAP
    case 0xC1F02F: {
        Instruction step(cpu, 0x9C, 0x005E6Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:256 JSL UNKNOWN_C43B15
    case 0xC1F032: {
        Instruction step(cpu, 0x22, 0xC43B15u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:257 LDA #0
    case 0xC1F036: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:257 LDA #0
    // Overlapping static entry reached from 0xC1F036.
    case 0xC1F038: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:258 JSR UNKNOWN_C10FEA
    case 0xC1F039: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:259 BRA @UNKNOWN20
    case 0xC1F03C: {
        Instruction step(cpu, 0x80, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:261 JSR CORRUPTION_CHECK
    case 0xC1F03E: {
        Instruction step(cpu, 0x20, 0x00ECDCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:263 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC1F041: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:264 AND #$00FF
    case 0xC1F044: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:264 AND #$00FF
    // Overlapping static entry reached from 0xC1F044.
    case 0xC1F046: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:265 BNE @UNKNOWN19
    case 0xC1F047: {
        Instruction step(cpu, 0xD0, 0x0000F8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:266 LDA #MUSIC::SETUP_SCREEN
    case 0xC1F049: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:266 LDA #MUSIC::SETUP_SCREEN
    // Overlapping static entry reached from 0xC1F049.
    case 0xC1F04B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:267 JSL CHANGE_MUSIC
    case 0xC1F04C: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1F050: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D1u : 0x00ECD1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    // Overlapping static entry reached from 0xC1F050.
    case 0xC1F052: {
        Instruction step(cpu, 0xEC, 0x000E85u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1F053: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1F055: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0000C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    // Overlapping static entry reached from 0xC1F055.
    case 0xC1F057: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1F058: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:269 JSR UNKNOWN_C11F5A
    case 0xC1F05A: {
        Instruction step(cpu, 0x20, 0x001F5Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:270 LDA #0
    case 0xC1F05D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:270 LDA #0
    // Overlapping static entry reached from 0xC1F05D.
    case 0xC1F05F: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:271 JSR SELECTION_MENU
    case 0xC1F060: {
        Instruction step(cpu, 0x20, 0x00196Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:272 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F063: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:273 STA CURRENT_SAVE_SLOT
    case 0xC1F065: {
        Instruction step(cpu, 0x8D, 0x00B4A1u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:274 JSR UNKNOWN_C11F8A
    case 0xC1F068: {
        Instruction step(cpu, 0x20, 0x001F8Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:277 LDA CURRENT_SAVE_SLOT
    case 0xC1F06B: {
        Instruction step(cpu, 0xAD, 0x00B4A1u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:278 AND #$00FF
    case 0xC1F06E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:278 AND #$00FF
    // Overlapping static entry reached from 0xC1F06E.
    case 0xC1F070: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:279 DEC
    case 0xC1F071: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:280 JSL LOAD_GAME_SLOT
    case 0xC1F072: {
        Instruction step(cpu, 0x22, 0xEF0A68u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:281 LDA CURRENT_SAVE_SLOT
    case 0xC1F076: {
        Instruction step(cpu, 0xAD, 0x00B4A1u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:282 AND #$00FF
    case 0xC1F079: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/file_select_menu.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC1F079.
    case 0xC1F07B: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select_menu.asm:283 END_C_FUNCTION
    case 0xC1F07C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select_menu.asm:283 END_C_FUNCTION
    case 0xC1F07D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
