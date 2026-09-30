// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm
bool resume_overworld_actionscript_prepare_new_entity_at_teleport_destination(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A8E6: {
        Instruction step(cpu, 0x22, 0xC09D65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:4 STY $94
    case 0xC0A8EA: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:5 JSL PREPARE_NEW_ENTITY_AT_TELEPORT_DESTINATION
    case 0xC0A8EC: {
        Instruction step(cpu, 0x22, 0xC44B69u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity_at_teleport_destination.asm:6 RTL
    case 0xC0A8F0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
