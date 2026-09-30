// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/disable_current_entity_collision.asm
bool resume_overworld_actionscript_disable_current_entity_collision(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/disable_current_entity_collision.asm:3 LDX $88
    case 0xC0A6D1: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/disable_current_entity_collision.asm:4 LDA #ENTITY_COLLISION_DISABLED
    case 0xC0A6D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/disable_current_entity_collision.asm:4 LDA #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0A6D3.
    case 0xC0A6D5: {
        Instruction step(cpu, 0x80, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/disable_current_entity_collision.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A6D6: {
        Instruction step(cpu, 0x9D, 0x00289Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/disable_current_entity_collision.asm:6 RTL
    case 0xC0A6D9: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
