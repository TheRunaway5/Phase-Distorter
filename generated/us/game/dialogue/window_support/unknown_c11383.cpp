// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C1/C11383.asm
bool resume_unresolved_c1_c11383(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11383.asm:3 BEGIN_C_FUNCTION
    case 0xC11383: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C11383.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC11380.
    case 0xC11384: {
        Instruction step(cpu, 0x31, 0x0000ADu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C11383.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC11385: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C11383.asm:5 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11384.
    case 0xC11386: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/unknown/C1/C11383.asm:5 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11386.
    case 0xC11387: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000022u : 0x00E322u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C1/C11383.asm:6 JSR UNKNOWN_C3E7E3
    case 0xC11388: {
        Instruction step(cpu, 0x22, 0xC3E7E3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C11383.asm:6 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC11387.
    case 0xC11389: {
        Instruction step(cpu, 0xE3, 0x0000E7u, 2u, AddressMode::StackRelative);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C11383.asm:6 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC11387.
    case 0xC1138A: {
        Instruction step(cpu, 0xE7, 0x0000C3u, 2u, AddressMode::DirectPageIndirectLong);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C1/C11383.asm:6 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC11389.
    case 0xC1138B: {
        Instruction step(cpu, 0xC3, 0x000060u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C11383.asm:7 END_C_FUNCTION
    case 0xC1138C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
