// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/possess.asm
bool resume_battle_actions_possess(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/possess.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28B94: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/possess.asm:6 END_STACK_VARS
    case 0xC28B96: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/possess.asm:6 END_STACK_VARS
    case 0xC28B97: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/possess.asm:6 END_STACK_VARS
    case 0xC28B98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/possess.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC28B98.
    case 0xC28B9A: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/possess.asm:6 END_STACK_VARS
    case 0xC28B9B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/possess.asm:7 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28B9C: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/possess.asm:7 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28B9A.
    case 0xC28B9E: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/possess.asm:8 CMP #0
    case 0xC28B9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:8 CMP #0
    // Overlapping static entry reached from 0xC28B9F.
    case 0xC28BA1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:9 BNE @UNKNOWN1
    case 0xC28BA2: {
        Instruction step(cpu, 0xD0, 0x000058u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/possess.asm:10 LDX CURRENT_TARGET
    case 0xC28BA4: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/possess.asm:11 LDA a:battler::ally_or_enemy,X
    case 0xC28BA7: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:12 AND #$00FF
    case 0xC28BAA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC28BAA.
    case 0xC28BAC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:13 BNE @UNKNOWN0
    case 0xC28BAD: {
        Instruction step(cpu, 0xD0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/possess.asm:14 LDY #STATUS_1::POSSESSED
    case 0xC28BAF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/possess.asm:14 LDY #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC28BAF.
    case 0xC28BB1: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:15 LDX #STATUS_GROUP::PERSISTENT_HARDHEAL
    case 0xC28BB2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/possess.asm:15 LDX #STATUS_GROUP::PERSISTENT_HARDHEAL
    // Overlapping static entry reached from 0xC28BB2.
    case 0xC28BB4: {
        Instruction step(cpu, 0x00, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:16 LDA CURRENT_TARGET
    case 0xC28BB5: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:17 JSR INFLICT_STATUS_BATTLE
    case 0xC28BB8: {
        Instruction step(cpu, 0x20, 0x00718Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/possess.asm:18 CMP #0
    case 0xC28BBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:18 CMP #0
    // Overlapping static entry reached from 0xC28BBB.
    case 0xC28BBD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:19 BEQ @UNKNOWN0
    case 0xC28BBE: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    case 0xC28BC0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x0030AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    // Overlapping static entry reached from 0xC28BC0.
    case 0xC28BC2: {
        Instruction step(cpu, 0x30, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    case 0xC28BC3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    // Overlapping static entry reached from 0xC28BC2.
    case 0xC28BC4: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    case 0xC28BC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    // Overlapping static entry reached from 0xC28BC5.
    case 0xC28BC7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    case 0xC28BC8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/possess.asm:20 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TORITSU_ON
    case 0xC28BCA: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/possess.asm:21 LDA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::consciousness
    case 0xC28BCE: {
        Instruction step(cpu, 0xAD, 0x00A38Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:22 AND #$00FF
    case 0xC28BD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC28BD1.
    case 0xC28BD3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:23 BNE @UNKNOWN1
    case 0xC28BD4: {
        Instruction step(cpu, 0xD0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/possess.asm:24 LDX #.LOWORD(BATTLERS_TABLE) + (TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    case 0xC28BD6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000082u : 0x00A382u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/possess.asm:24 LDX #.LOWORD(BATTLERS_TABLE) + (TOTAL_PARTY_COUNT)*.SIZEOF(battler)
    // Overlapping static entry reached from 0xC28BD6.
    case 0xC28BD8: {
        Instruction step(cpu, 0xA3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:25 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC28BD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:25 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC28BD8.
    case 0xC28BDA: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:25 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC28BD9.
    case 0xC28BDB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/possess.asm:26 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC28BDC: {
        Instruction step(cpu, 0x22, 0xC2B692u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/possess.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC28BE0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/possess.asm:28 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC28BE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x008DD5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:29 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC28BE4: {
        Instruction step(cpu, 0x8D, 0x00A391u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:29 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC28BE2.
    case 0xC28BE5: {
        Instruction step(cpu, 0x91, 0x0000A3u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:30 LDA #1
    case 0xC28BE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:31 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    case 0xC28BE9: {
        Instruction step(cpu, 0x8D, 0x00A38Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:31 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    // Overlapping static entry reached from 0xC28BE7.
    case 0xC28BEA: {
        Instruction step(cpu, 0x8F, 0x0E80A3u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/possess.asm:32 BRA @UNKNOWN1
    case 0xC28BEC: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28BEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28BEE.
    case 0xC28BF0: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28BF1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28BF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28BF3.
    case 0xC28BF5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28BF6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/possess.asm:35 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28BF8: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/possess.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC28BFC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/possess.asm:38 END_C_FUNCTION
    case 0xC28BFE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/possess.asm:38 END_C_FUNCTION
    case 0xC28BFF: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
