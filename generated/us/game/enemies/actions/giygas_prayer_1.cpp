// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/giygas_prayer_1.asm
bool resume_battle_actions_giygas_prayer_1(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C572: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:6 END_STACK_VARS
    case 0xC2C574: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:6 END_STACK_VARS
    case 0xC2C575: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:6 END_STACK_VARS
    case 0xC2C576: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C576.
    case 0xC2C578: {
        Instruction step(cpu, 0xFF, 0x96A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:6 END_STACK_VARS
    case 0xC2C579: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:7 LOADPTR MSG_EVT_PRAY_7_DOSEI, @LOCAL00
    case 0xC2C57A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000096u : 0x00BC96u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:7 LOADPTR MSG_EVT_PRAY_7_DOSEI, @LOCAL00
    // Overlapping static entry reached from 0xC2C57A.
    case 0xC2C57C: {
        Instruction step(cpu, 0xBC, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:7 LOADPTR MSG_EVT_PRAY_7_DOSEI, @LOCAL00
    case 0xC2C57D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:7 LOADPTR MSG_EVT_PRAY_7_DOSEI, @LOCAL00
    case 0xC2C57F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:7 LOADPTR MSG_EVT_PRAY_7_DOSEI, @LOCAL00
    // Overlapping static entry reached from 0xC2C57F.
    case 0xC2C581: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:7 LOADPTR MSG_EVT_PRAY_7_DOSEI, @LOCAL00
    case 0xC2C582: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:8 LDX #MUSIC::GIYGAS_PHASE3
    case 0xC2C584: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B9u : 0x0000B9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:8 LDX #MUSIC::GIYGAS_PHASE3
    // Overlapping static entry reached from 0xC2C584.
    case 0xC2C586: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:9 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    case 0xC2C587: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DEu : 0x0001DEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:9 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    // Overlapping static entry reached from 0xC2C587.
    case 0xC2C589: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:10 JSR UNKNOWN_C2C37A
    case 0xC2C58A: {
        Instruction step(cpu, 0x20, 0x00C37Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:10 JSR UNKNOWN_C2C37A
    // Overlapping static entry reached from 0xC2C589.
    case 0xC2C58B: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:10 JSR UNKNOWN_C2C37A
    // Overlapping static entry reached from 0xC2C58B.
    case 0xC2C58C: {
        Instruction step(cpu, 0xC3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:11 LDA #2*SECONDS
    case 0xC2C58D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:11 LDA #2*SECONDS
    // Overlapping static entry reached from 0xC2C58C.
    case 0xC2C58E: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:11 LDA #2*SECONDS
    // Overlapping static entry reached from 0xC2C58D.
    case 0xC2C58F: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:12 JSR WAIT
    case 0xC2C590: {
        Instruction step(cpu, 0x20, 0x0069BEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:13 LDA #SFX::PSI_STARSTORM
    case 0xC2C593: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:13 LDA #SFX::PSI_STARSTORM
    // Overlapping static entry reached from 0xC2C593.
    case 0xC2C595: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:14 JSL PLAY_SOUND
    case 0xC2C596: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:15 LDA #1*HALF_OF_A_SECOND
    case 0xC2C59A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:15 LDA #1*HALF_OF_A_SECOND
    // Overlapping static entry reached from 0xC2C59A.
    case 0xC2C59C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:16 JSR WAIT
    case 0xC2C59D: {
        Instruction step(cpu, 0x20, 0x0069BEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:17 LDA #1*SECOND
    case 0xC2C5A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:17 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C5A0.
    case 0xC2C5A2: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:18 STA VERTICAL_SHAKE_DURATION
    case 0xC2C5A3: {
        Instruction step(cpu, 0x8D, 0x00AD8Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:19 LDA #1*FIFTH_OF_A_SECOND
    case 0xC2C5A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:19 LDA #1*FIFTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC2C5A6.
    case 0xC2C5A8: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:20 STA VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2C5A9: {
        Instruction step(cpu, 0x8D, 0x00AD8Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_INORU_DAMAGE_1
    case 0xC2C5AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Au : 0x00F86Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_INORU_DAMAGE_1
    // Overlapping static entry reached from 0xC2C5AC.
    case 0xC2C5AE: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_INORU_DAMAGE_1
    case 0xC2C5AF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_INORU_DAMAGE_1
    case 0xC2C5B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_INORU_DAMAGE_1
    // Overlapping static entry reached from 0xC2C5B1.
    case 0xC2C5B3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_INORU_DAMAGE_1
    case 0xC2C5B4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:21 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_INORU_DAMAGE_1
    case 0xC2C5B6: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:22 LDA #GIYGAS_PHASES::PRAYER_1_USED
    case 0xC2C5BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:22 LDA #GIYGAS_PHASES::PRAYER_1_USED
    // Overlapping static entry reached from 0xC2C5BA.
    case 0xC2C5BC: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:23 STA GIYGAS_PHASE
    case 0xC2C5BD: {
        Instruction step(cpu, 0x8D, 0x00A97Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:24 LDA #ENEMY::GIYGAS_6
    case 0xC2C5C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E5u : 0x0000E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:24 LDA #ENEMY::GIYGAS_6
    // Overlapping static entry reached from 0xC2C5C0.
    case 0xC2C5C2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:25 JSR UNKNOWN_C2C32C
    case 0xC2C5C3: {
        Instruction step(cpu, 0x20, 0x00C32Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:26 LDX #MUSIC::NONE
    case 0xC2C5C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:26 LDX #MUSIC::NONE
    // Overlapping static entry reached from 0xC2C5C6.
    case 0xC2C5C8: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:27 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_AFTER_PRAYER_1
    case 0xC2C5C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DFu : 0x0001DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:27 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_AFTER_PRAYER_1
    // Overlapping static entry reached from 0xC2C5C9.
    case 0xC2C5CB: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:28 JSR UNKNOWN_C2C21F
    case 0xC2C5CC: {
        Instruction step(cpu, 0x20, 0x00C21Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_1.asm:28 JSR UNKNOWN_C2C21F
    // Overlapping static entry reached from 0xC2C5CB.
    case 0xC2C5CD: {
        Instruction step(cpu, 0x1F, 0x6B2BC2u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:29 END_C_FUNCTION
    case 0xC2C5CF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/giygas_prayer_1.asm:29 END_C_FUNCTION
    case 0xC2C5D0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
