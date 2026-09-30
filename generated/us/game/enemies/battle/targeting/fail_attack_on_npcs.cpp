// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/fail_attack_on_npcs.asm
bool resume_battle_fail_attack_on_npcs(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/fail_attack_on_npcs.asm:3 BEGIN_C_FUNCTION
    case 0xC27CFD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27CFF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27D00: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27D01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC27D01.
    case 0xC27D03: {
        Instruction step(cpu, 0xFF, 0x72AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/fail_attack_on_npcs.asm:7 END_STACK_VARS
    case 0xC27D04: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:8 LDX CURRENT_TARGET
    case 0xC27D05: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:8 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC27D03.
    case 0xC27D07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BDu : 0x000FBDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:9 LDA a:battler::npc_id,X
    case 0xC27D08: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:9 LDA a:battler::npc_id,X
    // Overlapping static entry reached from 0xC27D07.
    case 0xC27D09: {
        Instruction step(cpu, 0x0F, 0xFF2900u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:9 LDA a:battler::npc_id,X
    // Overlapping static entry reached from 0xC27D07.
    case 0xC27D0A: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:10 AND #$00FF
    case 0xC27D0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC27D0B.
    case 0xC27D0D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:11 BEQ @UNKNOWN0
    case 0xC27D0E: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27D10: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27D10.
    case 0xC27D12: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27D13: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27D12.
    case 0xC27D14: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27D15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC27D15.
    case 0xC27D17: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27D18: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/fail_attack_on_npcs.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC27D1A: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:13 LDA #1
    case 0xC27D1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:13 LDA #1
    // Overlapping static entry reached from 0xC27D1E.
    case 0xC27D20: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:14 BRA @UNKNOWN1
    case 0xC27D21: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:16 LDA #0
    case 0xC27D23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/fail_attack_on_npcs.asm:16 LDA #0
    // Overlapping static entry reached from 0xC27D23.
    case 0xC27D25: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/fail_attack_on_npcs.asm:18 END_C_FUNCTION
    case 0xC27D26: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/fail_attack_on_npcs.asm:18 END_C_FUNCTION
    case 0xC27D27: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
