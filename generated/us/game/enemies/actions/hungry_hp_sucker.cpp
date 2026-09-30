// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/hungry_hp_sucker.asm
bool resume_battle_actions_hungry_hp_sucker(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/hungry_hp_sucker.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A507: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/hungry_hp_sucker.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC2A48F.
    case 0xC2A508: {
        Instruction step(cpu, 0x31, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/hungry_hp_sucker.asm:5 JSL BTLACT_HP_SUCKER
    case 0xC2A509: {
        Instruction step(cpu, 0x22, 0xC2A46Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/hungry_hp_sucker.asm:5 JSL BTLACT_HP_SUCKER
    // Overlapping static entry reached from 0xC2A508.
    case 0xC2A50A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/hungry_hp_sucker.asm:6 END_C_FUNCTION
    case 0xC2A50D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
