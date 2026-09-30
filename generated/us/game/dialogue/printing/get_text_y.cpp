// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/get_text_y.asm
bool resume_text_get_text_y(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_text_y.asm:3 BEGIN_C_FUNCTION
    case 0xC104D8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/get_text_y.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC104DA: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_text_y.asm:6 ASL
    case 0xC104DD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/get_text_y.asm:7 TAX
    case 0xC104DE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/get_text_y.asm:8 LDA OPEN_WINDOW_TABLE,X
    case 0xC104DF: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_text_y.asm:9 LDY #.SIZEOF(window_stats)
    case 0xC104E2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/get_text_y.asm:9 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC104E2.
    case 0xC104E4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_text_y.asm:10 JSL MULT168
    case 0xC104E5: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/get_text_y.asm:10 JSL MULT168
    // Overlapping static entry reached from 0xC1A901.
    case 0xC104E6: {
        Instruction step(cpu, 0xF7, 0x00008Fu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/get_text_y.asm:10 JSL MULT168
    // Overlapping static entry reached from 0xC104E6.
    case 0xC104E8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000AAu : 0x00BDAAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/get_text_y.asm:11 TAX
    case 0xC104E9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/get_text_y.asm:12 LDA WINDOW_STATS+window_stats::text_y,X
    case 0xC104EA: {
        Instruction step(cpu, 0xBD, 0x008660u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_text_y.asm:12 LDA WINDOW_STATS+window_stats::text_y,X
    // Overlapping static entry reached from 0xC104E8.
    case 0xC104EB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_text_y.asm:13 END_C_FUNCTION
    case 0xC104ED: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
