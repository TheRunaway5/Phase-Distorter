// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/swap_attacker_with_target.asm
bool resume_battle_swap_attacker_with_target(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/swap_attacker_with_target.asm:3 BEGIN_C_FUNCTION
    case 0xC27E21: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E23: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E24: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E25: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC27E25.
    case 0xC27E27: {
        Instruction step(cpu, 0xFF, 0x72AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/swap_attacker_with_target.asm:6 END_STACK_VARS
    case 0xC27E28: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/swap_attacker_with_target.asm:7 LDA CURRENT_ATTACKER
    case 0xC27E29: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/swap_attacker_with_target.asm:7 LDA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC27E27.
    case 0xC27E2B: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/swap_attacker_with_target.asm:8 STA @LOCAL00
    case 0xC27E2C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/swap_attacker_with_target.asm:9 LDA CURRENT_TARGET
    case 0xC27E2E: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/swap_attacker_with_target.asm:10 STA CURRENT_ATTACKER
    case 0xC27E31: {
        Instruction step(cpu, 0x8D, 0x00AB72u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/swap_attacker_with_target.asm:11 LDA @LOCAL00
    case 0xC27E34: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/swap_attacker_with_target.asm:12 STA CURRENT_TARGET
    case 0xC27E36: {
        Instruction step(cpu, 0x8D, 0x00AB74u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/swap_attacker_with_target.asm:13 LDA #0
    case 0xC27E39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/swap_attacker_with_target.asm:13 LDA #0
    // Overlapping static entry reached from 0xC27E39.
    case 0xC27E3B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/swap_attacker_with_target.asm:14 JSL FIX_ATTACKER_NAME
    case 0xC27E3C: {
        Instruction step(cpu, 0x22, 0xC23AB9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/swap_attacker_with_target.asm:15 JSL FIX_TARGET_NAME
    case 0xC27E40: {
        Instruction step(cpu, 0x22, 0xC23BF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/swap_attacker_with_target.asm:16 END_C_FUNCTION
    case 0xC27E44: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/swap_attacker_with_target.asm:16 END_C_FUNCTION
    case 0xC27E45: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
