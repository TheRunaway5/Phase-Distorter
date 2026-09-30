// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C4/C45E96.asm
bool resume_unresolved_c4_c45e96(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C45E96.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43BE8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:6 LDA DMA_TRANSFER_FLAG
    case 0xC43BEA: {
        Instruction step(cpu, 0xAD, 0x00A031u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:7 BNE @UNKNOWN0
    case 0xC43BED: {
        Instruction step(cpu, 0xD0, 0x0000FBu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:8 LDX #0
    case 0xC43BEF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:8 LDX #0
    // Overlapping static entry reached from 0xC43BEF.
    case 0xC43BF1: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:9 BRA @UNKNOWN2
    case 0xC43BF2: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC43BF4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:12 LDA #<-1
    case 0xC43BF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x009DFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:13 STA UNKNOWN_7E9D23,X
    case 0xC43BF8: {
        Instruction step(cpu, 0x9D, 0x009FA9u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:13 STA UNKNOWN_7E9D23,X
    // Overlapping static entry reached from 0xC43BF6.
    case 0xC43BF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Fu : 0x00E89Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:14 INX
    case 0xC43BFB: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:16 CPX #32
    case 0xC43BFC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:16 CPX #32
    // Overlapping static entry reached from 0xC43BFC.
    case 0xC43BFE: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:17 BCC @UNKNOWN1
    case 0xC43BFF: {
        Instruction step(cpu, 0x90, 0x0000F3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC43C01: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:19 STZ VWF_TILE
    case 0xC43C03: {
        Instruction step(cpu, 0x9C, 0x00A02Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:20 STZ VWF_X
    case 0xC43C06: {
        Instruction step(cpu, 0x9C, 0x00A029u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:21 LDX UNKNOWN_7E9E27
    case 0xC43C09: {
        Instruction step(cpu, 0xAE, 0x00A02Du, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:22 INX
    case 0xC43C0C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:23 STX UNKNOWN_7E9E27
    case 0xC43C0D: {
        Instruction step(cpu, 0x8E, 0x00A02Du, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:24 CPX #48
    case 0xC43C10: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:24 CPX #48
    // Overlapping static entry reached from 0xC43C10.
    case 0xC43C12: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:25 BCC @UNKNOWN3
    case 0xC43C13: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:26 STZ UNKNOWN_7E9E27
    case 0xC43C15: {
        Instruction step(cpu, 0x9C, 0x00A02Du, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C45E96.asm:28 STZ UNKNOWN_7E9E29
    case 0xC43C18: {
        Instruction step(cpu, 0x9C, 0x00A02Fu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C45E96.asm:32 END_C_FUNCTION
    case 0xC43C1B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
