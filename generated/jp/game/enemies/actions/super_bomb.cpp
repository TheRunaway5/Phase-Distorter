// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/super_bomb.asm
bool resume_battle_actions_super_bomb(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/super_bomb.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A7D4: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/super_bomb.asm:5 LDA #270
    case 0xC2A7D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00010Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/super_bomb.asm:5 LDA #270
    // Overlapping static entry reached from 0xC2A7D6.
    case 0xC2A7D8: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/super_bomb.asm:6 JSR BOMB_COMMON
    case 0xC2A7D9: {
        Instruction step(cpu, 0x20, 0x00A601u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/super_bomb.asm:6 JSR BOMB_COMMON
    // Overlapping static entry reached from 0xC2A7D8.
    case 0xC2A7DA: {
        Instruction step(cpu, 0x01, 0x0000A6u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/super_bomb.asm:7 END_C_FUNCTION
    case 0xC2A7DC: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
