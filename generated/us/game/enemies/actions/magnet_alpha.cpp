// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/magnet_alpha.asm
bool resume_battle_actions_magnet_alpha(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/magnet_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29F5E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/magnet_alpha.asm:8 END_STACK_VARS
    case 0xC29F60: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/magnet_alpha.asm:8 END_STACK_VARS
    case 0xC29F61: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/magnet_alpha.asm:8 END_STACK_VARS
    case 0xC29F62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/magnet_alpha.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC29F62.
    case 0xC29F64: {
        Instruction step(cpu, 0xFF, 0x72AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/magnet_alpha.asm:8 END_STACK_VARS
    case 0xC29F65: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:9 LDX CURRENT_TARGET
    case 0xC29F66: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:9 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC29F64.
    case 0xC29F68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BDu : 0x0019BDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:10 LDA a:battler::pp_target,X
    case 0xC29F69: {
        Instruction step(cpu, 0xBD, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:10 LDA a:battler::pp_target,X
    // Overlapping static entry reached from 0xC29F68.
    case 0xC29F6A: {
        Instruction step(cpu, 0x19, 0x00D000u, 3u, AddressMode::AbsoluteIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:10 LDA a:battler::pp_target,X
    // Overlapping static entry reached from 0xC29F68.
    case 0xC29F6B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:11 BNE @UNKNOWN0
    case 0xC29F6C: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:11 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC29F6A.
    case 0xC29F6D: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/magnet_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC29F6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x00FB05u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/magnet_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    // Overlapping static entry reached from 0xC29F6D.
    case 0xC29F6F: {
        Instruction step(cpu, 0x05, 0x0000FBu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/magnet_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    // Overlapping static entry reached from 0xC29F6E.
    case 0xC29F70: {
        Instruction step(cpu, 0xFB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_carry_emulation();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/magnet_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC29F71: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/magnet_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC29F73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/magnet_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    // Overlapping static entry reached from 0xC29F73.
    case 0xC29F75: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/magnet_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC29F76: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/magnet_alpha.asm:12 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PPSUCK_ZERO
    case 0xC29F78: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:13 BRA @UNKNOWN3
    case 0xC29F7C: {
        Instruction step(cpu, 0x80, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:15 LDA #4
    case 0xC29F7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:15 LDA #4
    // Overlapping static entry reached from 0xC29F7E.
    case 0xC29F80: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:16 JSR RAND_LIMIT
    case 0xC29F81: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:17 TAX
    case 0xC29F84: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:18 STX @LOCAL02
    case 0xC29F85: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:19 LDA #4
    case 0xC29F87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:19 LDA #4
    // Overlapping static entry reached from 0xC29F87.
    case 0xC29F89: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:20 JSR RAND_LIMIT
    case 0xC29F8A: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:21 STA @VIRTUAL02
    case 0xC29F8D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:22 LDX @LOCAL02
    case 0xC29F8F: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:23 TXA
    case 0xC29F91: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:24 CLC
    case 0xC29F92: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:25 ADC @VIRTUAL02
    case 0xC29F93: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:26 STA @VIRTUAL02
    case 0xC29F95: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:27 INC @VIRTUAL02
    case 0xC29F97: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:28 INC @VIRTUAL02
    case 0xC29F99: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:29 LDX CURRENT_TARGET
    case 0xC29F9B: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:30 LDA a:battler::pp_target,X
    case 0xC29F9E: {
        Instruction step(cpu, 0xBD, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:31 CMP @VIRTUAL02
    case 0xC29FA1: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:32 BCS @UNKNOWN1
    case 0xC29FA3: {
        Instruction step(cpu, 0xB0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:33 STA @VIRTUAL02
    case 0xC29FA5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/magnet_alpha.asm:35 LOADPTR MSG_BTL_PPSUCK, @LOCAL00
    case 0xC29FA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Fu : 0x00773Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/magnet_alpha.asm:35 LOADPTR MSG_BTL_PPSUCK, @LOCAL00
    // Overlapping static entry reached from 0xC29FA7.
    case 0xC29FA9: {
        Instruction step(cpu, 0x77, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/magnet_alpha.asm:35 LOADPTR MSG_BTL_PPSUCK, @LOCAL00
    case 0xC29FAA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/magnet_alpha.asm:35 LOADPTR MSG_BTL_PPSUCK, @LOCAL00
    // Overlapping static entry reached from 0xC29FA9.
    case 0xC29FAB: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/magnet_alpha.asm:35 LOADPTR MSG_BTL_PPSUCK, @LOCAL00
    case 0xC29FAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/magnet_alpha.asm:35 LOADPTR MSG_BTL_PPSUCK, @LOCAL00
    // Overlapping static entry reached from 0xC29FAC.
    case 0xC29FAE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/magnet_alpha.asm:35 LOADPTR MSG_BTL_PPSUCK, @LOCAL00
    case 0xC29FAF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/magnet_alpha.asm:36 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC29FB1: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/magnet_alpha.asm:36 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC29FB3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/magnet_alpha.asm:36 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC29FB5: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/magnet_alpha.asm:36 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC29FB7: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/magnet_alpha.asm:36 MOVE_INT1632S @VIRTUAL02, @VIRTUAL06
    case 0xC29FB9: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/magnet_alpha.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29FBB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/magnet_alpha.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29FBD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/magnet_alpha.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29FBF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/magnet_alpha.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29FC1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:38 JSL DISPLAY_TEXT_WAIT
    case 0xC29FC3: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:39 LDX @VIRTUAL02
    case 0xC29FC7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:40 LDA CURRENT_TARGET
    case 0xC29FC9: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:41 JSR REDUCE_PP
    case 0xC29FCC: {
        Instruction step(cpu, 0x20, 0x00721Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:42 LDX CURRENT_ATTACKER
    case 0xC29FCF: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:43 LDA @VIRTUAL02
    case 0xC29FD2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:44 CLC
    case 0xC29FD4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:45 ADC a:battler::pp_target,X
    case 0xC29FD5: {
        Instruction step(cpu, 0x7D, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:46 TAX
    case 0xC29FD8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:47 LDA CURRENT_ATTACKER
    case 0xC29FD9: {
        Instruction step(cpu, 0xAD, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/magnet_alpha.asm:48 JSR SET_PP
    case 0xC29FDC: {
        Instruction step(cpu, 0x20, 0x007191u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/magnet_alpha.asm:50 END_C_FUNCTION
    case 0xC29FDF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/magnet_alpha.asm:50 END_C_FUNCTION
    case 0xC29FE0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
