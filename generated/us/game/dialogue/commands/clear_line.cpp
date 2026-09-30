// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/clear_line.asm
bool resume_text_ccs_clear_line(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/clear_line.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC10BD3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:4 LDA CURRENT_FOCUS_WINDOW
    case 0xC10BD5: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:5 JSL UNKNOWN_C43739
    case 0xC10BD8: {
        Instruction step(cpu, 0x22, 0xC43739u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:6 LDA CURRENT_FOCUS_WINDOW
    case 0xC10BDC: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:7 ASL
    case 0xC10BDF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:8 TAX
    case 0xC10BE0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:9 LDA OPEN_WINDOW_TABLE,X
    case 0xC10BE1: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:10 LDY #.SIZEOF(window_stats)
    case 0xC10BE4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:10 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10BE4.
    case 0xC10BE6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:11 JSL MULT168
    case 0xC10BE7: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:12 TAX
    case 0xC10BEB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:13 LDA WINDOW_STATS+window_stats::text_y,X
    case 0xC10BEC: {
        Instruction step(cpu, 0xBD, 0x008660u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:14 TAX
    case 0xC10BEF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:15 LDA #NULL
    case 0xC10BF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC10BF0.
    case 0xC10BF2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:16 JSL UNKNOWN_C438A5
    case 0xC10BF3: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/clear_line.asm:17 RTS
    case 0xC10BF7: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
