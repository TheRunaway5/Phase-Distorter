// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/pp_recovery_80.asm
bool resume_battle_actions_pp_recovery_80(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/pp_recovery_80.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A098: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/pp_recovery_80.asm:5 LDA #80
    case 0xC2A09A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pp_recovery_80.asm:5 LDA #80
    // Overlapping static entry reached from 0xC2A09A.
    case 0xC2A09C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pp_recovery_80.asm:6 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2A09D: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pp_recovery_80.asm:7 TAX
    case 0xC2A0A0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/pp_recovery_80.asm:8 LDA CURRENT_TARGET
    case 0xC2A0A1: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pp_recovery_80.asm:9 JSR RECOVER_PP
    case 0xC2A0A4: {
        Instruction step(cpu, 0x20, 0x00725Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/pp_recovery_80.asm:10 END_C_FUNCTION
    case 0xC2A0A7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
