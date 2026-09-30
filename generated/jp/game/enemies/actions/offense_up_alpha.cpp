// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/offense_up_alpha.asm
bool resume_battle_actions_offense_up_alpha(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/offense_up_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29DE1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/offense_up_alpha.asm:8 END_STACK_VARS
    case 0xC29DE3: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/offense_up_alpha.asm:8 END_STACK_VARS
    case 0xC29DE4: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/offense_up_alpha.asm:8 END_STACK_VARS
    case 0xC29DE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/offense_up_alpha.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC29DE5.
    case 0xC29DE7: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/offense_up_alpha.asm:8 END_STACK_VARS
    case 0xC29DE8: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:9 JSR FAIL_ATTACK_ON_NPCS
    case 0xC29DE9: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:9 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC29DE7.
    case 0xC29DEB: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:10 CMP #0
    case 0xC29DEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29DEC.
    case 0xC29DEE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:11 BNE @UNKNOWN0
    case 0xC29DEF: {
        Instruction step(cpu, 0xD0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:12 LDX CURRENT_TARGET
    case 0xC29DF1: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:13 LDY a:battler::offense,X
    case 0xC29DF4: {
        Instruction step(cpu, 0xBC, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:14 STY @LOCAL02
    case 0xC29DF7: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:15 LDA CURRENT_TARGET
    case 0xC29DF9: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:16 JSR INCREASE_OFFENSE_16TH
    case 0xC29DFC: {
        Instruction step(cpu, 0x20, 0x007CBFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/offense_up_alpha.asm:17 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC29DFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000048u : 0x003648u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/offense_up_alpha.asm:17 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC29DFF.
    case 0xC29E01: {
        Instruction step(cpu, 0x36, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/offense_up_alpha.asm:17 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC29E02: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/offense_up_alpha.asm:17 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC29E01.
    case 0xC29E03: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/offense_up_alpha.asm:17 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC29E04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/offense_up_alpha.asm:17 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    // Overlapping static entry reached from 0xC29E04.
    case 0xC29E06: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/offense_up_alpha.asm:17 LOADPTR MSG_BTL_OFFENSE_UP, @LOCAL00
    case 0xC29E07: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:18 LDY @LOCAL02
    case 0xC29E09: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:19 STY @VIRTUAL02
    case 0xC29E0B: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:20 LDX CURRENT_TARGET
    case 0xC29E0D: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:21 LDA a:battler::offense,X
    case 0xC29E10: {
        Instruction step(cpu, 0xBD, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:22 SEC
    case 0xC29E13: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:23 SBC @VIRTUAL02
    case 0xC29E14: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/offense_up_alpha.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xC29E16: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/offense_up_alpha.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xC29E18: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/offense_up_alpha.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29E1A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/offense_up_alpha.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29E1C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/offense_up_alpha.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29E1E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/offense_up_alpha.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29E20: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/offense_up_alpha.asm:26 JSL DISPLAY_TEXT_WAIT
    case 0xC29E22: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/offense_up_alpha.asm:28 END_C_FUNCTION
    case 0xC29E26: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/offense_up_alpha.asm:28 END_C_FUNCTION
    case 0xC29E27: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
