// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/prepare_new_entity.asm
bool resume_overworld_prepare_new_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/prepare_new_entity.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC44BBB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_new_entity.asm:4 STX ENTITY_PREPARED_X_COORDINATE
    case 0xC44BBD: {
        Instruction step(cpu, 0x8E, 0x00A033u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/prepare_new_entity.asm:5 STY ENTITY_PREPARED_Y_COORDINATE
    case 0xC44BC0: {
        Instruction step(cpu, 0x8C, 0x00A035u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/overworld/prepare_new_entity.asm:6 AND #$00FF
    case 0xC44BC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC44BC3.
    case 0xC44BC5: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_new_entity.asm:7 STA ENTITY_PREPARED_DIRECTION
    case 0xC44BC6: {
        Instruction step(cpu, 0x8D, 0x00A037u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity.asm:8 RTL
    case 0xC44BC9: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
