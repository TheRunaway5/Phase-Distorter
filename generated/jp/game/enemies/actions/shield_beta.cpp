// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/shield_beta.asm
bool resume_battle_actions_shield_beta(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_beta.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29D2A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D2C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D2D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29D2E.
    case 0xC29D30: {
        Instruction step(cpu, 0xFF, 0x03A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_beta.asm:6 END_STACK_VARS
    case 0xC29D31: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:7 LDX #STATUS_6::SHIELD_POWER
    case 0xC29D32: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:7 LDX #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC29D32.
    case 0xC29D34: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:8 LDA CURRENT_TARGET
    case 0xC29D35: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:9 JSR SHIELDS_COMMON
    case 0xC29D38: {
        Instruction step(cpu, 0x20, 0x009C85u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:10 CMP #0
    case 0xC29D3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29D3B.
    case 0xC29D3D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:11 BEQ @UNKNOWN0
    case 0xC29D3E: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D40: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x0034D7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D40.
    case 0xC29D42: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D43: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D42.
    case 0xC29D44: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D45: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    // Overlapping static entry reached from 0xC29D45.
    case 0xC29D47: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D48: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_beta.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ADD
    case 0xC29D4A: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/shield_beta.asm:13 BRA @UNKNOWN1
    case 0xC29D4E: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29D50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B9u : 0x0034B9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC200A1.
    case 0xC29D51: {
        Instruction step(cpu, 0xB9, 0x008534u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29D50.
    case 0xC29D52: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29D53: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29D52.
    case 0xC29D54: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29D55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    // Overlapping static entry reached from 0xC29D55.
    case 0xC29D57: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29D58: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_beta.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POWER_ON
    case 0xC29D5A: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_beta.asm:17 END_C_FUNCTION
    case 0xC29D5E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_beta.asm:17 END_C_FUNCTION
    case 0xC29D5F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
