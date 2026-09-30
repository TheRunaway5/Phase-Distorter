// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/hp_recovery_10000.asm
bool resume_battle_actions_hp_recovery_10000(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/hp_recovery_10000.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A329: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:5 LDX CURRENT_TARGET
    case 0xC2A32B: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:6 LDA a:battler::id,X
    case 0xC2A32E: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:7 CMP #PARTY_MEMBER::POO
    case 0xC2A331: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:7 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2A331.
    case 0xC2A333: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:8 BNE @UNKNOWN0
    case 0xC2A334: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:9 LDX #10000
    case 0xC2A336: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x002710u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:9 LDX #10000
    // Overlapping static entry reached from 0xC2A336.
    case 0xC2A338: {
        Instruction step(cpu, 0x27, 0x0000ADu, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:10 LDA CURRENT_TARGET
    case 0xC2A339: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:10 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2A338.
    case 0xC2A33A: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:11 JSR RECOVER_HP
    case 0xC2A33C: {
        Instruction step(cpu, 0x20, 0x0071D7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:12 BRA @UNKNOWN1
    case 0xC2A33F: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/hp_recovery_10000.asm:14 JSL BTLACT_HP_RECOVERY_1D4
    case 0xC2A341: {
        Instruction step(cpu, 0x22, 0xC2A057u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/hp_recovery_10000.asm:16 END_C_FUNCTION
    case 0xC2A345: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
