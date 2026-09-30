// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C2/C20ABC.asm
bool resume_unresolved_c2_c20abc(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20ABC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20ABC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20ABE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20ABF: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20AC0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20AC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC20AC1.
    case 0xC20AC3: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20AC4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C20ABC.asm:8 END_STACK_VARS
    case 0xC20AC5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:9 TAY
    case 0xC20AC6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:10 STY @LOCAL01
    case 0xC20AC7: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:11 LDA __BSS_START__,Y
    case 0xC20AC9: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:12 STA @LOCAL00
    case 0xC20ACC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:13 CMP #$FFFF
    case 0xC20ACE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC20ACE.
    case 0xC20AD0: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    case 0xC20AD1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    case 0xC20AD3: {
        Instruction step(cpu, 0x4C, 0x000B63u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:14 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC20AD0.
    case 0xC20AD4: {
        Instruction step(cpu, 0x63, 0x00000Bu, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:15 ASL
    case 0xC20AD6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:16 CLC
    case 0xC20AD7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:17 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    case 0xC20AD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x0088E4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:17 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    // Overlapping static entry reached from 0xC20AD8.
    case 0xC20ADA: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:18 TAX
    case 0xC20ADB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:19 LDA __BSS_START__,X
    case 0xC20ADC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:20 CMP #$FFFF
    case 0xC20ADF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:20 CMP #$FFFF
    // Overlapping static entry reached from 0xC20ADF.
    case 0xC20AE1: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    case 0xC20AE2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    case 0xC20AE4: {
        Instruction step(cpu, 0x4C, 0x000B63u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20ABC.asm:21 BEQL @UNKNOWN2
    // Overlapping static entry reached from 0xC20AE1.
    case 0xC20AE5: {
        Instruction step(cpu, 0x63, 0x00000Bu, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:22 LDA @LOCAL00
    case 0xC20AE7: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:23 STA CURRENT_FOCUS_WINDOW
    case 0xC20AE9: {
        Instruction step(cpu, 0x8D, 0x008958u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:24 LDA __BSS_START__,X
    case 0xC20AEC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:25 LDY #.SIZEOF(window_stats)
    case 0xC20AEF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:25 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20AEF.
    case 0xC20AF1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:26 JSL MULT168
    case 0xC20AF2: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:27 TAX
    case 0xC20AF6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:28 LDY @LOCAL01
    case 0xC20AF7: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:29 LDA a:window_text_attributes_copy::text_x,Y
    case 0xC20AF9: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:30 STA WINDOW_STATS+window_stats::text_x,X
    case 0xC20AFC: {
        Instruction step(cpu, 0x9D, 0x00865Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:31 LDA CURRENT_FOCUS_WINDOW
    case 0xC20AFF: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:32 ASL
    case 0xC20B02: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:33 TAX
    case 0xC20B03: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:34 LDA OPEN_WINDOW_TABLE,X
    case 0xC20B04: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC20B07: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20B07.
    case 0xC20B09: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:36 JSL MULT168
    case 0xC20B0A: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:37 TAX
    case 0xC20B0E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:38 LDY @LOCAL01
    case 0xC20B0F: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:39 LDA a:window_text_attributes_copy::text_y,Y
    case 0xC20B11: {
        Instruction step(cpu, 0xB9, 0x000004u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:40 STA WINDOW_STATS+window_stats::text_y,X
    case 0xC20B14: {
        Instruction step(cpu, 0x9D, 0x008660u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:41 LDA CURRENT_FOCUS_WINDOW
    case 0xC20B17: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:42 ASL
    case 0xC20B1A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:43 TAX
    case 0xC20B1B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:44 LDA OPEN_WINDOW_TABLE,X
    case 0xC20B1C: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:45 LDY #.SIZEOF(window_stats)
    case 0xC20B1F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:45 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20B1F.
    case 0xC20B21: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:46 JSL MULT168
    case 0xC20B22: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:47 TAX
    case 0xC20B26: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:48 LDY @LOCAL01
    case 0xC20B27: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC20B29: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:50 LDA a:window_text_attributes_copy::number_padding,Y
    case 0xC20B2B: {
        Instruction step(cpu, 0xB9, 0x000006u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:51 STA WINDOW_STATS+window_stats::number_padding,X
    case 0xC20B2E: {
        Instruction step(cpu, 0x9D, 0x008662u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC20B31: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:53 LDA CURRENT_FOCUS_WINDOW
    case 0xC20B33: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:54 ASL
    case 0xC20B36: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:55 TAX
    case 0xC20B37: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:56 LDA OPEN_WINDOW_TABLE,X
    case 0xC20B38: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:57 LDY #.SIZEOF(window_stats)
    case 0xC20B3B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:57 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20B3B.
    case 0xC20B3D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:58 JSL MULT168
    case 0xC20B3E: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:59 TAX
    case 0xC20B42: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:60 LDY @LOCAL01
    case 0xC20B43: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:61 LDA a:window_text_attributes_copy::curr_tile_attributes,Y
    case 0xC20B45: {
        Instruction step(cpu, 0xB9, 0x000007u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:62 STA WINDOW_STATS+window_stats::curr_tile_attributes,X
    case 0xC20B48: {
        Instruction step(cpu, 0x9D, 0x008663u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:63 LDA CURRENT_FOCUS_WINDOW
    case 0xC20B4B: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:64 ASL
    case 0xC20B4E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:65 TAX
    case 0xC20B4F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:66 LDA OPEN_WINDOW_TABLE,X
    case 0xC20B50: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:67 LDY #.SIZEOF(window_stats)
    case 0xC20B53: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:67 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20B53.
    case 0xC20B55: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:68 JSL MULT168
    case 0xC20B56: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:69 TAX
    case 0xC20B5A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:70 LDY @LOCAL01
    case 0xC20B5B: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:71 LDA a:window_text_attributes_copy::font,Y
    case 0xC20B5D: {
        Instruction step(cpu, 0xB9, 0x000009u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20ABC.asm:72 STA WINDOW_STATS+window_stats::font,X
    case 0xC20B60: {
        Instruction step(cpu, 0x9D, 0x008665u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20ABC.asm:74 END_C_FUNCTION
    case 0xC20B63: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20ABC.asm:74 END_C_FUNCTION
    case 0xC20B64: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
