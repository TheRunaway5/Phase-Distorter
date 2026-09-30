// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/load_battlebg_movement.asm
bool resume_battle_load_battlebg_movement(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/battle/load_battlebg_movement.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A956: {
        Instruction step(cpu, 0x22, 0xC09D73u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg_movement.asm:4 PHA
    case 0xC0A95A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg_movement.asm:5 STY $94
    case 0xC0A95B: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battlebg_movement.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A95D: {
        Instruction step(cpu, 0x22, 0xC09D73u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg_movement.asm:7 TAX
    case 0xC0A961: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/load_battlebg_movement.asm:8 STY $94
    case 0xC0A962: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/load_battlebg_movement.asm:9 PLA
    case 0xC0A964: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/load_battlebg_movement.asm:10 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC0A965: {
        Instruction step(cpu, 0x22, 0xC450F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/load_battlebg_movement.asm:11 RTL
    case 0xC0A969: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
