// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/set_instant_printing.asm
bool resume_text_set_instant_printing(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_instant_printing.asm:4 BEGIN_C_FUNCTION
    case 0xC100F7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/set_instant_printing.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC100F9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/set_instant_printing.asm:9 LDA #1
    case 0xC100FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    case 0xC100FD: {
        Instruction step(cpu, 0x8D, 0x00991Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    // Overlapping static entry reached from 0xC100FB.
    case 0xC100FE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    // Overlapping static entry reached from 0xC100FE.
    case 0xC100FF: {
        Instruction step(cpu, 0x99, 0x0020C2u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_instant_printing.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC10100: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_instant_printing.asm:12 END_C_FUNCTION
    case 0xC10102: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
