// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/lifeup_beta.asm
bool resume_battle_actions_lifeup_beta(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/lifeup_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29ACF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/lifeup_beta.asm:5 LDA #LIFEUP_BETA_HEALING
    case 0xC29AD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Cu : 0x00012Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/lifeup_beta.asm:5 LDA #LIFEUP_BETA_HEALING
    // Overlapping static entry reached from 0xC29AD1.
    case 0xC29AD3: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/lifeup_beta.asm:6 JSR LIFEUP_COMMON
    case 0xC29AD4: {
        Instruction step(cpu, 0x20, 0x009AB8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/lifeup_beta.asm:6 JSR LIFEUP_COMMON
    // Overlapping static entry reached from 0xC29AD3.
    case 0xC29AD5: {
        Instruction step(cpu, 0xB8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_overflow();
        return step.finish();
    }
    // src/battle/actions/lifeup_beta.asm:6 JSR LIFEUP_COMMON
    // Overlapping static entry reached from 0xC29AD5.
    case 0xC29AD6: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/lifeup_beta.asm:7 END_C_FUNCTION
    case 0xC29AD7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
