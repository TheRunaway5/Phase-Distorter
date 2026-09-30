// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/reduce_offense_defense.asm
bool resume_battle_actions_reduce_offense_defense(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28EB8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28EBA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28EBB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28EBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC28EBC.
    case 0xC28EBE: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:8 END_STACK_VARS
    case 0xC28EBF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    case 0xC28EC0: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC28EBE.
    case 0xC28EC2: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:10 CMP #0
    case 0xC28EC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:10 CMP #0
    // Overlapping static entry reached from 0xC28EC3.
    case 0xC28EC5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:11 BNE @UNKNOWN0
    case 0xC28EC6: {
        Instruction step(cpu, 0xD0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:12 LDX CURRENT_TARGET
    case 0xC28EC8: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:13 LDY a:battler::offense,X
    case 0xC28ECB: {
        Instruction step(cpu, 0xBC, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:14 STY @LOCAL02
    case 0xC28ECE: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:15 LDA CURRENT_TARGET
    case 0xC28ED0: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:16 JSR HEXADECIMATE_OFFENSE
    case 0xC28ED3: {
        Instruction step(cpu, 0x20, 0x007D73u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28ED6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Bu : 0x00372Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28ED6.
    case 0xC28ED8: {
        Instruction step(cpu, 0x37, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28ED9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28ED8.
    case 0xC28EDA: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28EDB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28EDB.
    case 0xC28EDD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC28EDE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:18 LDX CURRENT_TARGET
    case 0xC28EE0: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:19 LDY @LOCAL02
    case 0xC28EE3: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:20 TYA
    case 0xC28EE5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:21 SEC
    case 0xC28EE6: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:22 SBC a:battler::offense,X
    case 0xC28EE7: {
        Instruction step(cpu, 0xFD, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC28EEA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC28EEC: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28EEE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28EF0: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28EF2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28EF4: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:25 JSL DISPLAY_TEXT_WAIT
    case 0xC28EF6: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:25 JSL DISPLAY_TEXT_WAIT
    // Overlapping static entry reached from 0xC28F72.
    case 0xC28EF9: {
        Instruction step(cpu, 0xC1, 0x0000AEu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:26 LDX CURRENT_TARGET
    case 0xC28EFA: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:26 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC28EF9.
    case 0xC28EFB: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:27 LDY a:battler::defense,X
    case 0xC28EFD: {
        Instruction step(cpu, 0xBC, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:28 STY @LOCAL02
    case 0xC28F00: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:29 LDA CURRENT_TARGET
    case 0xC28F02: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:30 JSR HEXADECIMATE_DEFENSE
    case 0xC28F05: {
        Instruction step(cpu, 0x20, 0x007DCAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F08: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000044u : 0x003744u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F08.
    case 0xC28F0A: {
        Instruction step(cpu, 0x37, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F0B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F0A.
    case 0xC28F0C: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F0D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC28F0D.
    case 0xC28F0F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:31 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC28F10: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:32 LDX CURRENT_TARGET
    case 0xC28F12: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:33 LDY @LOCAL02
    case 0xC28F15: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:34 TYA
    case 0xC28F17: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:35 SEC
    case 0xC28F18: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:36 SBC a:battler::defense,X
    case 0xC28F19: {
        Instruction step(cpu, 0xFD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:37 STORE_INT1632 @VIRTUAL06
    case 0xC28F1C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:37 STORE_INT1632 @VIRTUAL06
    case 0xC28F1E: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F20: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F22: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F24: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:38 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28F26: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense_defense.asm:39 JSL DISPLAY_TEXT_WAIT
    case 0xC28F28: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:41 END_C_FUNCTION
    case 0xC28F2C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/reduce_offense_defense.asm:41 END_C_FUNCTION
    case 0xC28F2D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
