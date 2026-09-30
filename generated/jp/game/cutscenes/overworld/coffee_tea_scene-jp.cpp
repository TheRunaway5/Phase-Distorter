// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/coffee_tea_scene-jp.asm
bool resume_text_coffee_tea_scene_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/coffee_tea_scene-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4723E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47240: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47241: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47242: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47243: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC47243.
    case 0xC47245: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47246: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47247: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:9 STA @VIRTUAL02
    case 0xC47248: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC47245.
    case 0xC47249: {
        Instruction step(cpu, 0x02, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:10 LDY #0
    case 0xC4724A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:10 LDY #0
    // Overlapping static entry reached from 0xC4724A.
    case 0xC4724C: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:11 LDX #1
    case 0xC4724D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:11 LDX #1
    // Overlapping static entry reached from 0xC4724D.
    case 0xC4724F: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:12 TXA
    case 0xC47250: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:13 JSL FADE_OUT_WITH_MOSAIC
    case 0xC47251: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:14 JSL UNKNOWN_C49A56
    case 0xC47255: {
        Instruction step(cpu, 0x22, 0xC46EA0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:15 JSL OAM_CLEAR
    case 0xC47259: {
        Instruction step(cpu, 0x22, 0xC088A3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:16 LDA @VIRTUAL02
    case 0xC4725D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:17 BNE @SELECT_COFFEE_BG1
    case 0xC4725F: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:18 LDX #BATTLEBG_LAYER::COFFEE2
    case 0xC47261: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E8u : 0x0000E8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:18 LDX #BATTLEBG_LAYER::COFFEE2
    // Overlapping static entry reached from 0xC47261.
    case 0xC47263: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:19 BRA @SKIP_COFFEE_BG1
    case 0xC47264: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:21 LDX #BATTLEBG_LAYER::TEA2
    case 0xC47266: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000EAu : 0x0000EAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:21 LDX #BATTLEBG_LAYER::TEA2
    // Overlapping static entry reached from 0xC47266.
    case 0xC47268: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:23 LDA @VIRTUAL02
    case 0xC47269: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:24 BNE @SELECT_COFFEE_BG2
    case 0xC4726B: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:25 LDY #BATTLEBG_LAYER::COFFEE1
    case 0xC4726D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000E7u : 0x0000E7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:25 LDY #BATTLEBG_LAYER::COFFEE1
    // Overlapping static entry reached from 0xC4726D.
    case 0xC4726F: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:26 BRA @SKIP_COFFEE_BG2
    case 0xC47270: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:28 LDY #BATTLEBG_LAYER::TEA1
    case 0xC47272: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000E9u : 0x0000E9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:28 LDY #BATTLEBG_LAYER::TEA1
    // Overlapping static entry reached from 0xC47272.
    case 0xC47274: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:30 TYA
    case 0xC47275: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:31 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC47276: {
        Instruction step(cpu, 0x22, 0xC450F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:32 LDX #1
    case 0xC4727A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:32 LDX #1
    // Overlapping static entry reached from 0xC4727A.
    case 0xC4727C: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:33 TXA
    case 0xC4727D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:34 JSL FADE_IN
    case 0xC4727E: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:35 LDA #28
    case 0xC47282: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:35 LDA #28
    // Overlapping static entry reached from 0xC47282.
    case 0xC47284: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:36 STA FLYOVER_SCREEN_OFFSET
    case 0xC47285: {
        Instruction step(cpu, 0x8D, 0x00A133u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:37 LDA #0
    case 0xC47288: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:37 LDA #0
    // Overlapping static entry reached from 0xC47288.
    case 0xC4728A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:38 STA @VIRTUAL04
    case 0xC4728B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:39 LDA @VIRTUAL02
    case 0xC4728D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:40 BNE @SELECT_COFFEE_TEXT
    case 0xC4728F: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC47291: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x001602u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC47291.
    case 0xC47293: {
        Instruction step(cpu, 0x16, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC47294: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC47293.
    case 0xC47295: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC47296: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC47295.
    case 0xC47297: {
        Instruction step(cpu, 0xE1, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC47296.
    case 0xC47298: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC47299: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:42 BRA @SKIP_COFFEE_TEXT
    case 0xC4729B: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC4729D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x001B1Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC4729D.
    case 0xC4729F: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC472A0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC472A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC472A2.
    case 0xC472A4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC472A5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:47 LDA [@VIRTUAL06]
    case 0xC472A7: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:48 AND #$00FF
    case 0xC472A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC472A9.
    case 0xC472AB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:49 STA @LOCAL01
    case 0xC472AC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:50 INC @VIRTUAL06
    case 0xC472AE: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:51 CMP #$00
    case 0xC472B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:51 CMP #$00
    // Overlapping static entry reached from 0xC472B0.
    case 0xC472B2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/coffee_tea_scene-jp.asm:52 BEQL @END_OF_SCRIPT
    case 0xC472B3: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/coffee_tea_scene-jp.asm:52 BEQL @END_OF_SCRIPT
    case 0xC472B5: {
        Instruction step(cpu, 0x4C, 0x007336u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:53 CMP #$09
    case 0xC472B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:53 CMP #$09
    // Overlapping static entry reached from 0xC472B8.
    case 0xC472BA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:54 BEQ @PARSE_09
    case 0xC472BB: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:55 CMP #$01
    case 0xC472BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:55 CMP #$01
    // Overlapping static entry reached from 0xC472BD.
    case 0xC472BF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:56 BEQ @PARSE_01
    case 0xC472C0: {
        Instruction step(cpu, 0xF0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:57 CMP #$08
    case 0xC472C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:57 CMP #$08
    // Overlapping static entry reached from 0xC472C2.
    case 0xC472C4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:58 BEQ @PARSE_08
    case 0xC472C5: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:59 BRA @PRINT_TEXT
    case 0xC472C7: {
        Instruction step(cpu, 0x80, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:61 LDA @VIRTUAL04
    case 0xC472C9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:62 JSL UNKNOWN_C49D1E
    case 0xC472CB: {
        Instruction step(cpu, 0x22, 0xC471F2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:63 TAX
    case 0xC472CF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:64 STX @LOCAL00
    case 0xC472D0: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:65 LDA #18
    case 0xC472D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:65 LDA #18
    // Overlapping static entry reached from 0xC472D2.
    case 0xC472D4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:66 JSL UNKNOWN_C49B6E
    case 0xC472D5: {
        Instruction step(cpu, 0x22, 0xC46FB2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:67 JSL UNKNOWN_C2DB3F
    case 0xC472D9: {
        Instruction step(cpu, 0x22, 0xC2DAB4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:68 BRA @UNKNOWN9
    case 0xC472DD: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:70 TXA
    case 0xC472DF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:71 JSL UNKNOWN_C49D1E
    case 0xC472E0: {
        Instruction step(cpu, 0x22, 0xC471F2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:72 TAX
    case 0xC472E4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:73 STX @LOCAL00
    case 0xC472E5: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:74 JSR UNKNOWN_C49A4B
    case 0xC472E7: {
        Instruction step(cpu, 0x20, 0x006E95u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:76 LDX @LOCAL00
    case 0xC472EA: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:77 CPX #4608
    case 0xC472EC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x001200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:77 CPX #4608
    // Overlapping static entry reached from 0xC472EC.
    case 0xC472EE: {
        Instruction step(cpu, 0x12, 0x000090u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:78 BCC @UNKNOWN8
    case 0xC472EF: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:78 BCC @UNKNOWN8
    // Overlapping static entry reached from 0xC472EE.
    case 0xC472F0: {
        Instruction step(cpu, 0xEE, 0x00388Au, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:79 TXA
    case 0xC472F1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:80 SEC
    case 0xC472F2: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:81 SBC #4608
    case 0xC472F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x001200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:81 SBC #4608
    // Overlapping static entry reached from 0xC472F3.
    case 0xC472F5: {
        Instruction step(cpu, 0x12, 0x000085u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:82 STA @VIRTUAL04
    case 0xC472F6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:82 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC472F5.
    case 0xC472F7: {
        Instruction step(cpu, 0x04, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:83 LDA #18
    case 0xC472F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:83 LDA #18
    // Overlapping static entry reached from 0xC472F7.
    case 0xC472F9: {
        Instruction step(cpu, 0x12, 0x000000u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:83 LDA #18
    // Overlapping static entry reached from 0xC472F8.
    case 0xC472FA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:84 JSL UNKNOWN_C49C56
    case 0xC472FB: {
        Instruction step(cpu, 0x22, 0xC47095u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:85 BRA @SCRIPT_PARSE_BEGIN
    case 0xC472FF: {
        Instruction step(cpu, 0x80, 0x0000A6u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC47301: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:88 LDA [@VIRTUAL06]
    case 0xC47303: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:89 REP #PROC_FLAGS::ACCUM8
    case 0xC47305: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:90 INC @VIRTUAL06
    case 0xC47307: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:91 JSL UNKNOWN_C49CA8
    case 0xC47309: {
        Instruction step(cpu, 0x22, 0xC4713Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:92 BRA @SCRIPT_PARSE_BEGIN
    case 0xC4730D: {
        Instruction step(cpu, 0x80, 0x000098u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:94 LDA [@VIRTUAL06]
    case 0xC4730F: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:95 AND #$00FF
    case 0xC47311: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC47311.
    case 0xC47313: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:96 TAY
    case 0xC47314: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:97 INC @VIRTUAL06
    case 0xC47315: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:98 LDX #12
    case 0xC47317: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:98 LDX #12
    // Overlapping static entry reached from 0xC47317.
    case 0xC47319: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:99 TYA
    case 0xC4731A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:100 JSL UNKNOWN_C49CC3
    case 0xC4731B: {
        Instruction step(cpu, 0x22, 0xC47169u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:101 JMP @SCRIPT_PARSE_BEGIN
    case 0xC4731F: {
        Instruction step(cpu, 0x4C, 0x0072A7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:103 LDA [@VIRTUAL06]
    case 0xC47322: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:104 AND #$00FF
    case 0xC47324: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:104 AND #$00FF
    // Overlapping static entry reached from 0xC47324.
    case 0xC47326: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:105 TAX
    case 0xC47327: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:106 INC @VIRTUAL06
    case 0xC47328: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:107 LDY #12
    case 0xC4732A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:107 LDY #12
    // Overlapping static entry reached from 0xC4732A.
    case 0xC4732C: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:108 LDA @LOCAL01
    case 0xC4732D: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:109 JSL UNKNOWN_C49D16
    case 0xC4732F: {
        Instruction step(cpu, 0x22, 0xC471C9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:110 JMP @SCRIPT_PARSE_BEGIN
    case 0xC47333: {
        Instruction step(cpu, 0x4C, 0x0072A7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:112 LDX #1
    case 0xC47336: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:112 LDX #1
    // Overlapping static entry reached from 0xC47336.
    case 0xC47338: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:113 TXA
    case 0xC47339: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:114 JSL FADE_OUT
    case 0xC4733A: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:115 BRA @UNKNOWN15
    case 0xC4733E: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:117 JSR UNKNOWN_C49A4B
    case 0xC47340: {
        Instruction step(cpu, 0x20, 0x006E95u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:119 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC47343: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:120 AND #$00FF
    case 0xC47346: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:120 AND #$00FF
    // Overlapping static entry reached from 0xC47346.
    case 0xC47348: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:121 BNE @UNKNOWN14
    case 0xC47349: {
        Instruction step(cpu, 0xD0, 0x0000F5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:122 JSL UNKNOWN_C08726
    case 0xC4734B: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:123 JSL RELOAD_MAP
    case 0xC4734F: {
        Instruction step(cpu, 0x22, 0xC01909u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:124 LDY #.LOWORD(BG2_BUFFER)
    case 0xC47353: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:124 LDY #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC47353.
    case 0xC47355: {
        Instruction step(cpu, 0x81, 0x0000A2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:125 LDX #896
    case 0xC47356: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x000380u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:125 LDX #896
    // Overlapping static entry reached from 0xC47355.
    case 0xC47357: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:125 LDX #896
    // Overlapping static entry reached from 0xC47356.
    case 0xC47358: {
        Instruction step(cpu, 0x03, 0x000080u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:126 BRA @UNKNOWN17
    case 0xC47359: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:126 BRA @UNKNOWN17
    // Overlapping static entry reached from 0xC47358.
    case 0xC4735A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:128 LDA #0
    case 0xC4735B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:128 LDA #0
    // Overlapping static entry reached from 0xC47357.
    case 0xC4735C: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:128 LDA #0
    // Overlapping static entry reached from 0xC4735B.
    case 0xC4735D: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:129 STA __BSS_START__,Y
    case 0xC4735E: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:130 INY
    case 0xC47361: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:131 INY
    case 0xC47362: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:132 DEX
    case 0xC47363: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:134 BNE @UNKNOWN16
    case 0xC47364: {
        Instruction step(cpu, 0xD0, 0x0000F5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:135 JSL UNKNOWN_C08726
    case 0xC47366: {
        Instruction step(cpu, 0x22, 0xC0871Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:135 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC473AA.
    case 0xC47369: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x00A222u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:136 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4736A: {
        Instruction step(cpu, 0x22, 0xC45CA2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:136 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC47369.
    case 0xC4736B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00005Cu : 0x00C45Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:136 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC47369.
    case 0xC4736C: {
        Instruction step(cpu, 0x5C, 0x3A22C4u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:136 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC4736B.
    case 0xC4736D: {
        Instruction step(cpu, 0xC4, 0x000022u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:137 JSL UNKNOWN_C08744
    case 0xC4736E: {
        Instruction step(cpu, 0x22, 0xC0873Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:137 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xC4736D.
    case 0xC4736F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:137 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xC4736F.
    case 0xC47370: {
        Instruction step(cpu, 0x87, 0x0000C0u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:138 LDX #1
    case 0xC47372: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:138 LDX #1
    // Overlapping static entry reached from 0xC47372.
    case 0xC47374: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:139 TXA
    case 0xC47375: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene-jp.asm:140 JSL FADE_IN
    case 0xC47376: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/coffee_tea_scene-jp.asm:141 END_C_FUNCTION
    case 0xC4737A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/coffee_tea_scene-jp.asm:141 END_C_FUNCTION
    case 0xC4737B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
