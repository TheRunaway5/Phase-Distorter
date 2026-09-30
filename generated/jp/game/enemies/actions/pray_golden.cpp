// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/pray_golden.asm
bool resume_battle_actions_pray_golden(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/pray_golden.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AC05: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/pray_golden.asm:5 LDX CURRENT_TARGET
    case 0xC2AC07: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/pray_golden.asm:6 LDA a:battler::hp_max,X
    case 0xC2AC0A: {
        Instruction step(cpu, 0xBD, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_golden.asm:7 LDX CURRENT_ATTACKER
    case 0xC2AC0D: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/pray_golden.asm:8 SEC
    case 0xC2AC10: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/pray_golden.asm:9 SBC a:battler::hp_target,X
    case 0xC2AC11: {
        Instruction step(cpu, 0xFD, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/pray_golden.asm:10 TAX
    case 0xC2AC14: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/pray_golden.asm:11 LDA CURRENT_TARGET
    case 0xC2AC15: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_golden.asm:12 JSR RECOVER_HP
    case 0xC2AC18: {
        Instruction step(cpu, 0x20, 0x0071D7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/pray_golden.asm:13 END_C_FUNCTION
    case 0xC2AC1B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
