// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/window_tick_without_instant_printing.asm
bool resume_text_window_tick_without_instant_printing(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/window_tick_without_instant_printing.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC3E4E0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/window_tick_without_instant_printing.asm:4 JSL CLEAR_INSTANT_PRINTING
    case 0xC3E4E2: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick_without_instant_printing.asm:5 JSL WINDOW_TICK
    case 0xC3E4E6: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick_without_instant_printing.asm:6 JSL SET_INSTANT_PRINTING
    case 0xC3E4EA: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/window_tick_without_instant_printing.asm:7 RTL
    case 0xC3E4EE: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
