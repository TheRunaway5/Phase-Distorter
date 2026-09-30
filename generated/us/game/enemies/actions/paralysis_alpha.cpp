// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/paralysis_alpha.asm
bool resume_battle_actions_paralysis_alpha(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/paralysis_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29FFE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/paralysis_alpha.asm:6 END_STACK_VARS
    case 0xC2A000: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/paralysis_alpha.asm:6 END_STACK_VARS
    case 0xC2A001: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/paralysis_alpha.asm:6 END_STACK_VARS
    case 0xC2A002: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/paralysis_alpha.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A002.
    case 0xC2A004: {
        Instruction step(cpu, 0xFF, 0xFD205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/paralysis_alpha.asm:6 END_STACK_VARS
    case 0xC2A005: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2A006: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2A004.
    case 0xC2A008: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:8 CMP #0
    case 0xC2A009: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:8 CMP #0
    // Overlapping static entry reached from 0xC2A009.
    case 0xC2A00B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:9 BNE @UNKNOWN1
    case 0xC2A00C: {
        Instruction step(cpu, 0xD0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:10 LDX CURRENT_TARGET
    case 0xC2A00E: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC2A011: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:12 LDA a:battler::paralysis_resist,X
    case 0xC2A013: {
        Instruction step(cpu, 0xBD, 0x000037u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:13 JSR SUCCESS_255
    case 0xC2A016: {
        Instruction step(cpu, 0x20, 0x006BB8u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:15 CMP #0
    case 0xC2A019: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:15 CMP #0
    // Overlapping static entry reached from 0xC2A019.
    case 0xC2A01B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:16 BEQ @UNKNOWN0
    case 0xC2A01C: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:17 LDY #STATUS_0::PARALYZED
    case 0xC2A01E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:17 LDY #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC2A01E.
    case 0xC2A020: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:18 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    case 0xC2A021: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:18 LDX #STATUS_GROUP::PERSISTENT_EASYHEAL
    // Overlapping static entry reached from 0xC2A021.
    case 0xC2A023: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:19 LDA CURRENT_TARGET
    case 0xC2A024: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:20 JSR INFLICT_STATUS_BATTLE
    case 0xC2A027: {
        Instruction step(cpu, 0x20, 0x00724Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:22 CMP #0
    case 0xC2A02A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:22 CMP #0
    // Overlapping static entry reached from 0xC2A02A.
    case 0xC2A02C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:23 BEQ @UNKNOWN0
    case 0xC2A02D: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC2A02F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x006AE0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    // Overlapping static entry reached from 0xC2A02F.
    case 0xC2A031: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC2A032: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC2A034: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    // Overlapping static entry reached from 0xC2A034.
    case 0xC2A036: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC2A037: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/paralysis_alpha.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_SHIBIRE_ON
    case 0xC2A039: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/paralysis_alpha.asm:25 BRA @UNKNOWN1
    case 0xC2A03D: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A03F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A03F.
    case 0xC2A041: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A042: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A041.
    case 0xC2A043: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A044: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A044.
    case 0xC2A046: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A047: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/paralysis_alpha.asm:27 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A049: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/paralysis_alpha.asm:29 END_C_FUNCTION
    case 0xC2A04D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/paralysis_alpha.asm:29 END_C_FUNCTION
    case 0xC2A04E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
