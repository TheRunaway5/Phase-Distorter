// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/pokey_speech_1.asm
bool resume_battle_actions_pokey_speech_1(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/pokey_speech_1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C4C0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/pokey_speech_1.asm:6 END_STACK_VARS
    case 0xC2C4C2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/pokey_speech_1.asm:6 END_STACK_VARS
    case 0xC2C4C3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/pokey_speech_1.asm:6 END_STACK_VARS
    case 0xC2C4C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/pokey_speech_1.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C4C4.
    case 0xC2C4C6: {
        Instruction step(cpu, 0xFF, 0x02A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/pokey_speech_1.asm:6 END_STACK_VARS
    case 0xC2C4C7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:7 LDA #GIYGAS_PHASES::DEVILS_MACHINE_OFF
    case 0xC2C4C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:7 LDA #GIYGAS_PHASES::DEVILS_MACHINE_OFF
    // Overlapping static entry reached from 0xC2C4C8.
    case 0xC2C4CA: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:8 STA GIYGAS_PHASE
    case 0xC2C4CB: {
        Instruction step(cpu, 0x8D, 0x00A97Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:9 LDA #ENEMY::GIYGAS_3
    case 0xC2C4CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DBu : 0x0000DBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:9 LDA #ENEMY::GIYGAS_3
    // Overlapping static entry reached from 0xC2C4CE.
    case 0xC2C4D0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:10 JSR UNKNOWN_C2C32C
    case 0xC2C4D1: {
        Instruction step(cpu, 0x20, 0x00C32Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:11 LDX #MUSIC::GIYGAS_PHASE1
    case 0xC2C4D4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000BAu : 0x0000BAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:11 LDX #MUSIC::GIYGAS_PHASE1
    // Overlapping static entry reached from 0xC2C4D4.
    case 0xC2C4D6: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:12 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_1
    case 0xC2C4D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DCu : 0x0001DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:12 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_1
    // Overlapping static entry reached from 0xC2C4D7.
    case 0xC2C4D9: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:13 JSR UNKNOWN_C2C21F
    case 0xC2C4DA: {
        Instruction step(cpu, 0x20, 0x00C21Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:13 JSR UNKNOWN_C2C21F
    // Overlapping static entry reached from 0xC2C4D9.
    case 0xC2C4DB: {
        Instruction step(cpu, 0x1F, 0x2EA9C2u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pokey_speech_1.asm:14 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_1_TALK_B
    case 0xC2C4DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Eu : 0x00FC2Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pokey_speech_1.asm:14 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_1_TALK_B
    // Overlapping static entry reached from 0xC2C4DD.
    case 0xC2C4DF: {
        Instruction step(cpu, 0xFC, 0x000E85u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pokey_speech_1.asm:14 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_1_TALK_B
    case 0xC2C4E0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pokey_speech_1.asm:14 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_1_TALK_B
    case 0xC2C4E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pokey_speech_1.asm:14 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_1_TALK_B
    // Overlapping static entry reached from 0xC2C4E2.
    case 0xC2C4E4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pokey_speech_1.asm:14 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_1_TALK_B
    case 0xC2C4E5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/pokey_speech_1.asm:14 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_1_TALK_B
    case 0xC2C4E7: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C4EB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:16 STZ BATTLERS_TABLE + .SIZEOF(battler) * 9 + battler::consciousness
    case 0xC2C4ED: {
        Instruction step(cpu, 0x9C, 0x00A276u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC2C4F0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:18 LDA #GIYGAS_PHASES::GIYGAS_STARTS_ATTACKING
    case 0xC2C4F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:18 LDA #GIYGAS_PHASES::GIYGAS_STARTS_ATTACKING
    // Overlapping static entry reached from 0xC2C4F2.
    case 0xC2C4F4: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:19 STA GIYGAS_PHASE
    case 0xC2C4F5: {
        Instruction step(cpu, 0x8D, 0x00A97Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:20 JSL FINAL_BATTLE_ANTIPIRACY_CHECK
    case 0xC2C4F8: {
        Instruction step(cpu, 0x22, 0xC3FDC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:21 LDA #ENEMY::GIYGAS_4
    case 0xC2C4FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DCu : 0x0000DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:21 LDA #ENEMY::GIYGAS_4
    // Overlapping static entry reached from 0xC2C4FC.
    case 0xC2C4FE: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:22 JSR UNKNOWN_C2C32C
    case 0xC2C4FF: {
        Instruction step(cpu, 0x20, 0x00C32Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:23 LDX #MUSIC::GIYGAS_PHASE2
    case 0xC2C502: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000049u : 0x000049u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:23 LDX #MUSIC::GIYGAS_PHASE2
    // Overlapping static entry reached from 0xC2C502.
    case 0xC2C504: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:24 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_2
    case 0xC2C505: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DDu : 0x0001DDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:24 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_2
    // Overlapping static entry reached from 0xC2C505.
    case 0xC2C507: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:25 JSR UNKNOWN_C2C21F
    case 0xC2C508: {
        Instruction step(cpu, 0x20, 0x00C21Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:25 JSR UNKNOWN_C2C21F
    // Overlapping static entry reached from 0xC2C507.
    case 0xC2C509: {
        Instruction step(cpu, 0x1F, 0x01A9C2u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:26 LDA #1
    case 0xC2C50B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:26 LDA #1
    // Overlapping static entry reached from 0xC2C50B.
    case 0xC2C50D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_1.asm:27 STA SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC2C50E: {
        Instruction step(cpu, 0x8D, 0x00AA92u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/pokey_speech_1.asm:28 END_C_FUNCTION
    case 0xC2C511: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/pokey_speech_1.asm:28 END_C_FUNCTION
    case 0xC2C512: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
