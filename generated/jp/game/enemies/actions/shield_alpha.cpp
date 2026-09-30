// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/shield_alpha.asm
bool resume_battle_actions_shield_alpha(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/shield_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29CED: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29CEF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29CF0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29CF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC29CF1.
    case 0xC29CF3: {
        Instruction step(cpu, 0xFF, 0x04A25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/shield_alpha.asm:6 END_STACK_VARS
    case 0xC29CF4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/shield_alpha.asm:7 LDX #STATUS_6::SHIELD
    case 0xC29CF5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/shield_alpha.asm:7 LDX #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC29CF5.
    case 0xC29CF7: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_alpha.asm:8 LDA CURRENT_TARGET
    case 0xC29CF8: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_alpha.asm:9 JSR SHIELDS_COMMON
    case 0xC29CFB: {
        Instruction step(cpu, 0x20, 0x009C85u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/shield_alpha.asm:10 CMP #0
    case 0xC29CFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/shield_alpha.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29CFE.
    case 0xC29D00: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/shield_alpha.asm:11 BEQ @UNKNOWN0
    case 0xC29D01: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00349Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    // Overlapping static entry reached from 0xC29D03.
    case 0xC29D05: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D06: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    // Overlapping static entry reached from 0xC29D05.
    case 0xC29D07: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    // Overlapping static entry reached from 0xC29D08.
    case 0xC29D0A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D0B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ADD
    case 0xC29D0D: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/shield_alpha.asm:13 BRA @UNKNOWN1
    case 0xC29D11: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000081u : 0x003481u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    // Overlapping static entry reached from 0xC29D13.
    case 0xC29D15: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D16: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    // Overlapping static entry reached from 0xC29D15.
    case 0xC29D17: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    // Overlapping static entry reached from 0xC29D18.
    case 0xC29D1A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D1B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/shield_alpha.asm:15 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIELD_ON
    case 0xC29D1D: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29D21: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/shield_alpha.asm:17 END_C_FUNCTION
    case 0xC29D22: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
