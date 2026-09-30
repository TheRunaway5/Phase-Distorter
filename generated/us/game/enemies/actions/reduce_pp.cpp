// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/reduce_pp.asm
bool resume_battle_actions_reduce_pp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/reduce_pp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC28E42: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28E44: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28E45: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28E46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC28E46.
    case 0xC28E48: {
        Instruction step(cpu, 0xFF, 0x72AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/reduce_pp.asm:8 END_STACK_VARS
    case 0xC28E49: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:9 LDX CURRENT_TARGET
    case 0xC28E4A: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:9 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC28E48.
    case 0xC28E4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BDu : 0x0019BDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:10 LDA a:battler::pp_target,X
    case 0xC28E4D: {
        Instruction step(cpu, 0xBD, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:10 LDA a:battler::pp_target,X
    // Overlapping static entry reached from 0xC28E4C.
    case 0xC28E4E: {
        Instruction step(cpu, 0x19, 0x00D000u, 3u, AddressMode::AbsoluteIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:10 LDA a:battler::pp_target,X
    // Overlapping static entry reached from 0xC28E4C.
    case 0xC28E4F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:11 BNE @UNKNOWN0
    case 0xC28E50: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:11 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC28E4E.
    case 0xC28E51: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28E52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x00FB05u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    // Overlapping static entry reached from 0xC28E51.
    case 0xC28E53: {
        Instruction step(cpu, 0x05, 0x0000FBu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    // Overlapping static entry reached from 0xC28E52.
    case 0xC28E54: {
        Instruction step(cpu, 0xFB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_carry_emulation();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28E55: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28E57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    // Overlapping static entry reached from 0xC28E57.
    case 0xC28E59: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28E5A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/reduce_pp.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC28E5C: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:13 BRA @UNKNOWN3
    case 0xC28E60: {
        Instruction step(cpu, 0x80, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:15 LDX CURRENT_TARGET
    case 0xC28E62: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:16 LDA a:battler::pp_max,X
    case 0xC28E65: {
        Instruction step(cpu, 0xBD, 0x00001Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:17 LSR
    case 0xC28E68: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:18 LSR
    case 0xC28E69: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:19 LSR
    case 0xC28E6A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:20 LSR
    case 0xC28E6B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:21 BEQ @UNKNOWN2
    case 0xC28E6C: {
        Instruction step(cpu, 0xF0, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:22 JSR FIFTY_PERCENT_VARIANCE
    case 0xC28E6E: {
        Instruction step(cpu, 0x20, 0x006A44u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:23 TAY
    case 0xC28E71: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:24 STY @LOCAL02
    case 0xC28E72: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:25 TYX
    case 0xC28E74: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:26 LDA CURRENT_TARGET
    case 0xC28E75: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:27 JSR REDUCE_PP
    case 0xC28E78: {
        Instruction step(cpu, 0x20, 0x00721Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000055u : 0x007755u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    // Overlapping static entry reached from 0xC28E7B.
    case 0xC28E7D: {
        Instruction step(cpu, 0x77, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E7E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    // Overlapping static entry reached from 0xC28E7D.
    case 0xC28E7F: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    // Overlapping static entry reached from 0xC28E80.
    case 0xC28E82: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_pp.asm:28 LOADPTR MSG_BTL_PPSUCK_OBJ, @LOCAL00
    case 0xC28E83: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:29 LDY @LOCAL02
    case 0xC28E85: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:30 TYA
    case 0xC28E87: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E88: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E8A: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:883 BPL :+
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E8C: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/battle/actions/reduce_pp.asm:31 STORE_INT1632S @VIRTUAL06
    case 0xC28E8E: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E90: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E92: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E94: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_pp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC28E96: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:33 JSL DISPLAY_TEXT_WAIT
    case 0xC28E98: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/reduce_pp.asm:34 BRA @UNKNOWN3
    case 0xC28E9C: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28E9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Eu : 0x00766Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28E9E.
    case 0xC28EA0: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28EA1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28EA0.
    case 0xC28EA2: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28EA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC28EA3.
    case 0xC28EA5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28EA6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/reduce_pp.asm:36 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC28EA8: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/reduce_pp.asm:38 END_C_FUNCTION
    case 0xC28EAC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/reduce_pp.asm:38 END_C_FUNCTION
    case 0xC28EAD: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
