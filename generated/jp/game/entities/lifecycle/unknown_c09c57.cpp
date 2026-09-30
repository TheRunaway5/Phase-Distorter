// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C09C57.asm
bool resume_unresolved_c0_c09c57(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C57.asm:3 LDA #$FFFF
    case 0xC09C36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:3 LDA #$FFFF
    // Overlapping static entry reached from 0xC09C36.
    case 0xC09C38: {
        Instruction step(cpu, 0xFF, 0x0A949Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:4 STA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C39: {
        Instruction step(cpu, 0x9D, 0x000A94u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:5 TXA
    case 0xC09C3C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:6 LDX FIRST_ENTITY
    case 0xC09C3D: {
        Instruction step(cpu, 0xAE, 0x000A46u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:7 BPL @UNKNOWN0
    case 0xC09C40: {
        Instruction step(cpu, 0x10, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:8 STA FIRST_ENTITY
    case 0xC09C42: {
        Instruction step(cpu, 0x8D, 0x000A46u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:9 BRA @UNKNOWN1
    case 0xC09C45: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:11 TXY
    case 0xC09C47: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:12 LDX ENTITY_NEXT_ENTITY_TABLE,Y
    case 0xC09C48: {
        Instruction step(cpu, 0xBE, 0x000A94u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:13 BPL @UNKNOWN0
    case 0xC09C4B: {
        Instruction step(cpu, 0x10, 0x0000FAu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:14 STA ENTITY_NEXT_ENTITY_TABLE,Y
    case 0xC09C4D: {
        Instruction step(cpu, 0x99, 0x000A94u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:16 TAX
    case 0xC09C50: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C09C57.asm:17 RTS
    case 0xC09C51: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
