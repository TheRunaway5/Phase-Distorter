// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/hp_sucker.asm
bool resume_battle_actions_hp_sucker(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/hp_sucker.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A46B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/hp_sucker.asm:8 END_STACK_VARS
    case 0xC2A46D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/hp_sucker.asm:8 END_STACK_VARS
    case 0xC2A46E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/hp_sucker.asm:8 END_STACK_VARS
    case 0xC2A46F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/hp_sucker.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A46F.
    case 0xC2A471: {
        Instruction step(cpu, 0xFF, 0x96205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/hp_sucker.asm:8 END_STACK_VARS
    case 0xC2A472: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:9 JSR SUCCESS_LUCK80
    case 0xC2A473: {
        Instruction step(cpu, 0x20, 0x007C96u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:9 JSR SUCCESS_LUCK80
    // Overlapping static entry reached from 0xC2A471.
    case 0xC2A475: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:10 CMP #0
    case 0xC2A476: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:10 CMP #0
    // Overlapping static entry reached from 0xC2A476.
    case 0xC2A478: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/hp_sucker.asm:11 BEQL @UNKNOWN3
    case 0xC2A479: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/hp_sucker.asm:11 BEQL @UNKNOWN3
    case 0xC2A47B: {
        Instruction step(cpu, 0x4C, 0x00A4F7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:12 LDX CURRENT_ATTACKER
    case 0xC2A47E: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:13 LDA a:battler::hp_target,X
    case 0xC2A481: {
        Instruction step(cpu, 0xBD, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:14 BEQ @UNKNOWN3
    case 0xC2A484: {
        Instruction step(cpu, 0xF0, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:15 LDA CURRENT_TARGET
    case 0xC2A486: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:16 CMP CURRENT_ATTACKER
    case 0xC2A489: {
        Instruction step(cpu, 0xCD, 0x00A970u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:17 BNE @UNKNOWN1
    case 0xC2A48C: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:17 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC24CC3.
    case 0xC2A48D: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPSUCK_ME
    case 0xC2A48E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x007710u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPSUCK_ME
    // Overlapping static entry reached from 0xC2A48D.
    case 0xC2A48F: {
        Instruction step(cpu, 0x10, 0x000077u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPSUCK_ME
    // Overlapping static entry reached from 0xC2A48E.
    case 0xC2A490: {
        Instruction step(cpu, 0x77, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/hp_sucker.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPSUCK_ME
    case 0xC2A491: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/hp_sucker.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPSUCK_ME
    // Overlapping static entry reached from 0xC2A490.
    case 0xC2A492: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPSUCK_ME
    case 0xC2A493: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPSUCK_ME
    // Overlapping static entry reached from 0xC2A493.
    case 0xC2A495: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/hp_sucker.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPSUCK_ME
    case 0xC2A496: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/hp_sucker.asm:18 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPSUCK_ME
    case 0xC2A498: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:19 BRA @UNKNOWN4
    case 0xC2A49C: {
        Instruction step(cpu, 0x80, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:21 LDX CURRENT_TARGET
    case 0xC2A49E: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:22 LDA a:battler::hp_max,X
    case 0xC2A4A1: {
        Instruction step(cpu, 0xBD, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:23 JSR FIFTY_PERCENT_VARIANCE
    case 0xC2A4A4: {
        Instruction step(cpu, 0x20, 0x006A44u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:24 LSR
    case 0xC2A4A7: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:25 LSR
    case 0xC2A4A8: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:26 LSR
    case 0xC2A4A9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:27 TAY
    case 0xC2A4AA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:28 STY @LOCAL02
    case 0xC2A4AB: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:29 TYX
    case 0xC2A4AD: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:30 LDA CURRENT_TARGET
    case 0xC2A4AE: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:31 JSR REDUCE_HP
    case 0xC2A4B1: {
        Instruction step(cpu, 0x20, 0x0071F0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:32 LOADPTR MSG_BTL_HPSUCK_ON, @LOCAL00
    case 0xC2A4B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000029u : 0x007729u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:32 LOADPTR MSG_BTL_HPSUCK_ON, @LOCAL00
    // Overlapping static entry reached from 0xC2A4B4.
    case 0xC2A4B6: {
        Instruction step(cpu, 0x77, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/hp_sucker.asm:32 LOADPTR MSG_BTL_HPSUCK_ON, @LOCAL00
    case 0xC2A4B7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/hp_sucker.asm:32 LOADPTR MSG_BTL_HPSUCK_ON, @LOCAL00
    // Overlapping static entry reached from 0xC2A4B6.
    case 0xC2A4B8: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:32 LOADPTR MSG_BTL_HPSUCK_ON, @LOCAL00
    case 0xC2A4B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:32 LOADPTR MSG_BTL_HPSUCK_ON, @LOCAL00
    // Overlapping static entry reached from 0xC2A4B9.
    case 0xC2A4BB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/hp_sucker.asm:32 LOADPTR MSG_BTL_HPSUCK_ON, @LOCAL00
    case 0xC2A4BC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:33 LDY @LOCAL02
    case 0xC2A4BE: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:34 TYA
    case 0xC2A4C0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/hp_sucker.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC2A4C1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/hp_sucker.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC2A4C3: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:883 BPL :+
    // Macro caller: src/battle/actions/hp_sucker.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC2A4C5: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/battle/actions/hp_sucker.asm:35 STORE_INT1632S @VIRTUAL06
    case 0xC2A4C7: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/hp_sucker.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A4C9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/hp_sucker.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A4CB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/hp_sucker.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A4CD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/hp_sucker.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A4CF: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:37 JSL DISPLAY_TEXT_WAIT
    case 0xC2A4D1: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:38 LDX CURRENT_ATTACKER
    case 0xC2A4D5: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:39 LDY @LOCAL02
    case 0xC2A4D8: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:40 TYA
    case 0xC2A4DA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:41 CLC
    case 0xC2A4DB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:42 ADC a:battler::hp,X
    case 0xC2A4DC: {
        Instruction step(cpu, 0x7D, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:43 TAX
    case 0xC2A4DF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:44 LDA CURRENT_ATTACKER
    case 0xC2A4E0: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:45 JSR SET_HP
    case 0xC2A4E3: {
        Instruction step(cpu, 0x20, 0x007126u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:46 LDX CURRENT_TARGET
    case 0xC2A4E6: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:47 LDA a:battler::hp,X
    case 0xC2A4E9: {
        Instruction step(cpu, 0xBD, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:48 BNE @UNKNOWN4
    case 0xC2A4EC: {
        Instruction step(cpu, 0xD0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:49 LDA CURRENT_TARGET
    case 0xC2A4EE: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:50 JSL KO_TARGET
    case 0xC2A4F1: {
        Instruction step(cpu, 0x22, 0xC27550u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/hp_sucker.asm:51 BRA @UNKNOWN4
    case 0xC2A4F5: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A4F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A4F7.
    case 0xC2A4F9: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/hp_sucker.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A4FA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/hp_sucker.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A4F9.
    case 0xC2A4FB: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A4FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/hp_sucker.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2A4FC.
    case 0xC2A4FE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/hp_sucker.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A4FF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/hp_sucker.asm:53 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2A501: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/hp_sucker.asm:55 END_C_FUNCTION
    case 0xC2A505: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/hp_sucker.asm:55 END_C_FUNCTION
    case 0xC2A506: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
