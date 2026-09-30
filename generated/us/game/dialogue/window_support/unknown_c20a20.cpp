// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C2/C20A20.asm
bool resume_unresolved_c2_c20a20(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C20A20.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20A20: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A22: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A23: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A24: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A25: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20A25.
    case 0xC20A27: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A28: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C20A20.asm:7 END_STACK_VARS
    case 0xC20A29: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:8 TAX
    case 0xC20A2A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:9 STX @LOCAL00
    case 0xC20A2B: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A2D: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:11 STA a:window_text_attributes_copy::id,X
    case 0xC20A30: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A33: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:13 CMP #$FFFF
    case 0xC20A36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC20A36.
    case 0xC20A38: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    case 0xC20A39: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    case 0xC20A3B: {
        Instruction step(cpu, 0x4C, 0x000ABAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    // Overlapping static entry reached from 0xC20A38.
    case 0xC20A3C: {
        Instruction step(cpu, 0xBA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_x();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C2/C20A20.asm:14 BEQL @UNKNOWN1
    // Overlapping static entry reached from 0xC20A3C.
    case 0xC20A3D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:15 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A3E: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:16 ASL
    case 0xC20A41: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:17 TAX
    case 0xC20A42: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC20A43: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC20A46: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20A46.
    case 0xC20A48: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:20 JSL MULT168
    case 0xC20A49: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:21 TAX
    case 0xC20A4D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:22 LDA WINDOW_STATS+window_stats::text_x,X
    case 0xC20A4E: {
        Instruction step(cpu, 0xBD, 0x00865Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:23 LDX @LOCAL00
    case 0xC20A51: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:24 STA a:window_text_attributes_copy::text_x,X
    case 0xC20A53: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:25 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A56: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:26 ASL
    case 0xC20A59: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:27 TAX
    case 0xC20A5A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:28 LDA OPEN_WINDOW_TABLE,X
    case 0xC20A5B: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:29 LDY #.SIZEOF(window_stats)
    case 0xC20A5E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:29 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20A5E.
    case 0xC20A60: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:30 JSL MULT168
    case 0xC20A61: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:31 TAX
    case 0xC20A65: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:32 LDA WINDOW_STATS+window_stats::text_y,X
    case 0xC20A66: {
        Instruction step(cpu, 0xBD, 0x008660u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:33 LDX @LOCAL00
    case 0xC20A69: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:34 STA a:window_text_attributes_copy::text_y,X
    case 0xC20A6B: {
        Instruction step(cpu, 0x9D, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:35 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A6E: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:36 ASL
    case 0xC20A71: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:37 TAX
    case 0xC20A72: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:38 LDA OPEN_WINDOW_TABLE,X
    case 0xC20A73: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:39 LDY #.SIZEOF(window_stats)
    case 0xC20A76: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:39 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20A76.
    case 0xC20A78: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:40 JSL MULT168
    case 0xC20A79: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:41 TAX
    case 0xC20A7D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC20A7E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:43 LDA WINDOW_STATS+window_stats::number_padding,X
    case 0xC20A80: {
        Instruction step(cpu, 0xBD, 0x008662u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:44 LDX @LOCAL00
    case 0xC20A83: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:45 STA a:window_text_attributes_copy::number_padding,X
    case 0xC20A85: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC20A88: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:47 LDA CURRENT_FOCUS_WINDOW
    case 0xC20A8A: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:48 ASL
    case 0xC20A8D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:49 TAX
    case 0xC20A8E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:50 LDA OPEN_WINDOW_TABLE,X
    case 0xC20A8F: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:51 LDY #.SIZEOF(window_stats)
    case 0xC20A92: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:51 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20A92.
    case 0xC20A94: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:52 JSL MULT168
    case 0xC20A95: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:53 TAX
    case 0xC20A99: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:54 LDA WINDOW_STATS+window_stats::curr_tile_attributes,X
    case 0xC20A9A: {
        Instruction step(cpu, 0xBD, 0x008663u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:55 LDX @LOCAL00
    case 0xC20A9D: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:56 STA a:window_text_attributes_copy::curr_tile_attributes,X
    case 0xC20A9F: {
        Instruction step(cpu, 0x9D, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:57 LDA CURRENT_FOCUS_WINDOW
    case 0xC20AA2: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:58 ASL
    case 0xC20AA5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:59 TAX
    case 0xC20AA6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:60 LDA OPEN_WINDOW_TABLE,X
    case 0xC20AA7: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:61 LDY #.SIZEOF(window_stats)
    case 0xC20AAA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:61 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20AAA.
    case 0xC20AAC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:62 JSL MULT168
    case 0xC20AAD: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:63 TAX
    case 0xC20AB1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:64 LDA WINDOW_STATS+window_stats::font,X
    case 0xC20AB2: {
        Instruction step(cpu, 0xBD, 0x008665u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:65 LDX @LOCAL00
    case 0xC20AB5: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C20A20.asm:66 STA a:window_text_attributes_copy::font,X
    case 0xC20AB7: {
        Instruction step(cpu, 0x9D, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C20A20.asm:68 END_C_FUNCTION
    case 0xC20ABA: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C20A20.asm:68 END_C_FUNCTION
    case 0xC20ABB: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
