// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/psi_freeze_beta.asm
bool resume_battle_actions_psi_freeze_beta(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_freeze_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC295F9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_beta.asm:5 LDA #FREEZE_BETA_DAMAGE
    case 0xC295FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x000168u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_beta.asm:5 LDA #FREEZE_BETA_DAMAGE
    // Overlapping static entry reached from 0xC295FB.
    case 0xC295FD: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_beta.asm:6 JSR PSI_FREEZE_COMMON
    case 0xC295FE: {
        Instruction step(cpu, 0x20, 0x009578u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_beta.asm:6 JSR PSI_FREEZE_COMMON
    // Overlapping static entry reached from 0xC295FD.
    case 0xC295FF: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_beta.asm:6 JSR PSI_FREEZE_COMMON
    // Overlapping static entry reached from 0xC295FF.
    case 0xC29600: {
        Instruction step(cpu, 0x95, 0x00006Bu, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_freeze_beta.asm:7 END_C_FUNCTION
    case 0xC29601: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
