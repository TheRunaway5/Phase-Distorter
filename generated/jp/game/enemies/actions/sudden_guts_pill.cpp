// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/sudden_guts_pill.asm
bool resume_battle_actions_sudden_guts_pill(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AA32: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA34: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA35: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AA36.
    case 0xC2AA38: {
        Instruction step(cpu, 0xFF, 0x94205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:7 END_STACK_VARS
    case 0xC2AA39: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:8 JSR FAIL_ATTACK_ON_NPCS
    case 0xC2AA3A: {
        Instruction step(cpu, 0x20, 0x007C94u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:8 JSR FAIL_ATTACK_ON_NPCS
    // Overlapping static entry reached from 0xC2AA38.
    case 0xC2AA3C: {
        Instruction step(cpu, 0x7C, 0x0000C9u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:9 CMP #0
    case 0xC2AA3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:9 CMP #0
    // Overlapping static entry reached from 0xC2AA3D.
    case 0xC2AA3F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:10 BNE @UNKNOWN1
    case 0xC2AA40: {
        Instruction step(cpu, 0xD0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:11 LDX CURRENT_TARGET
    case 0xC2AA42: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:12 LDA a:battler::guts,X
    case 0xC2AA45: {
        Instruction step(cpu, 0xBD, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:13 ASL
    case 0xC2AA48: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:14 CMP #$00FF
    case 0xC2AA49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC2AA49.
    case 0xC2AA4B: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:15 BCC @UNKNOWN0
    case 0xC2AA4C: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:16 LDA #$00FF
    case 0xC2AA4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:16 LDA #$00FF
    // Overlapping static entry reached from 0xC2AA4E.
    case 0xC2AA50: {
        Instruction step(cpu, 0x00, 0x0000AEu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:18 LDX CURRENT_TARGET
    case 0xC2AA51: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:19 STA a:battler::guts,X
    case 0xC2AA54: {
        Instruction step(cpu, 0x9D, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AA57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0036C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2AA57.
    case 0xC2AA59: {
        Instruction step(cpu, 0x36, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AA5A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2AA59.
    case 0xC2AA5B: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AA5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2AA5C.
    case 0xC2AA5E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:20 LOADPTR MSG_BTL_2GUTS_UP, @LOCAL00
    case 0xC2AA5F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:21 LDX CURRENT_TARGET
    case 0xC2AA61: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:22 LDA a:battler::guts,X
    case 0xC2AA64: {
        Instruction step(cpu, 0xBD, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC2AA67: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC2AA69: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AA6B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AA6D: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AA6F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2AA71: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:25 JSL DISPLAY_TEXT_WAIT
    case 0xC2AA73: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:25 JSL DISPLAY_TEXT_WAIT
    // Overlapping static entry reached from 0xC2AAD3.
    case 0xC2AA75: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // src/battle/actions/sudden_guts_pill.asm:25 JSL DISPLAY_TEXT_WAIT
    // Overlapping static entry reached from 0xC2AA75.
    case 0xC2AA76: {
        Instruction step(cpu, 0xC1, 0x00002Bu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:27 END_C_FUNCTION
    case 0xC2AA77: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/sudden_guts_pill.asm:27 END_C_FUNCTION
    case 0xC2AA78: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
