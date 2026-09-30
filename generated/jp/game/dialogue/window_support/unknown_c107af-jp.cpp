// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C1/C107AF-jp.asm
bool resume_unresolved_c1_c107af_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C107AF-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10996: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC10998: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC10999: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC1099A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC1099B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E1u : 0x00FFE1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC1099B.
    case 0xC1099D: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC1099E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C107AF-jp.asm:15 END_STACK_VARS
    case 0xC1099F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:16 STA @LOCAL08
    case 0xC109A0: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:16 STA @LOCAL08
    // Overlapping static entry reached from 0xC1099D.
    case 0xC109A1: {
        Instruction step(cpu, 0x1D, 0x004CA0u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC109A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC109A2.
    case 0xC109A4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:18 JSL MULT168
    case 0xC109A5: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:19 STA @LOCAL07
    case 0xC109A9: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:20 TAX
    case 0xC109AB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:21 LDA WINDOW_STATS + window_stats::tilemap_address,X
    case 0xC109AC: {
        Instruction step(cpu, 0xBD, 0x0089F7u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:22 STA @LOCAL06
    case 0xC109AF: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:23 LDA @LOCAL07
    case 0xC109B1: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:24 TAX
    case 0xC109B3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:25 LDA WINDOW_STATS + window_stats::window_x,X
    case 0xC109B4: {
        Instruction step(cpu, 0xBD, 0x0089C8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:26 ASL
    case 0xC109B7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:27 STA @VIRTUAL02
    case 0xC109B8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:28 LDA @LOCAL07
    case 0xC109BA: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:29 TAX
    case 0xC109BC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:30 LDA WINDOW_STATS + window_stats::window_y,X
    case 0xC109BD: {
        Instruction step(cpu, 0xBD, 0x0089CAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:31 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC109C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:32 CLC
    case 0xC109C6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:33 ADC @VIRTUAL02
    case 0xC109C7: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:34 CLC
    case 0xC109C9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:35 ADC #.LOWORD(BG2_BUFFER)
    case 0xC109CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:35 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC109CA.
    case 0xC109CC: {
        Instruction step(cpu, 0x81, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:36 TAX
    case 0xC109CD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:37 STX @LOCAL05
    case 0xC109CE: {
        Instruction step(cpu, 0x86, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:38 LDA @LOCAL07
    case 0xC109D0: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:39 TAX
    case 0xC109D2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:40 LDY WINDOW_STATS + window_stats::width,X
    case 0xC109D3: {
        Instruction step(cpu, 0xBC, 0x0089CCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:41 STY @LOCAL04
    case 0xC109D6: {
        Instruction step(cpu, 0x84, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:42 STY @LOCAL03
    case 0xC109D8: {
        Instruction step(cpu, 0x84, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:43 TAX
    case 0xC109DA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:44 LDA WINDOW_STATS + window_stats::height,X
    case 0xC109DB: {
        Instruction step(cpu, 0xBD, 0x0089CEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:45 STA @LOCAL02
    case 0xC109DE: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:46 LDX @LOCAL05
    case 0xC109E0: {
        Instruction step(cpu, 0xA6, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:47 LDA __BSS_START__,X
    case 0xC109E2: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:48 BEQ @UNKNOWN0
    case 0xC109E5: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:49 CMP #$3C10
    case 0xC109E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x003C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:49 CMP #$3C10
    // Overlapping static entry reached from 0xC109E7.
    case 0xC109E9: {
        Instruction step(cpu, 0x3C, 0x000ED0u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:50 BNE @UNKNOWN1
    case 0xC109EA: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:52 LDA #$3C10
    case 0xC109EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x003C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:52 LDA #$3C10
    // Overlapping static entry reached from 0xC109EC.
    case 0xC109EE: {
        Instruction step(cpu, 0x3C, 0x00009Du, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:53 STA __BSS_START__,X
    case 0xC109EF: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:53 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC109EE.
    case 0xC109F1: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:54 STX @VIRTUAL02
    case 0xC109F2: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:55 INC @VIRTUAL02
    case 0xC109F4: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:56 INC @VIRTUAL02
    case 0xC109F6: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:57 BRA @UNKNOWN2
    case 0xC109F8: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:59 LDA #$3C13
    case 0xC109FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x003C13u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:59 LDA #$3C13
    // Overlapping static entry reached from 0xC109FA.
    case 0xC109FC: {
        Instruction step(cpu, 0x3C, 0x00009Du, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:60 STA __BSS_START__,X
    case 0xC109FD: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:60 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC109FC.
    case 0xC109FF: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:61 STX @VIRTUAL02
    case 0xC10A00: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:62 INC @VIRTUAL02
    case 0xC10A02: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:63 INC @VIRTUAL02
    case 0xC10A04: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:65 LDA @LOCAL08
    case 0xC10A06: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:66 LDY #.SIZEOF(window_stats)
    case 0xC10A08: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:66 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10A08.
    case 0xC10A0A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:67 JSL MULT168
    case 0xC10A0B: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:68 TAX
    case 0xC10A0F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC10A10: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:70 LDA WINDOW_STATS + window_stats::unknown59,X
    case 0xC10A12: {
        Instruction step(cpu, 0xBD, 0x0089FDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:71 STA @LOCAL01
    case 0xC10A15: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC10A17: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:73 AND #$00FF
    case 0xC10A19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC10A19.
    case 0xC10A1B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:74 BEQ @UNKNOWN6
    case 0xC10A1C: {
        Instruction step(cpu, 0xF0, 0x00005Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:75 TXA
    case 0xC10A1E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:76 CLC
    case 0xC10A1F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:77 ADC #.LOWORD(WINDOW_STATS) + window_stats::title
    case 0xC10A20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x0089FEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:77 ADC #.LOWORD(WINDOW_STATS) + window_stats::title
    // Overlapping static entry reached from 0xC10A20.
    case 0xC10A22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:78 STA @VIRTUAL04
    case 0xC10A23: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:78 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC10A22.
    case 0xC10A24: {
        Instruction step(cpu, 0x04, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:79 LDA @LOCAL01
    case 0xC10A25: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:79 LDA @LOCAL01
    // Overlapping static entry reached from 0xC10A24.
    case 0xC10A26: {
        Instruction step(cpu, 0x10, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:80 AND #$00FF
    case 0xC10A27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC10A26.
    case 0xC10A28: {
        Instruction step(cpu, 0xFF, 0x0A3A00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC10A27.
    case 0xC10A29: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:81 DEC
    case 0xC10A2A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC10A2B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC10A2C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC10A2D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC10A2E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:83 CLC
    case 0xC10A2F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:84 ADC #$02E0
    case 0xC10A30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E0u : 0x0002E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:84 ADC #$02E0
    // Overlapping static entry reached from 0xC10A30.
    case 0xC10A32: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:85 STA @LOCAL00
    case 0xC10A33: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:86 LDA #$3C16
    case 0xC10A35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x003C16u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:86 LDA #$3C16
    // Overlapping static entry reached from 0xC10A35.
    case 0xC10A37: {
        Instruction step(cpu, 0x3C, 0x0002A6u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:87 LDX @VIRTUAL02
    case 0xC10A38: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:88 STA __BSS_START__,X
    case 0xC10A3A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:89 LDX @VIRTUAL02
    case 0xC10A3D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:90 INX
    case 0xC10A3F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:91 INX
    case 0xC10A40: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:92 STX @LOCAL05
    case 0xC10A41: {
        Instruction step(cpu, 0x86, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:93 LDY @LOCAL04
    case 0xC10A43: {
        Instruction step(cpu, 0xA4, 0x000015u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:94 DEY
    case 0xC10A45: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:95 BRA @UNKNOWN5
    case 0xC10A46: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:97 LDA @LOCAL00
    case 0xC10A48: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:98 CLC
    case 0xC10A4A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:99 ADC #$2000
    case 0xC10A4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:99 ADC #$2000
    // Overlapping static entry reached from 0xC10A4B.
    case 0xC10A4D: {
        Instruction step(cpu, 0x20, 0x0017A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:100 LDX @LOCAL05
    case 0xC10A4E: {
        Instruction step(cpu, 0xA6, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:101 STA __BSS_START__,X
    case 0xC10A50: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:101 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10A26.
    case 0xC10A51: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:102 LDA @LOCAL00
    case 0xC10A53: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:103 INC
    case 0xC10A55: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:104 STA @LOCAL00
    case 0xC10A56: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:105 INX
    case 0xC10A58: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:106 INX
    case 0xC10A59: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:107 STX @LOCAL05
    case 0xC10A5A: {
        Instruction step(cpu, 0x86, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:108 DEY
    case 0xC10A5C: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:109 INC @VIRTUAL04
    case 0xC10A5D: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:111 LDX @VIRTUAL04
    case 0xC10A5F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:112 LDA __BSS_START__,X
    case 0xC10A61: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:113 AND #$00FF
    case 0xC10A64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:113 AND #$00FF
    // Overlapping static entry reached from 0xC10A64.
    case 0xC10A66: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:114 BNE @UNKNOWN4
    case 0xC10A67: {
        Instruction step(cpu, 0xD0, 0x0000DFu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:115 LDA #$7C16
    case 0xC10A69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x007C16u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:115 LDA #$7C16
    // Overlapping static entry reached from 0xC10A69.
    case 0xC10A6B: {
        Instruction step(cpu, 0x7C, 0x0017A6u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:116 LDX @LOCAL05
    case 0xC10A6C: {
        Instruction step(cpu, 0xA6, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:117 STA __BSS_START__,X
    case 0xC10A6E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:118 STX @VIRTUAL02
    case 0xC10A71: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:119 INC @VIRTUAL02
    case 0xC10A73: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:120 INC @VIRTUAL02
    case 0xC10A75: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:121 DEY
    case 0xC10A77: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:122 STY @LOCAL04
    case 0xC10A78: {
        Instruction step(cpu, 0x84, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:124 LDA @LOCAL08
    case 0xC10A7A: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:125 LDY #.SIZEOF(window_stats)
    case 0xC10A7C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:125 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10A7C.
    case 0xC10A7E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:126 JSL MULT168
    case 0xC10A7F: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:127 TAX
    case 0xC10A83: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:128 LDA WINDOW_STATS + window_stats::id,X
    case 0xC10A84: {
        Instruction step(cpu, 0xBD, 0x0089C6u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:129 CMP PAGINATION_WINDOW
    case 0xC10A87: {
        Instruction step(cpu, 0xCD, 0x0061F2u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:130 BNE @UNKNOWN7
    case 0xC10A8A: {
        Instruction step(cpu, 0xD0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:131 LDA PAGINATION_ANIMATION_FRAME
    case 0xC10A8C: {
        Instruction step(cpu, 0xAD, 0x0061F4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:132 CMP #.LOWORD(-1)
    case 0xC10A8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:132 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10A8F.
    case 0xC10A91: {
        Instruction step(cpu, 0xFF, 0xA40AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:133 BEQ @UNKNOWN7
    case 0xC10A92: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:134 LDY @LOCAL04
    case 0xC10A94: {
        Instruction step(cpu, 0xA4, 0x000015u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:134 LDY @LOCAL04
    // Overlapping static entry reached from 0xC10A91.
    case 0xC10A95: {
        Instruction step(cpu, 0x15, 0x000098u, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:135 TYA
    case 0xC10A96: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:136 SEC
    case 0xC10A97: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:137 SBC #4
    case 0xC10A98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:137 SBC #4
    // Overlapping static entry reached from 0xC10A98.
    case 0xC10A9A: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:138 TAY
    case 0xC10A9B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:139 STY @LOCAL04
    case 0xC10A9C: {
        Instruction step(cpu, 0x84, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:141 LDY @LOCAL04
    case 0xC10A9E: {
        Instruction step(cpu, 0xA4, 0x000015u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:142 TYX
    case 0xC10AA0: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:143 STX @LOCAL05
    case 0xC10AA1: {
        Instruction step(cpu, 0x86, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:144 BRA @UNKNOWN9
    case 0xC10AA3: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:146 LDA #$3C11
    case 0xC10AA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x003C11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:146 LDA #$3C11
    // Overlapping static entry reached from 0xC10AA5.
    case 0xC10AA7: {
        Instruction step(cpu, 0x3C, 0x0002A6u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:147 LDX @VIRTUAL02
    case 0xC10AA8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:148 STA __BSS_START__,X
    case 0xC10AAA: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:149 INC @VIRTUAL02
    case 0xC10AAD: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:150 INC @VIRTUAL02
    case 0xC10AAF: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:151 LDX @LOCAL05
    case 0xC10AB1: {
        Instruction step(cpu, 0xA6, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:152 DEX
    case 0xC10AB3: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:153 STX @LOCAL05
    case 0xC10AB4: {
        Instruction step(cpu, 0x86, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:155 BNE @UNKNOWN8
    case 0xC10AB6: {
        Instruction step(cpu, 0xD0, 0x0000EDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:156 LDA @LOCAL08
    case 0xC10AB8: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:157 LDY #.SIZEOF(window_stats)
    case 0xC10ABA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:157 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10ABA.
    case 0xC10ABC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:158 JSL MULT168
    case 0xC10ABD: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:159 TAX
    case 0xC10AC1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:160 LDA WINDOW_STATS + window_stats::id,X
    case 0xC10AC2: {
        Instruction step(cpu, 0xBD, 0x0089C6u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:161 CMP PAGINATION_WINDOW
    case 0xC10AC5: {
        Instruction step(cpu, 0xCD, 0x0061F2u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:162 BNE @UNKNOWN12
    case 0xC10AC8: {
        Instruction step(cpu, 0xD0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:163 LDA PAGINATION_ANIMATION_FRAME
    case 0xC10ACA: {
        Instruction step(cpu, 0xAD, 0x0061F4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:164 CMP #.LOWORD(-1)
    case 0xC10ACD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:164 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10ACD.
    case 0xC10ACF: {
        Instruction step(cpu, 0xFF, 0xA940F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:165 BEQ @UNKNOWN12
    case 0xC10AD0: {
        Instruction step(cpu, 0xF0, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC10AD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00E41Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10ACF.
    case 0xC10AD3: {
        Instruction step(cpu, 0x1E, 0x0085E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10AD2.
    case 0xC10AD4: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC10AD5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10AD4.
    case 0xC10AD6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC10AD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10AD7.
    case 0xC10AD9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C107AF-jp.asm:166 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC10ADA: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:167 LDA PAGINATION_ANIMATION_FRAME
    case 0xC10ADC: {
        Instruction step(cpu, 0xAD, 0x0061F4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:168 ASL
    case 0xC10ADF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:169 ASL
    case 0xC10AE0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:170 CLC
    case 0xC10AE1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:171 ADC @VIRTUAL0A
    case 0xC10AE2: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:172 STA @VIRTUAL0A
    case 0xC10AE4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AE6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC10AE6.
    case 0xC10AE8: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AE9: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AEB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AEC: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AEE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C107AF-jp.asm:173 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10AF0: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:174 LDX #0
    case 0xC10AF2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:174 LDX #0
    // Overlapping static entry reached from 0xC10AF2.
    case 0xC10AF4: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:175 STX @LOCAL00
    case 0xC10AF5: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:176 BRA @UNKNOWN11
    case 0xC10AF7: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:178 LDA [@VIRTUAL06]
    case 0xC10AF9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:179 LDX @VIRTUAL02
    case 0xC10AFB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:180 STA __BSS_START__,X
    case 0xC10AFD: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:181 INC @VIRTUAL06
    case 0xC10B00: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:182 INC @VIRTUAL06
    case 0xC10B02: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:183 INC @VIRTUAL02
    case 0xC10B04: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:184 INC @VIRTUAL02
    case 0xC10B06: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:185 LDX @LOCAL00
    case 0xC10B08: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:186 INX
    case 0xC10B0A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:187 STX @LOCAL00
    case 0xC10B0B: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:189 CPX #4
    case 0xC10B0D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:189 CPX #4
    // Overlapping static entry reached from 0xC10B0D.
    case 0xC10B0F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:190 BCC @UNKNOWN10
    case 0xC10B10: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:192 LDX @VIRTUAL02
    case 0xC10B12: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:193 LDA __BSS_START__,X
    case 0xC10B14: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:194 BEQ @UNKNOWN13
    case 0xC10B17: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:195 CMP #$7C10
    case 0xC10B19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x007C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:195 CMP #$7C10
    // Overlapping static entry reached from 0xC10B19.
    case 0xC10B1B: {
        Instruction step(cpu, 0x7C, 0x0010D0u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:196 BNE @UNKNOWN14
    case 0xC10B1C: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:198 LDA #$7C10
    case 0xC10B1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x007C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:198 LDA #$7C10
    // Overlapping static entry reached from 0xC10B1E.
    case 0xC10B20: {
        Instruction step(cpu, 0x7C, 0x0002A6u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:199 LDX @VIRTUAL02
    case 0xC10B21: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:200 STA __BSS_START__,X
    case 0xC10B23: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:201 LDA @VIRTUAL02
    case 0xC10B26: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:202 INC
    case 0xC10B28: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:203 INC
    case 0xC10B29: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:204 STA @LOCAL08
    case 0xC10B2A: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:205 BRA @UNKNOWN15
    case 0xC10B2C: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:207 LDA #$7C13
    case 0xC10B2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x007C13u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:207 LDA #$7C13
    // Overlapping static entry reached from 0xC10B2E.
    case 0xC10B30: {
        Instruction step(cpu, 0x7C, 0x0002A6u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:208 LDX @VIRTUAL02
    case 0xC10B31: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:209 STA __BSS_START__,X
    case 0xC10B33: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:210 LDA @VIRTUAL02
    case 0xC10B36: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:211 INC
    case 0xC10B38: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:212 INC
    case 0xC10B39: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:213 STA @LOCAL08
    case 0xC10B3A: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:215 LDA #32
    case 0xC10B3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:215 LDA #32
    // Overlapping static entry reached from 0xC10B3C.
    case 0xC10B3E: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:216 SEC
    case 0xC10B3F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:217 SBC @LOCAL03
    case 0xC10B40: {
        Instruction step(cpu, 0xE5, 0x000013u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:218 DEC
    case 0xC10B42: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:219 DEC
    case 0xC10B43: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:220 ASL
    case 0xC10B44: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:221 STA @VIRTUAL02
    case 0xC10B45: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:222 LDA @LOCAL08
    case 0xC10B47: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:223 CLC
    case 0xC10B49: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:224 ADC @VIRTUAL02
    case 0xC10B4A: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:225 TAX
    case 0xC10B4C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:226 LDY @LOCAL02
    case 0xC10B4D: {
        Instruction step(cpu, 0xA4, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:227 BRA @UNKNOWN19
    case 0xC10B4F: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:229 LDA #$3C12
    case 0xC10B51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x003C12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:229 LDA #$3C12
    // Overlapping static entry reached from 0xC10B51.
    case 0xC10B53: {
        Instruction step(cpu, 0x3C, 0x00009Du, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:230 STA __BSS_START__,X
    case 0xC10B54: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:230 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10B53.
    case 0xC10B56: {
        Instruction step(cpu, 0x00, 0x0000E8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:231 INX
    case 0xC10B57: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:232 INX
    case 0xC10B58: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:233 LDA @LOCAL03
    case 0xC10B59: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:234 STA @LOCAL00
    case 0xC10B5B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:235 BRA @UNKNOWN18
    case 0xC10B5D: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:237 LDA (@LOCAL06)
    case 0xC10B5F: {
        Instruction step(cpu, 0xB2, 0x000019u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:238 CLC
    case 0xC10B61: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:239 ADC #$2000
    case 0xC10B62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:239 ADC #$2000
    // Overlapping static entry reached from 0xC10B62.
    case 0xC10B64: {
        Instruction step(cpu, 0x20, 0x00009Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:240 STA __BSS_START__,X
    case 0xC10B65: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:240 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10B64.
    case 0xC10B67: {
        Instruction step(cpu, 0x00, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:241 INC @LOCAL06
    case 0xC10B68: {
        Instruction step(cpu, 0xE6, 0x000019u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:242 INC @LOCAL06
    case 0xC10B6A: {
        Instruction step(cpu, 0xE6, 0x000019u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:243 INX
    case 0xC10B6C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:244 INX
    case 0xC10B6D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:245 LDA @LOCAL00
    case 0xC10B6E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:246 DEC
    case 0xC10B70: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:247 STA @LOCAL00
    case 0xC10B71: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:249 BNE @UNKNOWN17
    case 0xC10B73: {
        Instruction step(cpu, 0xD0, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:250 LDA #$7C12
    case 0xC10B75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x007C12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:250 LDA #$7C12
    // Overlapping static entry reached from 0xC10B75.
    case 0xC10B77: {
        Instruction step(cpu, 0x7C, 0x00009Du, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:251 STA __BSS_START__,X
    case 0xC10B78: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:252 TXA
    case 0xC10B7B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:253 INC
    case 0xC10B7C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:254 INC
    case 0xC10B7D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:255 STA @LOCAL02
    case 0xC10B7E: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:256 LDA #32
    case 0xC10B80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:256 LDA #32
    // Overlapping static entry reached from 0xC10B80.
    case 0xC10B82: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:257 SEC
    case 0xC10B83: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:258 SBC @LOCAL03
    case 0xC10B84: {
        Instruction step(cpu, 0xE5, 0x000013u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:259 DEC
    case 0xC10B86: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:260 DEC
    case 0xC10B87: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:261 ASL
    case 0xC10B88: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:262 STA @VIRTUAL02
    case 0xC10B89: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:263 LDA @LOCAL02
    case 0xC10B8B: {
        Instruction step(cpu, 0xA5, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:264 CLC
    case 0xC10B8D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:265 ADC @VIRTUAL02
    case 0xC10B8E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:266 TAX
    case 0xC10B90: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:267 DEY
    case 0xC10B91: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:269 BNE @UNKNOWN16
    case 0xC10B92: {
        Instruction step(cpu, 0xD0, 0x0000BDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:270 LDA __BSS_START__,X
    case 0xC10B94: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:271 BEQ @UNKNOWN20
    case 0xC10B97: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:272 CMP #$BC10
    case 0xC10B99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x00BC10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:272 CMP #$BC10
    // Overlapping static entry reached from 0xC10B99.
    case 0xC10B9B: {
        Instruction step(cpu, 0xBC, 0x000BD0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:273 BNE @UNKNOWN21
    case 0xC10B9C: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:275 LDA #$BC10
    case 0xC10B9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x00BC10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:275 LDA #$BC10
    // Overlapping static entry reached from 0xC10B9E.
    case 0xC10BA0: {
        Instruction step(cpu, 0xBC, 0x00009Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:276 STA __BSS_START__,X
    case 0xC10BA1: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:276 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10BA0.
    case 0xC10BA3: {
        Instruction step(cpu, 0x00, 0x00009Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:277 TXY
    case 0xC10BA4: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:278 INY
    case 0xC10BA5: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:279 INY
    case 0xC10BA6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:280 BRA @UNKNOWN22
    case 0xC10BA7: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:282 LDA #$BC13
    case 0xC10BA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x00BC13u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:282 LDA #$BC13
    // Overlapping static entry reached from 0xC10BA9.
    case 0xC10BAB: {
        Instruction step(cpu, 0xBC, 0x00009Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:283 STA __BSS_START__,X
    case 0xC10BAC: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:283 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10BAB.
    case 0xC10BAE: {
        Instruction step(cpu, 0x00, 0x00009Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:284 TXY
    case 0xC10BAF: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:285 INY
    case 0xC10BB0: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:286 INY
    case 0xC10BB1: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:288 LDX @LOCAL03
    case 0xC10BB2: {
        Instruction step(cpu, 0xA6, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:289 BRA @UNKNOWN24
    case 0xC10BB4: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:291 LDA #$BC11
    case 0xC10BB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x00BC11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:291 LDA #$BC11
    // Overlapping static entry reached from 0xC10BB6.
    case 0xC10BB8: {
        Instruction step(cpu, 0xBC, 0x000099u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:292 STA __BSS_START__,Y
    case 0xC10BB9: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:292 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC10BB8.
    case 0xC10BBB: {
        Instruction step(cpu, 0x00, 0x0000C8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:293 INY
    case 0xC10BBC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:294 INY
    case 0xC10BBD: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:295 DEX
    case 0xC10BBE: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:297 BNE @UNKNOWN23
    case 0xC10BBF: {
        Instruction step(cpu, 0xD0, 0x0000F5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:298 LDA __BSS_START__,Y
    case 0xC10BC1: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:299 BEQ @UNKNOWN25
    case 0xC10BC4: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:300 CMP #$FC10
    case 0xC10BC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x00FC10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:300 CMP #$FC10
    // Overlapping static entry reached from 0xC10BC6.
    case 0xC10BC8: {
        Instruction step(cpu, 0xFC, 0x0008D0u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:301 BNE @UNKNOWN26
    case 0xC10BC9: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:303 LDA #$FC10
    case 0xC10BCB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x00FC10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:303 LDA #$FC10
    // Overlapping static entry reached from 0xC10BCB.
    case 0xC10BCD: {
        Instruction step(cpu, 0xFC, 0x000099u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:304 STA __BSS_START__,Y
    case 0xC10BCE: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:304 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC10BCD.
    case 0xC10BD0: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:305 BRA @UNKNOWN27
    case 0xC10BD1: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:307 LDA #$FC13
    case 0xC10BD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x00FC13u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:307 LDA #$FC13
    // Overlapping static entry reached from 0xC10BD3.
    case 0xC10BD5: {
        Instruction step(cpu, 0xFC, 0x000099u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:308 STA __BSS_START__,Y
    case 0xC10BD6: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF-jp.asm:308 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC10BD5.
    case 0xC10BD8: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C107AF-jp.asm:310 END_C_FUNCTION
    case 0xC10BD9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C107AF-jp.asm:310 END_C_FUNCTION
    case 0xC10BDA: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
