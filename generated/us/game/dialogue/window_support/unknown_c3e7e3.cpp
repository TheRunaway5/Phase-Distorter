// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C3/C3E7E3.asm
bool resume_unresolved_c3_c3e7e3(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E7E3.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC3E7E3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7E5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7E6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7E7: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E7E8.
    case 0xC3E7EA: {
        Instruction step(cpu, 0xFF, 0xC9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7EB: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC3E7EC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    case 0xC3E7ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E7EA.
    case 0xC3E7EE: {
        Instruction step(cpu, 0xFF, 0x5AF0FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E7ED.
    case 0xC3E7EF: {
        Instruction step(cpu, 0xFF, 0x0A5AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:15 BEQ @UNKNOWN2
    case 0xC3E7F0: {
        Instruction step(cpu, 0xF0, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:16 ASL
    case 0xC3E7F2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:17 TAX
    case 0xC3E7F3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC3E7F4: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC3E7F7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E7F7.
    case 0xC3E7F9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:20 JSL MULT168
    case 0xC3E7FA: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:21 CLC
    case 0xC3E7FE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:22 ADC #.LOWORD(WINDOW_STATS)
    case 0xC3E7FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:22 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC3E7FF.
    case 0xC3E801: {
        Instruction step(cpu, 0x86, 0x0000A8u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:23 TAY
    case 0xC3E802: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:25 STY @LOCAL00
    case 0xC3E803: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:27 LDA a:window_stats::current_option,Y
    case 0xC3E805: {
        Instruction step(cpu, 0xB9, 0x00002Bu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:28 CMP #.LOWORD(-1)
    case 0xC3E808: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:28 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E808.
    case 0xC3E80A: {
        Instruction step(cpu, 0xFF, 0xA03FF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:29 BEQ @UNKNOWN2
    case 0xC3E80B: {
        Instruction step(cpu, 0xF0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC3E80D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E80A.
    case 0xC3E80E: {
        Instruction step(cpu, 0x2D, 0x002200u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E80D.
    case 0xC3E80F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC3E810: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E80E.
    case 0xC3E811: {
        Instruction step(cpu, 0xF7, 0x00008Fu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E811.
    case 0xC3E813: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000018u : 0x006918u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:31 CLC
    case 0xC3E814: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC3E815: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x0089D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E813.
    case 0xC3E816: {
        Instruction step(cpu, 0xD4, 0x000089u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E815.
    case 0xC3E817: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000AAu : 0x00A9AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:33 TAX
    case 0xC3E818: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    case 0xC3E819: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    // Overlapping static entry reached from 0xC3E817.
    case 0xC3E81A: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    // Overlapping static entry reached from 0xC3E819.
    case 0xC3E81B: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:36 STA a:menu_option::unknown0,X
    case 0xC3E81C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:37 LDA a:menu_option::next,X
    case 0xC3E81F: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:38 CMP #.LOWORD(-1)
    case 0xC3E822: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:38 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E822.
    case 0xC3E824: {
        Instruction step(cpu, 0xFF, 0xA00EF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:39 BEQ @UNKNOWN1
    case 0xC3E825: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC3E827: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E824.
    case 0xC3E828: {
        Instruction step(cpu, 0x2D, 0x002200u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E827.
    case 0xC3E829: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC3E82A: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E828.
    case 0xC3E82B: {
        Instruction step(cpu, 0xF7, 0x00008Fu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC3E82B.
    case 0xC3E82D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000018u : 0x006918u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:41 CLC
    case 0xC3E82E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC3E82F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D4u : 0x0089D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E82D.
    case 0xC3E830: {
        Instruction step(cpu, 0xD4, 0x000089u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC3E82F.
    case 0xC3E831: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000AAu : 0x0080AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:43 TAX
    case 0xC3E832: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:44 BRA @UNKNOWN0
    case 0xC3E833: {
        Instruction step(cpu, 0x80, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:44 BRA @UNKNOWN0
    // Overlapping static entry reached from 0xC3E831.
    case 0xC3E834: {
        Instruction step(cpu, 0xE4, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    case 0xC3E835: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E834.
    case 0xC3E836: {
        Instruction step(cpu, 0xFF, 0x0EA4FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E835.
    case 0xC3E837: {
        Instruction step(cpu, 0xFF, 0x990EA4u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:48 LDY @LOCAL00
    case 0xC3E838: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:50 STA a:window_stats::selected_option,Y
    case 0xC3E83A: {
        Instruction step(cpu, 0x99, 0x00002Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:50 STA a:window_stats::selected_option,Y
    // Overlapping static entry reached from 0xC3E837.
    case 0xC3E83B: {
        Instruction step(cpu, 0x2F, 0x2D9900u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:51 STA a:window_stats::option_count,Y
    case 0xC3E83D: {
        Instruction step(cpu, 0x99, 0x00002Du, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:51 STA a:window_stats::option_count,Y
    // Overlapping static entry reached from 0xC3E83B.
    case 0xC3E83F: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:52 STA a:window_stats::current_option,Y
    case 0xC3E840: {
        Instruction step(cpu, 0x99, 0x00002Bu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:53 LDA #1
    case 0xC3E843: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:53 LDA #1
    // Overlapping static entry reached from 0xC3E843.
    case 0xC3E845: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:54 STA a:window_stats::unknown49,Y
    case 0xC3E846: {
        Instruction step(cpu, 0x99, 0x000031u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:55 STA a:window_stats::menu_page_number,Y
    case 0xC3E849: {
        Instruction step(cpu, 0x99, 0x000033u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E7E3.asm:57 END_C_FUNCTION
    case 0xC3E84C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3E7E3.asm:57 END_C_FUNCTION
    case 0xC3E84D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
