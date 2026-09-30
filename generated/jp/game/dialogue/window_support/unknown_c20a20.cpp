// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C2/C20A20.asm
bool resume_unresolved_c2_c20a20(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20A20.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC208B1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208B3: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208B4: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208B5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC208B6.
    case 0xC208B8: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208B9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC208BA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:8 TAX
    case 0xC208BB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:9 STX @LOCAL00
    case 0xC208BC: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC208BE: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:11 STA a:window_text_attributes_copy::id,X
    case 0xC208C1: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC208C4: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:13 CMP #$FFFF
    case 0xC208C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC208C7.
    case 0xC208C9: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    case 0xC208CA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    case 0xC208CC: {
        Instruction step(cpu, 0x4C, 0x00094Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    // Overlapping static entry reached from 0xC208C9.
    case 0xC208CD: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    // Overlapping static entry reached from 0xC208CD.
    case 0xC208CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000ADu : 0x0096ADu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:15 LDA CURRENT_FOCUS_WINDOW
    case 0xC208CF: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:15 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC208CE.
    case 0xC208D0: {
        Instruction step(cpu, 0x96, 0x00008Cu, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:15 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC208CE.
    case 0xC208D1: {
        Instruction step(cpu, 0x8C, 0x00AA0Au, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:16 ASL
    case 0xC208D2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:17 TAX
    case 0xC208D3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC208D4: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC208D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC208D7.
    case 0xC208D9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:20 JSL MULT168
    case 0xC208DA: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:21 TAX
    case 0xC208DE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:22 LDA WINDOW_STATS+window_stats::text_x,X
    case 0xC208DF: {
        Instruction step(cpu, 0xBD, 0x0089D0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:23 LDX @LOCAL00
    case 0xC208E2: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:24 STA a:window_text_attributes_copy::text_x,X
    case 0xC208E4: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:25 LDA CURRENT_FOCUS_WINDOW
    case 0xC208E7: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:26 ASL
    case 0xC208EA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:27 TAX
    case 0xC208EB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:28 LDA OPEN_WINDOW_TABLE,X
    case 0xC208EC: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:29 LDY #.SIZEOF(window_stats)
    case 0xC208EF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:29 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC208EF.
    case 0xC208F1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:30 JSL MULT168
    case 0xC208F2: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:31 TAX
    case 0xC208F6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:32 LDA WINDOW_STATS+window_stats::text_y,X
    case 0xC208F7: {
        Instruction step(cpu, 0xBD, 0x0089D2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:33 LDX @LOCAL00
    case 0xC208FA: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:34 STA a:window_text_attributes_copy::text_y,X
    case 0xC208FC: {
        Instruction step(cpu, 0x9D, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:35 LDA CURRENT_FOCUS_WINDOW
    case 0xC208FF: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:36 ASL
    case 0xC20902: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:37 TAX
    case 0xC20903: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:38 LDA OPEN_WINDOW_TABLE,X
    case 0xC20904: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:39 LDY #.SIZEOF(window_stats)
    case 0xC20907: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:39 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20907.
    case 0xC20909: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:40 JSL MULT168
    case 0xC2090A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:41 TAX
    case 0xC2090E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC2090F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:43 LDA WINDOW_STATS+window_stats::number_padding,X
    case 0xC20911: {
        Instruction step(cpu, 0xBD, 0x0089D4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:44 LDX @LOCAL00
    case 0xC20914: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:45 STA a:window_text_attributes_copy::number_padding,X
    case 0xC20916: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC20919: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:47 LDA CURRENT_FOCUS_WINDOW
    case 0xC2091B: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:48 ASL
    case 0xC2091E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:49 TAX
    case 0xC2091F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:50 LDA OPEN_WINDOW_TABLE,X
    case 0xC20920: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:51 LDY #.SIZEOF(window_stats)
    case 0xC20923: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:51 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20923.
    case 0xC20925: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:52 JSL MULT168
    case 0xC20926: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:53 TAX
    case 0xC2092A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:54 LDA WINDOW_STATS+window_stats::curr_tile_attributes,X
    case 0xC2092B: {
        Instruction step(cpu, 0xBD, 0x0089D5u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:55 LDX @LOCAL00
    case 0xC2092E: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:56 STA a:window_text_attributes_copy::curr_tile_attributes,X
    case 0xC20930: {
        Instruction step(cpu, 0x9D, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:57 LDA CURRENT_FOCUS_WINDOW
    case 0xC20933: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:58 ASL
    case 0xC20936: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:59 TAX
    case 0xC20937: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:60 LDA OPEN_WINDOW_TABLE,X
    case 0xC20938: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:61 LDY #.SIZEOF(window_stats)
    case 0xC2093B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:61 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC2093B.
    case 0xC2093D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:62 JSL MULT168
    case 0xC2093E: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:63 TAX
    case 0xC20942: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:64 LDA WINDOW_STATS+window_stats::font,X
    case 0xC20943: {
        Instruction step(cpu, 0xBD, 0x0089D7u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:65 LDX @LOCAL00
    case 0xC20946: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:66 STA a:window_text_attributes_copy::font,X
    case 0xC20948: {
        Instruction step(cpu, 0x9D, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20A20.asm:68 END_C_FUNCTION
    case 0xC2094B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20A20.asm:68 END_C_FUNCTION
    case 0xC2094C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
