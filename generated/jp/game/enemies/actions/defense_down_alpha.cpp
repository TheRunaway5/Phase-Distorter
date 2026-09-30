// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/defense_down_alpha.asm
bool resume_battle_actions_defense_down_alpha(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/defense_down_alpha.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29E2F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/defense_down_alpha.asm:8 END_STACK_VARS
    case 0xC29E31: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/defense_down_alpha.asm:8 END_STACK_VARS
    case 0xC29E32: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/defense_down_alpha.asm:8 END_STACK_VARS
    case 0xC29E33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/defense_down_alpha.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC29E33.
    case 0xC29E35: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/defense_down_alpha.asm:8 END_STACK_VARS
    case 0xC29E36: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:9 JSR FAIL_ATTACK_ON_NPCS
    case 0xC29E37: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:9 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC29E35.
    case 0xC29E39: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:10 CMP #0
    case 0xC29E3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:10 CMP #0
    // Overlapping static entry reached from 0xC29E3A.
    case 0xC29E3C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:11 BNE @UNKNOWN5
    case 0xC29E3D: {
        Instruction step(cpu, 0xD0, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:12 JSR SUCCESS_LUCK80
    case 0xC29E3F: {
        Instruction step(cpu, 0x20, 0x007C2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:13 CMP #0
    case 0xC29E42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:13 CMP #0
    // Overlapping static entry reached from 0xC29E42.
    case 0xC29E44: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:14 BEQ @UNKNOWN4
    case 0xC29E45: {
        Instruction step(cpu, 0xF0, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:15 LDX CURRENT_TARGET
    case 0xC29E47: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:16 LDY a:battler::defense,X
    case 0xC29E4A: {
        Instruction step(cpu, 0xBC, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:17 STY @LOCAL02
    case 0xC29E4D: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:18 LDA CURRENT_TARGET
    case 0xC29E4F: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:19 JSR HEXADECIMATE_DEFENSE
    case 0xC29E52: {
        Instruction step(cpu, 0x20, 0x007DCAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:20 LDX CURRENT_TARGET
    case 0xC29E55: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:21 LDY @LOCAL02
    case 0xC29E58: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:22 TYA
    case 0xC29E5A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:23 SEC
    case 0xC29E5B: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:24 SBC a:battler::defense,X
    case 0xC29E5C: {
        Instruction step(cpu, 0xFD, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:25 STA @LOCAL02
    case 0xC29E5F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:26 STA @VIRTUAL02
    case 0xC29E61: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:27 LDA #0
    case 0xC29E63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:27 LDA #0
    // Overlapping static entry reached from 0xC29E63.
    case 0xC29E65: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:28 CLC
    case 0xC29E66: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:29 SBC @VIRTUAL02
    case 0xC29E67: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/battle/actions/defense_down_alpha.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC29E69: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/battle/actions/defense_down_alpha.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC29E6B: {
        Instruction step(cpu, 0x10, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/battle/actions/defense_down_alpha.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC29E6D: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/battle/actions/defense_down_alpha.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC29E6F: {
        Instruction step(cpu, 0x30, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:31 LDA #0
    case 0xC29E71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:31 LDA #0
    // Overlapping static entry reached from 0xC29E71.
    case 0xC29E73: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:32 STA @LOCAL02
    case 0xC29E74: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/defense_down_alpha.asm:34 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC29E76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000044u : 0x003744u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/defense_down_alpha.asm:34 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC29E76.
    case 0xC29E78: {
        Instruction step(cpu, 0x37, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/defense_down_alpha.asm:34 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC29E79: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/defense_down_alpha.asm:34 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC29E78.
    case 0xC29E7A: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/defense_down_alpha.asm:34 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC29E7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/defense_down_alpha.asm:34 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC29E7B.
    case 0xC29E7D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/defense_down_alpha.asm:34 LOADPTR MSG_BTL_DEFENSE_DOWN, @LOCAL00
    case 0xC29E7E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/defense_down_alpha.asm:35 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC29E80: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/defense_down_alpha.asm:35 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC29E82: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/defense_down_alpha.asm:35 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC29E84: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/defense_down_alpha.asm:35 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC29E86: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/defense_down_alpha.asm:35 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC29E88: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/defense_down_alpha.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29E8A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/defense_down_alpha.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29E8C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/defense_down_alpha.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29E8E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/defense_down_alpha.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29E90: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:37 JSL DISPLAY_TEXT_WAIT
    case 0xC29E92: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/defense_down_alpha.asm:38 BRA @UNKNOWN5
    case 0xC29E96: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/defense_down_alpha.asm:40 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29E98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/defense_down_alpha.asm:40 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC29E98.
    case 0xC29E9A: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/defense_down_alpha.asm:40 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29E9B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/defense_down_alpha.asm:40 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29E9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/defense_down_alpha.asm:40 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC29E9D.
    case 0xC29E9F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/defense_down_alpha.asm:40 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29EA0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/defense_down_alpha.asm:40 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC29EA2: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/defense_down_alpha.asm:42 END_C_FUNCTION
    case 0xC29EA6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/defense_down_alpha.asm:42 END_C_FUNCTION
    case 0xC29EA7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
