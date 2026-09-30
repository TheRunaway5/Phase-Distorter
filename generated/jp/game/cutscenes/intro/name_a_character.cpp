// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/name_a_character.asm
bool resume_introduction_name_a_character(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/name_a_character.asm:3 BEGIN_C_FUNCTION
    case 0xC1EAF3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAF5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAF6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAF7: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC1EAF8.
    case 0xC1EAFA: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAFB: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAFC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:20 STY @LOCAL05
    case 0xC1EAFD: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:20 STY @LOCAL05
    // Overlapping static entry reached from 0xC1EAFA.
    case 0xC1EAFE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/intro/name_a_character.asm:21 TXY
    case 0xC1EAFF: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:22 STY @LOCAL04
    case 0xC1EB00: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:23 STA @VIRTUAL02
    case 0xC1EB02: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:25 STA @LOCAL03
    case 0xC1EB04: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:27 LDX @PARAM04
    case 0xC1EB06: {
        Instruction step(cpu, 0xA6, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:28 STX @VIRTUAL04
    case 0xC1EB08: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EB0A: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EB0C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EB0E: {
        Instruction step(cpu, 0xA5, 0x00002Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EB10: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:30 JSR SET_INSTANT_PRINTING
    case 0xC1EB12: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EB15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    // Overlapping static entry reached from 0xC1EB15.
    case 0xC1EB17: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EB18: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:35 LDX #0
    case 0xC1EB1B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:35 LDX #0
    // Overlapping static entry reached from 0xC1EB1B.
    case 0xC1EB1D: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:36 STX @LOCAL02
    case 0xC1EB1E: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:37 BRA @UNKNOWN1
    case 0xC1EB20: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/name_a_character.asm:39 LDA #CHAR::PLACEHOLDER
    case 0xC1EB22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Cu : 0x00005Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:39 LDA #CHAR::PLACEHOLDER
    // Overlapping static entry reached from 0xC1EB22.
    case 0xC1EB24: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:40 JSR PRINT_LETTER
    case 0xC1EB25: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:41 LDX @LOCAL02
    case 0xC1EB28: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:42 INX
    case 0xC1EB2A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:43 STX @LOCAL02
    case 0xC1EB2B: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:45 TXA
    case 0xC1EB2D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:46 CMP @VIRTUAL02
    case 0xC1EB2E: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:47 BCC @UNKNOWN0
    case 0xC1EB30: {
        Instruction step(cpu, 0x90, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/name_a_character.asm:48 LDX #0
    case 0xC1EB32: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:48 LDX #0
    // Overlapping static entry reached from 0xC1EB32.
    case 0xC1EB34: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:49 TXA
    case 0xC1EB35: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:50 JSR UNKNOWN_C438A5
    case 0xC1EB36: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:52 LDY @LOCAL04
    case 0xC1EB39: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:53 LDA __BSS_START__,Y
    case 0xC1EB3B: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:54 AND #$00FF
    case 0xC1EB3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC1EB3E.
    case 0xC1EB40: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:55 BEQ @UNKNOWN2
    case 0xC1EB41: {
        Instruction step(cpu, 0xF0, 0x000065u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/name_a_character.asm:57 TYA
    case 0xC1EB43: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB44: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB46: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB47: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB49: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB4A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB4C: {
        Instruction step(cpu, 0x64, 0x00000Du, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/name_a_character.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC1EB4E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/name_a_character.asm:60 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1EB50: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/name_a_character.asm:60 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1EB52: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/name_a_character.asm:60 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1EB54: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/name_a_character.asm:60 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1EB56: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:61 LDA @VIRTUAL02
    case 0xC1EB58: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:62 JSR PRINT_STRING
    case 0xC1EB5A: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:63 LDX #.LOWORD(WINDOW_STATS) + window_stats::text_x
    case 0xC1EB5D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000D0u : 0x0089D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:63 LDX #.LOWORD(WINDOW_STATS) + window_stats::text_x
    // Overlapping static entry reached from 0xC1EB5D.
    case 0xC1EB5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000086u : 0x001286u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/intro/name_a_character.asm:64 STX @LOCAL01
    case 0xC1EB60: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:64 STX @LOCAL01
    // Overlapping static entry reached from 0xC1EB5F.
    case 0xC1EB61: {
        Instruction step(cpu, 0x12, 0x000086u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:65 STX @VIRTUAL02
    case 0xC1EB62: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:65 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1EB61.
    case 0xC1EB63: {
        Instruction step(cpu, 0x02, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/intro/name_a_character.asm:66 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EB64: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:67 ASL
    case 0xC1EB67: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/name_a_character.asm:68 TAX
    case 0xC1EB68: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:69 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EB69: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:70 LDY #.SIZEOF(window_stats)
    case 0xC1EB6C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:70 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EB6C.
    case 0xC1EB6E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:71 JSL MULT168
    case 0xC1EB6F: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/name_a_character.asm:72 CLC
    case 0xC1EB73: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/name_a_character.asm:73 ADC @VIRTUAL02
    case 0xC1EB74: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/name_a_character.asm:74 TAX
    case 0xC1EB76: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:75 LDA __BSS_START__,X
    case 0xC1EB77: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:76 LDX @LOCAL03
    case 0xC1EB7A: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:77 STX @VIRTUAL02
    case 0xC1EB7C: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:78 CMP @VIRTUAL02
    case 0xC1EB7E: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:79 BCS @UNKNOWN3
    case 0xC1EB80: {
        Instruction step(cpu, 0xB0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/intro/name_a_character.asm:80 LDA #CHAR::BULLET
    case 0xC1EB82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:80 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1EB82.
    case 0xC1EB84: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:81 JSR PRINT_LETTER
    case 0xC1EB85: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:82 LDX @LOCAL01
    case 0xC1EB88: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:83 STX @VIRTUAL02
    case 0xC1EB8A: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:84 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EB8C: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:85 ASL
    case 0xC1EB8F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/intro/name_a_character.asm:86 TAX
    case 0xC1EB90: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:87 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EB91: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:88 LDY #.SIZEOF(window_stats)
    case 0xC1EB94: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:88 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EB94.
    case 0xC1EB96: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:89 JSL MULT168
    case 0xC1EB97: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/name_a_character.asm:90 CLC
    case 0xC1EB9B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/intro/name_a_character.asm:91 ADC @VIRTUAL02
    case 0xC1EB9C: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/intro/name_a_character.asm:92 TAX
    case 0xC1EB9E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:93 LDA __BSS_START__,X
    case 0xC1EB9F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:94 DEC
    case 0xC1EBA2: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/intro/name_a_character.asm:95 STA __BSS_START__,X
    case 0xC1EBA3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:101 BRA @UNKNOWN3
    case 0xC1EBA6: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/name_a_character.asm:104 LDA #CHAR::BULLET
    case 0xC1EBA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:104 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1EBA8.
    case 0xC1EBAA: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:105 JSR PRINT_LETTER
    case 0xC1EBAB: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:106 LDX #0
    case 0xC1EBAE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:106 LDX #0
    // Overlapping static entry reached from 0xC1EBAE.
    case 0xC1EBB0: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:107 TXA
    case 0xC1EBB1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:108 JSR UNKNOWN_C438A5
    case 0xC1EBB2: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    case 0xC1EBB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    // Overlapping static entry reached from 0xC1EBB5.
    case 0xC1EBB7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    case 0xC1EBB8: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBBB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBBD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBBF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBC1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:124 LDA @VIRTUAL04
    case 0xC1EBC3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:125 JSR PRINT_STRING
    case 0xC1EBC5: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:126 LDX #0
    case 0xC1EBC8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:126 LDX #0
    // Overlapping static entry reached from 0xC1EBC8.
    case 0xC1EBCA: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:127 LDA #1
    case 0xC1EBCB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:127 LDA #1
    // Overlapping static entry reached from 0xC1EBCB.
    case 0xC1EBCD: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:128 JSR CC_13_14
    case 0xC1EBCE: {
        Instruction step(cpu, 0x20, 0x00036Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/name_a_character.asm:129 STZ_BADOPT @LOCAL00
    case 0xC1EBD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/name_a_character.asm:129 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC1EBD1.
    case 0xC1EBD3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/name_a_character.asm:129 STZ_BADOPT @LOCAL00
    case 0xC1EBD4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:130 LDA @LOCAL05
    case 0xC1EBD6: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:131 STA @LOCAL00+2
    case 0xC1EBD8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:132 LDY @LOCAL04
    case 0xC1EBDA: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:134 LDA @LOCAL03
    case 0xC1EBDC: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:135 STA @VIRTUAL02
    case 0xC1EBDE: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:137 LDX @VIRTUAL02
    case 0xC1EBE0: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:138 LDA #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EBE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:138 LDA #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    // Overlapping static entry reached from 0xC1EBE2.
    case 0xC1EBE4: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:139 JSR TEXT_INPUT_DIALOG
    case 0xC1EBE5: {
        Instruction step(cpu, 0x20, 0x00E498u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:140 TAX
    case 0xC1EBE8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:141 STX @LOCAL05
    case 0xC1EBE9: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:142 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1EBEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:142 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1EBEB.
    case 0xC1EBED: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:143 JSR CLOSE_WINDOW
    case 0xC1EBEE: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:144 LDX @LOCAL05
    case 0xC1EBF1: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:145 TXA
    case 0xC1EBF3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/name_a_character.asm:146 END_C_FUNCTION
    case 0xC1EBF4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/name_a_character.asm:146 END_C_FUNCTION
    case 0xC1EBF5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
