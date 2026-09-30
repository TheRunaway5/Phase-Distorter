// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/increment_secondary_memory.asm
bool resume_text_increment_secondary_memory(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/increment_secondary_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC1042E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/increment_secondary_memory.asm:5 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10430: {
        Instruction step(cpu, 0x20, 0x000301u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/increment_secondary_memory.asm:6 CLC
    case 0xC10433: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/increment_secondary_memory.asm:7 ADC #window_stats::secondary_memory
    case 0xC10434: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/increment_secondary_memory.asm:7 ADC #window_stats::secondary_memory
    // Overlapping static entry reached from 0xC10434.
    case 0xC10436: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/increment_secondary_memory.asm:8 TAX
    case 0xC10437: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/increment_secondary_memory.asm:9 LDA __BSS_START__,X
    case 0xC10438: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/increment_secondary_memory.asm:10 LDA __BSS_START__,X
    case 0xC1043B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/increment_secondary_memory.asm:11 INC
    case 0xC1043E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/increment_secondary_memory.asm:12 STA __BSS_START__,X
    case 0xC1043F: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/increment_secondary_memory.asm:13 END_C_FUNCTION
    case 0xC10442: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
