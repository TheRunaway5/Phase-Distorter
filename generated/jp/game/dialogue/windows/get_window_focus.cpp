// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/get_window_focus.asm
bool resume_text_get_window_focus(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_window_focus.asm:3 BEGIN_C_FUNCTION
    case 0xC10135: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_window_focus.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC10132.
    case 0xC10136: {
        Instruction step(cpu, 0x31, 0x0000ADu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/get_window_focus.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC10137: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_window_focus.asm:5 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10136.
    case 0xC10138: {
        Instruction step(cpu, 0x96, 0x00008Cu, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_window_focus.asm:6 END_C_FUNCTION
    case 0xC1013A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
