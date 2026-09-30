// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/psi_starstorm_alpha.asm
bool resume_battle_actions_psi_starstorm_alpha(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_starstorm_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29A4F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_starstorm_alpha.asm:5 LDA #STARSTORM_ALPHA_DAMAGE
    case 0xC29A51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x000168u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_starstorm_alpha.asm:5 LDA #STARSTORM_ALPHA_DAMAGE
    // Overlapping static entry reached from 0xC29A51.
    case 0xC29A53: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_starstorm_alpha.asm:6 JSR PSI_STARSTORM_COMMON
    case 0xC29A54: {
        Instruction step(cpu, 0x20, 0x009A29u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_starstorm_alpha.asm:6 JSR PSI_STARSTORM_COMMON
    // Overlapping static entry reached from 0xC29A53.
    case 0xC29A55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00009Au : 0x006B9Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_starstorm_alpha.asm:7 END_C_FUNCTION
    case 0xC29A57: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
