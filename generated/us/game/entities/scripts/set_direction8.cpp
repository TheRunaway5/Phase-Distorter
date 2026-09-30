// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/set_direction8.asm
bool resume_overworld_actionscript_set_direction8(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/set_direction8.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A651: {
        Instruction step(cpu, 0x22, 0xC09D86u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/set_direction8.asm:4 STY $94
    case 0xC0A655: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/set_direction8.asm:5 JSL SET_DIRECTION
    case 0xC0A657: {
        Instruction step(cpu, 0x22, 0xC0A65Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/set_direction8.asm:6 STA ENTITY_MOVING_DIRECTIONS,X
    case 0xC0A65B: {
        Instruction step(cpu, 0x9D, 0x001A86u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/set_direction8.asm:7 RTL
    case 0xC0A65E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
