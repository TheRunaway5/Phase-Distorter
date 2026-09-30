// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/psi_freeze_gamma.asm
bool resume_battle_actions_psi_freeze_gamma(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_freeze_gamma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29659: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_freeze_gamma.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC29656.
    case 0xC2965A: {
        Instruction step(cpu, 0x31, 0x0000A9u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_gamma.asm:5 LDA #FREEZE_GAMMA_DAMAGE
    case 0xC2965B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00021Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_gamma.asm:5 LDA #FREEZE_GAMMA_DAMAGE
    // Overlapping static entry reached from 0xC2965A.
    case 0xC2965C: {
        Instruction step(cpu, 0x1C, 0x002002u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_gamma.asm:5 LDA #FREEZE_GAMMA_DAMAGE
    // Overlapping static entry reached from 0xC2965B.
    case 0xC2965D: {
        Instruction step(cpu, 0x02, 0x000020u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_gamma.asm:6 JSR PSI_FREEZE_COMMON
    case 0xC2965E: {
        Instruction step(cpu, 0x20, 0x0095CFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_freeze_gamma.asm:6 JSR PSI_FREEZE_COMMON
    // Overlapping static entry reached from 0xC2965C.
    case 0xC2965F: {
        Instruction step(cpu, 0xCF, 0xC26B95u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_freeze_gamma.asm:7 END_C_FUNCTION
    case 0xC29661: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
