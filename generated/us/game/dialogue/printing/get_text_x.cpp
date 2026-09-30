// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/get_text_x.asm
bool resume_text_get_text_x(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_text_x.asm:3 BEGIN_C_FUNCTION
    case 0xC104B5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/get_text_x.asm:6 LDA CURRENT_FOCUS_WINDOW
    case 0xC104B7: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_text_x.asm:7 CMP #.LOWORD(-1)
    case 0xC104BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/get_text_x.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC104BA.
    case 0xC104BC: {
        Instruction step(cpu, 0xFF, 0xA905D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/get_text_x.asm:8 BNE @UNKNOWN0
    case 0xC104BD: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/get_text_x.asm:9 LDA #0
    case 0xC104BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_text_x.asm:9 LDA #0
    // Overlapping static entry reached from 0xC104BC.
    case 0xC104C0: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_text_x.asm:9 LDA #0
    // Overlapping static entry reached from 0xC104BF.
    case 0xC104C1: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_text_x.asm:10 BRA @UNKNOWN1
    case 0xC104C2: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/get_text_x.asm:13 LDA CURRENT_FOCUS_WINDOW
    case 0xC104C4: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_text_x.asm:14 ASL
    case 0xC104C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/get_text_x.asm:15 TAX
    case 0xC104C8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/get_text_x.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC104C9: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_text_x.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC104CC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/get_text_x.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC104CC.
    case 0xC104CE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_text_x.asm:18 JSL MULT168
    case 0xC104CF: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/get_text_x.asm:19 TAX
    case 0xC104D3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/get_text_x.asm:20 LDA WINDOW_STATS+window_stats::text_x,X
    case 0xC104D4: {
        Instruction step(cpu, 0xBD, 0x00865Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_text_x.asm:22 END_C_FUNCTION
    case 0xC104D7: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
