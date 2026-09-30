// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/reset_mushroomized_walking.asm
bool resume_overworld_reset_mushroomized_walking(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/reset_mushroomized_walking.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC02E58: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/reset_mushroomized_walking.asm:4 STZ MUSHROOMIZED_WALKING_FLAG
    case 0xC02E5A: {
        Instruction step(cpu, 0x9C, 0x006126u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/reset_mushroomized_walking.asm:5 RTL
    case 0xC02E5D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
