// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/coffee_tea_scene.asm
bool resume_text_coffee_tea_scene(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/coffee_tea_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49D6A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D6C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D6D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D6E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC49D6F.
    case 0xC49D71: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D72: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D73: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:8 STA @VIRTUAL02
    case 0xC49D74: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC49D71.
    case 0xC49D75: {
        Instruction step(cpu, 0x02, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:9 LDY #0
    case 0xC49D76: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:9 LDY #0
    // Overlapping static entry reached from 0xC49D76.
    case 0xC49D78: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:10 LDX #1
    case 0xC49D79: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:10 LDX #1
    // Overlapping static entry reached from 0xC49D79.
    case 0xC49D7B: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:11 TXA
    case 0xC49D7C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:12 JSL FADE_OUT_WITH_MOSAIC
    case 0xC49D7D: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:13 JSL UNKNOWN_C49A56
    case 0xC49D81: {
        Instruction step(cpu, 0x22, 0xC49A56u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:14 JSL OAM_CLEAR
    case 0xC49D85: {
        Instruction step(cpu, 0x22, 0xC088B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:15 LDA @VIRTUAL02
    case 0xC49D89: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:16 BNE @SELECT_COFFEE_BG1
    case 0xC49D8B: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:17 LDX #BATTLEBG_LAYER::COFFEE2
    case 0xC49D8D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000E8u : 0x0000E8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:17 LDX #BATTLEBG_LAYER::COFFEE2
    // Overlapping static entry reached from 0xC49D8D.
    case 0xC49D8F: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:18 BRA @SKIP_COFFEE_BG1
    case 0xC49D90: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:20 LDX #BATTLEBG_LAYER::TEA2
    case 0xC49D92: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000EAu : 0x0000EAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:20 LDX #BATTLEBG_LAYER::TEA2
    // Overlapping static entry reached from 0xC49D92.
    case 0xC49D94: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:22 LDA @VIRTUAL02
    case 0xC49D95: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:23 BNE @SELECT_COFFEE_BG2
    case 0xC49D97: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:24 LDY #BATTLEBG_LAYER::COFFEE1
    case 0xC49D99: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000E7u : 0x0000E7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:24 LDY #BATTLEBG_LAYER::COFFEE1
    // Overlapping static entry reached from 0xC49D99.
    case 0xC49D9B: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:25 BRA @SKIP_COFFEE_BG2
    case 0xC49D9C: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:27 LDY #BATTLEBG_LAYER::TEA1
    case 0xC49D9E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000E9u : 0x0000E9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:27 LDY #BATTLEBG_LAYER::TEA1
    // Overlapping static entry reached from 0xC49D9E.
    case 0xC49DA0: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:29 TYA
    case 0xC49DA1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:30 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC49DA2: {
        Instruction step(cpu, 0x22, 0xC47370u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:31 LDX #1
    case 0xC49DA6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:31 LDX #1
    // Overlapping static entry reached from 0xC49DA6.
    case 0xC49DA8: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:32 TXA
    case 0xC49DA9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:33 JSL FADE_IN
    case 0xC49DAA: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:34 LDA #28
    case 0xC49DAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:34 LDA #28
    // Overlapping static entry reached from 0xC49DAE.
    case 0xC49DB0: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:35 STA FLYOVER_SCREEN_OFFSET
    case 0xC49DB1: {
        Instruction step(cpu, 0x8D, 0x009F2Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:36 LDA #0
    case 0xC49DB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:36 LDA #0
    // Overlapping static entry reached from 0xC49DB4.
    case 0xC49DB6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:37 STA @VIRTUAL04
    case 0xC49DB7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:38 LDA @VIRTUAL02
    case 0xC49DB9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:39 BNE @SELECT_COFFEE_TEXT
    case 0xC49DBB: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DBD.
    case 0xC49DBF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DC0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DC2.
    case 0xC49DC4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DC5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:41 BRA @SKIP_COFFEE_TEXT
    case 0xC49DC7: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000052u : 0x000652u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DC9.
    case 0xC49DCB: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DCC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DCB.
    case 0xC49DCD: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DCD.
    case 0xC49DCF: {
        Instruction step(cpu, 0xE1, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DCE.
    case 0xC49DD0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DD1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:45 STZ ENABLE_WORD_WRAP
    case 0xC49DD3: {
        Instruction step(cpu, 0x9C, 0x005E6Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:47 LDA [@VIRTUAL06]
    case 0xC49DD6: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:48 AND #$00FF
    case 0xC49DD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC49DD8.
    case 0xC49DDA: {
        Instruction step(cpu, 0x00, 0x0000E6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:49 INC @VIRTUAL06
    case 0xC49DDB: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:50 CMP #$00
    case 0xC49DDD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:50 CMP #$00
    // Overlapping static entry reached from 0xC49DDD.
    case 0xC49DDF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:51 BEQ @END_OF_SCRIPT
    case 0xC49DE0: {
        Instruction step(cpu, 0xF0, 0x000076u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:52 CMP #$09
    case 0xC49DE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:52 CMP #$09
    // Overlapping static entry reached from 0xC49DE2.
    case 0xC49DE4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:53 BEQ @PARSE_09
    case 0xC49DE5: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:54 CMP #$01
    case 0xC49DE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:54 CMP #$01
    // Overlapping static entry reached from 0xC49DE7.
    case 0xC49DE9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:55 BEQ @PARSE_01
    case 0xC49DEA: {
        Instruction step(cpu, 0xF0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:56 CMP #$08
    case 0xC49DEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:56 CMP #$08
    // Overlapping static entry reached from 0xC49DEC.
    case 0xC49DEE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:57 BEQ @PARSE_08
    case 0xC49DEF: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:58 BRA @PRINT_TEXT
    case 0xC49DF1: {
        Instruction step(cpu, 0x80, 0x000058u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:60 LDA @VIRTUAL04
    case 0xC49DF3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:61 JSL UNKNOWN_C49D1E
    case 0xC49DF5: {
        Instruction step(cpu, 0x22, 0xC49D1Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:62 TAX
    case 0xC49DF9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:63 STX @LOCAL00
    case 0xC49DFA: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:64 LDA #24
    case 0xC49DFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:64 LDA #24
    // Overlapping static entry reached from 0xC49DFC.
    case 0xC49DFE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:65 JSL UNKNOWN_C49B6E
    case 0xC49DFF: {
        Instruction step(cpu, 0x22, 0xC49B6Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:66 JSL UNKNOWN_C2DB3F
    case 0xC49E03: {
        Instruction step(cpu, 0x22, 0xC2DB3Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:67 BRA @UNKNOWN9
    case 0xC49E07: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:69 TXA
    case 0xC49E09: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:70 JSL UNKNOWN_C49D1E
    case 0xC49E0A: {
        Instruction step(cpu, 0x22, 0xC49D1Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:71 TAX
    case 0xC49E0E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:72 STX @LOCAL00
    case 0xC49E0F: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:73 JSR UNKNOWN_C49A4B
    case 0xC49E11: {
        Instruction step(cpu, 0x20, 0x009A4Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:75 LDX @LOCAL00
    case 0xC49E14: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:76 CPX #8192
    case 0xC49E16: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:76 CPX #8192
    // Overlapping static entry reached from 0xC49E16.
    case 0xC49E18: {
        Instruction step(cpu, 0x20, 0x00EE90u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:77 BCC @UNKNOWN8
    case 0xC49E19: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:78 TXA
    case 0xC49E1B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:79 SEC
    case 0xC49E1C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:80 SBC #8192
    case 0xC49E1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:80 SBC #8192
    // Overlapping static entry reached from 0xC49E1D.
    case 0xC49E1F: {
        Instruction step(cpu, 0x20, 0x000485u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:81 STA @VIRTUAL04
    case 0xC49E20: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:82 LDA #24
    case 0xC49E22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:82 LDA #24
    // Overlapping static entry reached from 0xC49E22.
    case 0xC49E24: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:83 JSL UNKNOWN_C49C56
    case 0xC49E25: {
        Instruction step(cpu, 0x22, 0xC49C56u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:84 BRA @SCRIPT_PARSE_BEGIN
    case 0xC49E29: {
        Instruction step(cpu, 0x80, 0x0000ABu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:86 SEP #PROC_FLAGS::ACCUM8
    case 0xC49E2B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:87 LDA [@VIRTUAL06]
    case 0xC49E2D: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC49E2F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:89 INC @VIRTUAL06
    case 0xC49E31: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:90 JSL UNKNOWN_C49CA8
    case 0xC49E33: {
        Instruction step(cpu, 0x22, 0xC49CA8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:91 BRA @SCRIPT_PARSE_BEGIN
    case 0xC49E37: {
        Instruction step(cpu, 0x80, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:93 LDA [@VIRTUAL06]
    case 0xC49E39: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:94 AND #$00FF
    case 0xC49E3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC49E3B.
    case 0xC49E3D: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:95 TAY
    case 0xC49E3E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:96 INC @VIRTUAL06
    case 0xC49E3F: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:97 LDX #12
    case 0xC49E41: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:97 LDX #12
    // Overlapping static entry reached from 0xC49E41.
    case 0xC49E43: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:98 TYA
    case 0xC49E44: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:99 JSL UNKNOWN_C49CC3
    case 0xC49E45: {
        Instruction step(cpu, 0x22, 0xC49CC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:100 BRA @SCRIPT_PARSE_BEGIN
    case 0xC49E49: {
        Instruction step(cpu, 0x80, 0x00008Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:102 LDY #12
    case 0xC49E4B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:102 LDY #12
    // Overlapping static entry reached from 0xC49E4B.
    case 0xC49E4D: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:103 LDX #0
    case 0xC49E4E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:103 LDX #0
    // Overlapping static entry reached from 0xC49E4E.
    case 0xC49E50: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:104 JSL UNKNOWN_C49D16
    case 0xC49E51: {
        Instruction step(cpu, 0x22, 0xC49D16u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:105 JMP @SCRIPT_PARSE_BEGIN
    case 0xC49E55: {
        Instruction step(cpu, 0x4C, 0x009DD6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:107 LDX #1
    case 0xC49E58: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:107 LDX #1
    // Overlapping static entry reached from 0xC49E58.
    case 0xC49E5A: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:108 TXA
    case 0xC49E5B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:109 JSL FADE_OUT
    case 0xC49E5C: {
        Instruction step(cpu, 0x22, 0xC0887Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:110 BRA @UNKNOWN15
    case 0xC49E60: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:112 JSR UNKNOWN_C49A4B
    case 0xC49E62: {
        Instruction step(cpu, 0x20, 0x009A4Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:114 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC49E65: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:115 AND #$00FF
    case 0xC49E68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC49E68.
    case 0xC49E6A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:116 BNE @UNKNOWN14
    case 0xC49E6B: {
        Instruction step(cpu, 0xD0, 0x0000F5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:117 JSL UNKNOWN_C08726
    case 0xC49E6D: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:118 JSL RELOAD_MAP
    case 0xC49E71: {
        Instruction step(cpu, 0x22, 0xC018F3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:119 LDY #.LOWORD(BG2_BUFFER)
    case 0xC49E75: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:119 LDY #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC49E75.
    case 0xC49E77: {
        Instruction step(cpu, 0x7D, 0x0080A2u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:120 LDX #896
    case 0xC49E78: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x000380u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:120 LDX #896
    // Overlapping static entry reached from 0xC49E78.
    case 0xC49E7A: {
        Instruction step(cpu, 0x03, 0x000080u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:121 BRA @UNKNOWN17
    case 0xC49E7B: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:121 BRA @UNKNOWN17
    // Overlapping static entry reached from 0xC49E7A.
    case 0xC49E7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:123 LDA #0
    case 0xC49E7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:123 LDA #0
    // Overlapping static entry reached from 0xC49E7C.
    case 0xC49E7E: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:123 LDA #0
    // Overlapping static entry reached from 0xC49E7D.
    case 0xC49E7F: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:124 STA __BSS_START__,Y
    case 0xC49E80: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:125 INY
    case 0xC49E83: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:126 INY
    case 0xC49E84: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:127 DEX
    case 0xC49E85: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:129 BNE @UNKNOWN16
    case 0xC49E86: {
        Instruction step(cpu, 0xD0, 0x0000F5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:130 LDA #$00FF
    case 0xC49E88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:130 LDA #$00FF
    // Overlapping static entry reached from 0xC49E88.
    case 0xC49E8A: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:131 STA ENABLE_WORD_WRAP
    case 0xC49E8B: {
        Instruction step(cpu, 0x8D, 0x005E6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:132 JSL UNKNOWN_C08726
    case 0xC49E8E: {
        Instruction step(cpu, 0x22, 0xC08726u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:132 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC49ED2.
    case 0xC49E91: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x000B22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:133 JSL UNDRAW_FLYOVER_TEXT
    case 0xC49E92: {
        Instruction step(cpu, 0x22, 0xC4800Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:133 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC49E91.
    case 0xC49E93: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:133 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC49E91.
    case 0xC49E94: {
        Instruction step(cpu, 0x80, 0x0000C4u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:134 JSL UNKNOWN_C08744
    case 0xC49E96: {
        Instruction step(cpu, 0x22, 0xC08744u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:135 LDX #1
    case 0xC49E9A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:135 LDX #1
    // Overlapping static entry reached from 0xC49E9A.
    case 0xC49E9C: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:136 TXA
    case 0xC49E9D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/coffee_tea_scene.asm:137 JSL FADE_IN
    case 0xC49E9E: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/coffee_tea_scene.asm:138 END_C_FUNCTION
    case 0xC49EA2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/coffee_tea_scene.asm:138 END_C_FUNCTION
    case 0xC49EA3: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
