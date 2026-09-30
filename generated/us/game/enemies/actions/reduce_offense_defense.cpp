// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/reduce_offense_defense.asm
bool resume_battle_actions_reduce_offense_defense(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28F21: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28F23: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28F24: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28F25: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC28F25.
    case 0xC28F27: {
        Instruction step(cpu, 0xFF, 0xFD205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28F28: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28F29: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28F27.
    case 0xC28F2B: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:10 CMP #0
    case 0xC28F2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:10 CMP #0
    // Overlapping static entry reached from 0xC28F2C.
    case 0xC28F2E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:11 BNE @UNKNOWN0
    case 0xC28F2F: {
        Instruction step(cpu, 0xD0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:12 LDX CURRENT_TARGET
    case 0xC28F31: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:13 LDY a:battler::offense,X
    case 0xC28F34: {
        Instruction step(cpu, 0xBC, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:14 STY @LOCAL02
    case 0xC28F37: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:15 LDA CURRENT_TARGET
    case 0xC28F39: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:16 JSR HEXADECIMATE_OFFENSE
    case 0xC28F3C: {
        Instruction step(cpu, 0x20, 0x007DDCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28F3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x00F885u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F3F.
    case 0xC28F41: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28F42: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28F44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F44.
    case 0xC28F46: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28F47: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:18 LDX CURRENT_TARGET
    case 0xC28F49: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:19 LDY @LOCAL02
    case 0xC28F4C: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:20 TYA
    case 0xC28F4E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:21 SEC
    case 0xC28F4F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:22 SBC a:battler::offense,X
    case 0xC28F50: {
        Instruction step(cpu, 0xFD, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC28F53: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC28F55: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F57: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F59: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F5B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F5D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:25 JSL DISPLAY_TEXT_WAIT
    case 0xC28F5F: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:26 LDX CURRENT_TARGET
    case 0xC28F63: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:27 LDY a:battler::defense,X
    case 0xC28F66: {
        Instruction step(cpu, 0xBC, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:28 STY @LOCAL02
    case 0xC28F69: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:29 LDA CURRENT_TARGET
    case 0xC28F6B: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:30 JSR HEXADECIMATE_DEFENSE
    case 0xC28F6E: {
        Instruction step(cpu, 0x20, 0x007E33u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A2u : 0x00F8A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F71.
    case 0xC28F73: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F74: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F76.
    case 0xC28F78: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F79: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:32 LDX CURRENT_TARGET
    case 0xC28F7B: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:33 LDY @LOCAL02
    case 0xC28F7E: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:34 TYA
    case 0xC28F80: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:35 SEC
    case 0xC28F81: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:36 SBC a:battler::defense,X
    case 0xC28F82: {
        Instruction step(cpu, 0xFD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:37 STORE_INT1632 @VIRTUAL06
    case 0xC28F85: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:37 STORE_INT1632 @VIRTUAL06
    case 0xC28F87: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F89: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F8B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F8D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F8F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:39 JSL DISPLAY_TEXT_WAIT
    case 0xC28F91: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:41 END_C_FUNCTION
    case 0xC28F95: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:41 END_C_FUNCTION
    case 0xC28F96: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
