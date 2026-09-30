// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/recover_pp.asm
bool resume_battle_recover_pp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/recover_pp.asm:3 BEGIN_C_FUNCTION
    case 0xC27318: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2731A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2731B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2731C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2731D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC2731D.
    case 0xC2731F: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC27320: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC27321: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:13 STX @VIRTUAL04
    case 0xC27322: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC2731F.
    case 0xC27323: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/recover_pp.asm:14 STA @VIRTUAL02
    case 0xC27324: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27323.
    case 0xC27325: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/recover_pp.asm:15 STA @LOCAL04
    case 0xC27326: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:16 LDX @VIRTUAL02
    case 0xC27328: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:17 LDA a:battler::consciousness,X
    case 0xC2732A: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:18 AND #$00FF
    case 0xC2732D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC2732D.
    case 0xC2732F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_pp.asm:19 CMP #1
    case 0xC27330: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:19 CMP #1
    // Overlapping static entry reached from 0xC27330.
    case 0xC27332: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_pp.asm:20 BNE @UNKNOWN2
    case 0xC27333: {
        Instruction step(cpu, 0xD0, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/recover_pp.asm:21 LDX @VIRTUAL02
    case 0xC27335: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:22 LDA a:battler::afflictions,X
    case 0xC27337: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:23 AND #$00FF
    case 0xC2733A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2733A.
    case 0xC2733C: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_pp.asm:24 CMP #1
    case 0xC2733D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:24 CMP #1
    // Overlapping static entry reached from 0xC2733D.
    case 0xC2733F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_pp.asm:25 BEQ @UNKNOWN2
    case 0xC27340: {
        Instruction step(cpu, 0xF0, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/recover_pp.asm:26 LDX @VIRTUAL02
    case 0xC27342: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:27 LDY a:battler::pp_target,X
    case 0xC27344: {
        Instruction step(cpu, 0xBC, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/battle/recover_pp.asm:28 LDX @VIRTUAL02
    case 0xC27347: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:29 LDA a:battler::pp_max,X
    case 0xC27349: {
        Instruction step(cpu, 0xBD, 0x00001Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:30 STA @LOCAL03
    case 0xC2734C: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:31 STA @VIRTUAL02
    case 0xC2734E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:32 TYA
    case 0xC27350: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:33 CLC
    case 0xC27351: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/recover_pp.asm:34 ADC @VIRTUAL04
    case 0xC27352: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/recover_pp.asm:35 CMP @VIRTUAL02
    case 0xC27354: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:36 BCC @UNKNOWN0
    case 0xC27356: {
        Instruction step(cpu, 0x90, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/recover_pp.asm:37 STY @VIRTUAL02
    case 0xC27358: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/recover_pp.asm:38 LDA @LOCAL03
    case 0xC2735A: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:39 SEC
    case 0xC2735C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/recover_pp.asm:40 SBC @VIRTUAL02
    case 0xC2735D: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/recover_pp.asm:41 BRA @UNKNOWN1
    case 0xC2735F: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/recover_pp.asm:43 LDA @VIRTUAL04
    case 0xC27361: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:45 TAY
    case 0xC27363: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/recover_pp.asm:46 STY @LOCAL02
    case 0xC27364: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/recover_pp.asm:47 LDA @LOCAL04
    case 0xC27366: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:48 STA @VIRTUAL02
    case 0xC27368: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:49 LDX @VIRTUAL02
    case 0xC2736A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:50 LDA @VIRTUAL04
    case 0xC2736C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:51 CLC
    case 0xC2736E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/recover_pp.asm:52 ADC a:battler::pp_target,X
    case 0xC2736F: {
        Instruction step(cpu, 0x7D, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/recover_pp.asm:53 TAX
    case 0xC27372: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:54 LDA @VIRTUAL02
    case 0xC27373: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:55 JSR SET_PP
    case 0xC27375: {
        Instruction step(cpu, 0x20, 0x007191u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC27378: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D2u : 0x0069D2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC27378.
    case 0xC2737A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC2737B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC2737A.
    case 0xC2737C: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC2737D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC2737D.
    case 0xC2737F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC27380: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:57 LDY @LOCAL02
    case 0xC27382: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/recover_pp.asm:58 TYA
    case 0xC27384: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/recover_pp.asm:59 STORE_INT1632 @VIRTUAL06
    case 0xC27385: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/recover_pp.asm:59 STORE_INT1632 @VIRTUAL06
    case 0xC27387: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27389: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2738B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2738D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2738F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:61 JSL DISPLAY_TEXT_WAIT
    case 0xC27391: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/recover_pp.asm:63 END_C_FUNCTION
    case 0xC27395: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/recover_pp.asm:63 END_C_FUNCTION
    case 0xC27396: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
