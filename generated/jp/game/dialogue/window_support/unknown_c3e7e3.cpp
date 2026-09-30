// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C3/C3E7E3.asm
bool resume_unresolved_c3_c3e7e3(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E7E3.asm:4 BEGIN_C_FUNCTION
    case 0xC1193C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E7E3.asm:4 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC11939.
    case 0xC1193D: {
        Instruction step(cpu, 0x31, 0x00000Bu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC1193E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC1193F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC11940: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC11941: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC11941.
    case 0xC11943: {
        Instruction step(cpu, 0xFF, 0xC9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC11944: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C3/C3E7E3.asm:13 END_STACK_VARS
    case 0xC11945: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    case 0xC11946: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11943.
    case 0xC11947: {
        Instruction step(cpu, 0xFF, 0x5EF0FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11946.
    case 0xC11948: {
        Instruction step(cpu, 0xFF, 0x0A5EF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:15 BEQ @UNKNOWN2
    case 0xC11949: {
        Instruction step(cpu, 0xF0, 0x00005Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:16 ASL
    case 0xC1194B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:17 TAX
    case 0xC1194C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC1194D: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC11950: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11950.
    case 0xC11952: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:20 JSL MULT168
    case 0xC11953: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:21 CLC
    case 0xC11957: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:22 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11958: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:22 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11958.
    case 0xC1195A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000A8u : 0x00B9A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:23 TAY
    case 0xC1195B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:27 LDA a:window_stats::current_option,Y
    case 0xC1195C: {
        Instruction step(cpu, 0xB9, 0x00002Bu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:27 LDA a:window_stats::current_option,Y
    // Overlapping static entry reached from 0xC1195A.
    case 0xC1195D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:27 LDA a:window_stats::current_option,Y
    // Overlapping static entry reached from 0xC1195D.
    case 0xC1195E: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:28 CMP #.LOWORD(-1)
    case 0xC1195F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:28 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1195F.
    case 0xC11961: {
        Instruction step(cpu, 0xFF, 0x8545F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:29 BEQ @UNKNOWN2
    case 0xC11962: {
        Instruction step(cpu, 0xF0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11964: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11961.
    case 0xC11965: {
        Instruction step(cpu, 0x04, 0x00000Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11966: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11967: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11968: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1196A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1196B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1196D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:30 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1196E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:31 CLC
    case 0xC1196F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11970: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11970.
    case 0xC11972: {
        Instruction step(cpu, 0x8D, 0x00A9AAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:33 TAX
    case 0xC11973: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    case 0xC11974: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    // Overlapping static entry reached from 0xC11972.
    case 0xC11975: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:35 LDA #0
    // Overlapping static entry reached from 0xC11974.
    case 0xC11976: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:36 STA a:menu_option::unknown0,X
    case 0xC11977: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:37 LDA a:menu_option::next,X
    case 0xC1197A: {
        Instruction step(cpu, 0xBD, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:38 CMP #.LOWORD(-1)
    case 0xC1197D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:38 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1197D.
    case 0xC1197F: {
        Instruction step(cpu, 0xFF, 0x8512F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:39 BEQ @UNKNOWN1
    case 0xC11980: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11982: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1197F.
    case 0xC11983: {
        Instruction step(cpu, 0x04, 0x00000Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11984: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11985: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11986: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11988: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11989: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1198B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C3/C3E7E3.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1198C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:41 CLC
    case 0xC1198D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1198E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000012u : 0x008D12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:42 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1198E.
    case 0xC11990: {
        Instruction step(cpu, 0x8D, 0x0080AAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:43 TAX
    case 0xC11991: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:44 BRA @UNKNOWN0
    case 0xC11992: {
        Instruction step(cpu, 0x80, 0x0000E0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:44 BRA @UNKNOWN0
    // Overlapping static entry reached from 0xC11990.
    case 0xC11993: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000A9u : 0x00FFA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    case 0xC11994: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11993.
    case 0xC11995: {
        Instruction step(cpu, 0xFF, 0x2F99FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11994.
    case 0xC11996: {
        Instruction step(cpu, 0xFF, 0x002F99u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:50 STA a:window_stats::selected_option,Y
    case 0xC11997: {
        Instruction step(cpu, 0x99, 0x00002Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:50 STA a:window_stats::selected_option,Y
    // Overlapping static entry reached from 0xC11995.
    case 0xC11999: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:51 STA a:window_stats::option_count,Y
    case 0xC1199A: {
        Instruction step(cpu, 0x99, 0x00002Du, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:52 STA a:window_stats::current_option,Y
    case 0xC1199D: {
        Instruction step(cpu, 0x99, 0x00002Bu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:53 LDA #1
    case 0xC119A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:53 LDA #1
    // Overlapping static entry reached from 0xC119A0.
    case 0xC119A2: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:54 STA a:window_stats::unknown49,Y
    case 0xC119A3: {
        Instruction step(cpu, 0x99, 0x000031u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E7E3.asm:55 STA a:window_stats::menu_page_number,Y
    case 0xC119A6: {
        Instruction step(cpu, 0x99, 0x000033u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E7E3.asm:57 END_C_FUNCTION
    case 0xC119A9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C3/C3E7E3.asm:57 END_C_FUNCTION
    case 0xC119AA: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
