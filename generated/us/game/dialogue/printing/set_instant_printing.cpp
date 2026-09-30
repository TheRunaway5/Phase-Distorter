// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/set_instant_printing.asm
bool resume_text_set_instant_printing(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_instant_printing.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC3E4D4: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_instant_printing.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E4D6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/set_instant_printing.asm:9 LDA #1
    case 0xC3E4D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    case 0xC3E4DA: {
        Instruction step(cpu, 0x8D, 0x009622u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    // Overlapping static entry reached from 0xC3E4D8.
    case 0xC3E4DB: {
        Instruction step(cpu, 0x22, 0x20C296u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/set_instant_printing.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC3E4DD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_instant_printing.asm:12 END_C_FUNCTION
    case 0xC3E4DF: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
