// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/prepare_new_entity.asm
bool resume_overworld_actionscript_prepare_new_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/prepare_new_entity.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A8F1: {
        Instruction step(cpu, 0x22, 0xC09D73u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity.asm:4 STY $94
    case 0xC0A8F5: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity.asm:5 PHA
    case 0xC0A8F7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A8F8: {
        Instruction step(cpu, 0x22, 0xC09D73u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity.asm:7 STY $94
    case 0xC0A8FC: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity.asm:8 PHA
    case 0xC0A8FE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity.asm:9 JSL MOVEMENT_DATA_READ8
    case 0xC0A8FF: {
        Instruction step(cpu, 0x22, 0xC09D65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity.asm:10 STY $94
    case 0xC0A903: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity.asm:11 PLY
    case 0xC0A905: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity.asm:12 PLX
    case 0xC0A906: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity.asm:13 JSL PREPARE_NEW_ENTITY
    case 0xC0A907: {
        Instruction step(cpu, 0x22, 0xC44BBBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/prepare_new_entity.asm:14 RTL
    case 0xC0A90B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
