// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/debug/y_button_goods.asm
bool resume_overworld_debug_y_button_goods(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/y_button_goods.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13EE7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC13EE9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC13EEA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC13EEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC13EEB.
    case 0xC13EED: {
        Instruction step(cpu, 0xFF, 0x00A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC13EEE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:9 LDX #0
    case 0xC13EEF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:9 LDX #0
    // Overlapping static entry reached from 0xC13EEF.
    case 0xC13EF1: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:10 STX @VIRTUAL04
    case 0xC13EF2: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:12 JSR SET_INSTANT_PRINTING
    case 0xC13EF4: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13EF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC13EF8.
    case 0xC13EFA: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC13EFB: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:14 LDA #2
    case 0xC13EFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:14 LDA #2
    // Overlapping static entry reached from 0xC13EFE.
    case 0xC13F00: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:15 JSR UNKNOWN_C10EB4
    case 0xC13F01: {
        Instruction step(cpu, 0x20, 0x000EB4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:17 LDA #130
    case 0xC13F04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000082u : 0x000082u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:17 LDA #130
    // Overlapping static entry reached from 0xC13F04.
    case 0xC13F06: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:18 JSR UNKNOWN_C10EB4
    case 0xC13F07: {
        Instruction step(cpu, 0x20, 0x000EB4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:19 LDX #0
    case 0xC13F0A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:19 LDX #0
    // Overlapping static entry reached from 0xC13F0A.
    case 0xC13F0C: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:20 TXA
    case 0xC13F0D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:21 JSL UNKNOWN_C438A5
    case 0xC13F0E: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC13F12: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC13F14: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC13F16: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F18: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F1A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F1C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F1E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:25 JSR PRINT_NUMBER
    case 0xC13F20: {
        Instruction step(cpu, 0x20, 0x000DF6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:27 LDX #0
    case 0xC13F23: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:27 LDX #0
    // Overlapping static entry reached from 0xC13F23.
    case 0xC13F25: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:28 LDA #3
    case 0xC13F26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:28 LDA #3
    // Overlapping static entry reached from 0xC13F26.
    case 0xC13F28: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:29 JSL UNKNOWN_C438A5
    case 0xC13F29: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:31 LDA @VIRTUAL04
    case 0xC13F2D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:32 JSR UNKNOWN_C19216
    case 0xC13F2F: {
        Instruction step(cpu, 0x20, 0x009216u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:33 JSR CLEAR_INSTANT_PRINTING
    case 0xC13F32: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:34 JSL WINDOW_TICK
    case 0xC13F36: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:35 LDA @VIRTUAL04
    case 0xC13F3A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:36 STA @VIRTUAL02
    case 0xC13F3C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:38 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC13F3E: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:39 LDA PAD_HELD
    case 0xC13F42: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:40 AND #PAD::UP
    case 0xC13F45: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:40 AND #PAD::UP
    // Overlapping static entry reached from 0xC13F45.
    case 0xC13F47: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:41 BEQ @UNKNOWN2
    case 0xC13F48: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:42 INC @VIRTUAL02
    case 0xC13F4A: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:43 JMP @UNKNOWN7
    case 0xC13F4C: {
        Instruction step(cpu, 0x4C, 0x003FF8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:45 LDA PAD_HELD
    case 0xC13F4F: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:46 AND #PAD::DOWN
    case 0xC13F52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:46 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC13F52.
    case 0xC13F54: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:47 BEQ @UNKNOWN3
    case 0xC13F55: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:47 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC13F54.
    case 0xC13F56: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:48 LDA @VIRTUAL02
    case 0xC13F57: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:49 DEC
    case 0xC13F59: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:50 STA @VIRTUAL02
    case 0xC13F5A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:51 JMP @UNKNOWN7
    case 0xC13F5C: {
        Instruction step(cpu, 0x4C, 0x003FF8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:53 LDA PAD_HELD
    case 0xC13F5F: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:54 AND #PAD::RIGHT
    case 0xC13F62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:54 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC13F62.
    case 0xC13F64: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:55 BEQ @UNKNOWN4
    case 0xC13F65: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:55 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC13F64.
    case 0xC13F66: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:56 LDA @VIRTUAL02
    case 0xC13F67: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:57 CLC
    case 0xC13F69: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:58 ADC #10
    case 0xC13F6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:58 ADC #10
    // Overlapping static entry reached from 0xC13F6A.
    case 0xC13F6C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:59 STA @VIRTUAL02
    case 0xC13F6D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:60 JMP @UNKNOWN7
    case 0xC13F6F: {
        Instruction step(cpu, 0x4C, 0x003FF8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:62 LDA PAD_HELD
    case 0xC13F72: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:63 AND #PAD::LEFT
    case 0xC13F75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:63 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC13F75.
    case 0xC13F77: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:64 BEQ @UNKNOWN5
    case 0xC13F78: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:65 LDA @VIRTUAL02
    case 0xC13F7A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:66 SEC
    case 0xC13F7C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:67 SBC #10
    case 0xC13F7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:67 SBC #10
    // Overlapping static entry reached from 0xC13F7D.
    case 0xC13F7F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:68 STA @VIRTUAL02
    case 0xC13F80: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:69 BRA @UNKNOWN7
    case 0xC13F82: {
        Instruction step(cpu, 0x80, 0x000074u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:71 LDA PAD_PRESS
    case 0xC13F84: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:72 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC13F87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:72 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC13F87.
    case 0xC13F89: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:73 BEQ @UNKNOWN6
    case 0xC13F8A: {
        Instruction step(cpu, 0xF0, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13F8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13F8C.
    case 0xC13F8E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13F8F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13F91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13F91.
    case 0xC13F93: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13F94: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F96: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F98: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F9A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13F9C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13F9E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13FA0: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13FA2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC13FA4: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:77 LDX #1
    case 0xC13FA6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:77 LDX #1
    // Overlapping static entry reached from 0xC13FA6.
    case 0xC13FA8: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:78 TXA
    case 0xC13FA9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:79 JSR CHAR_SELECT_PROMPT
    case 0xC13FAA: {
        Instruction step(cpu, 0x20, 0x0027EFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:80 TAY
    case 0xC13FAD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:81 STY @LOCAL02
    case 0xC13FAE: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:82 BEQ @UNKNOWN7
    case 0xC13FB0: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:83 TYA
    case 0xC13FB2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:84 JSL FIND_INVENTORY_SPACE2
    case 0xC13FB3: {
        Instruction step(cpu, 0x22, 0xC4572Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:85 CMP #0
    case 0xC13FB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:85 CMP #0
    // Overlapping static entry reached from 0xC13FB7.
    case 0xC13FB9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:86 BEQ @UNKNOWN7
    case 0xC13FBA: {
        Instruction step(cpu, 0xF0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:87 LDX @VIRTUAL04
    case 0xC13FBC: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:88 LDY @LOCAL02
    case 0xC13FBE: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:89 TYA
    case 0xC13FC0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:90 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC13FC1: {
        Instruction step(cpu, 0x22, 0xC18BC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:91 LDX @VIRTUAL04
    case 0xC13FC5: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:92 LDY @LOCAL02
    case 0xC13FC7: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:93 TYA
    case 0xC13FC9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:94 JSL UNKNOWN_C3EE14
    case 0xC13FCA: {
        Instruction step(cpu, 0x22, 0xC3EE14u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:95 CMP #0
    case 0xC13FCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:95 CMP #0
    // Overlapping static entry reached from 0xC13FCE.
    case 0xC13FD0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:96 BEQ @UNKNOWN9
    case 0xC13FD1: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:97 LDA @VIRTUAL04
    case 0xC13FD3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:98 JSR GET_ITEM_TYPE
    case 0xC13FD5: {
        Instruction step(cpu, 0x20, 0x009EE6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:99 CMP #2
    case 0xC13FD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:99 CMP #2
    // Overlapping static entry reached from 0xC13FD8.
    case 0xC13FDA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:100 BNE @UNKNOWN9
    case 0xC13FDB: {
        Instruction step(cpu, 0xD0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:101 LDY @LOCAL02
    case 0xC13FDD: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:102 TYA
    case 0xC13FDF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:103 JSL UNKNOWN_C22351
    case 0xC13FE0: {
        Instruction step(cpu, 0x22, 0xC22351u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:104 TAX
    case 0xC13FE4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:105 LDY @LOCAL02
    case 0xC13FE5: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:106 TYA
    case 0xC13FE7: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:107 JSR EQUIP_ITEM
    case 0xC13FE8: {
        Instruction step(cpu, 0x20, 0x009066u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:108 BRA @UNKNOWN9
    case 0xC13FEB: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:110 LDA PAD_PRESS
    case 0xC13FED: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:111 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC13FF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:111 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC13FF0.
    case 0xC13FF2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x0014D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:112 BNE @UNKNOWN9
    case 0xC13FF3: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:112 BNE @UNKNOWN9
    // Overlapping static entry reached from 0xC13FF2.
    case 0xC13FF4: {
        Instruction step(cpu, 0x14, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:113 JMP @UNKNOWN1
    case 0xC13FF5: {
        Instruction step(cpu, 0x4C, 0x003F3Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:113 JMP @UNKNOWN1
    // Overlapping static entry reached from 0xC13FF4.
    case 0xC13FF6: {
        Instruction step(cpu, 0x3E, 0x00A53Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:115 LDA @VIRTUAL02
    case 0xC13FF8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:115 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC13FF6.
    case 0xC13FF9: {
        Instruction step(cpu, 0x02, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:116 CMP #$0100
    case 0xC13FFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:116 CMP #$0100
    // Overlapping static entry reached from 0xC13FFA.
    case 0xC13FFC: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:117 BCC @UNKNOWN8
    case 0xC13FFD: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:117 BCC @UNKNOWN8
    // Overlapping static entry reached from 0xC13FFC.
    case 0xC13FFE: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:118 JMP @UNKNOWN0
    case 0xC13FFF: {
        Instruction step(cpu, 0x4C, 0x003EF4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:118 JMP @UNKNOWN0
    // Overlapping static entry reached from 0xC13FFE.
    case 0xC14000: {
        Instruction step(cpu, 0xF4, 0x00A53Eu, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:120 LDA @VIRTUAL02
    case 0xC14002: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:120 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC14000.
    case 0xC14003: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:121 STA @VIRTUAL04
    case 0xC14004: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:122 JMP @UNKNOWN0
    case 0xC14006: {
        Instruction step(cpu, 0x4C, 0x003EF4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:124 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC14009: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:124 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC14009.
    case 0xC1400B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:125 JSR CLOSE_WINDOW
    case 0xC1400C: {
        Instruction step(cpu, 0x22, 0xC3E521u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/y_button_goods.asm:126 END_C_FUNCTION
    case 0xC14010: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/y_button_goods.asm:126 END_C_FUNCTION
    case 0xC14011: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
