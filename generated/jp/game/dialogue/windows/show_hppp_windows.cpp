// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/show_hppp_windows.asm
bool resume_text_show_hppp_windows(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/show_hppp_windows.asm:3 BEGIN_C_FUNCTION
    case 0xC10E5A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:5 JSR UNKNOWN_C3E6F8
    case 0xC10E5C: {
        Instruction step(cpu, 0x20, 0x000BDBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC10E5F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:7 LDA #1
    case 0xC10E61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:8 STA RENDER_HPPP_WINDOWS
    case 0xC10E63: {
        Instruction step(cpu, 0x8D, 0x008D07u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:8 STA RENDER_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC10E61.
    case 0xC10E64: {
        Instruction step(cpu, 0x07, 0x00008Du, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:9 STA REDRAW_ALL_WINDOWS
    case 0xC10E66: {
        Instruction step(cpu, 0x8D, 0x00991Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC10E69: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:11 LDA #.LOWORD(-1)
    case 0xC10E6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:11 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10E6B.
    case 0xC10E6D: {
        Instruction step(cpu, 0xFF, 0x993F8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:12 STA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC10E6E: {
        Instruction step(cpu, 0x8D, 0x00993Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/show_hppp_windows.asm:13 END_C_FUNCTION
    case 0xC10E71: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
