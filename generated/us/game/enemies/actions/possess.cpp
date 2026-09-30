// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/possess.asm
bool resume_battle_actions_possess(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/possess.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28BFD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/possess.asm:6 END_STACK_VARS
    case 0xC28BFF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/possess.asm:6 END_STACK_VARS
    case 0xC28C00: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/possess.asm:6 END_STACK_VARS
    case 0xC28C01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/possess.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28C01.
    case 0xC28C03: {
        Instruction step(cpu, 0xFF, 0xFD205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/possess.asm:6 END_STACK_VARS
    case 0xC28C04: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/possess.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28C05: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/possess.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28C03.
    case 0xC28C07: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/possess.asm:8 CMP #0
    case 0xC28C08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:8 CMP #0
    // Overlapping static entry reached from 0xC28C08.
    case 0xC28C0A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:9 BNE @UNKNOWN1
    case 0xC28C0B: {
        Instruction step(cpu, 0xD0, 0x000058u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/possess.asm:10 LDX CURRENT_TARGET
    case 0xC28C0D: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/possess.asm:11 LDA a:battler::ally_or_enemy,X
    case 0xC28C10: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:12 AND #$00FF
    case 0xC28C13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC28C13.
    case 0xC28C15: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:13 BNE @UNKNOWN0
    case 0xC28C16: {
        Instruction step(cpu, 0xD0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/possess.asm:14 LDY #STATUS_1::POSSESSED
    case 0xC28C18: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/possess.asm:14 LDY #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC28C18.
    case 0xC28C1A: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:15 LDX #STATUS_GROUP::PERSISTENT_HARDHEAL
    case 0xC28C1B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/possess.asm:15 LDX #STATUS_GROUP::PERSISTENT_HARDHEAL
    // Overlapping static entry reached from 0xC28C1B.
    case 0xC28C1D: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:16 LDA CURRENT_TARGET
    case 0xC28C1E: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:17 JSR INFLICT_STATUS_BATTLE
    case 0xC28C21: {
        Instruction step(cpu, 0x20, 0x00724Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/possess.asm:18 CMP #0
    case 0xC28C24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:18 CMP #0
    // Overlapping static entry reached from 0xC28C24.
    case 0xC28C26: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:19 BEQ @UNKNOWN0
    case 0xC28C27: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    case 0xC28C29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000098u : 0x006B98u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    // Overlapping static entry reached from 0xC28C29.
    case 0xC28C2B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    case 0xC28C2C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    case 0xC28C2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    // Overlapping static entry reached from 0xC28C2E.
    case 0xC28C30: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    case 0xC28C31: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    case 0xC28C33: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/possess.asm:21 LDA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::consciousness
    case 0xC28C37: {
        Instruction step(cpu, 0xAD, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:22 AND #$00FF
    case 0xC28C3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC28C3A.
    case 0xC28C3C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:23 BNE @UNKNOWN1
    case 0xC28C3D: {
        Instruction step(cpu, 0xD0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/possess.asm:24 LDX #.LOWORD(BATTLERS_TABLE) + (TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    case 0xC28C3F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x00A180u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/possess.asm:24 LDX #.LOWORD(BATTLERS_TABLE) + (TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC28C3F.
    case 0xC28C41: {
        Instruction step(cpu, 0xA1, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:25 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC28C42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:25 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC28C41.
    case 0xC28C43: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:25 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC28C42.
    case 0xC28C44: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:26 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC28C45: {
        Instruction step(cpu, 0x22, 0xC2B6EBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/possess.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC28C49: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/possess.asm:28 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC28C4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x008DD5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:29 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC28C4D: {
        Instruction step(cpu, 0x8D, 0x00A18Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:29 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC28C4B.
    case 0xC28C4E: {
        Instruction step(cpu, 0x8F, 0x01A9A1u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:30 LDA #1
    case 0xC28C50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:31 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    case 0xC28C52: {
        Instruction step(cpu, 0x8D, 0x00A18Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:31 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    // Overlapping static entry reached from 0xC28C50.
    case 0xC28C53: {
        Instruction step(cpu, 0x8D, 0x0080A1u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:32 BRA @UNKNOWN1
    case 0xC28C55: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/possess.asm:32 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC28C53.
    case 0xC28C56: {
        Instruction step(cpu, 0x0E, 0x006EA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28C57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28C57.
    case 0xC28C59: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28C5A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28C59.
    case 0xC28C5B: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28C5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28C5C.
    case 0xC28C5E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28C5F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28C61: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/possess.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC28C65: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/possess.asm:38 END_C_FUNCTION
    case 0xC28C67: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/possess.asm:38 END_C_FUNCTION
    case 0xC28C68: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
