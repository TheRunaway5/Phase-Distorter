// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/shield_beta.asm
bool resume_battle_actions_shield_beta(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29D81: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D83: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D84: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D85: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29D85.
    case 0xC29D87: {
        Instruction step(cpu, 0xFF, 0x03A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D88: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:7 LDX #STATUS_6::SHIELD_POWER
    case 0xC29D89: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:7 LDX #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC29D89.
    case 0xC29D8B: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:8 LDA CURRENT_TARGET
    case 0xC29D8C: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:9 JSR SHIELDS_COMMON
    case 0xC29D8F: {
        Instruction step(cpu, 0x20, 0x009CDCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:10 CMP #0
    case 0xC29D92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29D92.
    case 0xC29D94: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:11 BEQ @UNKNOWN0
    case 0xC29D95: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F4u : 0x006FF4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D97.
    case 0xC29D99: {
        Instruction step(cpu, 0x6F, 0xA90E85u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D9A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D99.
    case 0xC29D9D: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D9C.
    case 0xC29D9E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D9F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29DA1: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:13 BRA @UNKNOWN1
    case 0xC29DA5: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29DA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D3u : 0x006FD3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29DA7.
    case 0xC29DA9: {
        Instruction step(cpu, 0x6F, 0xA90E85u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29DAA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29DAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29DA9.
    case 0xC29DAD: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29DAC.
    case 0xC29DAE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29DAF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29DB1: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_beta.asm:17 END_C_FUNCTION
    case 0xC29DB5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_beta.asm:17 END_C_FUNCTION
    case 0xC29DB6: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
