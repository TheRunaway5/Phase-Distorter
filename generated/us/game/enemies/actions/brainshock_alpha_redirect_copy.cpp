// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/brainshock_alpha_redirect_copy.asm
bool resume_battle_actions_brainshock_alpha_redirect_copy(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/brainshock_alpha_redirect_copy.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A0A7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/brainshock_alpha_redirect_copy.asm:5 JSL BTLACT_BRAINSHOCK_A
    case 0xC2A0A9: {
        Instruction step(cpu, 0x22, 0xC2A056u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/brainshock_alpha_redirect_copy.asm:6 END_C_FUNCTION
    case 0xC2A0AD: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
