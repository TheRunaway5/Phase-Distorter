// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/recover_pp.asm
bool resume_battle_recover_pp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/recover_pp.asm:3 BEGIN_C_FUNCTION
    case 0xC2725B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2725D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2725E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC2725F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC27260: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC27260.
    case 0xC27262: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC27263: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/recover_pp.asm:12 END_STACK_VARS
    case 0xC27264: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:13 STX @VIRTUAL04
    case 0xC27265: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC27262.
    case 0xC27266: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/recover_pp.asm:14 STA @VIRTUAL02
    case 0xC27267: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27266.
    case 0xC27268: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/recover_pp.asm:15 STA @LOCAL04
    case 0xC27269: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:16 LDX @VIRTUAL02
    case 0xC2726B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:17 LDA a:battler::consciousness,X
    case 0xC2726D: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:18 AND #$00FF
    case 0xC27270: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC27270.
    case 0xC27272: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_pp.asm:19 CMP #1
    case 0xC27273: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:19 CMP #1
    // Overlapping static entry reached from 0xC27273.
    case 0xC27275: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_pp.asm:20 BNE @UNKNOWN2
    case 0xC27276: {
        Instruction step(cpu, 0xD0, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/recover_pp.asm:21 LDX @VIRTUAL02
    case 0xC27278: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:22 LDA a:battler::afflictions,X
    case 0xC2727A: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:23 AND #$00FF
    case 0xC2727D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC2727D.
    case 0xC2727F: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_pp.asm:24 CMP #1
    case 0xC27280: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:24 CMP #1
    // Overlapping static entry reached from 0xC27280.
    case 0xC27282: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_pp.asm:25 BEQ @UNKNOWN2
    case 0xC27283: {
        Instruction step(cpu, 0xF0, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/recover_pp.asm:26 LDX @VIRTUAL02
    case 0xC27285: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:27 LDY a:battler::pp_target,X
    case 0xC27287: {
        Instruction step(cpu, 0xBC, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/battle/recover_pp.asm:28 LDX @VIRTUAL02
    case 0xC2728A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:29 LDA a:battler::pp_max,X
    case 0xC2728C: {
        Instruction step(cpu, 0xBD, 0x00001Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:30 STA @LOCAL03
    case 0xC2728F: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:31 STA @VIRTUAL02
    case 0xC27291: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:32 TYA
    case 0xC27293: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:33 CLC
    case 0xC27294: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/recover_pp.asm:34 ADC @VIRTUAL04
    case 0xC27295: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/recover_pp.asm:35 CMP @VIRTUAL02
    case 0xC27297: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:36 BCC @UNKNOWN0
    case 0xC27299: {
        Instruction step(cpu, 0x90, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/recover_pp.asm:37 STY @VIRTUAL02
    case 0xC2729B: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/recover_pp.asm:38 LDA @LOCAL03
    case 0xC2729D: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:39 SEC
    case 0xC2729F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/recover_pp.asm:40 SBC @VIRTUAL02
    case 0xC272A0: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/recover_pp.asm:41 BRA @UNKNOWN1
    case 0xC272A2: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/recover_pp.asm:43 LDA @VIRTUAL04
    case 0xC272A4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:45 TAY
    case 0xC272A6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/recover_pp.asm:46 STY @LOCAL02
    case 0xC272A7: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/recover_pp.asm:47 LDA @LOCAL04
    case 0xC272A9: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:48 STA @VIRTUAL02
    case 0xC272AB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:49 LDX @VIRTUAL02
    case 0xC272AD: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:50 LDA @VIRTUAL04
    case 0xC272AF: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:51 CLC
    case 0xC272B1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/recover_pp.asm:52 ADC a:battler::pp_target,X
    case 0xC272B2: {
        Instruction step(cpu, 0x7D, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/recover_pp.asm:53 TAX
    case 0xC272B5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/recover_pp.asm:54 LDA @VIRTUAL02
    case 0xC272B6: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:55 JSR SET_PP
    case 0xC272B8: {
        Instruction step(cpu, 0x20, 0x0070D4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC272BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000039u : 0x002F39u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272BB.
    case 0xC272BD: {
        Instruction step(cpu, 0x2F, 0xA90E85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC272BE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC272C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272BD.
    case 0xC272C1: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272C0.
    case 0xC272C2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_pp.asm:56 LOADPTR MSG_BTL_PP_KAIFUKU, @LOCAL00
    case 0xC272C3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:57 LDY @LOCAL02
    case 0xC272C5: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/recover_pp.asm:58 TYA
    case 0xC272C7: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/recover_pp.asm:59 STORE_INT1632 @VIRTUAL06
    case 0xC272C8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/recover_pp.asm:59 STORE_INT1632 @VIRTUAL06
    case 0xC272CA: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272CC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272CE: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272D0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/recover_pp.asm:60 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272D2: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_pp.asm:61 JSL DISPLAY_TEXT_WAIT
    case 0xC272D4: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/recover_pp.asm:63 END_C_FUNCTION
    case 0xC272D8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/recover_pp.asm:63 END_C_FUNCTION
    case 0xC272D9: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
