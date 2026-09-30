// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/return_battle_target_address.asm
bool resume_battle_return_battle_target_address(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/return_battle_target_address.asm:3 BEGIN_C_FUNCTION
    case 0xC1ACF2: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/return_battle_target_address.asm:5 LDA #.LOWORD(BATTLE_TARGET_NAME)
    case 0xC1ACF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F5u : 0x009CF5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/return_battle_target_address.asm:5 LDA #.LOWORD(BATTLE_TARGET_NAME)
    // Overlapping static entry reached from 0xC1ACF4.
    case 0xC1ACF6: {
        Instruction step(cpu, 0x9C, 0x00C260u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/return_battle_target_address.asm:6 END_C_FUNCTION
    case 0xC1ACF7: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
