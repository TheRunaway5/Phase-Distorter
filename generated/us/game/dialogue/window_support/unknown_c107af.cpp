// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C1/C107AF.asm
bool resume_unresolved_c1_c107af(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C107AF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC107AF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DEu : 0x00FFDEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC107B4.
    case 0xC107B6: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C107AF.asm:15 END_STACK_VARS
    case 0xC107B8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:16 STA @LOCAL08
    case 0xC107B9: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:16 STA @LOCAL08
    // Overlapping static entry reached from 0xC107B6.
    case 0xC107BA: {
        Instruction step(cpu, 0x20, 0x0052A0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC107BB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC107BB.
    case 0xC107BD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:18 JSL MULT168
    case 0xC107BE: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:19 TAY
    case 0xC107C2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:20 LDA WINDOW_STATS + window_stats::tilemap_address,Y
    case 0xC107C3: {
        Instruction step(cpu, 0xB9, 0x008685u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:21 STA @LOCAL07
    case 0xC107C6: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:22 LDA WINDOW_STATS + window_stats::window_x,Y
    case 0xC107C8: {
        Instruction step(cpu, 0xB9, 0x008656u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:23 ASL
    case 0xC107CB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:24 STA @VIRTUAL02
    case 0xC107CC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:25 LDA WINDOW_STATS + window_stats::window_y,Y
    case 0xC107CE: {
        Instruction step(cpu, 0xB9, 0x008658u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:696 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:697 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:698 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:699 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:700 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:701 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:26 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC107D6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:27 CLC
    case 0xC107D7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:28 ADC @VIRTUAL02
    case 0xC107D8: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:29 CLC
    case 0xC107DA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:30 ADC #.LOWORD(BG2_BUFFER)
    case 0xC107DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:30 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC107DB.
    case 0xC107DD: {
        Instruction step(cpu, 0x7D, 0x00B9AAu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:31 TAX
    case 0xC107DE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:32 LDA WINDOW_STATS + window_stats::width,Y
    case 0xC107DF: {
        Instruction step(cpu, 0xB9, 0x00865Au, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:32 LDA WINDOW_STATS + window_stats::width,Y
    // Overlapping static entry reached from 0xC107DD.
    case 0xC107E0: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:32 LDA WINDOW_STATS + window_stats::width,Y
    // Overlapping static entry reached from 0xC107E0.
    case 0xC107E1: {
        Instruction step(cpu, 0x86, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:33 STA @VIRTUAL04
    case 0xC107E2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:33 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC107E1.
    case 0xC107E3: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:34 STA @LOCAL06
    case 0xC107E4: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:34 STA @LOCAL06
    // Overlapping static entry reached from 0xC107E3.
    case 0xC107E5: {
        Instruction step(cpu, 0x1C, 0x005CB9u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:35 LDA WINDOW_STATS + window_stats::height,Y
    case 0xC107E6: {
        Instruction step(cpu, 0xB9, 0x00865Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:35 LDA WINDOW_STATS + window_stats::height,Y
    // Overlapping static entry reached from 0xC107E5.
    case 0xC107E8: {
        Instruction step(cpu, 0x86, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:36 STA @LOCAL05
    case 0xC107E9: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:36 STA @LOCAL05
    // Overlapping static entry reached from 0xC107E8.
    case 0xC107EA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:37 LDA __BSS_START__,X
    case 0xC107EB: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:38 BEQ @UNKNOWN0
    case 0xC107EE: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:39 CMP #$3C10
    case 0xC107F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x003C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:39 CMP #$3C10
    // Overlapping static entry reached from 0xC107F0.
    case 0xC107F2: {
        Instruction step(cpu, 0x3C, 0x000DD0u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:40 BNE @UNKNOWN1
    case 0xC107F3: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:42 LDA #$3C10
    case 0xC107F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x003C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:42 LDA #$3C10
    // Overlapping static entry reached from 0xC107F5.
    case 0xC107F7: {
        Instruction step(cpu, 0x3C, 0x00009Du, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:43 STA __BSS_START__,X
    case 0xC107F8: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:43 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC107F7.
    case 0xC107FA: {
        Instruction step(cpu, 0x00, 0x00009Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:44 TXY
    case 0xC107FB: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:45 INY
    case 0xC107FC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:46 INY
    case 0xC107FD: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:47 STY @LOCAL04
    case 0xC107FE: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:48 BRA @UNKNOWN2
    case 0xC10800: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:50 LDA #$3C13
    case 0xC10802: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x003C13u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:50 LDA #$3C13
    // Overlapping static entry reached from 0xC10802.
    case 0xC10804: {
        Instruction step(cpu, 0x3C, 0x00009Du, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:51 STA __BSS_START__,X
    case 0xC10805: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:51 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC10804.
    case 0xC10807: {
        Instruction step(cpu, 0x00, 0x00009Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:52 TXY
    case 0xC10808: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:53 INY
    case 0xC10809: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:54 INY
    case 0xC1080A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:55 STY @LOCAL04
    case 0xC1080B: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:57 LDA @LOCAL08
    case 0xC1080D: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:58 LDY #.SIZEOF(window_stats)
    case 0xC1080F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:58 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1080F.
    case 0xC10811: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:59 JSL MULT168
    case 0xC10812: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:60 STA @LOCAL03
    case 0xC10816: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:61 TAX
    case 0xC10818: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC10819: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:63 LDA WINDOW_STATS + window_stats::unknown59,X
    case 0xC1081B: {
        Instruction step(cpu, 0xBD, 0x00868Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:64 STA @VIRTUAL00
    case 0xC1081E: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC10820: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:66 LDA @VIRTUAL00
    case 0xC10822: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:67 AND #$00FF
    case 0xC10824: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC10824.
    case 0xC10826: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C107AF.asm:68 BEQL @UNKNOWN6
    case 0xC10827: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C107AF.asm:68 BEQL @UNKNOWN6
    case 0xC10829: {
        Instruction step(cpu, 0x4C, 0x0008B8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:69 LDA @LOCAL03
    case 0xC1082C: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:70 CLC
    case 0xC1082E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:71 ADC #.LOWORD(WINDOW_STATS) + window_stats::title
    case 0xC1082F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00008Cu : 0x00868Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:71 ADC #.LOWORD(WINDOW_STATS) + window_stats::title
    // Overlapping static entry reached from 0xC1082F.
    case 0xC10831: {
        Instruction step(cpu, 0x86, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:72 STA @LOCAL02
    case 0xC10832: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:72 STA @LOCAL02
    // Overlapping static entry reached from 0xC10831.
    case 0xC10833: {
        Instruction step(cpu, 0x14, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:73 LDA @VIRTUAL00
    case 0xC10834: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:73 LDA @VIRTUAL00
    // Overlapping static entry reached from 0xC10833.
    case 0xC10835: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:74 AND #$00FF
    case 0xC10836: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC10836.
    case 0xC10838: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:75 DEC
    case 0xC10839: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:589 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:76 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1083A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:590 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:76 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1083B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:591 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:76 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1083C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:592 ASL
    // Macro caller: src/unknown/C1/C107AF.asm:76 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC1083D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:77 CLC
    case 0xC1083E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:78 ADC #$02E0
    case 0xC1083F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E0u : 0x0002E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:78 ADC #$02E0
    // Overlapping static entry reached from 0xC1083F.
    case 0xC10841: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:79 STA @VIRTUAL02
    case 0xC10842: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:80 LDA #$3C16
    case 0xC10844: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x003C16u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:80 LDA #$3C16
    // Overlapping static entry reached from 0xC10844.
    case 0xC10846: {
        Instruction step(cpu, 0x3C, 0x0018A4u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:81 LDY @LOCAL04
    case 0xC10847: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:82 STA __BSS_START__,Y
    case 0xC10849: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:83 TYX
    case 0xC1084C: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:84 INX
    case 0xC1084D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:85 INX
    case 0xC1084E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:86 STX @LOCAL04
    case 0xC1084F: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:87 LDA @VIRTUAL04
    case 0xC10851: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:88 DEC
    case 0xC10853: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:89 STA @VIRTUAL04
    case 0xC10854: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:90 STA @LOCAL01
    case 0xC10856: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:91 LDA @LOCAL02
    case 0xC10858: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1085A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1085C: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1085D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1085F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC10860: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C1/C107AF.asm:92 PROMOTENEARPTRA @VIRTUAL06
    case 0xC10862: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC10864: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C107AF.asm:94 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10866: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C107AF.asm:94 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10868: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C107AF.asm:94 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1086A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C107AF.asm:94 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1086C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:95 JSL STRLEN
    case 0xC1086E: {
        Instruction step(cpu, 0x22, 0xC08F22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:96 STA @VIRTUAL04
    case 0xC10872: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:97 ASL
    case 0xC10874: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:98 ADC @VIRTUAL04
    case 0xC10875: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:99 ASL
    case 0xC10877: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:100 CLC
    case 0xC10878: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:101 ADC #7
    case 0xC10879: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:101 ADC #7
    // Overlapping static entry reached from 0xC10879.
    case 0xC1087B: {
        Instruction step(cpu, 0x00, 0x00004Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:102 LSR
    case 0xC1087C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:103 LSR
    case 0xC1087D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:104 LSR
    case 0xC1087E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:105 STA @LOCAL02
    case 0xC1087F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:106 BRA @UNKNOWN5
    case 0xC10881: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:108 LDA @VIRTUAL02
    case 0xC10883: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:109 CLC
    case 0xC10885: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:110 ADC #$2000
    case 0xC10886: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:110 ADC #$2000
    // Overlapping static entry reached from 0xC10886.
    case 0xC10888: {
        Instruction step(cpu, 0x20, 0x0018A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:111 LDX @LOCAL04
    case 0xC10889: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:112 STA __BSS_START__,X
    case 0xC1088B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:113 INC @VIRTUAL02
    case 0xC1088E: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:114 INX
    case 0xC10890: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:115 INX
    case 0xC10891: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:116 STX @LOCAL04
    case 0xC10892: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:117 LDA @LOCAL01
    case 0xC10894: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:118 STA @VIRTUAL04
    case 0xC10896: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:119 DEC
    case 0xC10898: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:120 STA @VIRTUAL04
    case 0xC10899: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:121 STA @LOCAL01
    case 0xC1089B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:122 LDA @LOCAL02
    case 0xC1089D: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:123 DEC
    case 0xC1089F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:124 STA @LOCAL02
    case 0xC108A0: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:126 BNE @UNKNOWN4
    case 0xC108A2: {
        Instruction step(cpu, 0xD0, 0x0000DFu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:127 LDA #$7C16
    case 0xC108A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x007C16u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:127 LDA #$7C16
    // Overlapping static entry reached from 0xC108A4.
    case 0xC108A6: {
        Instruction step(cpu, 0x7C, 0x0018A6u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:128 LDX @LOCAL04
    case 0xC108A7: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:129 STA __BSS_START__,X
    case 0xC108A9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:130 TXY
    case 0xC108AC: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:131 INY
    case 0xC108AD: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:132 INY
    case 0xC108AE: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:133 STY @LOCAL04
    case 0xC108AF: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:134 LDA @LOCAL01
    case 0xC108B1: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:135 STA @VIRTUAL04
    case 0xC108B3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:136 DEC
    case 0xC108B5: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:137 STA @VIRTUAL04
    case 0xC108B6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:139 LDA @LOCAL08
    case 0xC108B8: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:140 LDY #.SIZEOF(window_stats)
    case 0xC108BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:140 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC108BA.
    case 0xC108BC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:141 JSL MULT168
    case 0xC108BD: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:142 TAX
    case 0xC108C1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:143 LDA WINDOW_STATS+window_stats::id,X
    case 0xC108C2: {
        Instruction step(cpu, 0xBD, 0x008654u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:144 CMP PAGINATION_WINDOW
    case 0xC108C5: {
        Instruction step(cpu, 0xCD, 0x005E7Au, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:145 BNE @UNKNOWN7
    case 0xC108C8: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:146 LDA PAGINATION_ANIMATION_FRAME
    case 0xC108CA: {
        Instruction step(cpu, 0xAD, 0x005E7Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:147 CMP #$FFFF
    case 0xC108CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:147 CMP #$FFFF
    // Overlapping static entry reached from 0xC108CD.
    case 0xC108CF: {
        Instruction step(cpu, 0xFF, 0xA508F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:148 BEQ @UNKNOWN7
    case 0xC108D0: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:149 LDA @VIRTUAL04
    case 0xC108D2: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:149 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC108CF.
    case 0xC108D3: {
        Instruction step(cpu, 0x04, 0x000038u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:150 SEC
    case 0xC108D4: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:151 SBC #4
    case 0xC108D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:151 SBC #4
    // Overlapping static entry reached from 0xC108D5.
    case 0xC108D7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:152 STA @VIRTUAL04
    case 0xC108D8: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:154 LDX @VIRTUAL04
    case 0xC108DA: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:155 BRA @UNKNOWN9
    case 0xC108DC: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:157 LDA #$3C11
    case 0xC108DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x003C11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:157 LDA #$3C11
    // Overlapping static entry reached from 0xC108DE.
    case 0xC108E0: {
        Instruction step(cpu, 0x3C, 0x0018A4u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:158 LDY @LOCAL04
    case 0xC108E1: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:159 STA __BSS_START__,Y
    case 0xC108E3: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:160 INY
    case 0xC108E6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:161 INY
    case 0xC108E7: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:162 STY @LOCAL04
    case 0xC108E8: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:163 DEX
    case 0xC108EA: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:165 BNE @UNKNOWN8
    case 0xC108EB: {
        Instruction step(cpu, 0xD0, 0x0000F1u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:166 LDA @LOCAL08
    case 0xC108ED: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:167 LDY #.SIZEOF(window_stats)
    case 0xC108EF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:167 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC108EF.
    case 0xC108F1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:168 JSL MULT168
    case 0xC108F2: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:169 TAX
    case 0xC108F6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:170 LDA WINDOW_STATS+window_stats::id,X
    case 0xC108F7: {
        Instruction step(cpu, 0xBD, 0x008654u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:171 CMP PAGINATION_WINDOW
    case 0xC108FA: {
        Instruction step(cpu, 0xCD, 0x005E7Au, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:172 BNE @UNKNOWN12
    case 0xC108FD: {
        Instruction step(cpu, 0xD0, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:173 LDA PAGINATION_ANIMATION_FRAME
    case 0xC108FF: {
        Instruction step(cpu, 0xAD, 0x005E7Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:174 CMP #.LOWORD(-1)
    case 0xC10902: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:174 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10902.
    case 0xC10904: {
        Instruction step(cpu, 0xFF, 0xA93AF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:175 BEQ @UNKNOWN12
    case 0xC10905: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC10907: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00E43Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10904.
    case 0xC10908: {
        Instruction step(cpu, 0x3C, 0x0085E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10907.
    case 0xC10909: {
        Instruction step(cpu, 0xE4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC1090A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10909.
    case 0xC1090B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC1090C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1090C.
    case 0xC1090E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C1/C107AF.asm:176 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL0A
    case 0xC1090F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:177 LDA PAGINATION_ANIMATION_FRAME
    case 0xC10911: {
        Instruction step(cpu, 0xAD, 0x005E7Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:178 ASL
    case 0xC10914: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:179 ASL
    case 0xC10915: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:180 CLC
    case 0xC10916: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:181 ADC @VIRTUAL0A
    case 0xC10917: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:182 STA @VIRTUAL0A
    case 0xC10919: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1091B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1091B.
    case 0xC1091D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1091E: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10920: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10921: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10923: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C1/C107AF.asm:183 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC10925: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:184 LDX #0
    case 0xC10927: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:184 LDX #0
    // Overlapping static entry reached from 0xC10927.
    case 0xC10929: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:185 BRA @UNKNOWN11
    case 0xC1092A: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:187 LDA [@VIRTUAL06]
    case 0xC1092C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:188 LDY @LOCAL04
    case 0xC1092E: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:189 STA __BSS_START__,Y
    case 0xC10930: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:190 INC @VIRTUAL06
    case 0xC10933: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:191 INC @VIRTUAL06
    case 0xC10935: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:192 INY
    case 0xC10937: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:193 INY
    case 0xC10938: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:194 STY @LOCAL04
    case 0xC10939: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:195 INX
    case 0xC1093B: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:197 CPX #4
    case 0xC1093C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:197 CPX #4
    // Overlapping static entry reached from 0xC1093C.
    case 0xC1093E: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:198 BCC @UNKNOWN10
    case 0xC1093F: {
        Instruction step(cpu, 0x90, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:200 LDY @LOCAL04
    case 0xC10941: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:201 LDA __BSS_START__,Y
    case 0xC10943: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:202 BEQ @UNKNOWN13
    case 0xC10946: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:203 CMP #$7C10
    case 0xC10948: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x007C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:203 CMP #$7C10
    // Overlapping static entry reached from 0xC10948.
    case 0xC1094A: {
        Instruction step(cpu, 0x7C, 0x000DD0u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:204 BNE @UNKNOWN14
    case 0xC1094B: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:206 LDA #$7C10
    case 0xC1094D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x007C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:206 LDA #$7C10
    // Overlapping static entry reached from 0xC1094D.
    case 0xC1094F: {
        Instruction step(cpu, 0x7C, 0x000099u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:207 STA __BSS_START__,Y
    case 0xC10950: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:208 TYA
    case 0xC10953: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:209 INC
    case 0xC10954: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:210 INC
    case 0xC10955: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:211 STA @LOCAL08
    case 0xC10956: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:212 BRA @UNKNOWN15
    case 0xC10958: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:214 LDA #$7C13
    case 0xC1095A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x007C13u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:214 LDA #$7C13
    // Overlapping static entry reached from 0xC1095A.
    case 0xC1095C: {
        Instruction step(cpu, 0x7C, 0x000099u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:215 STA __BSS_START__,Y
    case 0xC1095D: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:216 TYA
    case 0xC10960: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:217 INC
    case 0xC10961: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:218 INC
    case 0xC10962: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:219 STA @LOCAL08
    case 0xC10963: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:221 LDA #32
    case 0xC10965: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:221 LDA #32
    // Overlapping static entry reached from 0xC10965.
    case 0xC10967: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:222 SEC
    case 0xC10968: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:223 SBC @LOCAL06
    case 0xC10969: {
        Instruction step(cpu, 0xE5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:224 DEC
    case 0xC1096B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:225 DEC
    case 0xC1096C: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:226 ASL
    case 0xC1096D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:227 STA @VIRTUAL02
    case 0xC1096E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:228 LDA @LOCAL08
    case 0xC10970: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:229 CLC
    case 0xC10972: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:230 ADC @VIRTUAL02
    case 0xC10973: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:231 TAX
    case 0xC10975: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:232 LDY @LOCAL05
    case 0xC10976: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:233 BRA @UNKNOWN19
    case 0xC10978: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:235 LDA #$3C12
    case 0xC1097A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x003C12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:235 LDA #$3C12
    // Overlapping static entry reached from 0xC1097A.
    case 0xC1097C: {
        Instruction step(cpu, 0x3C, 0x00009Du, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:236 STA __BSS_START__,X
    case 0xC1097D: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:236 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1097C.
    case 0xC1097F: {
        Instruction step(cpu, 0x00, 0x0000E8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:237 INX
    case 0xC10980: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:238 INX
    case 0xC10981: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:239 LDA @LOCAL06
    case 0xC10982: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:240 STA @LOCAL04
    case 0xC10984: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:241 BRA @UNKNOWN18
    case 0xC10986: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:243 LDA (@LOCAL07)
    case 0xC10988: {
        Instruction step(cpu, 0xB2, 0x00001Eu, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:244 CLC
    case 0xC1098A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:245 ADC #$2000
    case 0xC1098B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:245 ADC #$2000
    // Overlapping static entry reached from 0xC1098B.
    case 0xC1098D: {
        Instruction step(cpu, 0x20, 0x00009Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:246 STA __BSS_START__,X
    case 0xC1098E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:246 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1098D.
    case 0xC10990: {
        Instruction step(cpu, 0x00, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:247 INC @LOCAL07
    case 0xC10991: {
        Instruction step(cpu, 0xE6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:248 INC @LOCAL07
    case 0xC10993: {
        Instruction step(cpu, 0xE6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:249 INX
    case 0xC10995: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:250 INX
    case 0xC10996: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:251 LDA @LOCAL04
    case 0xC10997: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:252 DEC
    case 0xC10999: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:253 STA @LOCAL04
    case 0xC1099A: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:255 BNE @UNKNOWN17
    case 0xC1099C: {
        Instruction step(cpu, 0xD0, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:256 LDA #$7C12
    case 0xC1099E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x007C12u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:256 LDA #$7C12
    // Overlapping static entry reached from 0xC1099E.
    case 0xC109A0: {
        Instruction step(cpu, 0x7C, 0x00009Du, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:257 STA __BSS_START__,X
    case 0xC109A1: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:258 TXA
    case 0xC109A4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:259 INC
    case 0xC109A5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:260 INC
    case 0xC109A6: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:261 STA @LOCAL03
    case 0xC109A7: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:262 LDA #32
    case 0xC109A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:262 LDA #32
    // Overlapping static entry reached from 0xC109A9.
    case 0xC109AB: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:263 SEC
    case 0xC109AC: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:264 SBC @LOCAL06
    case 0xC109AD: {
        Instruction step(cpu, 0xE5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:265 DEC
    case 0xC109AF: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:266 DEC
    case 0xC109B0: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:267 ASL
    case 0xC109B1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:268 STA @VIRTUAL02
    case 0xC109B2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:269 LDA @LOCAL03
    case 0xC109B4: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:270 CLC
    case 0xC109B6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:271 ADC @VIRTUAL02
    case 0xC109B7: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:272 TAX
    case 0xC109B9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:273 DEY
    case 0xC109BA: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:275 BNE @UNKNOWN16
    case 0xC109BB: {
        Instruction step(cpu, 0xD0, 0x0000BDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:276 LDA __BSS_START__,X
    case 0xC109BD: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:277 BEQ @UNKNOWN20
    case 0xC109C0: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:278 CMP #$BC10
    case 0xC109C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x00BC10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:278 CMP #$BC10
    // Overlapping static entry reached from 0xC109C2.
    case 0xC109C4: {
        Instruction step(cpu, 0xBC, 0x000BD0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:279 BNE @UNKNOWN21
    case 0xC109C5: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:281 LDA #$BC10
    case 0xC109C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x00BC10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:281 LDA #$BC10
    // Overlapping static entry reached from 0xC109C7.
    case 0xC109C9: {
        Instruction step(cpu, 0xBC, 0x00009Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:282 STA __BSS_START__,X
    case 0xC109CA: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:282 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC109C9.
    case 0xC109CC: {
        Instruction step(cpu, 0x00, 0x00009Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:283 TXY
    case 0xC109CD: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:284 INY
    case 0xC109CE: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:285 INY
    case 0xC109CF: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:286 BRA @UNKNOWN22
    case 0xC109D0: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:288 LDA #$BC13
    case 0xC109D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x00BC13u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:288 LDA #$BC13
    // Overlapping static entry reached from 0xC109D2.
    case 0xC109D4: {
        Instruction step(cpu, 0xBC, 0x00009Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:289 STA __BSS_START__,X
    case 0xC109D5: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:289 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC109D4.
    case 0xC109D7: {
        Instruction step(cpu, 0x00, 0x00009Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:290 TXY
    case 0xC109D8: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:291 INY
    case 0xC109D9: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:292 INY
    case 0xC109DA: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:294 LDX @LOCAL06
    case 0xC109DB: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:295 BRA @UNKNOWN24
    case 0xC109DD: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:297 LDA #$BC11
    case 0xC109DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x00BC11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:297 LDA #$BC11
    // Overlapping static entry reached from 0xC109DF.
    case 0xC109E1: {
        Instruction step(cpu, 0xBC, 0x000099u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:298 STA __BSS_START__,Y
    case 0xC109E2: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:298 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC109E1.
    case 0xC109E4: {
        Instruction step(cpu, 0x00, 0x0000C8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:299 INY
    case 0xC109E5: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:300 INY
    case 0xC109E6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:301 DEX
    case 0xC109E7: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:303 BNE @UNKNOWN23
    case 0xC109E8: {
        Instruction step(cpu, 0xD0, 0x0000F5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:304 LDA __BSS_START__,Y
    case 0xC109EA: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:305 BEQ @UNKNOWN25
    case 0xC109ED: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:306 CMP #$FC10
    case 0xC109EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x00FC10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:306 CMP #$FC10
    // Overlapping static entry reached from 0xC109EF.
    case 0xC109F1: {
        Instruction step(cpu, 0xFC, 0x0008D0u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:307 BNE @UNKNOWN26
    case 0xC109F2: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:309 LDA #$FC10
    case 0xC109F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x00FC10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:309 LDA #$FC10
    // Overlapping static entry reached from 0xC109F4.
    case 0xC109F6: {
        Instruction step(cpu, 0xFC, 0x000099u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:310 STA __BSS_START__,Y
    case 0xC109F7: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:310 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC109F6.
    case 0xC109F9: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:311 BRA @UNKNOWN27
    case 0xC109FA: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:313 LDA #$FC13
    case 0xC109FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x00FC13u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:313 LDA #$FC13
    // Overlapping static entry reached from 0xC109FC.
    case 0xC109FE: {
        Instruction step(cpu, 0xFC, 0x000099u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:314 STA __BSS_START__,Y
    case 0xC109FF: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C107AF.asm:314 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC109FE.
    case 0xC10A01: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C107AF.asm:316 END_C_FUNCTION
    case 0xC10A02: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C107AF.asm:316 END_C_FUNCTION
    case 0xC10A03: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
