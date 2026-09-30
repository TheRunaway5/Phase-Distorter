// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/hungry_hp_sucker.asm
bool resume_battle_actions_hungry_hp_sucker(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/hungry_hp_sucker.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A4B0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/hungry_hp_sucker.asm:5 JSL BTLACT_HP_SUCKER
    case 0xC2A4B2: {
        Instruction step(cpu, 0x22, 0xC2A414u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/hungry_hp_sucker.asm:6 END_C_FUNCTION
    case 0xC2A4B6: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
