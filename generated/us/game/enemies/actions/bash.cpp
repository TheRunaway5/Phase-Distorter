// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/bash.asm
bool resume_battle_actions_bash(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/bash.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2859F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/bash.asm:6 END_STACK_VARS
    case 0xC285A1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/bash.asm:6 END_STACK_VARS
    case 0xC285A2: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/bash.asm:6 END_STACK_VARS
    case 0xC285A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/bash.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC285A3.
    case 0xC285A5: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/bash.asm:6 END_STACK_VARS
    case 0xC285A6: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/bash.asm:7 LDA #0
    case 0xC285A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bash.asm:7 LDA #0
    // Overlapping static entry reached from 0xC285A7.
    case 0xC285A9: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bash.asm:8 JSR MISS_CALC
    case 0xC285AA: {
        Instruction step(cpu, 0x20, 0x0082F8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bash.asm:9 CMP #0
    case 0xC285AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/bash.asm:9 CMP #0
    // Overlapping static entry reached from 0xC285AD.
    case 0xC285AF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bash.asm:10 BNE @UNKNOWN1
    case 0xC285B0: {
        Instruction step(cpu, 0xD0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/bash.asm:11 JSR SMAAAASH
    case 0xC285B2: {
        Instruction step(cpu, 0x20, 0x0083F8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bash.asm:12 CMP #0
    case 0xC285B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/bash.asm:12 CMP #0
    // Overlapping static entry reached from 0xC285B5.
    case 0xC285B7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bash.asm:13 BNE @UNKNOWN1
    case 0xC285B8: {
        Instruction step(cpu, 0xD0, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/bash.asm:14 JSR DETERMINE_DODGE
    case 0xC285BA: {
        Instruction step(cpu, 0x20, 0x0084ADu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bash.asm:15 CMP #0
    case 0xC285BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/bash.asm:15 CMP #0
    // Overlapping static entry reached from 0xC285BD.
    case 0xC285BF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bash.asm:16 BNE @UNKNOWN0
    case 0xC285C0: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/bash.asm:17 JSR BTLACT_LEVEL_2_ATK
    case 0xC285C2: {
        Instruction step(cpu, 0x20, 0x008523u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bash.asm:18 JSR HEAL_STRANGENESS
    case 0xC285C5: {
        Instruction step(cpu, 0x20, 0x00856Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bash.asm:19 BRA @UNKNOWN1
    case 0xC285C8: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/bash.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC285CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000055u : 0x007655u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/bash.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    // Overlapping static entry reached from 0xC285CA.
    case 0xC285CC: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/bash.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC285CD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/bash.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    // Overlapping static entry reached from 0xC285CC.
    case 0xC285CE: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/bash.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC285CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/bash.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    // Overlapping static entry reached from 0xC285CF.
    case 0xC285D1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/bash.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC285D2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/bash.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TATAKU_YOKETA
    case 0xC285D4: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/bash.asm:23 END_C_FUNCTION
    case 0xC285D8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/bash.asm:23 END_C_FUNCTION
    case 0xC285D9: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
