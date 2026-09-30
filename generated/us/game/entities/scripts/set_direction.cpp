// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/set_direction.asm
bool resume_overworld_actionscript_set_direction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/set_direction.asm:3 LDX $88
    case 0xC0A65F: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/set_direction.asm:4 TAY
    case 0xC0A661: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/set_direction.asm:5 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0A662: {
        Instruction step(cpu, 0xBD, 0x002C5Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/set_direction.asm:6 BMI @UNKNOWN0
    case 0xC0A665: {
        Instruction step(cpu, 0x30, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/actionscript/set_direction.asm:7 TYA
    case 0xC0A667: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/set_direction.asm:8 STA ENTITY_DIRECTIONS,X
    case 0xC0A668: {
        Instruction step(cpu, 0x9D, 0x002AF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/set_direction.asm:10 TYA
    case 0xC0A66B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/set_direction.asm:11 RTL
    case 0xC0A66C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
