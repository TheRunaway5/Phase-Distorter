// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/psi_rockin_omega.asm
bool resume_battle_actions_psi_rockin_omega(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_rockin_omega.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2951A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_rockin_omega.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC29517.
    case 0xC2951B: {
        Instruction step(cpu, 0x31, 0x0000A9u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_rockin_omega.asm:5 LDA #ROCKIN_OMEGA_DAMAGE
    case 0xC2951C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000280u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_rockin_omega.asm:5 LDA #ROCKIN_OMEGA_DAMAGE
    // Overlapping static entry reached from 0xC2951B.
    case 0xC2951D: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/psi_rockin_omega.asm:5 LDA #ROCKIN_OMEGA_DAMAGE
    // Overlapping static entry reached from 0xC2951C.
    case 0xC2951E: {
        Instruction step(cpu, 0x02, 0x000020u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/actions/psi_rockin_omega.asm:6 JSR PSI_ROCKIN_COMMON
    case 0xC2951F: {
        Instruction step(cpu, 0x20, 0x0094BFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/psi_rockin_omega.asm:6 JSR PSI_ROCKIN_COMMON
    // Overlapping static entry reached from 0xC2951D.
    case 0xC29521: {
        Instruction step(cpu, 0x94, 0x00006Bu, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_rockin_omega.asm:7 END_C_FUNCTION
    case 0xC29522: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
