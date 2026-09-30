// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C2/C20ABC.asm
bool resume_unresolved_c2_c20abc(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20ABC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2094D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC2094F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20950: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20951: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20952: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC20952.
    case 0xC20954: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20955: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20956: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:9 TAY
    case 0xC20957: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:10 STY @LOCAL01
    case 0xC20958: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:11 LDA __BSS_START__,Y
    case 0xC2095A: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:12 STA @LOCAL00
    case 0xC2095D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:13 CMP #$FFFF
    case 0xC2095F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC2095F.
    case 0xC20961: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    case 0xC20962: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    case 0xC20964: {
        Instruction step(cpu, 0x4C, 0x0009F4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC20961.
    case 0xC20965: {
        Instruction step(cpu, 0xF4, 0x000A09u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:15 ASL
    case 0xC20967: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:16 CLC
    case 0xC20968: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:17 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    case 0xC20969: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x008C26u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:17 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    // Overlapping static entry reached from 0xC20969.
    case 0xC2096B: {
        Instruction step(cpu, 0x8C, 0x00BDAAu, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:18 TAX
    case 0xC2096C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:19 LDA __BSS_START__,X
    case 0xC2096D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:19 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2096B.
    case 0xC2096E: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:20 CMP #$FFFF
    case 0xC20970: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:20 CMP #$FFFF
    // Overlapping static entry reached from 0xC20970.
    case 0xC20972: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    case 0xC20973: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    case 0xC20975: {
        Instruction step(cpu, 0x4C, 0x0009F4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC20972.
    case 0xC20976: {
        Instruction step(cpu, 0xF4, 0x00A509u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:22 LDA @LOCAL00
    case 0xC20978: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:22 LDA @LOCAL00
    // Overlapping static entry reached from 0xC20976.
    case 0xC20979: {
        Instruction step(cpu, 0x0E, 0x00968Du, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:23 STA CURRENT_FOCUS_WINDOW
    case 0xC2097A: {
        Instruction step(cpu, 0x8D, 0x008C96u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:23 STA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC20979.
    case 0xC2097C: {
        Instruction step(cpu, 0x8C, 0x0000BDu, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:24 LDA __BSS_START__,X
    case 0xC2097D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:24 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2097C.
    case 0xC2097F: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:25 LDY #.SIZEOF(window_stats)
    case 0xC20980: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:25 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20980.
    case 0xC20982: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:26 JSL MULT168
    case 0xC20983: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:27 TAX
    case 0xC20987: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:28 LDY @LOCAL01
    case 0xC20988: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:29 LDA a:window_text_attributes_copy::text_x,Y
    case 0xC2098A: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:30 STA WINDOW_STATS+window_stats::text_x,X
    case 0xC2098D: {
        Instruction step(cpu, 0x9D, 0x0089D0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:31 LDA CURRENT_FOCUS_WINDOW
    case 0xC20990: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:32 ASL
    case 0xC20993: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:33 TAX
    case 0xC20994: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:34 LDA OPEN_WINDOW_TABLE,X
    case 0xC20995: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC20998: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20998.
    case 0xC2099A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:36 JSL MULT168
    case 0xC2099B: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:37 TAX
    case 0xC2099F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:38 LDY @LOCAL01
    case 0xC209A0: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:39 LDA a:window_text_attributes_copy::text_y,Y
    case 0xC209A2: {
        Instruction step(cpu, 0xB9, 0x000004u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:40 STA WINDOW_STATS+window_stats::text_y,X
    case 0xC209A5: {
        Instruction step(cpu, 0x9D, 0x0089D2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:41 LDA CURRENT_FOCUS_WINDOW
    case 0xC209A8: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:42 ASL
    case 0xC209AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:43 TAX
    case 0xC209AC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:44 LDA OPEN_WINDOW_TABLE,X
    case 0xC209AD: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:45 LDY #.SIZEOF(window_stats)
    case 0xC209B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:45 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC209B0.
    case 0xC209B2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:46 JSL MULT168
    case 0xC209B3: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:47 TAX
    case 0xC209B7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:48 LDY @LOCAL01
    case 0xC209B8: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC209BA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:50 LDA a:window_text_attributes_copy::number_padding,Y
    case 0xC209BC: {
        Instruction step(cpu, 0xB9, 0x000006u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:51 STA WINDOW_STATS+window_stats::number_padding,X
    case 0xC209BF: {
        Instruction step(cpu, 0x9D, 0x0089D4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC209C2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:53 LDA CURRENT_FOCUS_WINDOW
    case 0xC209C4: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:54 ASL
    case 0xC209C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:55 TAX
    case 0xC209C8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:56 LDA OPEN_WINDOW_TABLE,X
    case 0xC209C9: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:57 LDY #.SIZEOF(window_stats)
    case 0xC209CC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:57 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC209CC.
    case 0xC209CE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:58 JSL MULT168
    case 0xC209CF: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:59 TAX
    case 0xC209D3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:60 LDY @LOCAL01
    case 0xC209D4: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:61 LDA a:window_text_attributes_copy::curr_tile_attributes,Y
    case 0xC209D6: {
        Instruction step(cpu, 0xB9, 0x000007u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:62 STA WINDOW_STATS+window_stats::curr_tile_attributes,X
    case 0xC209D9: {
        Instruction step(cpu, 0x9D, 0x0089D5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:63 LDA CURRENT_FOCUS_WINDOW
    case 0xC209DC: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:64 ASL
    case 0xC209DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:65 TAX
    case 0xC209E0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:66 LDA OPEN_WINDOW_TABLE,X
    case 0xC209E1: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:67 LDY #.SIZEOF(window_stats)
    case 0xC209E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:67 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC209E4.
    case 0xC209E6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:68 JSL MULT168
    case 0xC209E7: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:69 TAX
    case 0xC209EB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:70 LDY @LOCAL01
    case 0xC209EC: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:71 LDA a:window_text_attributes_copy::font,Y
    case 0xC209EE: {
        Instruction step(cpu, 0xB9, 0x000009u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:72 STA WINDOW_STATS+window_stats::font,X
    case 0xC209F1: {
        Instruction step(cpu, 0x9D, 0x0089D7u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20ABC.asm:74 END_C_FUNCTION
    case 0xC209F4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20ABC.asm:74 END_C_FUNCTION
    case 0xC209F5: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
