// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/free_tile_safe.asm
bool resume_text_free_tile_safe(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/free_tile_safe.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44E4D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/free_tile_safe.asm:5 AND #$03FF
    case 0xC44E4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0003FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/free_tile_safe.asm:5 AND #$03FF
    // Overlapping static entry reached from 0xC44E4F.
    case 0xC44E51: {
        Instruction step(cpu, 0x03, 0x0000C9u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/free_tile_safe.asm:6 CMP #64
    case 0xC44E52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/free_tile_safe.asm:6 CMP #64
    // Overlapping static entry reached from 0xC44E51.
    case 0xC44E53: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/text/free_tile_safe.asm:6 CMP #64
    // Overlapping static entry reached from 0xC44E52.
    case 0xC44E54: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/free_tile_safe.asm:7 BEQ @UNKNOWN0
    case 0xC44E55: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/free_tile_safe.asm:8 CMP #0
    case 0xC44E57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/free_tile_safe.asm:8 CMP #0
    // Overlapping static entry reached from 0xC44E57.
    case 0xC44E59: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/free_tile_safe.asm:9 BEQ @UNKNOWN0
    case 0xC44E5A: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/free_tile_safe.asm:10 JSL FREE_TILE
    case 0xC44E5C: {
        Instruction step(cpu, 0x22, 0xC44AF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/free_tile_safe.asm:12 END_C_FUNCTION
    case 0xC44E60: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
