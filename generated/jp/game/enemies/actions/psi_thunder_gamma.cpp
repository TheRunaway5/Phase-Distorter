// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/psi_thunder_gamma.asm
bool resume_battle_actions_psi_thunder_gamma(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/psi_thunder_gamma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29832: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_gamma.asm:5 LDX #THUNDER_GAMMA_HITS
    case 0xC29834: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_gamma.asm:5 LDX #THUNDER_GAMMA_HITS
    // Overlapping static entry reached from 0xC29834.
    case 0xC29836: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_gamma.asm:6 LDA #THUNDER_GAMMA_DAMAGE
    case 0xC29837: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_gamma.asm:6 LDA #THUNDER_GAMMA_DAMAGE
    // Overlapping static entry reached from 0xC29837.
    case 0xC29839: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/psi_thunder_gamma.asm:7 JSR PSI_THUNDER_COMMON
    case 0xC2983A: {
        Instruction step(cpu, 0x20, 0x009614u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/psi_thunder_gamma.asm:8 END_C_FUNCTION
    case 0xC2983D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
