// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/name_a_character.asm
bool resume_introduction_name_a_character(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/name_a_character.asm:3 BEGIN_C_FUNCTION
    case 0xC1EC04: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC06: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC07: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC08: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC1EC09.
    case 0xC1EC0B: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC0C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC0D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:20 STY @LOCAL05
    case 0xC1EC0E: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:20 STY @LOCAL05
    // Overlapping static entry reached from 0xC1EC0B.
    case 0xC1EC0F: {
        Instruction step(cpu, 0x14, 0x00009Bu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/intro/name_a_character.asm:21 TXY
    case 0xC1EC10: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:22 STY @LOCAL04
    case 0xC1EC11: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:23 STA @VIRTUAL02
    case 0xC1EC13: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:27 LDX @PARAM04
    case 0xC1EC15: {
        Instruction step(cpu, 0xA6, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:28 STX @VIRTUAL04
    case 0xC1EC17: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EC19: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EC1B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EC1D: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EC1F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:30 JSR SET_INSTANT_PRINTING
    case 0xC1EC21: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EC25: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    // Overlapping static entry reached from 0xC1EC25.
    case 0xC1EC27: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EC28: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:33 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1EC2B: {
        Instruction step(cpu, 0x22, 0xC3E4E0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/name_a_character.asm:52 LDY @LOCAL04
    case 0xC1EC2F: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:53 LDA __BSS_START__,Y
    case 0xC1EC31: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:54 AND #$00FF
    case 0xC1EC34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC1EC34.
    case 0xC1EC36: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:55 BEQ @UNKNOWN2
    case 0xC1EC37: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/name_a_character.asm:97 LDX @VIRTUAL02
    case 0xC1EC39: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:98 TYA
    case 0xC1EC3B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:99 JSL UNKNOWN_C440B5
    case 0xC1EC3C: {
        Instruction step(cpu, 0x22, 0xC440B5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/name_a_character.asm:99 JSL UNKNOWN_C440B5
    // Overlapping static entry reached from 0xC1EC9A.
    case 0xC1EC3E: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/intro/name_a_character.asm:101 BRA @UNKNOWN3
    case 0xC1EC40: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/name_a_character.asm:110 LDA @VIRTUAL02
    case 0xC1EC42: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:111 JSL UNKNOWN_C441B7
    case 0xC1EC44: {
        Instruction step(cpu, 0x22, 0xC441B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/name_a_character.asm:115 LDX #0
    case 0xC1EC48: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:115 LDX #0
    // Overlapping static entry reached from 0xC1EC48.
    case 0xC1EC4A: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:116 TXA
    case 0xC1EC4B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:117 JSR UNKNOWN_C438A5
    case 0xC1EC4C: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    case 0xC1EC50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    // Overlapping static entry reached from 0xC1EC50.
    case 0xC1EC52: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    case 0xC1EC53: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:121 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1EC56: {
        Instruction step(cpu, 0x22, 0xC3E4E0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC5A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC5C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC5E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC60: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:124 LDA @VIRTUAL04
    case 0xC1EC62: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:125 JSR PRINT_STRING
    case 0xC1EC64: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:126 LDX #0
    case 0xC1EC67: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:126 LDX #0
    // Overlapping static entry reached from 0xC1EC67.
    case 0xC1EC69: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:127 LDA #1
    case 0xC1EC6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:127 LDA #1
    // Overlapping static entry reached from 0xC1EC6A.
    case 0xC1EC6C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:128 JSR CC_13_14
    case 0xC1EC6D: {
        Instruction step(cpu, 0x20, 0x000166u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/intro/name_a_character.asm:129 STZ_BADOPT @LOCAL00
    case 0xC1EC70: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/intro/name_a_character.asm:130 LDA @LOCAL05
    case 0xC1EC72: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:131 STA @LOCAL00+2
    case 0xC1EC74: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:132 LDY @LOCAL04
    case 0xC1EC76: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/intro/name_a_character.asm:137 LDX @VIRTUAL02
    case 0xC1EC78: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:138 LDA #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EC7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:138 LDA #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    // Overlapping static entry reached from 0xC1EC7A.
    case 0xC1EC7C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:139 JSR TEXT_INPUT_DIALOG
    case 0xC1EC7D: {
        Instruction step(cpu, 0x20, 0x00E57Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/name_a_character.asm:140 TAX
    case 0xC1EC80: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:141 STX @LOCAL05
    case 0xC1EC81: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:142 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1EC83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/name_a_character.asm:142 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1EC83.
    case 0xC1EC85: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/name_a_character.asm:143 JSR CLOSE_WINDOW
    case 0xC1EC86: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/name_a_character.asm:144 LDX @LOCAL05
    case 0xC1EC8A: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/name_a_character.asm:145 TXA
    case 0xC1EC8C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/name_a_character.asm:146 END_C_FUNCTION
    case 0xC1EC8D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/name_a_character.asm:146 END_C_FUNCTION
    case 0xC1EC8E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
