// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/selection_menu-jp.asm
bool resume_text_selection_menu_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/selection_menu-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC12109: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC1210B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC1210C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC1210D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC1210E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x00FFD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC1210E.
    case 0xC12110: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC12111: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/selection_menu-jp.asm:19 END_STACK_VARS
    case 0xC12112: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:20 STA @LOCAL0C
    case 0xC12113: {
        Instruction step(cpu, 0x85, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:20 STA @LOCAL0C
    // Overlapping static entry reached from 0xC12110.
    case 0xC12114: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:21 LDA CURRENT_FOCUS_WINDOW
    case 0xC12115: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:22 STA @LOCAL0B
    case 0xC12118: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:23 CMP #.LOWORD(-1)
    case 0xC1211A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:23 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1211A.
    case 0xC1211C: {
        Instruction step(cpu, 0xFF, 0xA906D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:24 BNE @UNKNOWN0
    case 0xC1211D: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:25 LDA #0
    case 0xC1211F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:25 LDA #0
    // Overlapping static entry reached from 0xC1211C.
    case 0xC12120: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:25 LDA #0
    // Overlapping static entry reached from 0xC1211F.
    case 0xC12121: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:26 JMP @UNKNOWN44
    case 0xC12122: {
        Instruction step(cpu, 0x4C, 0x002679u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:28 LDA CURRENT_FOCUS_WINDOW
    case 0xC12125: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:29 ASL
    case 0xC12128: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:30 TAX
    case 0xC12129: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:31 LDA OPEN_WINDOW_TABLE,X
    case 0xC1212A: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:32 LDY #.SIZEOF(window_stats)
    case 0xC1212D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:32 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1212D.
    case 0xC1212F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:33 JSL MULT168
    case 0xC12130: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:34 CLC
    case 0xC12134: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:35 ADC #.LOWORD(WINDOW_STATS)
    case 0xC12135: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:35 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC12135.
    case 0xC12137: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x002485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:36 STA @LOCAL0A
    case 0xC12138: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:36 STA @LOCAL0A
    // Overlapping static entry reached from 0xC12137.
    case 0xC12139: {
        Instruction step(cpu, 0x24, 0x0000A0u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:37 LDY #window_stats::selected_option
    case 0xC1213A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:37 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC12139.
    case 0xC1213B: {
        Instruction step(cpu, 0x2F, 0x24B100u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:37 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC1213A.
    case 0xC1213C: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:38 LDA (@LOCAL0A),Y
    case 0xC1213D: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:39 CMP #.LOWORD(-1)
    case 0xC1213F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:39 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1213F.
    case 0xC12141: {
        Instruction step(cpu, 0xFF, 0xAA72F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:40 BEQ @UNKNOWN4
    case 0xC12142: {
        Instruction step(cpu, 0xF0, 0x000072u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:41 TAX
    case 0xC12144: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:42 STX @LOCAL09
    case 0xC12145: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:43 STA @LOCAL08
    case 0xC12147: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:44 LDY #window_stats::current_option
    case 0xC12149: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Bu : 0x00002Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:44 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC12149.
    case 0xC1214B: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:45 LDA (@LOCAL0A),Y
    case 0xC1214C: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1214E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12150: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12151: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12152: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12154: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12155: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12157: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:46 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12158: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:47 CLC
    case 0xC12159: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:48 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1215A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:48 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1215A.
    case 0xC1215C: {
        Instruction step(cpu, 0x8D, 0x000285u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:49 STA @VIRTUAL02
    case 0xC1215D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:50 BRA @UNKNOWN3
    case 0xC1215F: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:52 DEX
    case 0xC12161: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:53 STX @LOCAL09
    case 0xC12162: {
        Instruction step(cpu, 0x86, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:54 LDX @VIRTUAL02
    case 0xC12164: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:55 LDA __BSS_START__+2,X
    case 0xC12166: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12169: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1216B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1216C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1216D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1216F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12170: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12172: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12173: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:57 CLC
    case 0xC12174: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:58 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC12175: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:58 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC12175.
    case 0xC12177: {
        Instruction step(cpu, 0x8D, 0x000285u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:59 STA @VIRTUAL02
    case 0xC12178: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:61 LDX @LOCAL09
    case 0xC1217A: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:62 BNE @UNKNOWN2
    case 0xC1217C: {
        Instruction step(cpu, 0xD0, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:63 JSR SET_INSTANT_PRINTING
    case 0xC1217E: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:64 LDX @VIRTUAL02
    case 0xC12181: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:65 LDA a:menu_option::text_y,X
    case 0xC12183: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:66 TAX
    case 0xC12186: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:67 STX @LOCAL07
    case 0xC12187: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:68 LDX @VIRTUAL02
    case 0xC12189: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:69 LDA a:menu_option::text_x,X
    case 0xC1218B: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:70 INC
    case 0xC1218E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:71 LDX @LOCAL07
    case 0xC1218F: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:72 JSR UNKNOWN_C438A5
    case 0xC12191: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:73 LDA @VIRTUAL02
    case 0xC12194: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:74 CLC
    case 0xC12196: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:75 ADC #menu_option::label
    case 0xC12197: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:75 ADC #menu_option::label
    // Overlapping static entry reached from 0xC12197.
    case 0xC12199: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1219A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1219C: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1219D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1219F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC121A0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/selection_menu-jp.asm:76 PROMOTENEARPTRA @VIRTUAL06
    case 0xC121A2: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC121A4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121A6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121A8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121AA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC121AC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:79 LDA #.LOWORD(-1)
    case 0xC121AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:79 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC121AE.
    case 0xC121B0: {
        Instruction step(cpu, 0xFF, 0x14DD20u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:80 JSR PRINT_STRING
    case 0xC121B1: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:81 BRA @UNKNOWN5
    case 0xC121B4: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:83 STZ @LOCAL08
    case 0xC121B6: {
        Instruction step(cpu, 0x64, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:84 LDY #window_stats::current_option
    case 0xC121B8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Bu : 0x00002Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:84 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC121B8.
    case 0xC121BA: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:85 LDA (@LOCAL0A),Y
    case 0xC121BB: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121BD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C4: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:86 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC121C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:87 CLC
    case 0xC121C8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:88 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC121C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:88 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC121C9.
    case 0xC121CB: {
        Instruction step(cpu, 0x8D, 0x000285u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:89 STA @VIRTUAL02
    case 0xC121CC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:91 STZ @LOCAL09
    case 0xC121CE: {
        Instruction step(cpu, 0x64, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:92 LDA @VIRTUAL02
    case 0xC121D0: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:93 CLC
    case 0xC121D2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:94 ADC #menu_option::script
    case 0xC121D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:94 ADC #menu_option::script
    // Overlapping static entry reached from 0xC121D3.
    case 0xC121D5: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:95 TAY
    case 0xC121D6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:96 STY @LOCAL06
    case 0xC121D7: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC121D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC121D9.
    case 0xC121DB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC121DC: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC121DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC121DE.
    case 0xC121E0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:97 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC121E1: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu-jp.asm:98 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121E3: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:98 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121E6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu-jp.asm:98 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121E8: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:98 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121EB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:99 CMP @VIRTUAL0A+2
    case 0xC121ED: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:100 BNE @UNKNOWN6
    case 0xC121EF: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:101 LDA @VIRTUAL06
    case 0xC121F1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:102 CMP @VIRTUAL0A
    case 0xC121F3: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:104 BEQ @UNKNOWN7
    case 0xC121F5: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:105 JSR SET_INSTANT_PRINTING
    case 0xC121F7: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:106 LDY @LOCAL06
    case 0xC121FA: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121FC: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC121FF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC12CF9.
    case 0xC12200: {
        Instruction step(cpu, 0x06, 0x0000B9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12201: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC12200.
    case 0xC12202: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:107 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12204: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu-jp.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12206: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12208: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu-jp.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1220A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1220C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:109 JSL DISPLAY_TEXT
    case 0xC1220E: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12212: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12212.
    case 0xC12214: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12215: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12217: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12217.
    case 0xC12219: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:111 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1221A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:112 LDA @LOCAL0A
    case 0xC1221C: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:113 CLC
    case 0xC1221E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:114 ADC #window_stats::cursor_move_callback
    case 0xC1221F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000037u : 0x000037u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:114 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC1221F.
    case 0xC12221: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:115 TAY
    case 0xC12222: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu-jp.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12223: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12226: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu-jp.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12228: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:116 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1222B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:117 CMP @VIRTUAL0A+2
    case 0xC1222D: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:118 BNE @UNKNOWN8
    case 0xC1222F: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:119 LDA @VIRTUAL06
    case 0xC12231: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:120 CMP @VIRTUAL0A
    case 0xC12233: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:122 BEQ @UNKNOWN11
    case 0xC12235: {
        Instruction step(cpu, 0xF0, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:123 LDX @VIRTUAL02
    case 0xC12237: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:124 LDA a:menu_option::unknown0,X
    case 0xC12239: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:125 CMP #1
    case 0xC1223C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:125 CMP #1
    // Overlapping static entry reached from 0xC1223C.
    case 0xC1223E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:126 BNE @UNKNOWN9
    case 0xC1223F: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:127 LDA @LOCAL08
    case 0xC12241: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:128 INC
    case 0xC12243: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:129 BRA @UNKNOWN10
    case 0xC12244: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:131 LDX @VIRTUAL02
    case 0xC12246: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:132 LDA a:menu_option::userdata,X
    case 0xC12248: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:134 STA @LOCAL07
    case 0xC1224B: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:135 LDA @LOCAL0A
    case 0xC1224D: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:136 CLC
    case 0xC1224F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:137 ADC #window_stats::cursor_move_callback
    case 0xC12250: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000037u : 0x000037u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:137 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC12250.
    case 0xC12252: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:138 TAY
    case 0xC12253: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu-jp.asm:139 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12254: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:139 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12257: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu-jp.asm:139 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12259: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:139 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1225C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:140 LDA @LOCAL07
    case 0xC1225E: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:141 PHA
    case 0xC12260: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu-jp.asm:142 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12261: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:142 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12263: {
        Instruction step(cpu, 0x8D, 0x0000BAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu-jp.asm:142 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12266: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:142 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12268: {
        Instruction step(cpu, 0x8D, 0x0000BCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:143 PLA
    case 0xC1226B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:144 JSL UNKNOWN_C09279
    case 0xC1226C: {
        Instruction step(cpu, 0x22, 0xC0925Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:145 LDA @LOCAL0B
    case 0xC12270: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:146 JSR SET_WINDOW_FOCUS
    case 0xC12272: {
        Instruction step(cpu, 0x20, 0x00013Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:148 JSR CLEAR_INSTANT_PRINTING
    case 0xC12275: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:149 LDX @VIRTUAL02
    case 0xC12278: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:150 LDA a:menu_option::text_y,X
    case 0xC1227A: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:151 TAX
    case 0xC1227D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:152 STX @LOCAL07
    case 0xC1227E: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:153 LDX @VIRTUAL02
    case 0xC12280: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:154 LDA a:menu_option::text_x,X
    case 0xC12282: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:155 LDX @LOCAL07
    case 0xC12285: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:156 JSR UNKNOWN_C438A5
    case 0xC12287: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:157 LDA #1
    case 0xC1228A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:157 LDA #1
    // Overlapping static entry reached from 0xC1228A.
    case 0xC1228C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:158 JSR UNKNOWN_C10FEA
    case 0xC1228D: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:159 LDA #33
    case 0xC12290: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:159 LDA #33
    // Overlapping static entry reached from 0xC12290.
    case 0xC12292: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:160 JSR UNKNOWN_C10D60
    case 0xC12293: {
        Instruction step(cpu, 0x20, 0x0012AEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:161 LDA #0
    case 0xC12296: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:161 LDA #0
    // Overlapping static entry reached from 0xC12296.
    case 0xC12298: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:162 JSR UNKNOWN_C10FEA
    case 0xC12299: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:163 JSL WINDOW_TICK
    case 0xC1229C: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:164 LDA #1
    case 0xC122A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:164 LDA #1
    // Overlapping static entry reached from 0xC122A0.
    case 0xC122A2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:165 STA @LOCAL06
    case 0xC122A3: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:167 LDA @LOCAL06
    case 0xC122A5: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:168 EOR #$0001
    case 0xC122A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:168 EOR #$0001
    // Overlapping static entry reached from 0xC122A7.
    case 0xC122A9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:169 STA @LOCAL06
    case 0xC122AA: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:170 LDY #window_stats::text_y
    case 0xC122AC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:170 LDY #window_stats::text_y
    // Overlapping static entry reached from 0xC122AC.
    case 0xC122AE: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:171 LDA (@LOCAL0A),Y
    case 0xC122AF: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:172 ASL
    case 0xC122B1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:173 LDY #window_stats::window_y
    case 0xC122B2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:173 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC122B2.
    case 0xC122B4: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:174 CLC
    case 0xC122B5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:175 ADC (@LOCAL0A),Y
    case 0xC122B6: {
        Instruction step(cpu, 0x71, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:176 ASL
    case 0xC122B8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:177 ASL
    case 0xC122B9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:178 ASL
    case 0xC122BA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:179 ASL
    case 0xC122BB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:180 ASL
    case 0xC122BC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:181 STA @VIRTUAL04
    case 0xC122BD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:182 LDY #window_stats::window_x
    case 0xC122BF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:182 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC122BF.
    case 0xC122C1: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:183 LDA (@LOCAL0A),Y
    case 0xC122C2: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:184 LDY #window_stats::text_x
    case 0xC122C4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:184 LDY #window_stats::text_x
    // Overlapping static entry reached from 0xC122C4.
    case 0xC122C6: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:185 CLC
    case 0xC122C7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:186 ADC (@LOCAL0A),Y
    case 0xC122C8: {
        Instruction step(cpu, 0x71, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:187 CLC
    case 0xC122CA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:188 ADC @VIRTUAL04
    case 0xC122CB: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:189 CLC
    case 0xC122CD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:190 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC122CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x007C20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:190 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC122CE.
    case 0xC122D0: {
        Instruction step(cpu, 0x7C, 0x001A85u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:191 STA @LOCAL05
    case 0xC122D1: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:192 LDA @LOCAL06
    case 0xC122D3: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:193 ASL
    case 0xC122D5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:194 STA @VIRTUAL04
    case 0xC122D6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC122D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E8u : 0x00E3E8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC122D8.
    case 0xC122DA: {
        Instruction step(cpu, 0xE3, 0x000085u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC122DB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC122DA.
    case 0xC122DC: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC122DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC122DC.
    case 0xC122DE: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC122DD.
    case 0xC122DF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/selection_menu-jp.asm:195 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC122E0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:196 LDA @VIRTUAL04
    case 0xC122E2: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:197 CLC
    case 0xC122E4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:198 ADC @VIRTUAL06
    case 0xC122E5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:199 STA @VIRTUAL06
    case 0xC122E7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:200 STA @LOCAL00
    case 0xC122E9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:201 LDA @VIRTUAL06+2
    case 0xC122EB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:202 STA @LOCAL00+2
    case 0xC122ED: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:203 LDY @LOCAL05
    case 0xC122EF: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:204 LDX #2
    case 0xC122F1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:204 LDX #2
    // Overlapping static entry reached from 0xC122F1.
    case 0xC122F3: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:205 SEP #PROC_FLAGS::ACCUM8
    case 0xC122F4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:206 LDA #0
    case 0xC122F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:207 JSL PREPARE_VRAM_COPY
    case 0xC122F8: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:207 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC122F6.
    case 0xC122F9: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:207 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC122F9.
    case 0xC122FB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x00ECA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC122FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ECu : 0x00E3ECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC122FB.
    case 0xC122FD: {
        Instruction step(cpu, 0xEC, 0x0085E3u, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC122FC.
    case 0xC122FE: {
        Instruction step(cpu, 0xE3, 0x000085u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC122FF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC122FE.
    case 0xC12300: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC12301: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC12300.
    case 0xC12302: {
        Instruction step(cpu, 0xC3, 0x000000u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC12301.
    case 0xC12303: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/selection_menu-jp.asm:209 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC12304: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:210 LDA @VIRTUAL04
    case 0xC12306: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:211 CLC
    case 0xC12308: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:212 ADC @VIRTUAL06
    case 0xC12309: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:213 STA @VIRTUAL06
    case 0xC1230B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:214 STA @LOCAL00
    case 0xC1230D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:215 LDA @VIRTUAL06+2
    case 0xC1230F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:216 STA @LOCAL00+2
    case 0xC12311: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:217 LDA @LOCAL05
    case 0xC12313: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:218 CLC
    case 0xC12315: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:219 ADC #32
    case 0xC12316: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:219 ADC #32
    // Overlapping static entry reached from 0xC12316.
    case 0xC12318: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:220 TAY
    case 0xC12319: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:221 LDX #2
    case 0xC1231A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:221 LDX #2
    // Overlapping static entry reached from 0xC1231A.
    case 0xC1231C: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:222 SEP #PROC_FLAGS::ACCUM8
    case 0xC1231D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:223 LDA #0
    case 0xC1231F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:224 JSL PREPARE_VRAM_COPY
    case 0xC12321: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:224 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1231F.
    case 0xC12322: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:224 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC12322.
    case 0xC12324: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A2u : 0x0000A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:226 LDX #0
    case 0xC12325: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:226 LDX #0
    // Overlapping static entry reached from 0xC12324.
    case 0xC12326: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:226 LDX #0
    // Overlapping static entry reached from 0xC12325.
    case 0xC12327: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:227 STX @LOCAL04
    case 0xC12328: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:228 JMP @UNKNOWN37
    case 0xC1232A: {
        Instruction step(cpu, 0x4C, 0x0025D3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:230 JSL UNKNOWN_C12E42
    case 0xC1232D: {
        Instruction step(cpu, 0x22, 0xC1355Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:231 LDA PAD_PRESS
    case 0xC12331: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:232 AND #PAD::UP
    case 0xC12334: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:232 AND #PAD::UP
    // Overlapping static entry reached from 0xC12334.
    case 0xC12336: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:233 BEQ @UNKNOWN15
    case 0xC12337: {
        Instruction step(cpu, 0xF0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:234 LDX @VIRTUAL02
    case 0xC12339: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:235 LDA a:menu_option::text_x,X
    case 0xC1233B: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:236 STA @LOCAL03
    case 0xC1233E: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:237 LDA #0
    case 0xC12340: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:237 LDA #0
    // Overlapping static entry reached from 0xC12340.
    case 0xC12342: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:238 STA @LOCAL00
    case 0xC12343: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:239 LDA #SFX::CURSOR3
    case 0xC12345: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:239 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC12345.
    case 0xC12347: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:240 STA @LOCAL00+2
    case 0xC12348: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:241 LDA @LOCAL03
    case 0xC1234A: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:242 STA @LOCAL01
    case 0xC1234C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:243 LDY #window_stats::height
    case 0xC1234E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:243 LDY #window_stats::height
    // Overlapping static entry reached from 0xC1234E.
    case 0xC12350: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:244 LDA (@LOCAL0A),Y
    case 0xC12351: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:245 LSR
    case 0xC12353: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:246 STA @LOCAL02
    case 0xC12354: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:247 LDY #.LOWORD(-1)
    case 0xC12356: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:247 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12356.
    case 0xC12358: {
        Instruction step(cpu, 0xFF, 0xBD02A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:248 LDX @VIRTUAL02
    case 0xC12359: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:249 LDA a:menu_option::text_y,X
    case 0xC1235B: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:249 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC12358.
    case 0xC1235C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:249 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC1235C.
    case 0xC1235D: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:250 TAX
    case 0xC1235E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:251 LDA @LOCAL03
    case 0xC1235F: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:252 JSL MOVE_CURSOR
    case 0xC12361: {
        Instruction step(cpu, 0x22, 0xC12086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:253 STA @LOCAL07
    case 0xC12365: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:254 JMP @UNKNOWN39
    case 0xC12367: {
        Instruction step(cpu, 0x4C, 0x0025E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:256 LDA PAD_PRESS
    case 0xC1236A: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:257 AND #PAD::LEFT
    case 0xC1236D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:257 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1236D.
    case 0xC1236F: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:258 BEQ @UNKNOWN16
    case 0xC12370: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:259 LDX @VIRTUAL02
    case 0xC12372: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:260 LDA a:menu_option::text_y,X
    case 0xC12374: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:261 STA @LOCAL07
    case 0xC12377: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:262 LDA #.LOWORD(-1)
    case 0xC12379: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:262 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12379.
    case 0xC1237B: {
        Instruction step(cpu, 0xFF, 0xA90E85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:263 STA @LOCAL00
    case 0xC1237C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:264 LDA #SFX::CURSOR2
    case 0xC1237E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:264 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1237B.
    case 0xC1237F: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:264 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1237E.
    case 0xC12380: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:265 STA @LOCAL00+2
    case 0xC12381: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:266 LDY #window_stats::width
    case 0xC12383: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:266 LDY #window_stats::width
    // Overlapping static entry reached from 0xC12383.
    case 0xC12385: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:267 LDA (@LOCAL0A),Y
    case 0xC12386: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:268 STA @LOCAL01
    case 0xC12388: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:268 STA @LOCAL01
    // Overlapping static entry reached from 0xC123E1.
    case 0xC12389: {
        Instruction step(cpu, 0x12, 0x0000A5u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:269 LDA @LOCAL07
    case 0xC1238A: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:269 LDA @LOCAL07
    // Overlapping static entry reached from 0xC12389.
    case 0xC1238B: {
        Instruction step(cpu, 0x1E, 0x001485u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:270 STA @LOCAL02
    case 0xC1238C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:271 LDY #0
    case 0xC1238E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:271 LDY #0
    // Overlapping static entry reached from 0xC1238E.
    case 0xC12390: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:272 TAX
    case 0xC12391: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:273 STX @LOCAL07
    case 0xC12392: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:274 LDX @VIRTUAL02
    case 0xC12394: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:275 LDA a:menu_option::text_x,X
    case 0xC12396: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:276 LDX @LOCAL07
    case 0xC12399: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:277 JSL MOVE_CURSOR
    case 0xC1239B: {
        Instruction step(cpu, 0x22, 0xC12086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:278 STA @LOCAL07
    case 0xC1239F: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:279 JMP @UNKNOWN39
    case 0xC123A1: {
        Instruction step(cpu, 0x4C, 0x0025E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:281 LDA PAD_PRESS
    case 0xC123A4: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:282 AND #PAD::DOWN
    case 0xC123A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:282 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC123A7.
    case 0xC123A9: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:283 BEQ @UNKNOWN17
    case 0xC123AA: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:283 BEQ @UNKNOWN17
    // Overlapping static entry reached from 0xC123A9.
    case 0xC123AB: {
        Instruction step(cpu, 0x2E, 0x0002A6u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:284 LDX @VIRTUAL02
    case 0xC123AC: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:285 LDA a:menu_option::text_x,X
    case 0xC123AE: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:286 STA @LOCAL03
    case 0xC123B1: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:287 LDA #0
    case 0xC123B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:287 LDA #0
    // Overlapping static entry reached from 0xC123B3.
    case 0xC123B5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:288 STA @LOCAL00
    case 0xC123B6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:289 LDA #SFX::CURSOR3
    case 0xC123B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:289 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC123B8.
    case 0xC123BA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:290 STA @LOCAL00+2
    case 0xC123BB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:291 LDA @LOCAL03
    case 0xC123BD: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:292 STA @LOCAL01
    case 0xC123BF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:293 LDA #.LOWORD(-1)
    case 0xC123C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:293 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC123C1.
    case 0xC123C3: {
        Instruction step(cpu, 0xFF, 0xA01485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:294 STA @LOCAL02
    case 0xC123C4: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:295 LDY #1
    case 0xC123C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:295 LDY #1
    // Overlapping static entry reached from 0xC123C3.
    case 0xC123C7: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:295 LDY #1
    // Overlapping static entry reached from 0xC123C6.
    case 0xC123C8: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:296 LDX @VIRTUAL02
    case 0xC123C9: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:297 LDA a:menu_option::text_y,X
    case 0xC123CB: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:298 TAX
    case 0xC123CE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:299 LDA @LOCAL03
    case 0xC123CF: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:300 JSL MOVE_CURSOR
    case 0xC123D1: {
        Instruction step(cpu, 0x22, 0xC12086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:301 STA @LOCAL07
    case 0xC123D5: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:302 JMP @UNKNOWN39
    case 0xC123D7: {
        Instruction step(cpu, 0x4C, 0x0025E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:304 LDA PAD_PRESS
    case 0xC123DA: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:305 AND #PAD::RIGHT
    case 0xC123DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:305 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC123DD.
    case 0xC123DF: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:306 BEQ @UNKNOWN18
    case 0xC123E0: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:306 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC123DF.
    case 0xC123E1: {
        Instruction step(cpu, 0x30, 0x0000A6u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:307 LDX @VIRTUAL02
    case 0xC123E2: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:307 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC123E1.
    case 0xC123E3: {
        Instruction step(cpu, 0x02, 0x0000BDu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:308 LDA a:menu_option::text_y,X
    case 0xC123E4: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:309 STA @LOCAL04
    case 0xC123E7: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:310 LDA #1
    case 0xC123E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:310 LDA #1
    // Overlapping static entry reached from 0xC123E9.
    case 0xC123EB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:311 STA @LOCAL00
    case 0xC123EC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:312 LDA #SFX::CURSOR2
    case 0xC123EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:312 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC123EE.
    case 0xC123F0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:313 STA @LOCAL00+2
    case 0xC123F1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:314 LDA #.LOWORD(-1)
    case 0xC123F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:314 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC123F3.
    case 0xC123F5: {
        Instruction step(cpu, 0xFF, 0xA51285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:315 STA @LOCAL01
    case 0xC123F6: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:316 LDA @LOCAL04
    case 0xC123F8: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:316 LDA @LOCAL04
    // Overlapping static entry reached from 0xC123F5.
    case 0xC123F9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:317 STA @LOCAL02
    case 0xC123FA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:318 LDY #0
    case 0xC123FC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:318 LDY #0
    // Overlapping static entry reached from 0xC123FC.
    case 0xC123FE: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:319 TAX
    case 0xC123FF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:320 STX @LOCAL03
    case 0xC12400: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:321 LDX @VIRTUAL02
    case 0xC12402: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:322 LDA a:menu_option::text_x,X
    case 0xC12404: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:323 LDX @LOCAL03
    case 0xC12407: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:324 JSL MOVE_CURSOR
    case 0xC12409: {
        Instruction step(cpu, 0x22, 0xC12086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:325 STA @LOCAL07
    case 0xC1240D: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:326 JMP @UNKNOWN39
    case 0xC1240F: {
        Instruction step(cpu, 0x4C, 0x0025E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:328 LDA PAD_HELD
    case 0xC12412: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:329 AND #PAD::UP
    case 0xC12415: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:329 AND #PAD::UP
    // Overlapping static entry reached from 0xC12415.
    case 0xC12417: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:330 BEQ @UNKNOWN19
    case 0xC12418: {
        Instruction step(cpu, 0xF0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:331 LDA #0
    case 0xC1241A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:331 LDA #0
    // Overlapping static entry reached from 0xC1241A.
    case 0xC1241C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:332 STA @LOCAL00
    case 0xC1241D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:333 LDA #SFX::CURSOR3
    case 0xC1241F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:333 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC1241F.
    case 0xC12421: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:334 STA @LOCAL00+2
    case 0xC12422: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:335 LDY #.LOWORD(-1)
    case 0xC12424: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:335 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12424.
    case 0xC12426: {
        Instruction step(cpu, 0xFF, 0xBD02A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:336 LDX @VIRTUAL02
    case 0xC12427: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:337 LDA a:menu_option::text_y,X
    case 0xC12429: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:337 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC12426.
    case 0xC1242A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:337 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC1242A.
    case 0xC1242B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:338 TAX
    case 0xC1242C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:339 STX @LOCAL07
    case 0xC1242D: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:340 LDX @VIRTUAL02
    case 0xC1242F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:341 LDA a:menu_option::text_x,X
    case 0xC12431: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:342 LDX @LOCAL07
    case 0xC12434: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:343 JSL UNKNOWN_C20B65
    case 0xC12436: {
        Instruction step(cpu, 0x22, 0xC209F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:344 STA @LOCAL07
    case 0xC1243A: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:345 JMP @UNKNOWN39
    case 0xC1243C: {
        Instruction step(cpu, 0x4C, 0x0025E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:347 LDA PAD_HELD
    case 0xC1243F: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:348 AND #PAD::LEFT
    case 0xC12442: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:348 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC12442.
    case 0xC12444: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:349 BEQ @UNKNOWN20
    case 0xC12445: {
        Instruction step(cpu, 0xF0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:350 LDA #.LOWORD(-1)
    case 0xC12447: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:350 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12447.
    case 0xC12449: {
        Instruction step(cpu, 0xFF, 0xA90E85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:351 STA @LOCAL00
    case 0xC1244A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:352 LDA #SFX::CURSOR2
    case 0xC1244C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:352 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12449.
    case 0xC1244D: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:352 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1244C.
    case 0xC1244E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:353 STA @LOCAL00+2
    case 0xC1244F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:354 LDY #0
    case 0xC12451: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:354 LDY #0
    // Overlapping static entry reached from 0xC12451.
    case 0xC12453: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:355 LDX @VIRTUAL02
    case 0xC12454: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:356 LDA a:menu_option::text_y,X
    case 0xC12456: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:357 TAX
    case 0xC12459: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:358 STX @LOCAL07
    case 0xC1245A: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:359 LDX @VIRTUAL02
    case 0xC1245C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:360 LDA a:menu_option::text_x,X
    case 0xC1245E: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:361 LDX @LOCAL07
    case 0xC12461: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:362 JSL UNKNOWN_C20B65
    case 0xC12463: {
        Instruction step(cpu, 0x22, 0xC209F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:363 STA @LOCAL07
    case 0xC12467: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:364 JMP @UNKNOWN39
    case 0xC12469: {
        Instruction step(cpu, 0x4C, 0x0025E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:366 LDA PAD_HELD
    case 0xC1246C: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:367 AND #PAD::DOWN
    case 0xC1246F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:367 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1246F.
    case 0xC12471: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:368 BEQ @UNKNOWN21
    case 0xC12472: {
        Instruction step(cpu, 0xF0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:368 BEQ @UNKNOWN21
    // Overlapping static entry reached from 0xC12471.
    case 0xC12473: {
        Instruction step(cpu, 0x25, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:369 LDA #0
    case 0xC12474: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:369 LDA #0
    // Overlapping static entry reached from 0xC12473.
    case 0xC12475: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:369 LDA #0
    // Overlapping static entry reached from 0xC12474.
    case 0xC12476: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:370 STA @LOCAL00
    case 0xC12477: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:371 LDA #SFX::CURSOR3
    case 0xC12479: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:371 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC12479.
    case 0xC1247B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:372 STA @LOCAL00+2
    case 0xC1247C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:373 LDY #1
    case 0xC1247E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:373 LDY #1
    // Overlapping static entry reached from 0xC1247E.
    case 0xC12480: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:374 LDX @VIRTUAL02
    case 0xC12481: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:375 LDA a:menu_option::text_y,X
    case 0xC12483: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:376 TAX
    case 0xC12486: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:377 STX @LOCAL07
    case 0xC12487: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:378 LDX @VIRTUAL02
    case 0xC12489: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:379 LDA a:menu_option::text_x,X
    case 0xC1248B: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:380 LDX @LOCAL07
    case 0xC1248E: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:381 JSL UNKNOWN_C20B65
    case 0xC12490: {
        Instruction step(cpu, 0x22, 0xC209F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:382 STA @LOCAL07
    case 0xC12494: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:383 JMP @UNKNOWN39
    case 0xC12496: {
        Instruction step(cpu, 0x4C, 0x0025E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:385 LDA PAD_HELD
    case 0xC12499: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:386 AND #PAD::RIGHT
    case 0xC1249C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:386 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1249C.
    case 0xC1249E: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:387 BEQ @UNKNOWN22
    case 0xC1249F: {
        Instruction step(cpu, 0xF0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:387 BEQ @UNKNOWN22
    // Overlapping static entry reached from 0xC1249E.
    case 0xC124A0: {
        Instruction step(cpu, 0x25, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:388 LDA #1
    case 0xC124A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:388 LDA #1
    // Overlapping static entry reached from 0xC124A0.
    case 0xC124A2: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:388 LDA #1
    // Overlapping static entry reached from 0xC124A1.
    case 0xC124A3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:389 STA @LOCAL00
    case 0xC124A4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:390 LDA #SFX::CURSOR2
    case 0xC124A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:390 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC124A6.
    case 0xC124A8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:391 STA @LOCAL00+2
    case 0xC124A9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:392 LDY #0
    case 0xC124AB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:392 LDY #0
    // Overlapping static entry reached from 0xC124AB.
    case 0xC124AD: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:393 LDX @VIRTUAL02
    case 0xC124AE: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:394 LDA a:menu_option::text_y,X
    case 0xC124B0: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:395 TAX
    case 0xC124B3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:396 STX @LOCAL03
    case 0xC124B4: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:397 LDX @VIRTUAL02
    case 0xC124B6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:398 LDA a:menu_option::text_x,X
    case 0xC124B8: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:399 LDX @LOCAL03
    case 0xC124BB: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:400 JSL UNKNOWN_C20B65
    case 0xC124BD: {
        Instruction step(cpu, 0x22, 0xC209F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:401 STA @LOCAL07
    case 0xC124C1: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:402 JMP @UNKNOWN39
    case 0xC124C3: {
        Instruction step(cpu, 0x4C, 0x0025E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:404 LDA PAD_PRESS
    case 0xC124C6: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:405 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC124C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:405 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC124C9.
    case 0xC124CB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu-jp.asm:406 BEQL @UNKNOWN33
    case 0xC124CC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu-jp.asm:406 BEQL @UNKNOWN33
    case 0xC124CE: {
        Instruction step(cpu, 0x4C, 0x002593u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:407 JSR SET_INSTANT_PRINTING
    case 0xC124D1: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:408 LDX @VIRTUAL02
    case 0xC124D4: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:409 LDA a:menu_option::page,X
    case 0xC124D6: {
        Instruction step(cpu, 0xBD, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:410 BEQ @UNKNOWN30
    case 0xC124D9: {
        Instruction step(cpu, 0xF0, 0x000072u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:411 LDX @VIRTUAL02
    case 0xC124DB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:412 LDA a:menu_option::sound_effect,X
    case 0xC124DD: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:413 AND #$00FF
    case 0xC124E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC124E0.
    case 0xC124E2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:414 JSL PLAY_SOUND
    case 0xC124E3: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:415 LDX @VIRTUAL02
    case 0xC124E7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:416 LDA a:menu_option::text_y,X
    case 0xC124E9: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:417 TAX
    case 0xC124EC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:418 STX @LOCAL07
    case 0xC124ED: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:419 LDX @VIRTUAL02
    case 0xC124EF: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:420 LDA a:menu_option::text_x,X
    case 0xC124F1: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:421 LDX @LOCAL07
    case 0xC124F4: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:422 JSR UNKNOWN_C438A5
    case 0xC124F6: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:423 LDA #47
    case 0xC124F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:423 LDA #47
    // Overlapping static entry reached from 0xC124F9.
    case 0xC124FB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:424 JSR UNKNOWN_C10D60
    case 0xC124FC: {
        Instruction step(cpu, 0x20, 0x0012AEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:425 LDA #6
    case 0xC124FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:425 LDA #6
    // Overlapping static entry reached from 0xC124FF.
    case 0xC12501: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:426 JSR UNKNOWN_C10FEA
    case 0xC12502: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:427 LDA @VIRTUAL02
    case 0xC12505: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:428 CLC
    case 0xC12507: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:429 ADC #menu_option::label
    case 0xC12508: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:429 ADC #menu_option::label
    // Overlapping static entry reached from 0xC12508.
    case 0xC1250A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1250B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1250D: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1250E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12510: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12511: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/selection_menu-jp.asm:430 PROMOTENEARPTRA @VIRTUAL06
    case 0xC12513: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:431 REP #PROC_FLAGS::ACCUM8
    case 0xC12515: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu-jp.asm:432 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12517: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu-jp.asm:432 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12519: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu-jp.asm:432 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1251B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu-jp.asm:432 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1251D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:433 LDA #.LOWORD(-1)
    case 0xC1251F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:433 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1251F.
    case 0xC12521: {
        Instruction step(cpu, 0xFF, 0x14DD20u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:434 JSR PRINT_STRING
    case 0xC12522: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:435 LDA #0
    case 0xC12525: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:435 LDA #0
    // Overlapping static entry reached from 0xC12525.
    case 0xC12527: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:436 JSR UNKNOWN_C10FEA
    case 0xC12528: {
        Instruction step(cpu, 0x20, 0x0015A4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:437 JSR CLEAR_INSTANT_PRINTING
    case 0xC1252B: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:438 LDA @LOCAL08
    case 0xC1252E: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:439 LDY #window_stats::selected_option
    case 0xC12530: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:439 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC12530.
    case 0xC12532: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:440 STA (@LOCAL0A),Y
    case 0xC12533: {
        Instruction step(cpu, 0x91, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:441 LDX @VIRTUAL02
    case 0xC12535: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:442 LDA a:menu_option::unknown0,X
    case 0xC12537: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:443 CMP #1
    case 0xC1253A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:443 CMP #1
    // Overlapping static entry reached from 0xC1253A.
    case 0xC1253C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:444 BNE @UNKNOWN29
    case 0xC1253D: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:445 LDA @LOCAL08
    case 0xC1253F: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:446 INC
    case 0xC12541: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:447 JMP @UNKNOWN44
    case 0xC12542: {
        Instruction step(cpu, 0x4C, 0x002679u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:449 LDX @VIRTUAL02
    case 0xC12545: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:450 LDA a:menu_option::userdata,X
    case 0xC12547: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:451 JMP @UNKNOWN44
    case 0xC1254A: {
        Instruction step(cpu, 0x4C, 0x002679u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:453 LDA #SFX::CURSOR2
    case 0xC1254D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:453 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1254D.
    case 0xC1254F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:454 JSL PLAY_SOUND
    case 0xC12550: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:455 JSR UNKNOWN_C10FA3
    case 0xC12554: {
        Instruction step(cpu, 0x20, 0x00155Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:456 LDA @LOCAL0A
    case 0xC12557: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:457 CLC
    case 0xC12559: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:458 ADC #window_stats::menu_page_number
    case 0xC1255A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:458 ADC #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC1255A.
    case 0xC1255C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:459 TAX
    case 0xC1255D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:460 STX @LOCAL05
    case 0xC1255E: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:461 LDA __BSS_START__,X
    case 0xC12560: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:462 STA @LOCAL09
    case 0xC12563: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:463 LDX @VIRTUAL02
    case 0xC12565: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:464 LDA a:menu_option::previous,X
    case 0xC12567: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1256A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1256C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1256D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1256E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12570: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12571: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12573: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:465 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12574: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:466 TAX
    case 0xC12575: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:467 LDA @LOCAL09
    case 0xC12576: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:468 CMP MENU_OPTIONS + menu_option::page,X
    case 0xC12578: {
        Instruction step(cpu, 0xDD, 0x008D18u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:469 BNE @UNKNOWN31
    case 0xC1257B: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:470 LDA #1
    case 0xC1257D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:470 LDA #1
    // Overlapping static entry reached from 0xC1257D.
    case 0xC1257F: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:471 LDX @LOCAL05
    case 0xC12580: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:472 STA __BSS_START__,X
    case 0xC12582: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:473 BRA @UNKNOWN32
    case 0xC12585: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:475 INC
    case 0xC12587: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:476 LDX @LOCAL05
    case 0xC12588: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:477 STA __BSS_START__,X
    case 0xC1258A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:479 JSR PRINT_MENU_ITEMS
    case 0xC1258D: {
        Instruction step(cpu, 0x20, 0x001BF0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:480 JMP @UNKNOWN5
    case 0xC12590: {
        Instruction step(cpu, 0x4C, 0x0021CEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:482 LDA PAD_PRESS
    case 0xC12593: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:483 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC12596: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:483 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC12596.
    case 0xC12598: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x0014F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:484 BEQ @UNKNOWN34
    case 0xC12599: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:484 BEQ @UNKNOWN34
    // Overlapping static entry reached from 0xC12598.
    case 0xC1259A: {
        Instruction step(cpu, 0x14, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:485 LDA @LOCAL0C
    case 0xC1259B: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:485 LDA @LOCAL0C
    // Overlapping static entry reached from 0xC1259A.
    case 0xC1259C: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:486 CMP #1
    case 0xC1259D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:486 CMP #1
    // Overlapping static entry reached from 0xC1259D.
    case 0xC1259F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:487 BNE @UNKNOWN34
    case 0xC125A0: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:488 LDA #SFX::CURSOR2
    case 0xC125A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:488 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC125A2.
    case 0xC125A4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:489 JSL PLAY_SOUND
    case 0xC125A5: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:490 LDA #0
    case 0xC125A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:490 LDA #0
    // Overlapping static entry reached from 0xC125A9.
    case 0xC125AB: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:491 JMP @UNKNOWN44
    case 0xC125AC: {
        Instruction step(cpu, 0x4C, 0x002679u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:493 INC @LOCAL09
    case 0xC125AF: {
        Instruction step(cpu, 0xE6, 0x000022u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:494 LDA OPEN_WINDOW_TABLE
    case 0xC125B1: {
        Instruction step(cpu, 0xAD, 0x008C26u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:495 CMP WINDOW_TAIL
    case 0xC125B4: {
        Instruction step(cpu, 0xCD, 0x008C24u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:496 BNE @UNKNOWN36
    case 0xC125B7: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:497 LDA @LOCAL09
    case 0xC125B9: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:498 CMP #60
    case 0xC125BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:498 CMP #60
    // Overlapping static entry reached from 0xC125BB.
    case 0xC125BD: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/selection_menu-jp.asm:499 BLTEQ @UNKNOWN36
    case 0xC125BE: {
        Instruction step(cpu, 0x90, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/selection_menu-jp.asm:499 BLTEQ @UNKNOWN36
    case 0xC125C0: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:500 JSR UNKNOWN_C1134B
    case 0xC125C2: {
        Instruction step(cpu, 0x20, 0x001900u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:502 LDA #0
    case 0xC125C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:502 LDA #0
    // Overlapping static entry reached from 0xC125C5.
    case 0xC125C7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:503 JSR SET_WINDOW_FOCUS
    case 0xC125C8: {
        Instruction step(cpu, 0x20, 0x00013Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:504 JMP @UNKNOWN5
    case 0xC125CB: {
        Instruction step(cpu, 0x4C, 0x0021CEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:506 LDX @LOCAL04
    case 0xC125CE: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:507 INX
    case 0xC125D0: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:508 STX @LOCAL04
    case 0xC125D1: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:510 CPX #10
    case 0xC125D3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:510 CPX #10
    // Overlapping static entry reached from 0xC125D3.
    case 0xC125D5: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/selection_menu-jp.asm:511 BCCL @UNKNOWN14
    case 0xC125D6: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/selection_menu-jp.asm:511 BCCL @UNKNOWN14
    case 0xC125D8: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/selection_menu-jp.asm:511 BCCL @UNKNOWN14
    case 0xC125DA: {
        Instruction step(cpu, 0x4C, 0x00232Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:512 JMP @UNKNOWN13
    case 0xC125DD: {
        Instruction step(cpu, 0x4C, 0x0022A5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:514 CMP #.LOWORD(-1)
    case 0xC125E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:514 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC125E0.
    case 0xC125E2: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu-jp.asm:515 BEQL @UNKNOWN5
    case 0xC125E3: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu-jp.asm:515 BEQL @UNKNOWN5
    case 0xC125E5: {
        Instruction step(cpu, 0x4C, 0x0021CEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu-jp.asm:515 BEQL @UNKNOWN5
    // Overlapping static entry reached from 0xC125E2.
    case 0xC125E6: {
        Instruction step(cpu, 0xCE, 0x00A021u, 3u, AddressMode::Absolute);
        step.decrement();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:516 LDY #0
    case 0xC125E8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:516 LDY #0
    // Overlapping static entry reached from 0xC125E6.
    case 0xC125E9: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:516 LDY #0
    // Overlapping static entry reached from 0xC125E8.
    case 0xC125EA: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:517 STY @LOCAL04
    case 0xC125EB: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:518 LDY #window_stats::current_option
    case 0xC125ED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Bu : 0x00002Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:518 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC125ED.
    case 0xC125EF: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:519 LDA (@LOCAL0A),Y
    case 0xC125F0: {
        Instruction step(cpu, 0xB1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125F9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125FB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:520 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC125FC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:521 CLC
    case 0xC125FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:522 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC125FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:522 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC125FE.
    case 0xC12600: {
        Instruction step(cpu, 0x8D, 0x002285u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:523 STA @LOCAL09
    case 0xC12601: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:524 LDA @LOCAL07
    case 0xC12603: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:525 AND #$00FF
    case 0xC12605: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:525 AND #$00FF
    // Overlapping static entry reached from 0xC12605.
    case 0xC12607: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:526 TAX
    case 0xC12608: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:527 LDA @LOCAL07
    case 0xC12609: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:528 AND #$FF00
    case 0xC1260B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:528 AND #$FF00
    // Overlapping static entry reached from 0xC1260B.
    case 0xC1260D: {
        Instruction step(cpu, 0xFF, 0xFF29EBu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:529 XBA
    case 0xC1260E: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:530 AND #$00FF
    case 0xC1260F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:530 AND #$00FF
    // Overlapping static entry reached from 0xC1260F.
    case 0xC12611: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:531 STA @LOCAL07
    case 0xC12612: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:532 BRA @UNKNOWN42
    case 0xC12614: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:534 LDY @LOCAL04
    case 0xC12616: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:535 INY
    case 0xC12618: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:536 STY @LOCAL04
    case 0xC12619: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:537 LDY #menu_option::next
    case 0xC1261B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:537 LDY #menu_option::next
    // Overlapping static entry reached from 0xC1261B.
    case 0xC1261D: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:538 LDA (@LOCAL09),Y
    case 0xC1261E: {
        Instruction step(cpu, 0xB1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12620: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12622: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12623: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12624: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12626: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12627: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC12629: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/text/selection_menu-jp.asm:539 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1262A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:540 CLC
    case 0xC1262B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:541 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1262C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:541 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1262C.
    case 0xC1262E: {
        Instruction step(cpu, 0x8D, 0x002285u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:542 STA @LOCAL09
    case 0xC1262F: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:544 LDY #menu_option::text_x
    case 0xC12631: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:544 LDY #menu_option::text_x
    // Overlapping static entry reached from 0xC12631.
    case 0xC12633: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:545 TXA
    case 0xC12634: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:546 CMP (@LOCAL09),Y
    case 0xC12635: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:547 BNE @UNKNOWN41
    case 0xC12637: {
        Instruction step(cpu, 0xD0, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:548 LDY #menu_option::text_y
    case 0xC12639: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:548 LDY #menu_option::text_y
    // Overlapping static entry reached from 0xC12639.
    case 0xC1263B: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:549 LDA @LOCAL07
    case 0xC1263C: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:550 CMP (@LOCAL09),Y
    case 0xC1263E: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:551 BNE @UNKNOWN41
    case 0xC12640: {
        Instruction step(cpu, 0xD0, 0x0000D4u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:552 LDY #menu_option::page
    case 0xC12642: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:552 LDY #menu_option::page
    // Overlapping static entry reached from 0xC12642.
    case 0xC12644: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:553 LDA (@LOCAL09),Y
    case 0xC12645: {
        Instruction step(cpu, 0xB1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:554 STA @VIRTUAL04
    case 0xC12647: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:555 LDY #window_stats::menu_page_number
    case 0xC12649: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:555 LDY #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC12649.
    case 0xC1264B: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:556 LDA @VIRTUAL04
    case 0xC1264C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:557 CMP (@LOCAL0A),Y
    case 0xC1264E: {
        Instruction step(cpu, 0xD1, 0x000024u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:558 BEQ @UNKNOWN43
    case 0xC12650: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:559 LDA @VIRTUAL04
    case 0xC12652: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:560 BNE @UNKNOWN41
    case 0xC12654: {
        Instruction step(cpu, 0xD0, 0x0000C0u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:562 LDX @VIRTUAL02
    case 0xC12656: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:563 LDA a:menu_option::text_y,X
    case 0xC12658: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:564 TAX
    case 0xC1265B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:565 STX @LOCAL07
    case 0xC1265C: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:566 LDX @VIRTUAL02
    case 0xC1265E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:567 LDA a:menu_option::text_x,X
    case 0xC12660: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:568 LDX @LOCAL07
    case 0xC12663: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:569 JSR UNKNOWN_C438A5
    case 0xC12665: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:570 LDA #47
    case 0xC12668: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x00002Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:570 LDA #47
    // Overlapping static entry reached from 0xC12668.
    case 0xC1266A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:571 JSR UNKNOWN_C10D60
    case 0xC1266B: {
        Instruction step(cpu, 0x20, 0x0012AEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:572 LDY @LOCAL04
    case 0xC1266E: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:573 STY @LOCAL08
    case 0xC12670: {
        Instruction step(cpu, 0x84, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:574 LDA @LOCAL09
    case 0xC12672: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:575 STA @VIRTUAL02
    case 0xC12674: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/selection_menu-jp.asm:576 JMP @UNKNOWN5
    case 0xC12676: {
        Instruction step(cpu, 0x4C, 0x0021CEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/selection_menu-jp.asm:578 END_C_FUNCTION
    case 0xC12679: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/selection_menu-jp.asm:578 END_C_FUNCTION
    case 0xC1267A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
