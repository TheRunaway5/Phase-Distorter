// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/pokey_speech_2.asm
bool resume_battle_actions_pokey_speech_2(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/pokey_speech_2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C4D0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/pokey_speech_2.asm:7 END_STACK_VARS
    case 0xC2C4D2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/pokey_speech_2.asm:7 END_STACK_VARS
    case 0xC2C4D3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/pokey_speech_2.asm:7 END_STACK_VARS
    case 0xC2C4D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/pokey_speech_2.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C4D4.
    case 0xC2C4D6: {
        Instruction step(cpu, 0xFF, 0x04A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/pokey_speech_2.asm:7 END_STACK_VARS
    case 0xC2C4D7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:8 LDA #GIYGAS_PHASES::START_PRAYING
    case 0xC2C4D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:8 LDA #GIYGAS_PHASES::START_PRAYING
    // Overlapping static entry reached from 0xC2C4D8.
    case 0xC2C4DA: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:9 STA GIYGAS_PHASE
    case 0xC2C4DB: {
        Instruction step(cpu, 0x8D, 0x00AB7Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:10 LDA #2*SECONDS
    case 0xC2C4DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:10 LDA #2*SECONDS
    // Overlapping static entry reached from 0xC2C4DE.
    case 0xC2C4E0: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:11 JSR WAIT
    case 0xC2C4E1: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:12 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 9 + battler::consciousness
    case 0xC2C4E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000078u : 0x00A478u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:12 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler) * 9 + battler::consciousness
    // Overlapping static entry reached from 0xC2C4E4.
    case 0xC2C4E6: {
        Instruction step(cpu, 0xA4, 0x000086u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:13 STX @LOCAL01
    case 0xC2C4E7: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:13 STX @LOCAL01
    // Overlapping static entry reached from 0xC2C4E6.
    case 0xC2C4E8: {
        Instruction step(cpu, 0x12, 0x0000E2u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C4E9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:14 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2C4E8.
    case 0xC2C4EA: {
        Instruction step(cpu, 0x20, 0x0001A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:15 LDA #1
    case 0xC2C4EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:16 STA __BSS_START__,X
    case 0xC2C4ED: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:16 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2C4EB.
    case 0xC2C4EE: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:17 JSL UNKNOWN_C2F8F9
    case 0xC2C4F0: {
        Instruction step(cpu, 0x22, 0xC2F812u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pokey_speech_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_2_TALK_2
    case 0xC2C4F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000016u : 0x003B16u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/pokey_speech_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_2_TALK_2
    // Overlapping static entry reached from 0xC2C4F4.
    case 0xC2C4F6: {
        Instruction step(cpu, 0x3B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/pokey_speech_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_2_TALK_2
    case 0xC2C4F7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pokey_speech_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_2_TALK_2
    case 0xC2C4F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/pokey_speech_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_2_TALK_2
    // Overlapping static entry reached from 0xC2C4F9.
    case 0xC2C4FB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/pokey_speech_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_2_TALK_2
    case 0xC2C4FC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/pokey_speech_2.asm:19 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_MECHPOKEY_2_TALK_2
    case 0xC2C4FE: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C502: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:21 LDA #0
    case 0xC2C504: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00A600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:22 LDX @LOCAL01
    case 0xC2C506: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:22 LDX @LOCAL01
    // Overlapping static entry reached from 0xC2C504.
    case 0xC2C507: {
        Instruction step(cpu, 0x12, 0x00009Du, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:23 STA __BSS_START__,X
    case 0xC2C508: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:23 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2C507.
    case 0xC2C509: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:24 JSL UNKNOWN_C2F8F9
    case 0xC2C50B: {
        Instruction step(cpu, 0x22, 0xC2F812u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:26 LDA #1*SECOND
    case 0xC2C50F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:26 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C50F.
    case 0xC2C511: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:27 JSR WAIT
    case 0xC2C512: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:28 LDA #ENEMY::GIYGAS_5
    case 0xC2C515: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DDu : 0x0000DDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:28 LDA #ENEMY::GIYGAS_5
    // Overlapping static entry reached from 0xC2C515.
    case 0xC2C517: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:29 JSR UNKNOWN_C2C32C
    case 0xC2C518: {
        Instruction step(cpu, 0x20, 0x00C2E6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:30 LDX #MUSIC::GIYGAS_PHASE3
    case 0xC2C51B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B9u : 0x0000B9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:30 LDX #MUSIC::GIYGAS_PHASE3
    // Overlapping static entry reached from 0xC2C51B.
    case 0xC2C51D: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:31 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    case 0xC2C51E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DEu : 0x0001DEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:31 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    // Overlapping static entry reached from 0xC2C51E.
    case 0xC2C520: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:32 JSR UNKNOWN_C2C21F
    case 0xC2C521: {
        Instruction step(cpu, 0x20, 0x00C1CAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:32 JSR UNKNOWN_C2C21F
    // Overlapping static entry reached from 0xC2C520.
    case 0xC2C522: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:32 JSR UNKNOWN_C2C21F
    // Overlapping static entry reached from 0xC2C522.
    case 0xC2C523: {
        Instruction step(cpu, 0xC1, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:33 LDA #1
    case 0xC2C524: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:33 LDA #1
    // Overlapping static entry reached from 0xC2C523.
    case 0xC2C525: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:33 LDA #1
    // Overlapping static entry reached from 0xC2C524.
    case 0xC2C526: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/pokey_speech_2.asm:34 STA SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC2C527: {
        Instruction step(cpu, 0x8D, 0x00AC67u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/pokey_speech_2.asm:35 END_C_FUNCTION
    case 0xC2C52A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/pokey_speech_2.asm:35 END_C_FUNCTION
    case 0xC2C52B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
