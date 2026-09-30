// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/giygas_prayer_3.asm
bool resume_battle_actions_giygas_prayer_3(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C5FA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:6 END_STACK_VARS
    case 0xC2C5FC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:6 END_STACK_VARS
    case 0xC2C5FD: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:6 END_STACK_VARS
    case 0xC2C5FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C5FE.
    case 0xC2C600: {
        Instruction step(cpu, 0xFF, 0xC7A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:6 END_STACK_VARS
    case 0xC2C601: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:7 LOADPTR MSG_EVT_PRAY_3_PAULA_PAPA, @LOCAL00
    case 0xC2C602: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x00BAC7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:7 LOADPTR MSG_EVT_PRAY_3_PAULA_PAPA, @LOCAL00
    // Overlapping static entry reached from 0xC2C602.
    case 0xC2C604: {
        Instruction step(cpu, 0xBA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:7 LOADPTR MSG_EVT_PRAY_3_PAULA_PAPA, @LOCAL00
    case 0xC2C605: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:7 LOADPTR MSG_EVT_PRAY_3_PAULA_PAPA, @LOCAL00
    case 0xC2C607: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:7 LOADPTR MSG_EVT_PRAY_3_PAULA_PAPA, @LOCAL00
    // Overlapping static entry reached from 0xC2C607.
    case 0xC2C609: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:7 LOADPTR MSG_EVT_PRAY_3_PAULA_PAPA, @LOCAL00
    case 0xC2C60A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:8 LDX #MUSIC::GIYGAS_PHASE3
    case 0xC2C60C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B9u : 0x0000B9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:8 LDX #MUSIC::GIYGAS_PHASE3
    // Overlapping static entry reached from 0xC2C60C.
    case 0xC2C60E: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:9 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_AFTER_PRAYER_1
    case 0xC2C60F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DFu : 0x0001DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:9 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_AFTER_PRAYER_1
    // Overlapping static entry reached from 0xC2C60F.
    case 0xC2C611: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:10 JSR UNKNOWN_C2C37A
    case 0xC2C612: {
        Instruction step(cpu, 0x20, 0x00C37Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:10 JSR UNKNOWN_C2C37A
    // Overlapping static entry reached from 0xC2C611.
    case 0xC2C613: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:10 JSR UNKNOWN_C2C37A
    // Overlapping static entry reached from 0xC2C613.
    case 0xC2C614: {
        Instruction step(cpu, 0xC3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:11 LDA #GIYGAS_PRAYER_DAMAGE_2
    case 0xC2C615: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:11 LDA #GIYGAS_PRAYER_DAMAGE_2
    // Overlapping static entry reached from 0xC2C614.
    case 0xC2C616: {
        Instruction step(cpu, 0x64, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:11 LDA #GIYGAS_PRAYER_DAMAGE_2
    // Overlapping static entry reached from 0xC2C615.
    case 0xC2C617: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:12 JSR GIYGAS_HURT_PRAYER
    case 0xC2C618: {
        Instruction step(cpu, 0x20, 0x00C3E2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:13 LDA #GIYGAS_PHASES::PRAYER_3_USED
    case 0xC2C61B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:13 LDA #GIYGAS_PHASES::PRAYER_3_USED
    // Overlapping static entry reached from 0xC2C61B.
    case 0xC2C61D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_3.asm:14 STA GIYGAS_PHASE
    case 0xC2C61E: {
        Instruction step(cpu, 0x8D, 0x00A97Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:15 END_C_FUNCTION
    case 0xC2C621: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/giygas_prayer_3.asm:15 END_C_FUNCTION
    case 0xC2C622: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
