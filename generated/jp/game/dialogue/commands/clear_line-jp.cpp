// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/clear_line-jp.asm
bool resume_text_ccs_clear_line_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/clear_line-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC111C9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:4 LDA CURRENT_FOCUS_WINDOW
    case 0xC111CB: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:5 JSR UNKNOWN_C43739
    case 0xC111CE: {
        Instruction step(cpu, 0x20, 0x000F41u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:6 LDA CURRENT_FOCUS_WINDOW
    case 0xC111D1: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:7 ASL
    case 0xC111D4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:8 TAX
    case 0xC111D5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:9 LDA OPEN_WINDOW_TABLE,X
    case 0xC111D6: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:10 LDY #.SIZEOF(window_stats)
    case 0xC111D9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:10 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC111D9.
    case 0xC111DB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:11 JSL MULT168
    case 0xC111DC: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:12 TAX
    case 0xC111E0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:13 LDA WINDOW_STATS+16,X
    case 0xC111E1: {
        Instruction step(cpu, 0xBD, 0x0089D2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:14 TAX
    case 0xC111E4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:15 LDA #NULL
    case 0xC111E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC111E5.
    case 0xC111E7: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:16 JSR UNKNOWN_C438A5
    case 0xC111E8: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/clear_line-jp.asm:17 RTS
    case 0xC111EB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
