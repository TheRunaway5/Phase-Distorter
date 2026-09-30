// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/debug/y_button_goods.asm
bool resume_overworld_debug_y_button_goods(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/debug/y_button_goods.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC14344: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC14346: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC14347: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC14348: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14348.
    case 0xC1434A: {
        Instruction step(cpu, 0xFF, 0x00A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/debug/y_button_goods.asm:8 END_STACK_VARS
    case 0xC1434B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:9 LDX #0
    case 0xC1434C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:9 LDX #0
    // Overlapping static entry reached from 0xC1434C.
    case 0xC1434E: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:10 STX @VIRTUAL04
    case 0xC1434F: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:12 JSR SET_INSTANT_PRINTING
    case 0xC14351: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC14354: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC14354.
    case 0xC14356: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/debug/y_button_goods.asm:13 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MENU
    case 0xC14357: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:14 LDA #2
    case 0xC1435A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:14 LDA #2
    // Overlapping static entry reached from 0xC1435A.
    case 0xC1435C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:15 JSR UNKNOWN_C10EB4
    case 0xC1435D: {
        Instruction step(cpu, 0x20, 0x001495u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC14360: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC14362: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:23 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC14364: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14366: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14368: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1436A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1436C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:25 JSR PRINT_NUMBER
    case 0xC1436E: {
        Instruction step(cpu, 0x20, 0x001344u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:31 LDA @VIRTUAL04
    case 0xC14371: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:32 JSR UNKNOWN_C19216
    case 0xC14373: {
        Instruction step(cpu, 0x20, 0x009309u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:33 JSR CLEAR_INSTANT_PRINTING
    case 0xC14376: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:34 JSL WINDOW_TICK
    case 0xC14379: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:35 LDA @VIRTUAL04
    case 0xC1437D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:36 STA @VIRTUAL02
    case 0xC1437F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:38 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC14381: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:39 LDA PAD_HELD
    case 0xC14385: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:40 AND #PAD::UP
    case 0xC14388: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:40 AND #PAD::UP
    // Overlapping static entry reached from 0xC14388.
    case 0xC1438A: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:41 BEQ @UNKNOWN2
    case 0xC1438B: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:42 INC @VIRTUAL02
    case 0xC1438D: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:43 JMP @UNKNOWN7
    case 0xC1438F: {
        Instruction step(cpu, 0x4C, 0x00443Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:45 LDA PAD_HELD
    case 0xC14392: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:46 AND #PAD::DOWN
    case 0xC14395: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:46 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC14395.
    case 0xC14397: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:47 BEQ @UNKNOWN3
    case 0xC14398: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:47 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC14397.
    case 0xC14399: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:48 LDA @VIRTUAL02
    case 0xC1439A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:49 DEC
    case 0xC1439C: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:50 STA @VIRTUAL02
    case 0xC1439D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:51 JMP @UNKNOWN7
    case 0xC1439F: {
        Instruction step(cpu, 0x4C, 0x00443Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:53 LDA PAD_HELD
    case 0xC143A2: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:54 AND #PAD::RIGHT
    case 0xC143A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:54 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC143A5.
    case 0xC143A7: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:55 BEQ @UNKNOWN4
    case 0xC143A8: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:55 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xC143A7.
    case 0xC143A9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:56 LDA @VIRTUAL02
    case 0xC143AA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:57 CLC
    case 0xC143AC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:58 ADC #10
    case 0xC143AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:58 ADC #10
    // Overlapping static entry reached from 0xC143AD.
    case 0xC143AF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:59 STA @VIRTUAL02
    case 0xC143B0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:60 JMP @UNKNOWN7
    case 0xC143B2: {
        Instruction step(cpu, 0x4C, 0x00443Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:62 LDA PAD_HELD
    case 0xC143B5: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:63 AND #PAD::LEFT
    case 0xC143B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:63 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC143B8.
    case 0xC143BA: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:64 BEQ @UNKNOWN5
    case 0xC143BB: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:65 LDA @VIRTUAL02
    case 0xC143BD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:66 SEC
    case 0xC143BF: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:67 SBC #10
    case 0xC143C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:67 SBC #10
    // Overlapping static entry reached from 0xC143C0.
    case 0xC143C2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:68 STA @VIRTUAL02
    case 0xC143C3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:69 BRA @UNKNOWN7
    case 0xC143C5: {
        Instruction step(cpu, 0x80, 0x000074u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:71 LDA PAD_PRESS
    case 0xC143C7: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:72 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC143CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:72 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC143CA.
    case 0xC143CC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:73 BEQ @UNKNOWN6
    case 0xC143CD: {
        Instruction step(cpu, 0xF0, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC143CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC143CF.
    case 0xC143D1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC143D2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC143D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC143D4.
    case 0xC143D6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:74 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC143D7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143D9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143DB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143DD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143DF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC143E1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC143E3: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC143E5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/debug/y_button_goods.asm:76 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC143E7: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:77 LDX #1
    case 0xC143E9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:77 LDX #1
    // Overlapping static entry reached from 0xC143E9.
    case 0xC143EB: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:78 TXA
    case 0xC143EC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:79 JSR CHAR_SELECT_PROMPT
    case 0xC143ED: {
        Instruction step(cpu, 0x20, 0x002EE7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:80 TAY
    case 0xC143F0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:81 STY @LOCAL02
    case 0xC143F1: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:82 BEQ @UNKNOWN7
    case 0xC143F3: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:83 TYA
    case 0xC143F5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:84 JSL FIND_INVENTORY_SPACE2
    case 0xC143F6: {
        Instruction step(cpu, 0x22, 0xC43525u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:85 CMP #0
    case 0xC143FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:85 CMP #0
    // Overlapping static entry reached from 0xC143FA.
    case 0xC143FC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:86 BEQ @UNKNOWN7
    case 0xC143FD: {
        Instruction step(cpu, 0xF0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:87 LDX @VIRTUAL04
    case 0xC143FF: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:88 LDY @LOCAL02
    case 0xC14401: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:89 TYA
    case 0xC14403: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:90 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC14404: {
        Instruction step(cpu, 0x22, 0xC18C69u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:91 LDX @VIRTUAL04
    case 0xC14408: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:92 LDY @LOCAL02
    case 0xC1440A: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:93 TYA
    case 0xC1440C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:94 JSL UNKNOWN_C3EE14
    case 0xC1440D: {
        Instruction step(cpu, 0x22, 0xC3E9DAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:95 CMP #0
    case 0xC14411: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:95 CMP #0
    // Overlapping static entry reached from 0xC14411.
    case 0xC14413: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:96 BEQ @UNKNOWN9
    case 0xC14414: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:97 LDA @VIRTUAL04
    case 0xC14416: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:98 JSR GET_ITEM_TYPE
    case 0xC14418: {
        Instruction step(cpu, 0x20, 0x009EE3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:99 CMP #2
    case 0xC1441B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:99 CMP #2
    // Overlapping static entry reached from 0xC1441B.
    case 0xC1441D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:100 BNE @UNKNOWN9
    case 0xC1441E: {
        Instruction step(cpu, 0xD0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:101 LDY @LOCAL02
    case 0xC14420: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:102 TYA
    case 0xC14422: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:103 JSL UNKNOWN_C22351
    case 0xC14423: {
        Instruction step(cpu, 0x22, 0xC221EFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:104 TAX
    case 0xC14427: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:105 LDY @LOCAL02
    case 0xC14428: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:106 TYA
    case 0xC1442A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:107 JSR EQUIP_ITEM
    case 0xC1442B: {
        Instruction step(cpu, 0x20, 0x00911Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:108 BRA @UNKNOWN9
    case 0xC1442E: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:110 LDA PAD_PRESS
    case 0xC14430: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:111 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC14433: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:111 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC14433.
    case 0xC14435: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x0014D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:112 BNE @UNKNOWN9
    case 0xC14436: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:112 BNE @UNKNOWN9
    // Overlapping static entry reached from 0xC14435.
    case 0xC14437: {
        Instruction step(cpu, 0x14, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:113 JMP @UNKNOWN1
    case 0xC14438: {
        Instruction step(cpu, 0x4C, 0x004381u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:113 JMP @UNKNOWN1
    // Overlapping static entry reached from 0xC14437.
    case 0xC14439: {
        Instruction step(cpu, 0x81, 0x000043u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:115 LDA @VIRTUAL02
    case 0xC1443B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:116 CMP #$0100
    case 0xC1443D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:116 CMP #$0100
    // Overlapping static entry reached from 0xC1443D.
    case 0xC1443F: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:117 BCC @UNKNOWN8
    case 0xC14440: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:117 BCC @UNKNOWN8
    // Overlapping static entry reached from 0xC1443F.
    case 0xC14441: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:118 JMP @UNKNOWN0
    case 0xC14442: {
        Instruction step(cpu, 0x4C, 0x004351u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:118 JMP @UNKNOWN0
    // Overlapping static entry reached from 0xC14441.
    case 0xC14443: {
        Instruction step(cpu, 0x51, 0x000043u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:120 LDA @VIRTUAL02
    case 0xC14445: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:121 STA @VIRTUAL04
    case 0xC14447: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:122 JMP @UNKNOWN0
    case 0xC14449: {
        Instruction step(cpu, 0x4C, 0x004351u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:124 LDA #WINDOW::FILE_SELECT_MENU
    case 0xC1444C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:124 LDA #WINDOW::FILE_SELECT_MENU
    // Overlapping static entry reached from 0xC1444C.
    case 0xC1444E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/debug/y_button_goods.asm:125 JSR CLOSE_WINDOW
    case 0xC1444F: {
        Instruction step(cpu, 0x20, 0x000141u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/debug/y_button_goods.asm:126 END_C_FUNCTION
    case 0xC14452: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/debug/y_button_goods.asm:126 END_C_FUNCTION
    case 0xC14453: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
