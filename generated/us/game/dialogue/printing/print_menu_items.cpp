// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/print_menu_items.asm
bool resume_text_print_menu_items(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_menu_items.asm:3 BEGIN_C_FUNCTION
    case 0xC1163C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_menu_items.asm:9 END_STACK_VARS
    case 0xC1163E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_menu_items.asm:9 END_STACK_VARS
    case 0xC1163F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_menu_items.asm:9 END_STACK_VARS
    case 0xC11640: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E9u : 0x00FFE9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_menu_items.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC11640.
    case 0xC11642: {
        Instruction step(cpu, 0xFF, 0x58AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_menu_items.asm:9 END_STACK_VARS
    case 0xC11643: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/print_menu_items.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC11644: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:10 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11642.
    case 0xC11646: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000C9u : 0x00FFC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:11 CMP #.LOWORD(-1)
    case 0xC11647: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:11 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11646.
    case 0xC11648: {
        Instruction step(cpu, 0xFF, 0x03D0FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_menu_items.asm:11 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11647.
    case 0xC11649: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_menu_items.asm:12 BEQL @UNKNOWN13
    case 0xC1164A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items.asm:12 BEQL @UNKNOWN13
    case 0xC1164C: {
        Instruction step(cpu, 0x4C, 0x0017DEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items.asm:12 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC11649.
    case 0xC1164D: {
        Instruction step(cpu, 0xDE, 0x00AD17u, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // src/text/print_menu_items.asm:13 LDA CURRENT_FOCUS_WINDOW
    case 0xC1164F: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:13 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1164D.
    case 0xC11650: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/print_menu_items.asm:13 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11650.
    case 0xC11651: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x00000Au : 0x00AA0Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:14 ASL
    case 0xC11652: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/print_menu_items.asm:15 TAX
    case 0xC11653: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC11654: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC11657: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/print_menu_items.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11657.
    case 0xC11659: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:18 JSL MULT168
    case 0xC1165A: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items.asm:19 CLC
    case 0xC1165E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:20 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1165F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:20 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1165F.
    case 0xC11661: {
        Instruction step(cpu, 0x86, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:21 STA @VIRTUAL04
    case 0xC11662: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:21 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC11661.
    case 0xC11663: {
        Instruction step(cpu, 0x04, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:22 LDX @VIRTUAL04
    case 0xC11664: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:22 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC11663.
    case 0xC11665: {
        Instruction step(cpu, 0x04, 0x0000BDu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:23 LDA a:window_stats::current_option,X
    case 0xC11666: {
        Instruction step(cpu, 0xBD, 0x00002Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:23 LDA a:window_stats::current_option,X
    // Overlapping static entry reached from 0xC11665.
    case 0xC11667: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/print_menu_items.asm:23 LDA a:window_stats::current_option,X
    // Overlapping static entry reached from 0xC11667.
    case 0xC11668: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:24 CMP #.LOWORD(-1)
    case 0xC11669: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11669.
    case 0xC1166B: {
        Instruction step(cpu, 0xFF, 0xE20AD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_menu_items.asm:25 BNE @UNKNOWN1
    case 0xC1166C: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_menu_items.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC1166E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:26 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1166B.
    case 0xC1166F: {
        Instruction step(cpu, 0x20, 0x00FFA9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items.asm:27 LDA #$00FF
    case 0xC11670: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x008DFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:28 STA EARLY_TICK_EXIT
    case 0xC11672: {
        Instruction step(cpu, 0x8D, 0x00968Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:28 STA EARLY_TICK_EXIT
    // Overlapping static entry reached from 0xC11670.
    case 0xC11673: {
        Instruction step(cpu, 0x8C, 0x004C96u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/print_menu_items.asm:29 JMP @UNKNOWN13
    case 0xC11675: {
        Instruction step(cpu, 0x4C, 0x0017DEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/print_menu_items.asm:29 JMP @UNKNOWN13
    // Overlapping static entry reached from 0xC11673.
    case 0xC11676: {
        Instruction step(cpu, 0xDE, 0x00A017u, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11678: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11676.
    case 0xC11679: {
        Instruction step(cpu, 0x2D, 0x002200u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11678.
    case 0xC1167A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1167B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11679.
    case 0xC1167C: {
        Instruction step(cpu, 0xF7, 0x00008Fu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1167C.
    case 0xC1167E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000018u : 0x006918u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/print_menu_items.asm:33 CLC
    case 0xC1167F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:34 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11680: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x0089D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:34 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1167E.
    case 0xC11681: {
        Instruction step(cpu, 0xD4, 0x000089u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/text/print_menu_items.asm:34 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11680.
    case 0xC11682: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:35 STA @VIRTUAL02
    case 0xC11683: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:35 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC11682.
    case 0xC11684: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/print_menu_items.asm:36 JSR SET_INSTANT_PRINTING
    case 0xC11685: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items.asm:38 LDX @VIRTUAL02
    case 0xC11689: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:39 LDA a:menu_option::page,X
    case 0xC1168B: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:40 LDX @VIRTUAL04
    case 0xC1168E: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:41 CMP a:window_stats::menu_page_number,X
    case 0xC11690: {
        Instruction step(cpu, 0xDD, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:42 BEQ @UNKNOWN3
    case 0xC11693: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_menu_items.asm:43 CMP #0
    case 0xC11695: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:43 CMP #0
    // Overlapping static entry reached from 0xC11695.
    case 0xC11697: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/print_menu_items.asm:44 BNEL @UNKNOWN12
    case 0xC11698: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/print_menu_items.asm:44 BNEL @UNKNOWN12
    case 0xC1169A: {
        Instruction step(cpu, 0x4C, 0x0017C4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/print_menu_items.asm:46 LDA @VIRTUAL02
    case 0xC1169D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:47 JSL UNKNOWN_C43DDB
    case 0xC1169F: {
        Instruction step(cpu, 0x22, 0xC43DDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items.asm:48 LDX @VIRTUAL02
    case 0xC116A3: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:49 LDA a:menu_option::page,X
    case 0xC116A5: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/print_menu_items.asm:50 BNEL @UNKNOWN11
    case 0xC116A8: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/print_menu_items.asm:50 BNEL @UNKNOWN11
    case 0xC116AA: {
        Instruction step(cpu, 0x4C, 0x0017A4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/print_menu_items.asm:51 LDA #0
    case 0xC116AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:51 LDA #0
    // Overlapping static entry reached from 0xC116AD.
    case 0xC116AF: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:52 JSR UNKNOWN_C10FEA
    case 0xC116B0: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items.asm:53 LDA #$014F
    case 0xC116B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Fu : 0x00014Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:53 LDA #$014F
    // Overlapping static entry reached from 0xC116B3.
    case 0xC116B5: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:54 JSL UNKNOWN_C43F77
    case 0xC116B6: {
        Instruction step(cpu, 0x22, 0xC43F77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items.asm:54 JSL UNKNOWN_C43F77
    // Overlapping static entry reached from 0xC116B5.
    case 0xC116B7: {
        Instruction step(cpu, 0x77, 0x00003Fu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:54 JSL UNKNOWN_C43F77
    // Overlapping static entry reached from 0xC116B7.
    case 0xC116B9: {
        Instruction step(cpu, 0xC4, 0x000022u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/print_menu_items.asm:55 JSL UNKNOWN_C43CAA
    case 0xC116BA: {
        Instruction step(cpu, 0x22, 0xC43CAAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items.asm:55 JSL UNKNOWN_C43CAA
    // Overlapping static entry reached from 0xC116B9.
    case 0xC116BB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:55 JSL UNKNOWN_C43CAA
    // Overlapping static entry reached from 0xC116BB.
    case 0xC116BC: {
        Instruction step(cpu, 0x3C, 0x00A9C4u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:56 LDA #0
    case 0xC116BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:56 LDA #0
    // Overlapping static entry reached from 0xC116BC.
    case 0xC116BF: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:56 LDA #0
    // Overlapping static entry reached from 0xC116BE.
    case 0xC116C0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:57 JSR UNKNOWN_C10FEA
    case 0xC116C1: {
        Instruction step(cpu, 0x20, 0x000FEAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items.asm:58 LDA @VIRTUAL04
    case 0xC116C4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:59 CLC
    case 0xC116C6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:60 ADC #window_stats::title
    case 0xC116C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:60 ADC #window_stats::title
    // Overlapping static entry reached from 0xC116C7.
    case 0xC116C9: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:61 TAY
    case 0xC116CA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/print_menu_items.asm:62 LDA __BSS_START__,Y
    case 0xC116CB: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:63 AND #$00FF
    case 0xC116CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC116CE.
    case 0xC116D0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_menu_items.asm:64 BEQL @UNKNOWN11
    case 0xC116D1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items.asm:64 BEQL @UNKNOWN11
    case 0xC116D3: {
        Instruction step(cpu, 0x4C, 0x0017A4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/print_menu_items.asm:65 LDX #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC116D6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00009Fu : 0x009C9Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:65 LDX #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC116D6.
    case 0xC116D8: {
        Instruction step(cpu, 0x9C, 0x000980u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/print_menu_items.asm:66 BRA @UNKNOWN7
    case 0xC116D9: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_menu_items.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC116DB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:69 LDA @LOCAL03
    case 0xC116DD: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:70 STA __BSS_START__,X
    case 0xC116DF: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:71 INY
    case 0xC116E2: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/print_menu_items.asm:72 INX
    case 0xC116E3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC116E4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:75 LDA __BSS_START__,Y
    case 0xC116E6: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:76 STA @LOCAL03
    case 0xC116E9: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC116EB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:78 AND #$00FF
    case 0xC116ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC116ED.
    case 0xC116EF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:79 BEQ @UNKNOWN8
    case 0xC116F0: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/print_menu_items.asm:80 AND #$00FF
    case 0xC116F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC116F2.
    case 0xC116F4: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:81 CMP #88
    case 0xC116F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000058u : 0x000058u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:81 CMP #88
    // Overlapping static entry reached from 0xC116F5.
    case 0xC116F7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:82 BNE @UNKNOWN6
    case 0xC116F8: {
        Instruction step(cpu, 0xD0, 0x0000E1u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_menu_items.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC116FA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:85 LDA #88
    case 0xC116FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000058u : 0x009D58u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:86 STA __BSS_START__,X
    case 0xC116FE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:86 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC116FC.
    case 0xC116FF: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:87 INX
    case 0xC11701: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC11702: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:89 LDA @VIRTUAL04
    case 0xC11704: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:90 CLC
    case 0xC11706: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:91 ADC #window_stats::menu_page_number
    case 0xC11707: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:91 ADC #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC11707.
    case 0xC11709: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:92 TAY
    case 0xC1170A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/print_menu_items.asm:93 STY @LOCAL02
    case 0xC1170B: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/print_menu_items.asm:94 SEP #PROC_FLAGS::ACCUM8
    case 0xC1170D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:95 LDA __BSS_START__,Y
    case 0xC1170F: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:96 CLC
    case 0xC11712: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:97 ADC #CHAR::ZERO
    case 0xC11713: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x009D60u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:98 STA __BSS_START__,X
    case 0xC11715: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:98 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11713.
    case 0xC11716: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:99 INX
    case 0xC11718: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:100 LDA #89
    case 0xC11719: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000059u : 0x009D59u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:101 STA __BSS_START__,X
    case 0xC1171B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:101 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11719.
    case 0xC1171C: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:102 INX
    case 0xC1171E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:103 LDA #0
    case 0xC1171F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:104 STA __BSS_START__,X
    case 0xC11721: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:104 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1171F.
    case 0xC11722: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:105 JSL UNKNOWN_C43CAA
    case 0xC11724: {
        Instruction step(cpu, 0x22, 0xC43CAAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11728: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x009C9Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC11728.
    case 0xC1172A: {
        Instruction step(cpu, 0x9C, 0x000685u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1172B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1172D: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1172E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11730: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11731: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11733: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/print_menu_items.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC11735: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11737: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11739: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1173B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1173D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:110 LDX #.LOWORD(-1)
    case 0xC1173F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:110 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1173F.
    case 0xC11741: {
        Instruction step(cpu, 0xFF, 0x8958ADu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_menu_items.asm:111 LDA CURRENT_FOCUS_WINDOW
    case 0xC11742: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:112 JSL SET_WINDOW_TITLE
    case 0xC11745: {
        Instruction step(cpu, 0x22, 0xC2032Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items.asm:113 JSL UNKNOWN_C43CAA
    case 0xC11749: {
        Instruction step(cpu, 0x22, 0xC43CAAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1174D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1174F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11751: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11753: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:115 JSL STRLEN
    case 0xC11755: {
        Instruction step(cpu, 0x22, 0xC08F22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items.asm:116 STA @LOCAL01
    case 0xC11759: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items.asm:117 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1175B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items.asm:117 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1175D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items.asm:117 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1175F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items.asm:117 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11761: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:118 LDA @LOCAL01
    case 0xC11763: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:119 DEC
    case 0xC11765: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/print_menu_items.asm:120 DEC
    case 0xC11766: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/print_menu_items.asm:121 JSR PRINT_STRING
    case 0xC11767: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items.asm:122 LDY @LOCAL02
    case 0xC1176A: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/print_menu_items.asm:123 LDA __BSS_START__,Y
    case 0xC1176C: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:124 STA @LOCAL02
    case 0xC1176F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:125 LDX @VIRTUAL04
    case 0xC11771: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:126 LDA a:window_stats::option_count,X
    case 0xC11773: {
        Instruction step(cpu, 0xBD, 0x00002Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11776: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11776.
    case 0xC11778: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11779: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items.asm:128 TAX
    case 0xC1177D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:129 LDA MENU_OPTIONS + menu_option::previous,X
    case 0xC1177E: {
        Instruction step(cpu, 0xBD, 0x0089D8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11781: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11781.
    case 0xC11783: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11784: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/print_menu_items.asm:131 TAX
    case 0xC11788: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:132 LDA @LOCAL02
    case 0xC11789: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:133 CMP MENU_OPTIONS + menu_option::page,X
    case 0xC1178B: {
        Instruction step(cpu, 0xDD, 0x0089DAu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:134 BNE @UNKNOWN9
    case 0xC1178E: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/print_menu_items.asm:135 LDA #CHAR::ONE
    case 0xC11790: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000061u : 0x000061u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:135 LDA #CHAR::ONE
    // Overlapping static entry reached from 0xC11790.
    case 0xC11792: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:136 BRA @UNKNOWN10
    case 0xC11793: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_menu_items.asm:138 CLC
    case 0xC11795: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:139 ADC #CHAR::ONE
    case 0xC11796: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000061u : 0x000061u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:139 ADC #CHAR::ONE
    // Overlapping static entry reached from 0xC11796.
    case 0xC11798: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:141 JSR PRINT_LETTER
    case 0xC11799: {
        Instruction step(cpu, 0x20, 0x000CB6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items.asm:142 LDA #89
    case 0xC1179C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000059u : 0x000059u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:142 LDA #89
    // Overlapping static entry reached from 0xC1179C.
    case 0xC1179E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/print_menu_items.asm:143 JSR PRINT_LETTER
    case 0xC1179F: {
        Instruction step(cpu, 0x20, 0x000CB6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items.asm:144 BRA @UNKNOWN12
    case 0xC117A2: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/print_menu_items.asm:146 LDA @VIRTUAL02
    case 0xC117A4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:147 CLC
    case 0xC117A6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:148 ADC #menu_option::label
    case 0xC117A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:148 ADC #menu_option::label
    // Overlapping static entry reached from 0xC117A7.
    case 0xC117A9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117AA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117AC: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117AD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117AF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117B0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117B2: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/print_menu_items.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC117B4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC117B6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC117B8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC117BA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC117BC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:152 LDA #.LOWORD(-1)
    case 0xC117BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:152 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC117BE.
    case 0xC117C0: {
        Instruction step(cpu, 0xFF, 0x0EFC20u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_menu_items.asm:153 JSR PRINT_STRING
    case 0xC117C1: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/print_menu_items.asm:155 LDX @VIRTUAL02
    case 0xC117C4: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/print_menu_items.asm:156 LDA a:menu_option::next,X
    case 0xC117C6: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:157 CMP #.LOWORD(-1)
    case 0xC117C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:157 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC117C9.
    case 0xC117CB: {
        Instruction step(cpu, 0xFF, 0xA010F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/print_menu_items.asm:158 BEQ @UNKNOWN13
    case 0xC117CC: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC117CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC117CB.
    case 0xC117CF: {
        Instruction step(cpu, 0x2D, 0x002200u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC117CE.
    case 0xC117D0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC117D1: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC117CF.
    case 0xC117D2: {
        Instruction step(cpu, 0xF7, 0x00008Fu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC117D2.
    case 0xC117D4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000018u : 0x006918u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/print_menu_items.asm:160 CLC
    case 0xC117D5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:161 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC117D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x0089D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/print_menu_items.asm:161 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC117D4.
    case 0xC117D7: {
        Instruction step(cpu, 0xD4, 0x000089u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/text/print_menu_items.asm:161 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC117D6.
    case 0xC117D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/print_menu_items.asm:162 STA @VIRTUAL02
    case 0xC117D9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_menu_items.asm:162 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC117D8.
    case 0xC117DA: {
        Instruction step(cpu, 0x02, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/print_menu_items.asm:163 JMP @UNKNOWN2
    case 0xC117DB: {
        Instruction step(cpu, 0x4C, 0x001689u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/print_menu_items.asm:165 REP #PROC_FLAGS::ACCUM8
    case 0xC117DE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_menu_items.asm:166 END_C_FUNCTION
    case 0xC117E0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_menu_items.asm:166 END_C_FUNCTION
    case 0xC117E1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
