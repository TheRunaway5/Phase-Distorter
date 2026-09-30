// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/num_select_prompt.asm
bool resume_text_num_select_prompt(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/num_select_prompt.asm:4 BEGIN_C_FUNCTION
    case 0xC115D6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115D8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115D9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115DA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D8u : 0x00FFD8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC115DB.
    case 0xC115DD: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115DE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115DF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:23 STA @LOCAL08
    case 0xC115E0: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:23 STA @LOCAL08
    // Overlapping static entry reached from 0xC115DD.
    case 0xC115E1: {
        Instruction step(cpu, 0x26, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:24 LDA CURRENT_FOCUS_WINDOW
    case 0xC115E2: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:24 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC115E1.
    case 0xC115E3: {
        Instruction step(cpu, 0x96, 0x00008Cu, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:25 CMP #.LOWORD(-1)
    case 0xC115E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:25 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC115E5.
    case 0xC115E7: {
        Instruction step(cpu, 0xFF, 0xA915D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:26 BNE @UNKNOWN0
    case 0xC115E8: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC115EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC115E7.
    case 0xC115EB: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC115EA.
    case 0xC115EC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC115ED: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC115EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC115EF.
    case 0xC115F1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC115F2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC115F4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC115F6: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC115F8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC115FA: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:29 JMP @UNKNOWN24
    case 0xC115FC: {
        Instruction step(cpu, 0x4C, 0x0018FEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:31 LDA CURRENT_FOCUS_WINDOW
    case 0xC115FF: {
        Instruction step(cpu, 0xAD, 0x008C96u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:32 ASL
    case 0xC11602: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:33 TAX
    case 0xC11603: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:34 LDA OPEN_WINDOW_TABLE,X
    case 0xC11604: {
        Instruction step(cpu, 0xBD, 0x008C26u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC11607: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11607.
    case 0xC11609: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:36 JSL MULT168
    case 0xC1160A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:37 CLC
    case 0xC1160E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:38 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1160F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000C2u : 0x0089C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:38 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1160F.
    case 0xC11611: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000AAu : 0x00BDAAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:39 TAX
    case 0xC11612: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:40 LDA a:window_stats::text_x,X
    case 0xC11613: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:40 LDA a:window_stats::text_x,X
    // Overlapping static entry reached from 0xC11611.
    case 0xC11614: {
        Instruction step(cpu, 0x0E, 0x008500u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:41 STA @LOCAL07
    case 0xC11616: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:41 STA @LOCAL07
    // Overlapping static entry reached from 0xC11614.
    case 0xC11617: {
        Instruction step(cpu, 0x24, 0x0000BDu, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:42 LDA a:window_stats::text_y,X
    case 0xC11618: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:42 LDA a:window_stats::text_y,X
    // Overlapping static entry reached from 0xC11617.
    case 0xC11619: {
        Instruction step(cpu, 0x10, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:43 STA @LOCAL06
    case 0xC1161B: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1161D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1161D.
    case 0xC1161F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11620: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11622: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11622.
    case 0xC11624: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11625: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11627: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11629: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1162B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1162D: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:46 LDA #1
    case 0xC1162F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:46 LDA #1
    // Overlapping static entry reached from 0xC1162F.
    case 0xC11631: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:47 STA @LOCAL04
    case 0xC11632: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC11634: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11634.
    case 0xC11636: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC11637: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC11639: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11639.
    case 0xC1163B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC1163C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1163E: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11640: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11642: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11644: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:51 JSR SET_INSTANT_PRINTING
    case 0xC11646: {
        Instruction step(cpu, 0x20, 0x0000F7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:52 LDX @LOCAL06
    case 0xC11649: {
        Instruction step(cpu, 0xA6, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:53 LDA @LOCAL07
    case 0xC1164B: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:54 JSR UNKNOWN_C438A5
    case 0xC1164D: {
        Instruction step(cpu, 0x20, 0x001169u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11650: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11652: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11654: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11656: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11658: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1165A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1165C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1165E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:57 JSR UNKNOWN_C10D7C
    case 0xC11660: {
        Instruction step(cpu, 0x20, 0x0012CAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:58 STA @VIRTUAL02
    case 0xC11663: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:59 LDA #7
    case 0xC11665: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:59 LDA #7
    // Overlapping static entry reached from 0xC11665.
    case 0xC11667: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:60 SEC
    case 0xC11668: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:61 SBC @VIRTUAL02
    case 0xC11669: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:62 CLC
    case 0xC1166B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:63 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC1166C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000098u : 0x008C98u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:63 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1166C.
    case 0xC1166E: {
        Instruction step(cpu, 0x8C, 0x000485u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:64 STA @VIRTUAL04
    case 0xC1166F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:65 LDY @LOCAL08
    case 0xC11671: {
        Instruction step(cpu, 0xA4, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:66 STY @LOCAL02
    case 0xC11673: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:67 BRA @UNKNOWN5
    case 0xC11675: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:69 CPY @LOCAL04
    case 0xC11677: {
        Instruction step(cpu, 0xC4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:70 BNE @UNKNOWN3
    case 0xC11679: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:71 LDX #16
    case 0xC1167B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:71 LDX #16
    // Overlapping static entry reached from 0xC1167B.
    case 0xC1167D: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:72 BRA @UNKNOWN4
    case 0xC1167E: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:74 LDX #48
    case 0xC11680: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:74 LDX #48
    // Overlapping static entry reached from 0xC11680.
    case 0xC11682: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:76 TXA
    case 0xC11683: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:77 JSR @PRINT_LETTER_FUNC
    case 0xC11684: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:78 LDY @LOCAL02
    case 0xC11687: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:79 DEY
    case 0xC11689: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:80 STY @LOCAL02
    case 0xC1168A: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:82 TYA
    case 0xC1168C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:83 CMP @VIRTUAL02
    case 0xC1168D: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/num_select_prompt.asm:84 BGT @UNKNOWN2
    case 0xC1168F: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/num_select_prompt.asm:84 BGT @UNKNOWN2
    case 0xC11691: {
        Instruction step(cpu, 0xB0, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:85 BRA @UNKNOWN10
    case 0xC11693: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:87 CPY @LOCAL04
    case 0xC11695: {
        Instruction step(cpu, 0xC4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:88 BNE @UNKNOWN8
    case 0xC11697: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:89 LDX #16
    case 0xC11699: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:89 LDX #16
    // Overlapping static entry reached from 0xC11699.
    case 0xC1169B: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:90 BRA @UNKNOWN9
    case 0xC1169C: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:92 LDX #48
    case 0xC1169E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:92 LDX #48
    // Overlapping static entry reached from 0xC1169E.
    case 0xC116A0: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:94 STX @VIRTUAL02
    case 0xC116A1: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:95 LDX @VIRTUAL04
    case 0xC116A3: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:96 LDA __BSS_START__,X
    case 0xC116A5: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:97 AND #$00FF
    case 0xC116A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC116A8.
    case 0xC116AA: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:98 CLC
    case 0xC116AB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:99 ADC @VIRTUAL02
    case 0xC116AC: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:100 INC @VIRTUAL04
    case 0xC116AE: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:101 JSR @PRINT_LETTER_FUNC
    case 0xC116B0: {
        Instruction step(cpu, 0x20, 0x0011ECu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:102 LDY @LOCAL02
    case 0xC116B3: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:103 DEY
    case 0xC116B5: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:104 STY @LOCAL02
    case 0xC116B6: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:106 CPY #0
    case 0xC116B8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:106 CPY #0
    // Overlapping static entry reached from 0xC116B8.
    case 0xC116BA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:107 BNE @UNKNOWN7
    case 0xC116BB: {
        Instruction step(cpu, 0xD0, 0x0000D8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:108 JSR CLEAR_INSTANT_PRINTING
    case 0xC116BD: {
        Instruction step(cpu, 0x20, 0x0000EDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:109 JSL WINDOW_TICK
    case 0xC116C0: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:111 JSL UNKNOWN_C12E42
    case 0xC116C4: {
        Instruction step(cpu, 0x22, 0xC1355Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:112 LDA PAD_PRESS
    case 0xC116C8: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:113 AND #PAD::LEFT
    case 0xC116CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:113 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC116CB.
    case 0xC116CD: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:114 BEQ @UNKNOWN12
    case 0xC116CE: {
        Instruction step(cpu, 0xF0, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:115 LDA @LOCAL04
    case 0xC116D0: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:116 CMP @LOCAL08
    case 0xC116D2: {
        Instruction step(cpu, 0xC5, 0x000026u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:117 BCS @UNKNOWN12
    case 0xC116D4: {
        Instruction step(cpu, 0xB0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:118 LDA #SFX::CURSOR2
    case 0xC116D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:118 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC116D6.
    case 0xC116D8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:119 JSL PLAY_SOUND
    case 0xC116D9: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:120 INC @LOCAL04
    case 0xC116DD: {
        Instruction step(cpu, 0xE6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC116DF: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC116E1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC116E3: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC116E5: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC116E7: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC116E9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC116EB: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC116ED: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC116EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC116EF.
    case 0xC116F1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC116F2: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC116F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC116F4.
    case 0xC116F6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC116F7: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:124 JSL MULT32
    case 0xC116F9: {
        Instruction step(cpu, 0x22, 0xC09068u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC116FD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC116FF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11701: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11703: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11705: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11707: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11709: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1170B: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:127 JMP @UNKNOWN1
    case 0xC1170D: {
        Instruction step(cpu, 0x4C, 0x001646u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:129 LDA PAD_PRESS
    case 0xC11710: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:130 AND #PAD::RIGHT
    case 0xC11713: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:130 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC11713.
    case 0xC11715: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:131 BEQ @UNKNOWN13
    case 0xC11716: {
        Instruction step(cpu, 0xF0, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:131 BEQ @UNKNOWN13
    // Overlapping static entry reached from 0xC11715.
    case 0xC11717: {
        Instruction step(cpu, 0x43, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:132 LDA @LOCAL04
    case 0xC11718: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:132 LDA @LOCAL04
    // Overlapping static entry reached from 0xC11717.
    case 0xC11719: {
        Instruction step(cpu, 0x1C, 0x0001C9u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:133 CMP #1
    case 0xC1171A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:133 CMP #1
    // Overlapping static entry reached from 0xC1171A.
    case 0xC1171C: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/num_select_prompt.asm:134 BLTEQ @UNKNOWN13
    case 0xC1171D: {
        Instruction step(cpu, 0x90, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/num_select_prompt.asm:134 BLTEQ @UNKNOWN13
    case 0xC1171F: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:135 LDA #SFX::CURSOR2
    case 0xC11721: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:135 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11721.
    case 0xC11723: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:136 JSL PLAY_SOUND
    case 0xC11724: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:137 DEC @LOCAL04
    case 0xC11728: {
        Instruction step(cpu, 0xC6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1172A: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1172C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1172E: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11730: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11732: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11734: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11736: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11738: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1173A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1173A.
    case 0xC1173C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1173D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1173F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1173F.
    case 0xC11741: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11742: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:141 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC11744: {
        Instruction step(cpu, 0x22, 0xC09188u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11748: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1174A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1174C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1174E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11750: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11752: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11754: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11756: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:144 JMP @UNKNOWN1
    case 0xC11758: {
        Instruction step(cpu, 0x4C, 0x001646u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:146 LDA PAD_HELD
    case 0xC1175B: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:147 AND #PAD::UP
    case 0xC1175E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:147 AND #PAD::UP
    // Overlapping static entry reached from 0xC1175E.
    case 0xC11760: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:148 BEQL @UNKNOWN17
    case 0xC11761: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:148 BEQL @UNKNOWN17
    case 0xC11763: {
        Instruction step(cpu, 0x4C, 0x001811u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:149 LDA #SFX::CURSOR3
    case 0xC11766: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:149 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11766.
    case 0xC11768: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:150 JSL PLAY_SOUND
    case 0xC11769: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC1176D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    // Overlapping static entry reached from 0xC1176D.
    case 0xC1176F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC11770: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC11772: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    // Overlapping static entry reached from 0xC11772.
    case 0xC11774: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC11775: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11777: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11779: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1177B: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1177D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:153 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC1177F: {
        Instruction step(cpu, 0x22, 0xC09188u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11783: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11783.
    case 0xC11785: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11786: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11788: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11788.
    case 0xC1178A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1178B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:155 JSL MODULUS32
    case 0xC1178D: {
        Instruction step(cpu, 0x22, 0xC09219u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC11791: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC11793: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC11795: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC11797: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11799: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1179B: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1179D: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1179F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC117A1: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:158 BEQ @UNKNOWN16
    case 0xC117A3: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117A5: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10A4D.
    case 0xC117A6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117A7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117A9: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117AB: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117AD: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117AF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117B1: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117B3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:161 CLC
    case 0xC117B5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117B6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117B8: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117BA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117BC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117BE: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117C0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC117C2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC117C4: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC117C6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC117C8: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:164 JMP @UNKNOWN1
    case 0xC117CA: {
        Instruction step(cpu, 0x4C, 0x001646u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117CD: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117CF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117D1: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117D3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC117D5: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC117D7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC117D9: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC117DB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC117DD: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC117DF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC117E1: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC117E3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:169 JSL MULT32
    case 0xC117E5: {
        Instruction step(cpu, 0x22, 0xC09068u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC117E9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC117EB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC117ED: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC117EF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117F1: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117F3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117F5: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117F7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:172 SEC
    case 0xC117F9: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117FA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117FC: {
        Instruction step(cpu, 0xE5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1009 STA dest
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117FE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11800: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11802: {
        Instruction step(cpu, 0xE5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11804: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11806: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11808: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1180A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1180C: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:175 JMP @UNKNOWN1
    case 0xC1180E: {
        Instruction step(cpu, 0x4C, 0x001646u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:177 LDA PAD_HELD
    case 0xC11811: {
        Instruction step(cpu, 0xAD, 0x000069u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:178 AND #PAD::DOWN
    case 0xC11814: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:178 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC11814.
    case 0xC11816: {
        Instruction step(cpu, 0x04, 0x0000D0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    case 0xC11817: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    // Overlapping static entry reached from 0xC11816.
    case 0xC11818: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    case 0xC11819: {
        Instruction step(cpu, 0x4C, 0x0018C1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    // Overlapping static entry reached from 0xC11818.
    case 0xC1181A: {
        Instruction step(cpu, 0xC1, 0x000018u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:180 LDA #SFX::CURSOR3
    case 0xC1181C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:180 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC1181C.
    case 0xC1181E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:181 JSL PLAY_SOUND
    case 0xC1181F: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11823: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11825: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11827: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11829: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:183 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC1182B: {
        Instruction step(cpu, 0x22, 0xC09188u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1182F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1182F.
    case 0xC11831: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11832: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11834: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11834.
    case 0xC11836: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11837: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:185 JSL MODULUS32
    case 0xC11839: {
        Instruction step(cpu, 0x22, 0xC09219u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1183D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1183D.
    case 0xC1183F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11840: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11842: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11842.
    case 0xC11844: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11845: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11847: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11849: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1184B: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1184D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1184F: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:188 BEQ @UNKNOWN20
    case 0xC11851: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11853: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11855: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11857: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11859: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1185B: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1185D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1185F: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11861: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:191 SEC
    case 0xC11863: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11864: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11866: {
        Instruction step(cpu, 0xE5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1009 STA dest
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11868: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1186A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1186C: {
        Instruction step(cpu, 0xE5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1186E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11870: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11872: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11874: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11876: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:194 JMP @UNKNOWN1
    case 0xC11878: {
        Instruction step(cpu, 0x4C, 0x001646u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1187B: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1187D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1187F: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11881: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11883: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11885: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11887: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11889: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1188B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1188B.
    case 0xC1188D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1188E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC11890: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11890.
    case 0xC11892: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC11893: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:199 JSL MULT32
    case 0xC11895: {
        Instruction step(cpu, 0x22, 0xC09068u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:199 JSL MULT32
    // Overlapping static entry reached from 0xC1CC97.
    case 0xC11898: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x0006A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11899: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11898.
    case 0xC1189A: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1189B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1189A.
    case 0xC1189C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1189D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1189F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC118A1: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC118A3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC118A5: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC118A7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:202 CLC
    case 0xC118A9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118AA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118AC: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118AE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118B0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118B2: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118B4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC118B6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC118B8: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC118BA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC118BC: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:205 JMP @UNKNOWN1
    case 0xC118BE: {
        Instruction step(cpu, 0x4C, 0x001646u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:207 LDA PAD_PRESS
    case 0xC118C1: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:208 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC118C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:208 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC118C4.
    case 0xC118C6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:209 BEQ @UNKNOWN22
    case 0xC118C7: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:210 LDA #SFX::CURSOR1
    case 0xC118C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:210 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC118C9.
    case 0xC118CB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:211 JSL PLAY_SOUND
    case 0xC118CC: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118D0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118D2: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118D4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118D6: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:213 BRA @UNKNOWN24
    case 0xC118D8: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:215 LDA PAD_PRESS
    case 0xC118DA: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:216 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC118DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:216 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC118DD.
    case 0xC118DF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x0003D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    case 0xC118E0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC118DF.
    case 0xC118E1: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    case 0xC118E2: {
        Instruction step(cpu, 0x4C, 0x0016C4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC118E1.
    case 0xC118E3: {
        Instruction step(cpu, 0xC4, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:218 LDA #SFX::CURSOR2
    case 0xC118E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:218 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC118E5.
    case 0xC118E7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/num_select_prompt.asm:219 JSL PLAY_SOUND
    case 0xC118E8: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC118EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC118EC.
    case 0xC118EE: {
        Instruction step(cpu, 0xFF, 0xA90685u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC118EF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC118F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC118EE.
    case 0xC118F2: {
        Instruction step(cpu, 0xFF, 0x0885FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC118F1.
    case 0xC118F3: {
        Instruction step(cpu, 0xFF, 0xA50885u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC118F4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118F6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC118F3.
    case 0xC118F7: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118F8: {
        Instruction step(cpu, 0x85, 0x00002Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC118F7.
    case 0xC118F9: {
        Instruction step(cpu, 0x2E, 0x0008A5u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118FA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118FC: {
        Instruction step(cpu, 0x85, 0x000030u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/num_select_prompt.asm:223 END_C_FUNCTION
    case 0xC118FE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/num_select_prompt.asm:223 END_C_FUNCTION
    case 0xC118FF: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
