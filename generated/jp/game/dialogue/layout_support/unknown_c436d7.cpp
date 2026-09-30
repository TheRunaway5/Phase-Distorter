// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C4/C436D7.asm
bool resume_unresolved_c4_c436d7(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C436D7.asm:4 BEGIN_C_FUNCTION
    case 0xC10EDF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC10EE4.
    case 0xC10EE6: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:14 STX @LOCAL02
    case 0xC10EE9: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:14 STX @LOCAL02
    // Overlapping static entry reached from 0xC10EE6.
    case 0xC10EEA: {
        Instruction step(cpu, 0x12, 0x00000Au, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:15 ASL
    case 0xC10EEB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:16 TAX
    case 0xC10EEC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:17 LDY OPEN_WINDOW_TABLE,X
    case 0xC10EED: {
        Instruction step(cpu, 0xBC, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:18 STY @LOCAL01
    case 0xC10EF0: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:19 TYA
    case 0xC10EF2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:20 LDY #.SIZEOF(window_stats)
    case 0xC10EF3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:20 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10EF3.
    case 0xC10EF5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:21 JSL MULT168
    case 0xC10EF6: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:22 PHA
    case 0xC10EFA: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:23 TAX
    case 0xC10EFB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:24 LDY WINDOW_STATS+window_stats::width,X
    case 0xC10EFC: {
        Instruction step(cpu, 0xBC, 0x0089CCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:25 LDX @LOCAL02
    case 0xC10EFF: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:26 TXA
    case 0xC10F01: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:27 JSL MULT16
    case 0xC10F02: {
        Instruction step(cpu, 0x22, 0xC09014u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:28 ASL
    case 0xC10F06: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:29 ASL
    case 0xC10F07: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:30 PLX
    case 0xC10F08: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:31 CLC
    case 0xC10F09: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:32 ADC WINDOW_STATS+window_stats::tilemap_address,X
    case 0xC10F0A: {
        Instruction step(cpu, 0x7D, 0x0089F7u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:33 TAX
    case 0xC10F0D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:34 STX @LOCAL00
    case 0xC10F0E: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:35 LDA #0
    case 0xC10F10: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:35 LDA #0
    // Overlapping static entry reached from 0xC10F10.
    case 0xC10F12: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:36 STA @LOCAL02
    case 0xC10F13: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:37 BRA @UNKNOWN1
    case 0xC10F15: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:39 LDA #64
    case 0xC10F17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:39 LDA #64
    // Overlapping static entry reached from 0xC10F17.
    case 0xC10F19: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:40 LDX @LOCAL00
    case 0xC10F1A: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:41 STA __BSS_START__,X
    case 0xC10F1C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:42 INX
    case 0xC10F1F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:43 INX
    case 0xC10F20: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:44 STX @LOCAL00
    case 0xC10F21: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:45 LDA @LOCAL02
    case 0xC10F23: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:46 INC
    case 0xC10F25: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:47 STA @LOCAL02
    case 0xC10F26: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:49 LDY @LOCAL01
    case 0xC10F28: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:50 TYA
    case 0xC10F2A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:51 LDY #.SIZEOF(window_stats)
    case 0xC10F2B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:51 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10F2B.
    case 0xC10F2D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:52 JSL MULT168
    case 0xC10F2E: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:53 TAX
    case 0xC10F32: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:54 LDA WINDOW_STATS+window_stats::width,X
    case 0xC10F33: {
        Instruction step(cpu, 0xBD, 0x0089CCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:55 ASL
    case 0xC10F36: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:56 STA @VIRTUAL02
    case 0xC10F37: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:57 LDA @LOCAL02
    case 0xC10F39: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:58 CMP @VIRTUAL02
    case 0xC10F3B: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C436D7.asm:59 BNE @UNKNOWN0
    case 0xC10F3D: {
        Instruction step(cpu, 0xD0, 0x0000D8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C436D7.asm:60 END_C_FUNCTION
    case 0xC10F3F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C436D7.asm:60 END_C_FUNCTION
    case 0xC10F40: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
