// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/psi_rockin_gamma.asm
bool resume_battle_actions_psi_rockin_gamma(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_rockin_gamma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29511: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_rockin_gamma.asm:5 LDA #ROCKIN_GAMMA_DAMAGE
    case 0xC29513: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000140u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_rockin_gamma.asm:5 LDA #ROCKIN_GAMMA_DAMAGE
    // Overlapping static entry reached from 0xC29513.
    case 0xC29515: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_rockin_gamma.asm:6 JSR PSI_ROCKIN_COMMON
    case 0xC29516: {
        Instruction step(cpu, 0x20, 0x0094BFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_rockin_gamma.asm:6 JSR PSI_ROCKIN_COMMON
    // Overlapping static entry reached from 0xC29515.
    case 0xC29517: {
        Instruction step(cpu, 0xBF, 0xC26B94u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_rockin_gamma.asm:7 END_C_FUNCTION
    case 0xC29519: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
