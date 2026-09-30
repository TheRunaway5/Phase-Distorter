// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/debug/y_button_guide.asm
bool resume_overworld_debug_y_button_guide(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/y_button_guide.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC14270: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC14272: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC14273: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC14274: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14274.
    case 0xC14276: {
        Instruction step(cpu, 0xFF, 0x00A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/y_button_guide.asm:8 END_STACK_VARS
    case 0xC14277: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:9 LDX #0
    case 0xC14278: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:9 LDX #0
    // Overlapping static entry reached from 0xC14278.
    case 0xC1427A: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:10 STX @LOCAL02
    case 0xC1427B: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:11 TXA
    case 0xC1427D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:12 STA @LOCAL01
    case 0xC1427E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:13 BRA @UNKNOWN2
    case 0xC14280: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:15 ASL
    case 0xC14282: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:16 TAX
    case 0xC14283: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:17 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC14284: {
        Instruction step(cpu, 0xBD, 0x000A58u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:18 CMP #.LOWORD(-1)
    case 0xC14287: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:18 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC14287.
    case 0xC14289: {
        Instruction step(cpu, 0xFF, 0xA605F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:19 BEQ @UNKNOWN1
    case 0xC1428A: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:20 LDX @LOCAL02
    case 0xC1428C: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:20 LDX @LOCAL02
    // Overlapping static entry reached from 0xC14289.
    case 0xC1428D: {
        Instruction step(cpu, 0x14, 0x0000E8u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:21 INX
    case 0xC1428E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:22 STX @LOCAL02
    case 0xC1428F: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:24 LDA @LOCAL01
    case 0xC14291: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:25 INC
    case 0xC14293: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:26 STA @LOCAL01
    case 0xC14294: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:28 CMP #MAX_ENTITIES
    case 0xC14296: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:28 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC14296.
    case 0xC14298: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:29 BCC @UNKNOWN0
    case 0xC14299: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:30 JSR SET_INSTANT_PRINTING
    case 0xC1429B: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_guide.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC1429E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_guide.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1429E.
    case 0xC142A0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/y_button_guide.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC142A1: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:32 LDA #3
    case 0xC142A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:32 LDA #3
    // Overlapping static entry reached from 0xC142A4.
    case 0xC142A6: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:33 JSR UNKNOWN_C10EB4
    case 0xC142A7: {
        Instruction step(cpu, 0x20, 0x001495u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:34 LDX @LOCAL02
    case 0xC142AA: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:35 TXA
    case 0xC142AC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/debug/y_button_guide.asm:36 STORE_INT1632 @VIRTUAL06
    case 0xC142AD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/debug/y_button_guide.asm:36 STORE_INT1632 @VIRTUAL06
    case 0xC142AF: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC142B1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC142B3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC142B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_guide.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC142B7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:38 JSR PRINT_NUMBER
    case 0xC142B9: {
        Instruction step(cpu, 0x20, 0x001344u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:39 JSR CLEAR_INSTANT_PRINTING
    case 0xC142BC: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:40 JSL WINDOW_TICK
    case 0xC142BF: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:41 BRA @UNKNOWN4
    case 0xC142C3: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:43 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC142C5: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:45 LDA PAD_PRESS
    case 0xC142C9: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:46 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC142CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:46 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC142CC.
    case 0xC142CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x00F4F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:47 BEQ @UNKNOWN3
    case 0xC142CF: {
        Instruction step(cpu, 0xF0, 0x0000F4u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:47 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC142CE.
    case 0xC142D0: {
        Instruction step(cpu, 0xF4, 0x0014A9u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:48 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC142D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:48 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC142D1.
    case 0xC142D3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_guide.asm:49 JSR CLOSE_WINDOW
    case 0xC142D4: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/y_button_guide.asm:50 END_C_FUNCTION
    case 0xC142D7: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/y_button_guide.asm:50 END_C_FUNCTION
    case 0xC142D8: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
