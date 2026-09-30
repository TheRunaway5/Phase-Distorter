// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/reduce_offense.asm
bool resume_battle_actions_reduce_offense(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/reduce_offense.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC29254: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC29256: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC29257: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC29258: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC29258.
    case 0xC2925A: {
        Instruction step(cpu, 0xFF, 0xFD205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/reduce_offense.asm:8 END_STACK_VARS
    case 0xC2925B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2925C: {
        Instruction step(cpu, 0x20, 0x007CFDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:9 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2925A.
    case 0xC2925E: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:10 CMP #0
    case 0xC2925F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:10 CMP #0
    // Overlapping static entry reached from 0xC2925F.
    case 0xC29261: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:11 BNE @UNKNOWN0
    case 0xC29262: {
        Instruction step(cpu, 0xD0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:12 LDX CURRENT_TARGET
    case 0xC29264: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:13 LDY a:battler::offense,X
    case 0xC29267: {
        Instruction step(cpu, 0xBC, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:14 STY @LOCAL02
    case 0xC2926A: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:15 LDA CURRENT_TARGET
    case 0xC2926C: {
        Instruction step(cpu, 0xAD, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:16 JSR HEXADECIMATE_OFFENSE
    case 0xC2926F: {
        Instruction step(cpu, 0x20, 0x007DDCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC29272: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x00F885u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC29272.
    case 0xC29274: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC29275: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC29277: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0000C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    // Overlapping static entry reached from 0xC29277.
    case 0xC29279: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/reduce_offense.asm:17 LOADPTR MSG_BTL_OFFENSE_DOWN, @LOCAL00
    case 0xC2927A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:18 LDX CURRENT_TARGET
    case 0xC2927C: {
        Instruction step(cpu, 0xAE, 0x00A972u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:19 LDY @LOCAL02
    case 0xC2927F: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:20 TYA
    case 0xC29281: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:21 SEC
    case 0xC29282: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:22 SBC a:battler::offense,X
    case 0xC29283: {
        Instruction step(cpu, 0xFD, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/reduce_offense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC29286: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/reduce_offense.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC29288: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2928A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2928C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2928E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/reduce_offense.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC29290: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/reduce_offense.asm:25 JSL DISPLAY_TEXT_WAIT
    case 0xC29292: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/reduce_offense.asm:27 END_C_FUNCTION
    case 0xC29296: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/reduce_offense.asm:27 END_C_FUNCTION
    case 0xC29297: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
