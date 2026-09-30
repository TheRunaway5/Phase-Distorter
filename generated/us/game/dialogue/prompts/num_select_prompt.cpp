// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/num_select_prompt.asm
bool resume_text_num_select_prompt(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/num_select_prompt.asm:4 BEGIN_C_FUNCTION
    case 0xC1101C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC1101E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC1101F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC11020: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC11021: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D8u : 0x00FFD8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC11021.
    case 0xC11023: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC11024: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC11025: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:23 STA @LOCAL08
    case 0xC11026: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:23 STA @LOCAL08
    // Overlapping static entry reached from 0xC11023.
    case 0xC11027: {
        Instruction step(cpu, 0x26, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:24 LDA CURRENT_FOCUS_WINDOW
    case 0xC11028: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:24 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11027.
    case 0xC11029: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:24 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11029.
    case 0xC1102A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000C9u : 0x00FFC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:25 CMP #.LOWORD(-1)
    case 0xC1102B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:25 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1102A.
    case 0xC1102C: {
        Instruction step(cpu, 0xFF, 0x15D0FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:25 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1102B.
    case 0xC1102D: {
        Instruction step(cpu, 0xFF, 0xA915D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:26 BNE @UNKNOWN0
    case 0xC1102E: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11030: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1102D.
    case 0xC11031: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11030.
    case 0xC11032: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11033: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11035: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11035.
    case 0xC11037: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11038: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1103A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1103C: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1103E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11040: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:29 JMP @UNKNOWN24
    case 0xC11042: {
        Instruction step(cpu, 0x4C, 0x001349u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:31 LDA CURRENT_FOCUS_WINDOW
    case 0xC11045: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:32 ASL
    case 0xC11048: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:33 TAX
    case 0xC11049: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:34 LDA OPEN_WINDOW_TABLE,X
    case 0xC1104A: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC1104D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1104D.
    case 0xC1104F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:36 JSL MULT168
    case 0xC11050: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:37 CLC
    case 0xC11054: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:38 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11055: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:38 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11055.
    case 0xC11057: {
        Instruction step(cpu, 0x86, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:39 TAX
    case 0xC11058: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:40 LDA a:window_stats::text_x,X
    case 0xC11059: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:41 STA @LOCAL07
    case 0xC1105C: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:42 LDA a:window_stats::text_y,X
    case 0xC1105E: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:43 STA @LOCAL06
    case 0xC11061: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11063: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11063.
    case 0xC11065: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11066: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11068: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11068.
    case 0xC1106A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1106B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1106D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1106F: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11071: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11073: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:46 LDA #1
    case 0xC11075: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:46 LDA #1
    // Overlapping static entry reached from 0xC11075.
    case 0xC11077: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:47 STA @LOCAL04
    case 0xC11078: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC1107A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1107A.
    case 0xC1107C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC1107D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC1107F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1107F.
    case 0xC11081: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC11082: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11084: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11086: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11088: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1108A: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:51 JSR SET_INSTANT_PRINTING
    case 0xC1108C: {
        Instruction step(cpu, 0x22, 0xC3E4D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:52 LDX @LOCAL06
    case 0xC11090: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:53 LDA @LOCAL07
    case 0xC11092: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:54 JSR UNKNOWN_C438A5
    case 0xC11094: {
        Instruction step(cpu, 0x22, 0xC438A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11098: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1109A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1109C: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1109E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC110A0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC110A2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC110A4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC110A6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:57 JSR UNKNOWN_C10D7C
    case 0xC110A8: {
        Instruction step(cpu, 0x20, 0x000D7Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:58 STA @VIRTUAL02
    case 0xC110AB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:59 LDA #7
    case 0xC110AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:59 LDA #7
    // Overlapping static entry reached from 0xC110AD.
    case 0xC110AF: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:60 SEC
    case 0xC110B0: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:61 SBC @VIRTUAL02
    case 0xC110B1: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:62 CLC
    case 0xC110B3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:63 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC110B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Au : 0x00895Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:63 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC110B4.
    case 0xC110B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:64 STA @VIRTUAL04
    case 0xC110B7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:64 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC110B6.
    case 0xC110B8: {
        Instruction step(cpu, 0x04, 0x0000A4u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:65 LDY @LOCAL08
    case 0xC110B9: {
        Instruction step(cpu, 0xA4, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:65 LDY @LOCAL08
    // Overlapping static entry reached from 0xC110B8.
    case 0xC110BA: {
        Instruction step(cpu, 0x26, 0x000084u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:66 STY @LOCAL02
    case 0xC110BB: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:66 STY @LOCAL02
    // Overlapping static entry reached from 0xC110BA.
    case 0xC110BC: {
        Instruction step(cpu, 0x16, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:67 BRA @UNKNOWN5
    case 0xC110BD: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:67 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC110BC.
    case 0xC110BE: {
        Instruction step(cpu, 0x16, 0x0000C4u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:69 CPY @LOCAL04
    case 0xC110BF: {
        Instruction step(cpu, 0xC4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:69 CPY @LOCAL04
    // Overlapping static entry reached from 0xC110BE.
    case 0xC110C0: {
        Instruction step(cpu, 0x1C, 0x0005D0u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:70 BNE @UNKNOWN3
    case 0xC110C1: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:71 LDX #16
    case 0xC110C3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:71 LDX #16
    // Overlapping static entry reached from 0xC110C3.
    case 0xC110C5: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:72 BRA @UNKNOWN4
    case 0xC110C6: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:74 LDX #48
    case 0xC110C8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:74 LDX #48
    // Overlapping static entry reached from 0xC110C8.
    case 0xC110CA: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:76 TXA
    case 0xC110CB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:77 JSR @PRINT_LETTER_FUNC
    case 0xC110CC: {
        Instruction step(cpu, 0x22, 0xC43F77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:78 LDY @LOCAL02
    case 0xC110D0: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:79 DEY
    case 0xC110D2: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:80 STY @LOCAL02
    case 0xC110D3: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:82 TYA
    case 0xC110D5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:83 CMP @VIRTUAL02
    case 0xC110D6: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/num_select_prompt.asm:84 BGT @UNKNOWN2
    case 0xC110D8: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/num_select_prompt.asm:84 BGT @UNKNOWN2
    case 0xC110DA: {
        Instruction step(cpu, 0xB0, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:85 BRA @UNKNOWN10
    case 0xC110DC: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:87 CPY @LOCAL04
    case 0xC110DE: {
        Instruction step(cpu, 0xC4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:88 BNE @UNKNOWN8
    case 0xC110E0: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:89 LDX #16
    case 0xC110E2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:89 LDX #16
    // Overlapping static entry reached from 0xC110E2.
    case 0xC110E4: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:90 BRA @UNKNOWN9
    case 0xC110E5: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:92 LDX #48
    case 0xC110E7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:92 LDX #48
    // Overlapping static entry reached from 0xC110E7.
    case 0xC110E9: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:94 STX @VIRTUAL02
    case 0xC110EA: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:95 LDX @VIRTUAL04
    case 0xC110EC: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:96 LDA __BSS_START__,X
    case 0xC110EE: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:97 AND #$00FF
    case 0xC110F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC110F1.
    case 0xC110F3: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:98 CLC
    case 0xC110F4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:99 ADC @VIRTUAL02
    case 0xC110F5: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:100 INC @VIRTUAL04
    case 0xC110F7: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:101 JSR @PRINT_LETTER_FUNC
    case 0xC110F9: {
        Instruction step(cpu, 0x22, 0xC43F77u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:102 LDY @LOCAL02
    case 0xC110FD: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:103 DEY
    case 0xC110FF: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:104 STY @LOCAL02
    case 0xC11100: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:106 CPY #0
    case 0xC11102: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:106 CPY #0
    // Overlapping static entry reached from 0xC11102.
    case 0xC11104: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:107 BNE @UNKNOWN7
    case 0xC11105: {
        Instruction step(cpu, 0xD0, 0x0000D7u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:108 JSR CLEAR_INSTANT_PRINTING
    case 0xC11107: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:109 JSL WINDOW_TICK
    case 0xC1110B: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:111 JSL UNKNOWN_C12E42
    case 0xC1110F: {
        Instruction step(cpu, 0x22, 0xC12E42u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:112 LDA PAD_PRESS
    case 0xC11113: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:113 AND #PAD::LEFT
    case 0xC11116: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:113 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC11116.
    case 0xC11118: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:114 BEQ @UNKNOWN12
    case 0xC11119: {
        Instruction step(cpu, 0xF0, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:115 LDA @LOCAL04
    case 0xC1111B: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:116 CMP @LOCAL08
    case 0xC1111D: {
        Instruction step(cpu, 0xC5, 0x000026u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:117 BCS @UNKNOWN12
    case 0xC1111F: {
        Instruction step(cpu, 0xB0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:118 LDA #SFX::CURSOR2
    case 0xC11121: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:118 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11121.
    case 0xC11123: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:119 JSL PLAY_SOUND
    case 0xC11124: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:120 INC @LOCAL04
    case 0xC11128: {
        Instruction step(cpu, 0xE6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1112A: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1112C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1112E: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11130: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11132: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11134: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11136: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11138: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1113A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1113A.
    case 0xC1113C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1113D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1113F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1113F.
    case 0xC11141: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11142: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:124 JSL MULT32
    case 0xC11144: {
        Instruction step(cpu, 0x22, 0xC09086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11148: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1114A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1114C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1114E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11150: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11152: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11154: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11156: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:127 JMP @UNKNOWN1
    case 0xC11158: {
        Instruction step(cpu, 0x4C, 0x00108Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:129 LDA PAD_PRESS
    case 0xC1115B: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:130 AND #PAD::RIGHT
    case 0xC1115E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:130 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1115E.
    case 0xC11160: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:131 BEQ @UNKNOWN13
    case 0xC11161: {
        Instruction step(cpu, 0xF0, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:131 BEQ @UNKNOWN13
    // Overlapping static entry reached from 0xC11160.
    case 0xC11162: {
        Instruction step(cpu, 0x43, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:132 LDA @LOCAL04
    case 0xC11163: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:132 LDA @LOCAL04
    // Overlapping static entry reached from 0xC11162.
    case 0xC11164: {
        Instruction step(cpu, 0x1C, 0x0001C9u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:133 CMP #1
    case 0xC11165: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:133 CMP #1
    // Overlapping static entry reached from 0xC11165.
    case 0xC11167: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/num_select_prompt.asm:134 BLTEQ @UNKNOWN13
    case 0xC11168: {
        Instruction step(cpu, 0x90, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/num_select_prompt.asm:134 BLTEQ @UNKNOWN13
    case 0xC1116A: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:135 LDA #SFX::CURSOR2
    case 0xC1116C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:135 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1116C.
    case 0xC1116E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:136 JSL PLAY_SOUND
    case 0xC1116F: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:137 DEC @LOCAL04
    case 0xC11173: {
        Instruction step(cpu, 0xC6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11175: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11177: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11179: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1117B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1117D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1117F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11181: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11183: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11185: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11185.
    case 0xC11187: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11188: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1118A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1118A.
    case 0xC1118C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1118D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:141 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC1118F: {
        Instruction step(cpu, 0x22, 0xC091A6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11193: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11195: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11197: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11199: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1119B: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1119D: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1119F: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC111A1: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:144 JMP @UNKNOWN1
    case 0xC111A3: {
        Instruction step(cpu, 0x4C, 0x00108Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:146 LDA PAD_HELD
    case 0xC111A6: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:147 AND #PAD::UP
    case 0xC111A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:147 AND #PAD::UP
    // Overlapping static entry reached from 0xC111A9.
    case 0xC111AB: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:148 BEQL @UNKNOWN17
    case 0xC111AC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:148 BEQL @UNKNOWN17
    case 0xC111AE: {
        Instruction step(cpu, 0x4C, 0x00125Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:149 LDA #SFX::CURSOR3
    case 0xC111B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:149 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC111B1.
    case 0xC111B3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:150 JSL PLAY_SOUND
    case 0xC111B4: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC111B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    // Overlapping static entry reached from 0xC111B8.
    case 0xC111BA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC111BB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC111BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    // Overlapping static entry reached from 0xC111BD.
    case 0xC111BF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC111C0: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111C2: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111C4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111C6: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111C8: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:153 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC111CA: {
        Instruction step(cpu, 0x22, 0xC091A6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC111CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC111CE.
    case 0xC111D0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC111D1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC111D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC111D3.
    case 0xC111D5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC111D6: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:155 JSL MODULUS32
    case 0xC111D8: {
        Instruction step(cpu, 0x22, 0xC09237u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC111DC: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC111DE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC111E0: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC111E2: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC111E4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC111E6: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC111E8: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC111EA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC111EC: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:158 BEQ @UNKNOWN16
    case 0xC111EE: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111F0: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111F2: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111F4: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111F6: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC111F8: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC111FA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC111FC: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC111FE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:161 CLC
    case 0xC11200: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11201: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11203: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11205: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11207: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11209: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1120B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1120D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1120F: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11211: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11213: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:164 JMP @UNKNOWN1
    case 0xC11215: {
        Instruction step(cpu, 0x4C, 0x00108Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11218: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1121A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1121C: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1121E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11220: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11222: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11224: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11226: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC11228: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC1122A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC1122C: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC1122E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:169 JSL MULT32
    case 0xC11230: {
        Instruction step(cpu, 0x22, 0xC09086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11234: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11236: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11238: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1123A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1123C: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1123E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11240: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11242: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:172 SEC
    case 0xC11244: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11245: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11247: {
        Instruction step(cpu, 0xE5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1009 STA dest
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11249: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1124B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1124D: {
        Instruction step(cpu, 0xE5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1124F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11251: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11253: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11255: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11257: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:175 JMP @UNKNOWN1
    case 0xC11259: {
        Instruction step(cpu, 0x4C, 0x00108Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:177 LDA PAD_HELD
    case 0xC1125C: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:178 AND #PAD::DOWN
    case 0xC1125F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:178 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1125F.
    case 0xC11261: {
        Instruction step(cpu, 0x04, 0x0000D0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    case 0xC11262: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    // Overlapping static entry reached from 0xC11261.
    case 0xC11263: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    case 0xC11264: {
        Instruction step(cpu, 0x4C, 0x00130Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    // Overlapping static entry reached from 0xC11263.
    case 0xC11265: {
        Instruction step(cpu, 0x0C, 0x00A913u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:180 LDA #SFX::CURSOR3
    case 0xC11267: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:180 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11265.
    case 0xC11268: {
        Instruction step(cpu, 0x03, 0x000000u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:180 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11267.
    case 0xC11269: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:181 JSL PLAY_SOUND
    case 0xC1126A: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1126E: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11270: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11272: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11274: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:183 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC11276: {
        Instruction step(cpu, 0x22, 0xC091A6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1127A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1127A.
    case 0xC1127C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1127D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1127F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1127F.
    case 0xC11281: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11282: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:185 JSL MODULUS32
    case 0xC11284: {
        Instruction step(cpu, 0x22, 0xC09237u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11288: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11288.
    case 0xC1128A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1128B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1128D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1128D.
    case 0xC1128F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11290: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11292: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11294: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11296: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11298: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1129A: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:188 BEQ @UNKNOWN20
    case 0xC1129C: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1129E: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112A0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112A2: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112A4: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    // Overlapping static entry reached from 0xC16901.
    case 0xC112A5: {
        Instruction step(cpu, 0x0C, 0x001EA5u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112A6: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112A8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112AA: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112AC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:191 SEC
    case 0xC112AE: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112AF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112B1: {
        Instruction step(cpu, 0xE5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1009 STA dest
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112B3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112B7: {
        Instruction step(cpu, 0xE5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112B9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC112BB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC112BD: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC112BF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC112C1: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:194 JMP @UNKNOWN1
    case 0xC112C3: {
        Instruction step(cpu, 0x4C, 0x00108Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112C6: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112C8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112CA: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112CC: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC112CE: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC112D0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC112D2: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC112D4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC112D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC112D6.
    case 0xC112D8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC112D9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC112DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC112DB.
    case 0xC112DD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC112DE: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:199 JSL MULT32
    case 0xC112E0: {
        Instruction step(cpu, 0x22, 0xC09086u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC112E4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC112E6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC112E8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC112EA: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112EC: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112EE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112F0: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112F2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:202 CLC
    case 0xC112F4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112F5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112F7: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112F9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112FB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112FD: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112FF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11301: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11303: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11305: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11307: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:205 JMP @UNKNOWN1
    case 0xC11309: {
        Instruction step(cpu, 0x4C, 0x00108Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:207 LDA PAD_PRESS
    case 0xC1130C: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:208 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1130F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:208 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1130F.
    case 0xC11311: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:209 BEQ @UNKNOWN22
    case 0xC11312: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:210 LDA #SFX::CURSOR1
    case 0xC11314: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:210 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC11314.
    case 0xC11316: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:211 JSL PLAY_SOUND
    case 0xC11317: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1131B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1131D: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1131F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11321: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:213 BRA @UNKNOWN24
    case 0xC11323: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:215 LDA PAD_PRESS
    case 0xC11325: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:216 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC11328: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:216 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC11328.
    case 0xC1132A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x0003D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    case 0xC1132B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC1132A.
    case 0xC1132C: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    case 0xC1132D: {
        Instruction step(cpu, 0x4C, 0x00110Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC1132C.
    case 0xC1132E: {
        Instruction step(cpu, 0x0F, 0x02A911u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:218 LDA #SFX::CURSOR2
    case 0xC11330: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:218 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11330.
    case 0xC11332: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:219 JSL PLAY_SOUND
    case 0xC11333: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC11337: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC11337.
    case 0xC11339: {
        Instruction step(cpu, 0xFF, 0xA90685u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC1133A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC1133C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC11339.
    case 0xC1133D: {
        Instruction step(cpu, 0xFF, 0x0885FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1133C.
    case 0xC1133E: {
        Instruction step(cpu, 0xFF, 0xA50885u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC1133F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11341: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC1133E.
    case 0xC11342: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11343: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC11342.
    case 0xC11344: {
        Instruction step(cpu, 0x2E, 0x0008A5u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11345: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11347: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/num_select_prompt.asm:223 END_C_FUNCTION
    case 0xC11349: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/num_select_prompt.asm:223 END_C_FUNCTION
    case 0xC1134A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
