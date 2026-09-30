// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/giygas_prayer_5.asm
bool resume_battle_actions_giygas_prayer_5(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C606: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:6 END_STACK_VARS
    case 0xC2C608: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:6 END_STACK_VARS
    case 0xC2C609: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:6 END_STACK_VARS
    case 0xC2C60A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C60A.
    case 0xC2C60C: {
        Instruction step(cpu, 0xFF, 0x05A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:6 END_STACK_VARS
    case 0xC2C60D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:7 LOADPTR MSG_EVT_PRAY_5_RAMA, @LOCAL00
    case 0xC2C60E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x005A05u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:7 LOADPTR MSG_EVT_PRAY_5_RAMA, @LOCAL00
    // Overlapping static entry reached from 0xC2C60E.
    case 0xC2C610: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:7 LOADPTR MSG_EVT_PRAY_5_RAMA, @LOCAL00
    case 0xC2C611: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:7 LOADPTR MSG_EVT_PRAY_5_RAMA, @LOCAL00
    case 0xC2C613: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:7 LOADPTR MSG_EVT_PRAY_5_RAMA, @LOCAL00
    // Overlapping static entry reached from 0xC2C613.
    case 0xC2C615: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:7 LOADPTR MSG_EVT_PRAY_5_RAMA, @LOCAL00
    case 0xC2C616: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:8 LDX #MUSIC::GIYGAS_PHASE3
    case 0xC2C618: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B9u : 0x0000B9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:8 LDX #MUSIC::GIYGAS_PHASE3
    // Overlapping static entry reached from 0xC2C618.
    case 0xC2C61A: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:9 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_AFTER_PRAYER_1
    case 0xC2C61B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DFu : 0x0001DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:9 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_AFTER_PRAYER_1
    // Overlapping static entry reached from 0xC2C61B.
    case 0xC2C61D: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:10 JSR UNKNOWN_C2C37A
    case 0xC2C61E: {
        Instruction step(cpu, 0x20, 0x00C334u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:10 JSR UNKNOWN_C2C37A
    // Overlapping static entry reached from 0xC2C61D.
    case 0xC2C61F: {
        Instruction step(cpu, 0x34, 0x0000C3u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:11 LDA #GIYGAS_PRAYER_DAMAGE_4
    case 0xC2C621: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x000190u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:11 LDA #GIYGAS_PRAYER_DAMAGE_4
    // Overlapping static entry reached from 0xC2C621.
    case 0xC2C623: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:12 JSR GIYGAS_HURT_PRAYER
    case 0xC2C624: {
        Instruction step(cpu, 0x20, 0x00C39Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:12 JSR GIYGAS_HURT_PRAYER
    // Overlapping static entry reached from 0xC2C623.
    case 0xC2C625: {
        Instruction step(cpu, 0x9C, 0x00A9C3u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:13 LDA #GIYGAS_PHASES::PRAYER_5_USED
    case 0xC2C627: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:13 LDA #GIYGAS_PHASES::PRAYER_5_USED
    // Overlapping static entry reached from 0xC2C625.
    case 0xC2C628: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x008D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:13 LDA #GIYGAS_PHASES::PRAYER_5_USED
    // Overlapping static entry reached from 0xC2C627.
    case 0xC2C629: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:14 STA GIYGAS_PHASE
    case 0xC2C62A: {
        Instruction step(cpu, 0x8D, 0x00AB7Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_5.asm:14 STA GIYGAS_PHASE
    // Overlapping static entry reached from 0xC2C628.
    case 0xC2C62B: {
        Instruction step(cpu, 0x7C, 0x002BABu, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:15 END_C_FUNCTION
    case 0xC2C62D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/giygas_prayer_5.asm:15 END_C_FUNCTION
    case 0xC2C62E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
