// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/psi_freeze_omega.asm
bool resume_battle_actions_psi_freeze_omega(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_freeze_omega.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2960B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_omega.asm:5 LDA #FREEZE_OMEGA_DAMAGE
    case 0xC2960D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0002D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_omega.asm:5 LDA #FREEZE_OMEGA_DAMAGE
    // Overlapping static entry reached from 0xC2960D.
    case 0xC2960F: {
        Instruction step(cpu, 0x02, 0x000020u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_omega.asm:6 JSR PSI_FREEZE_COMMON
    case 0xC29610: {
        Instruction step(cpu, 0x20, 0x009578u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_freeze_omega.asm:7 END_C_FUNCTION
    case 0xC29613: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
