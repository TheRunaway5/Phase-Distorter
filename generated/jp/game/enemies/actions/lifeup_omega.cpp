// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/lifeup_omega.asm
bool resume_battle_actions_lifeup_omega(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/lifeup_omega.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29A8A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/lifeup_omega.asm:5 LDA #LIFEUP_OMEGA_HEALING
    case 0xC29A8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x000190u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/lifeup_omega.asm:5 LDA #LIFEUP_OMEGA_HEALING
    // Overlapping static entry reached from 0xC29A8C.
    case 0xC29A8E: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/lifeup_omega.asm:6 JSR LIFEUP_COMMON
    case 0xC29A8F: {
        Instruction step(cpu, 0x20, 0x009A61u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/lifeup_omega.asm:6 JSR LIFEUP_COMMON
    // Overlapping static entry reached from 0xC29A8E.
    case 0xC29A90: {
        Instruction step(cpu, 0x61, 0x00009Au, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/lifeup_omega.asm:7 END_C_FUNCTION
    case 0xC29A92: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
