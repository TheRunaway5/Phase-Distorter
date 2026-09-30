// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/clear_instant_printing.asm
bool resume_text_clear_instant_printing(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/clear_instant_printing.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC3E4CA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/clear_instant_printing.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E4CC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/clear_instant_printing.asm:10 STZ INSTANT_PRINTING
    case 0xC3E4CE: {
        Instruction step(cpu, 0x9C, 0x009622u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/clear_instant_printing.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC3E4D1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/clear_instant_printing.asm:12 END_C_FUNCTION
    case 0xC3E4D3: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
