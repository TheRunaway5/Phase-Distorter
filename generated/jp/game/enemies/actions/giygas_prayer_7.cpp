// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/giygas_prayer_7.asm
bool resume_battle_actions_giygas_prayer_7(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C658: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:6 END_STACK_VARS
    case 0xC2C65A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:6 END_STACK_VARS
    case 0xC2C65B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:6 END_STACK_VARS
    case 0xC2C65C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C65C.
    case 0xC2C65E: {
        Instruction step(cpu, 0xFF, 0xB3A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:6 END_STACK_VARS
    case 0xC2C65F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:7 LOADPTR MSG_EVT_PRAY_1_NES_MAMA, @LOCAL00
    case 0xC2C660: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B3u : 0x0057B3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:7 LOADPTR MSG_EVT_PRAY_1_NES_MAMA, @LOCAL00
    // Overlapping static entry reached from 0xC2C660.
    case 0xC2C662: {
        Instruction step(cpu, 0x57, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:7 LOADPTR MSG_EVT_PRAY_1_NES_MAMA, @LOCAL00
    case 0xC2C663: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:7 LOADPTR MSG_EVT_PRAY_1_NES_MAMA, @LOCAL00
    // Overlapping static entry reached from 0xC2C662.
    case 0xC2C664: {
        Instruction step(cpu, 0x0E, 0x00C8A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:7 LOADPTR MSG_EVT_PRAY_1_NES_MAMA, @LOCAL00
    case 0xC2C665: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:7 LOADPTR MSG_EVT_PRAY_1_NES_MAMA, @LOCAL00
    // Overlapping static entry reached from 0xC2C665.
    case 0xC2C667: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:7 LOADPTR MSG_EVT_PRAY_1_NES_MAMA, @LOCAL00
    case 0xC2C668: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:8 LDX #MUSIC::GIYGAS_PHASE3
    case 0xC2C66A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B9u : 0x0000B9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:8 LDX #MUSIC::GIYGAS_PHASE3
    // Overlapping static entry reached from 0xC2C66A.
    case 0xC2C66C: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:9 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_AFTER_PRAYER_1
    case 0xC2C66D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DFu : 0x0001DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:9 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_AFTER_PRAYER_1
    // Overlapping static entry reached from 0xC2C66D.
    case 0xC2C66F: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:10 JSR UNKNOWN_C2C37A
    case 0xC2C670: {
        Instruction step(cpu, 0x20, 0x00C334u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:10 JSR UNKNOWN_C2C37A
    // Overlapping static entry reached from 0xC2C66F.
    case 0xC2C671: {
        Instruction step(cpu, 0x34, 0x0000C3u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:11 LDA #GIYGAS_PRAYER_DAMAGE_6
    case 0xC2C673: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000640u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:11 LDA #GIYGAS_PRAYER_DAMAGE_6
    // Overlapping static entry reached from 0xC2C673.
    case 0xC2C675: {
        Instruction step(cpu, 0x06, 0x000020u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:12 JSR GIYGAS_HURT_PRAYER
    case 0xC2C676: {
        Instruction step(cpu, 0x20, 0x00C39Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:12 JSR GIYGAS_HURT_PRAYER
    // Overlapping static entry reached from 0xC2C675.
    case 0xC2C677: {
        Instruction step(cpu, 0x9C, 0x00A9C3u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:13 LDA #GIYGAS_PHASES::PRAYER_7_USED
    case 0xC2C679: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:13 LDA #GIYGAS_PHASES::PRAYER_7_USED
    // Overlapping static entry reached from 0xC2C677.
    case 0xC2C67A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:13 LDA #GIYGAS_PHASES::PRAYER_7_USED
    // Overlapping static entry reached from 0xC2C679.
    case 0xC2C67B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:14 STA GIYGAS_PHASE
    case 0xC2C67C: {
        Instruction step(cpu, 0x8D, 0x00AB7Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:15 LDX #MUSIC::GIYGAS_WEAKENED2
    case 0xC2C67F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Au : 0x00004Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:15 LDX #MUSIC::GIYGAS_WEAKENED2
    // Overlapping static entry reached from 0xC2C67F.
    case 0xC2C681: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:16 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_AFTER_PRAYER_7
    case 0xC2C682: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:16 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_AFTER_PRAYER_7
    // Overlapping static entry reached from 0xC2C682.
    case 0xC2C684: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:17 JSR UNKNOWN_C2C21F
    case 0xC2C685: {
        Instruction step(cpu, 0x20, 0x00C1CAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:17 JSR UNKNOWN_C2C21F
    // Overlapping static entry reached from 0xC2C684.
    case 0xC2C686: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_7.asm:17 JSR UNKNOWN_C2C21F
    // Overlapping static entry reached from 0xC2C686.
    case 0xC2C687: {
        Instruction step(cpu, 0xC1, 0x00002Bu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:18 END_C_FUNCTION
    case 0xC2C688: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/giygas_prayer_7.asm:18 END_C_FUNCTION
    case 0xC2C689: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
