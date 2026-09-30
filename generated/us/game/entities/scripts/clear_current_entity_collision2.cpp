// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/clear_current_entity_collision2.asm
bool resume_overworld_actionscript_clear_current_entity_collision2(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_current_entity_collision2.asm:3 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC0A838: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_current_entity_collision2.asm:3 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0A838.
    case 0xC0A83A: {
        Instruction step(cpu, 0xFF, 0x9D88A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/clear_current_entity_collision2.asm:4 LDX $88
    case 0xC0A83B: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/clear_current_entity_collision2.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A83D: {
        Instruction step(cpu, 0x9D, 0x00289Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_current_entity_collision2.asm:5 STA ENTITY_COLLIDED_OBJECTS,X
    // Overlapping static entry reached from 0xC0A83A.
    case 0xC0A83E: {
        Instruction step(cpu, 0x9E, 0x006B28u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/clear_current_entity_collision2.asm:6 RTL
    case 0xC0A840: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
