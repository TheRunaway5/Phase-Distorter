// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/multi_bottle_rocket.asm
bool resume_battle_actions_multi_bottle_rocket(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/multi_bottle_rocket.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A58C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/multi_bottle_rocket.asm:5 LDA #MULTI_BOTTLE_ROCKET_COUNT
    case 0xC2A58E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/multi_bottle_rocket.asm:5 LDA #MULTI_BOTTLE_ROCKET_COUNT
    // Overlapping static entry reached from 0xC2A58E.
    case 0xC2A590: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/multi_bottle_rocket.asm:6 JSR BOTTLE_ROCKET_COMMON
    case 0xC2A591: {
        Instruction step(cpu, 0x20, 0x00A523u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/multi_bottle_rocket.asm:7 END_C_FUNCTION
    case 0xC2A594: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
