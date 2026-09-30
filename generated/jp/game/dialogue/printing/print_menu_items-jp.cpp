// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/print_menu_items-jp.asm
bool resume_text_print_menu_items_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_menu_items-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC11BF0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_menu_items-jp.asm:11 END_STACK_VARS
    case 0xC11BF2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_menu_items-jp.asm:11 END_STACK_VARS
    case 0xC11BF3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_menu_items-jp.asm:11 END_STACK_VARS
    case 0xC11BF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E5u : 0x00FFE5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_menu_items-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC11BF4.
    case 0xC11BF6: {
        Instruction step(cpu, 0xFF, 0x96AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_menu_items-jp.asm:11 END_STACK_VARS
    case 0xC11BF7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC11BF8: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:12 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11BF6.
    case 0xC11BFA: {
        Instruction step(cpu, 0x8C, 0x00FFC9u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:13 CMP #.LOWORD(-1)
    case 0xC11BFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11BFB.
    case 0xC11BFD: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_menu_items-jp.asm:14 BEQL @UNKNOWN13
    case 0xC11BFE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:14 BEQL @UNKNOWN13
    case 0xC11C00: {
        Instruction step(cpu, 0x4C, 0x001DBDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:14 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC11BFD.
    case 0xC11C01: {
        Instruction step(cpu, 0xBD, 0x00AD1Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:15 LDA CURRENT_FOCUS_WINDOW
    case 0xC11C03: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:15 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11C01.
    case 0xC11C04: {
        Instruction step(cpu, 0x96, 0x00008Cu, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:16 ASL
    case 0xC11C06: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:17 TAX
    case 0xC11C07: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC11C08: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC11C0B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11C0B.
    case 0xC11C0D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:20 JSL MULT168
    case 0xC11C0E: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:21 CLC
    case 0xC11C12: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:22 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11C13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:22 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11C13.
    case 0xC11C15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:23 STA @VIRTUAL04
    case 0xC11C16: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:23 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC11C15.
    case 0xC11C17: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:24 STA @LOCAL05
    case 0xC11C18: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:24 STA @LOCAL05
    // Overlapping static entry reached from 0xC11C17.
    case 0xC11C19: {
        Instruction step(cpu, 0x19, 0x0004A6u, 3u, AddressMode::AbsoluteIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:25 LDX @VIRTUAL04
    case 0xC11C1A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:26 LDA a:window_stats::current_option,X
    case 0xC11C1C: {
        Instruction step(cpu, 0xBD, 0x00002Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:27 CMP #.LOWORD(-1)
    case 0xC11C1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:27 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11C1F.
    case 0xC11C21: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_menu_items-jp.asm:28 BEQL @UNKNOWN13
    case 0xC11C22: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:28 BEQL @UNKNOWN13
    case 0xC11C24: {
        Instruction step(cpu, 0x4C, 0x001DBDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:28 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC11C21.
    case 0xC11C25: {
        Instruction step(cpu, 0xBD, 0x00851Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C27: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11C25.
    case 0xC11C28: {
        Instruction step(cpu, 0x04, 0x00000Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C29: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C2A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C2B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C2D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C2E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C30: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C31: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:31 CLC
    case 0xC11C32: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11C33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11C33.
    case 0xC11C35: {
        Instruction step(cpu, 0x8D, 0x000285u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:33 STA @VIRTUAL02
    case 0xC11C36: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:34 JSR SET_INSTANT_PRINTING
    case 0xC11C38: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:36 LDX @VIRTUAL02
    case 0xC11C3B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:37 LDA a:menu_option::page,X
    case 0xC11C3D: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:38 LDX @LOCAL05
    case 0xC11C40: {
        Instruction step(cpu, 0xA6, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:39 STX @VIRTUAL04
    case 0xC11C42: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:40 CMP a:window_stats::menu_page_number,X
    case 0xC11C44: {
        Instruction step(cpu, 0xDD, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:41 BEQ @UNKNOWN3
    case 0xC11C47: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:42 CMP #0
    case 0xC11C49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:42 CMP #0
    // Overlapping static entry reached from 0xC11C49.
    case 0xC11C4B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/print_menu_items-jp.asm:43 BNEL @UNKNOWN12
    case 0xC11C4C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:43 BNEL @UNKNOWN12
    case 0xC11C4E: {
        Instruction step(cpu, 0x4C, 0x001D9Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:45 LDX @VIRTUAL02
    case 0xC11C51: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:46 LDA a:menu_option::text_y,X
    case 0xC11C53: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:47 TAX
    case 0xC11C56: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:48 STX @LOCAL04
    case 0xC11C57: {
        Instruction step(cpu, 0x86, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:49 LDX @VIRTUAL02
    case 0xC11C59: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:50 LDA a:menu_option::text_x,X
    case 0xC11C5B: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:51 LDX @LOCAL04
    case 0xC11C5E: {
        Instruction step(cpu, 0xA6, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:52 JSR UNKNOWN_C438A5
    case 0xC11C60: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:53 LDA #$2F
    case 0xC11C63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:53 LDA #$2F
    // Overlapping static entry reached from 0xC11C63.
    case 0xC11C65: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:54 JSR PRINT_LETTER
    case 0xC11C66: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:55 LDX @VIRTUAL02
    case 0xC11C69: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:56 LDA a:menu_option::page,X
    case 0xC11C6B: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/print_menu_items-jp.asm:57 BNEL @UNKNOWN11
    case 0xC11C6E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:57 BNEL @UNKNOWN11
    case 0xC11C70: {
        Instruction step(cpu, 0x4C, 0x001D7Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:58 LDA #0
    case 0xC11C73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:58 LDA #0
    // Overlapping static entry reached from 0xC11C73.
    case 0xC11C75: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:59 JSR UNKNOWN_C10FEA
    case 0xC11C76: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:60 LDA #$014F
    case 0xC11C79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Fu : 0x00014Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:60 LDA #$014F
    // Overlapping static entry reached from 0xC11C79.
    case 0xC11C7B: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:61 JSR PRINT_LETTER
    case 0xC11C7C: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:61 JSR PRINT_LETTER
    // Overlapping static entry reached from 0xC11C7B.
    case 0xC11C7D: {
        Instruction step(cpu, 0xEC, 0x00A911u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:62 LDA #0
    case 0xC11C7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:62 LDA #0
    // Overlapping static entry reached from 0xC11C7D.
    case 0xC11C80: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:62 LDA #0
    // Overlapping static entry reached from 0xC11C7F.
    case 0xC11C81: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:63 JSR UNKNOWN_C10FEA
    case 0xC11C82: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:64 LDA @VIRTUAL04
    case 0xC11C85: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:65 CLC
    case 0xC11C87: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:66 ADC #window_stats::title
    case 0xC11C88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:66 ADC #window_stats::title
    // Overlapping static entry reached from 0xC11C88.
    case 0xC11C8A: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:67 TAY
    case 0xC11C8B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:68 LDA __BSS_START__,Y
    case 0xC11C8C: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:69 AND #$00FF
    case 0xC11C8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC11C8F.
    case 0xC11C91: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_menu_items-jp.asm:70 BEQL @UNKNOWN11
    case 0xC11C92: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:70 BEQL @UNKNOWN11
    case 0xC11C94: {
        Instruction step(cpu, 0x4C, 0x001D7Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:71 LDX #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC11C97: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Au : 0x009F4Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:71 LDX #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC11C97.
    case 0xC11C99: {
        Instruction step(cpu, 0x9F, 0xE20980u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:72 BRA @UNKNOWN7
    case 0xC11C9A: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC11C9C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:74 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC11C99.
    case 0xC11C9D: {
        Instruction step(cpu, 0x20, 0x0016A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:75 LDA @LOCAL03
    case 0xC11C9E: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:76 STA __BSS_START__,X
    case 0xC11CA0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:77 INY
    case 0xC11CA3: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:78 INX
    case 0xC11CA4: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC11CA5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:81 LDA __BSS_START__,Y
    case 0xC11CA7: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:82 STA @LOCAL03
    case 0xC11CAA: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC11CAC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:84 AND #$00FF
    case 0xC11CAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC11CAE.
    case 0xC11CB0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:85 BEQ @UNKNOWN8
    case 0xC11CB1: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:86 AND #$00FF
    case 0xC11CB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC11CB3.
    case 0xC11CB5: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:87 CMP #58
    case 0xC11CB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00003Au : 0x00003Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:87 CMP #58
    // Overlapping static entry reached from 0xC11CB6.
    case 0xC11CB8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:88 BNE @UNKNOWN6
    case 0xC11CB9: {
        Instruction step(cpu, 0xD0, 0x0000E1u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC11CBB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:91 LDA #58
    case 0xC11CBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Au : 0x009D3Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:92 STA __BSS_START__,X
    case 0xC11CBF: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:92 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11CBD.
    case 0xC11CC0: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:93 INX
    case 0xC11CC2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC11CC3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:95 LDA @VIRTUAL04
    case 0xC11CC5: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:96 CLC
    case 0xC11CC7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:97 ADC #window_stats::menu_page_number
    case 0xC11CC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:97 ADC #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC11CC8.
    case 0xC11CCA: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:98 TAY
    case 0xC11CCB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:99 STY @LOCAL02
    case 0xC11CCC: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:100 SEP #PROC_FLAGS::ACCUM8
    case 0xC11CCE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:101 LDA __BSS_START__,Y
    case 0xC11CD0: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:102 CLC
    case 0xC11CD3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:103 ADC #CHAR::ZERO
    case 0xC11CD4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000030u : 0x009D30u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:104 STA __BSS_START__,X
    case 0xC11CD6: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:104 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11CD4.
    case 0xC11CD7: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:105 INX
    case 0xC11CD9: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:106 LDA #59
    case 0xC11CDA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Bu : 0x009D3Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:107 STA __BSS_START__,X
    case 0xC11CDC: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:107 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11CDA.
    case 0xC11CDD: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:108 INX
    case 0xC11CDF: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:109 LDA #0
    case 0xC11CE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:110 STA __BSS_START__,X
    case 0xC11CE2: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:110 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11CE0.
    case 0xC11CE3: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC11CE5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x009F4Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC11CE7.
    case 0xC11CE9: {
        Instruction step(cpu, 0x9F, 0x8B0685u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CEA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CEC: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CED: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CEF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CF0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CF2: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:113 REP #PROC_FLAGS::ACCUM8
    case 0xC11CF4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items-jp.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11CF6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11CF8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items-jp.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11CFA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items-jp.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11CFC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:115 LDX #.LOWORD(-1)
    case 0xC11CFE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:115 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11CFE.
    case 0xC11D00: {
        Instruction step(cpu, 0xFF, 0x8C96ADu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:116 LDA CURRENT_FOCUS_WINDOW
    case 0xC11D01: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:117 JSL SET_WINDOW_TITLE
    case 0xC11D04: {
        Instruction step(cpu, 0x22, 0xC2030Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:118 LDA @VIRTUAL04
    case 0xC11D08: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:119 CLC
    case 0xC11D0A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:120 ADC #60
    case 0xC11D0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:120 ADC #60
    // Overlapping static entry reached from 0xC11D0B.
    case 0xC11D0D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D0E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D10: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D11: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D13: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D14: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D16: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:122 REP #PROC_FLAGS::ACCUM8
    case 0xC11D18: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items-jp.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D1A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D1C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items-jp.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D1E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items-jp.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D20: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:124 JSL STRLEN
    case 0xC11D22: {
        Instruction step(cpu, 0x22, 0xC08F13u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:125 STA @LOCAL01
    case 0xC11D26: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D28: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D2A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D2C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D2E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:127 LDA @LOCAL01
    case 0xC11D30: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:128 DEC
    case 0xC11D32: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:129 DEC
    case 0xC11D33: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:130 JSR PRINT_STRING
    case 0xC11D34: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:131 LDY @LOCAL02
    case 0xC11D37: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:132 LDA __BSS_START__,Y
    case 0xC11D39: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:133 STA @LOCAL02
    case 0xC11D3C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:134 LDX @VIRTUAL04
    case 0xC11D3E: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:135 LDA a:window_stats::option_count,X
    case 0xC11D40: {
        Instruction step(cpu, 0xBD, 0x00002Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D43: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D45: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D46: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D47: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D49: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D4A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D4C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D4D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:137 TAX
    case 0xC11D4E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:138 LDA MENU_OPTIONS + menu_option::previous,X
    case 0xC11D4F: {
        Instruction step(cpu, 0xBD, 0x008D16u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D52: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D54: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D55: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D56: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D58: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D59: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D5B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D5C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:140 TAX
    case 0xC11D5D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:141 LDA @LOCAL02
    case 0xC11D5E: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:142 CMP MENU_OPTIONS + menu_option::page,X
    case 0xC11D60: {
        Instruction step(cpu, 0xDD, 0x008D18u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:143 BNE @UNKNOWN9
    case 0xC11D63: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:144 LDA #49
    case 0xC11D65: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000031u : 0x000031u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:144 LDA #49
    // Overlapping static entry reached from 0xC11D65.
    case 0xC11D67: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:145 BRA @UNKNOWN10
    case 0xC11D68: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:147 CLC
    case 0xC11D6A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:148 ADC #CHAR::ONE
    case 0xC11D6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000031u : 0x000031u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:148 ADC #CHAR::ONE
    // Overlapping static entry reached from 0xC11D6B.
    case 0xC11D6D: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:150 JSR PRINT_LETTER
    case 0xC11D6E: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:151 LDA #59
    case 0xC11D71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Bu : 0x00003Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:151 LDA #59
    // Overlapping static entry reached from 0xC11D71.
    case 0xC11D73: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:152 JSR PRINT_LETTER
    case 0xC11D74: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:153 LDA #153
    case 0xC11D77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000099u : 0x000099u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:153 LDA #153
    // Overlapping static entry reached from 0xC11D77.
    case 0xC11D79: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:154 JSR PRINT_LETTER
    case 0xC11D7A: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:155 BRA @UNKNOWN12
    case 0xC11D7D: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:157 LDA @VIRTUAL02
    case 0xC11D7F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:158 CLC
    case 0xC11D81: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:159 ADC #menu_option::label
    case 0xC11D82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:159 ADC #menu_option::label
    // Overlapping static entry reached from 0xC11D82.
    case 0xC11D84: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D85: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D87: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D88: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D8A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D8B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D8D: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC11D8F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items-jp.asm:162 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D91: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:162 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D93: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items-jp.asm:162 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D95: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items-jp.asm:162 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D97: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:163 LDA #.LOWORD(-1)
    case 0xC11D99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:163 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11D99.
    case 0xC11D9B: {
        Instruction step(cpu, 0xFF, 0x14DD20u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:164 JSR PRINT_STRING
    case 0xC11D9C: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:166 LDX @VIRTUAL02
    case 0xC11D9F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:167 LDA a:menu_option::next,X
    case 0xC11DA1: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:168 CMP #.LOWORD(-1)
    case 0xC11DA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:168 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11DA4.
    case 0xC11DA6: {
        Instruction step(cpu, 0xFF, 0x8514F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:169 BEQ @UNKNOWN13
    case 0xC11DA7: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DA9: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11DA6.
    case 0xC11DAA: {
        Instruction step(cpu, 0x04, 0x00000Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DAB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DAC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DAD: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DAF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DB0: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DB2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DB3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:171 CLC
    case 0xC11DB4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:172 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11DB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:172 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11DB5.
    case 0xC11DB7: {
        Instruction step(cpu, 0x8D, 0x000285u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:173 STA @VIRTUAL02
    case 0xC11DB8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items-jp.asm:174 JMP @UNKNOWN2
    case 0xC11DBA: {
        Instruction step(cpu, 0x4C, 0x001C3Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_menu_items-jp.asm:176 END_C_FUNCTION
    case 0xC11DBD: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_menu_items-jp.asm:176 END_C_FUNCTION
    case 0xC11DBE: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
