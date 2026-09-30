// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/pray_subtle.asm
bool resume_battle_actions_pray_subtle(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/pray_subtle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2ABDE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/pray_subtle.asm:5 LDX CURRENT_TARGET
    case 0xC2ABE0: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/pray_subtle.asm:6 LDA a:battler::hp_max,X
    case 0xC2ABE3: {
        Instruction step(cpu, 0xBD, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_subtle.asm:7 LSR
    case 0xC2ABE6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/pray_subtle.asm:8 LSR
    case 0xC2ABE7: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/pray_subtle.asm:9 LSR
    case 0xC2ABE8: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/pray_subtle.asm:10 LSR
    case 0xC2ABE9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/pray_subtle.asm:11 TAX
    case 0xC2ABEA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/pray_subtle.asm:12 LDA CURRENT_TARGET
    case 0xC2ABEB: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pray_subtle.asm:13 JSR RECOVER_HP
    case 0xC2ABEE: {
        Instruction step(cpu, 0x20, 0x0071D7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/pray_subtle.asm:14 END_C_FUNCTION
    case 0xC2ABF1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
