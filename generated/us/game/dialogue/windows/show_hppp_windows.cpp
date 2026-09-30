// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/show_hppp_windows.asm
bool resume_text_show_hppp_windows(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/show_hppp_windows.asm:3 BEGIN_C_FUNCTION
    case 0xC10A04: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:5 JSR UNKNOWN_C3E6F8
    case 0xC10A06: {
        Instruction step(cpu, 0x22, 0xC3E6F8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC10A0A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:7 LDA #1
    case 0xC10A0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:8 STA RENDER_HPPP_WINDOWS
    case 0xC10A0E: {
        Instruction step(cpu, 0x8D, 0x0089C9u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:8 STA RENDER_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC10A0C.
    case 0xC10A0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000089u : 0x008D89u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:9 STA REDRAW_ALL_WINDOWS
    case 0xC10A11: {
        Instruction step(cpu, 0x8D, 0x009623u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:9 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10A0F.
    case 0xC10A12: {
        Instruction step(cpu, 0x23, 0x000096u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC10A14: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:11 LDA #.LOWORD(-1)
    case 0xC10A16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:11 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10A16.
    case 0xC10A18: {
        Instruction step(cpu, 0xFF, 0x96478Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/show_hppp_windows.asm:12 STA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC10A19: {
        Instruction step(cpu, 0x8D, 0x009647u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/show_hppp_windows.asm:13 END_C_FUNCTION
    case 0xC10A1C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
