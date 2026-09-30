// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/clear_instant_printing.asm
bool resume_text_clear_instant_printing(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/clear_instant_printing.asm:4 BEGIN_C_FUNCTION
    case 0xC100ED: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/clear_instant_printing.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC100EF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/clear_instant_printing.asm:10 STZ INSTANT_PRINTING
    case 0xC100F1: {
        Instruction step(cpu, 0x9C, 0x00991Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/clear_instant_printing.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC100F4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/clear_instant_printing.asm:12 END_C_FUNCTION
    case 0xC100F6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
