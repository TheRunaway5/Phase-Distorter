// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/credits_scroll_frame.asm
bool resume_ending_credits_scroll_frame(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/credits_scroll_frame.asm:3 BEGIN_C_FUNCTION
    case 0xC0F41E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/credits_scroll_frame.asm:14 END_STACK_VARS
    case 0xC0F420: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/credits_scroll_frame.asm:14 END_STACK_VARS
    case 0xC0F421: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/credits_scroll_frame.asm:14 END_STACK_VARS
    case 0xC0F422: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DBu : 0x00FFDBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/credits_scroll_frame.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F422.
    case 0xC0F424: {
        Instruction step(cpu, 0xFF, 0x3BAD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/credits_scroll_frame.asm:14 END_STACK_VARS
    case 0xC0F425: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:15 LDA BG3_Y_POS
    case 0xC0F426: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:15 LDA BG3_Y_POS
    // Overlapping static entry reached from 0xC0F424.
    case 0xC0F428: {
        Instruction step(cpu, 0x00, 0x0000CDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:16 CMP CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F429: {
        Instruction step(cpu, 0xCD, 0x00B4E3u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/ending/credits_scroll_frame.asm:17 BGT @UNKNOWN1
    case 0xC0F42C: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/ending/credits_scroll_frame.asm:17 BGT @UNKNOWN1
    case 0xC0F42E: {
        Instruction step(cpu, 0xB0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:18 JMP @UNKNOWN37
    case 0xC0F430: {
        Instruction step(cpu, 0x4C, 0x00F85Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:20 LDA CREDITS_CURRENT_ROW
    case 0xC0F433: {
        Instruction step(cpu, 0xAD, 0x00B4F7u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:21 STA @LOCAL08
    case 0xC0F436: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:22 LDA CREDITS_CURRENT_ROW
    case 0xC0F438: {
        Instruction step(cpu, 0xAD, 0x00B4F7u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:23 INC
    case 0xC0F43B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:24 STA @LOCAL07
    case 0xC0F43C: {
        Instruction step(cpu, 0x85, 0x000021u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:25 LDA CREDITS_CURRENT_ROW
    case 0xC0F43E: {
        Instruction step(cpu, 0xAD, 0x00B4F7u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:26 INC
    case 0xC0F441: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:27 INC
    case 0xC0F442: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:28 AND #$000F
    case 0xC0F443: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:28 AND #$000F
    // Overlapping static entry reached from 0xC0F443.
    case 0xC0F445: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:29 STA CREDITS_CURRENT_ROW
    case 0xC0F446: {
        Instruction step(cpu, 0x8D, 0x00B4F7u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:30 LDA BG3_Y_POS
    case 0xC0F449: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:31 LSR
    case 0xC0F44C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:32 LSR
    case 0xC0F44D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:33 LSR
    case 0xC0F44E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:34 CLC
    case 0xC0F44F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:35 ADC #29
    case 0xC0F450: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:35 ADC #29
    // Overlapping static entry reached from 0xC0F450.
    case 0xC0F452: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:36 AND #$001F
    case 0xC0F453: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:36 AND #$001F
    // Overlapping static entry reached from 0xC0F453.
    case 0xC0F455: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:37 STA @VIRTUAL04
    case 0xC0F456: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:38 LDA #0
    case 0xC0F458: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:38 LDA #0
    // Overlapping static entry reached from 0xC0F458.
    case 0xC0F45A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:39 STA @VIRTUAL02
    case 0xC0F45B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:40 STA @LOCAL06
    case 0xC0F45D: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:41 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0F45F: {
        Instruction step(cpu, 0xAD, 0x00B4E7u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:41 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0F462: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:41 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0F464: {
        Instruction step(cpu, 0xAD, 0x00B4E9u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:41 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0F467: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:42 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F469: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:42 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F46B: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:42 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F46D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:42 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F46F: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:43 LDA @LOCAL08
    case 0xC0F471: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:44 ASL
    case 0xC0F473: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:45 ASL
    case 0xC0F474: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:46 ASL
    case 0xC0F475: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:47 ASL
    case 0xC0F476: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:48 ASL
    case 0xC0F477: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:49 ASL
    case 0xC0F478: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:50 CLC
    case 0xC0F479: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:51 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F47A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:51 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F47A.
    case 0xC0F47C: {
        Instruction step(cpu, 0x7D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F47D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F47F: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F480: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F482: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F483: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:52 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F485: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC0F487: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:54 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F489: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:54 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F48B: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:54 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F48D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:54 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F48F: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:55 LDA @LOCAL07
    case 0xC0F491: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:56 ASL
    case 0xC0F493: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:57 ASL
    case 0xC0F494: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:58 ASL
    case 0xC0F495: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:59 ASL
    case 0xC0F496: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:60 ASL
    case 0xC0F497: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:61 ASL
    case 0xC0F498: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:62 CLC
    case 0xC0F499: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:63 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F49A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:63 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F49A.
    case 0xC0F49C: {
        Instruction step(cpu, 0x7D, 0x000A85u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F49D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F49F: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F4A0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F4A2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F4A3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:64 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0F4A5: {
        Instruction step(cpu, 0x64, 0x00000Du, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC0F4A7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:66 LDA [@LOCAL05]
    case 0xC0F4A9: {
        Instruction step(cpu, 0xA7, 0x00001Bu, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:67 AND #$00FF
    case 0xC0F4AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC0F4AB.
    case 0xC0F4AD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:68 STA @LOCAL03
    case 0xC0F4AE: {
        Instruction step(cpu, 0x85, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:69 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F4B0: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:69 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F4B2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:69 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F4B4: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:69 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F4B6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:70 INC @VIRTUAL06
    case 0xC0F4B8: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:71 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F4BA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:71 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F4BC: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:71 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F4BE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:71 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F4C0: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:72 LDA @LOCAL03
    case 0xC0F4C2: {
        Instruction step(cpu, 0xA5, 0x000015u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:73 CMP #1
    case 0xC0F4C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:73 CMP #1
    // Overlapping static entry reached from 0xC0F4C4.
    case 0xC0F4C6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:74 BEQ @UNKNOWN6
    case 0xC0F4C7: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:75 CMP #2
    case 0xC0F4C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:75 CMP #2
    // Overlapping static entry reached from 0xC0F4C9.
    case 0xC0F4CB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame.asm:76 BEQL @UNKNOWN9
    case 0xC0F4CC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:76 BEQL @UNKNOWN9
    case 0xC0F4CE: {
        Instruction step(cpu, 0x4C, 0x00F581u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:77 CMP #3
    case 0xC0F4D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:77 CMP #3
    // Overlapping static entry reached from 0xC0F4D1.
    case 0xC0F4D3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame.asm:78 BEQL @UNKNOWN14
    case 0xC0F4D4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:78 BEQL @UNKNOWN14
    case 0xC0F4D6: {
        Instruction step(cpu, 0x4C, 0x00F668u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:79 CMP #4
    case 0xC0F4D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:79 CMP #4
    // Overlapping static entry reached from 0xC0F4D9.
    case 0xC0F4DB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame.asm:80 BEQL @UNKNOWN15
    case 0xC0F4DC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:80 BEQL @UNKNOWN15
    case 0xC0F4DE: {
        Instruction step(cpu, 0x4C, 0x00F67Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:81 CMP #<-1
    case 0xC0F4E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:81 CMP #<-1
    // Overlapping static entry reached from 0xC0F4E1.
    case 0xC0F4E3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame.asm:82 BEQL @UNKNOWN35
    case 0xC0F4E4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:82 BEQL @UNKNOWN35
    case 0xC0F4E6: {
        Instruction step(cpu, 0x4C, 0x00F845u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:83 JMP @UNKNOWN36
    case 0xC0F4E9: {
        Instruction step(cpu, 0x4C, 0x00F84Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:85 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F4EC: {
        Instruction step(cpu, 0xAD, 0x00B4E3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:86 CLC
    case 0xC0F4EF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:87 ADC #8
    case 0xC0F4F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:87 ADC #8
    // Overlapping static entry reached from 0xC0F4F0.
    case 0xC0F4F2: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:88 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F4F3: {
        Instruction step(cpu, 0x8D, 0x00B4E3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:89 BRA @UNKNOWN8
    case 0xC0F4F6: {
        Instruction step(cpu, 0x80, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:91 AND #$00FF
    case 0xC0F4F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:91 AND #$00FF
    // Overlapping static entry reached from 0xC0F4F8.
    case 0xC0F4FA: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:92 CLC
    case 0xC0F4FB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:93 ADC #$2000
    case 0xC0F4FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:93 ADC #$2000
    // Overlapping static entry reached from 0xC0F4FC.
    case 0xC0F4FE: {
        Instruction step(cpu, 0x20, 0x0017A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame.asm:94 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F4FF: {
        Instruction step(cpu, 0xA6, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame.asm:94 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F501: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:94 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F503: {
        Instruction step(cpu, 0xA6, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:94 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F505: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:95 STA [@VIRTUAL06]
    case 0xC0F507: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F509: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F50B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F50D: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:96 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F50F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:97 INC @VIRTUAL06
    case 0xC0F511: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F513: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F515: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F517: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:98 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F519: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:99 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F51B: {
        Instruction step(cpu, 0xA5, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:99 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F51D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:99 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F51F: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:99 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F521: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:100 INC @VIRTUAL06
    case 0xC0F523: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:101 INC @VIRTUAL06
    case 0xC0F525: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:102 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F527: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:102 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F529: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:102 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F52B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:102 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F52D: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:103 INC @VIRTUAL02
    case 0xC0F52F: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:105 LDA [@LOCAL05]
    case 0xC0F531: {
        Instruction step(cpu, 0xA7, 0x00001Bu, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:106 AND #$00FF
    case 0xC0F533: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:106 AND #$00FF
    // Overlapping static entry reached from 0xC0F533.
    case 0xC0F535: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:107 BNE @UNKNOWN7
    case 0xC0F536: {
        Instruction step(cpu, 0xD0, 0x0000C0u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:108 LDA @VIRTUAL02
    case 0xC0F538: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:109 LSR
    case 0xC0F53A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:110 PHA
    case 0xC0F53B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:111 LDA @VIRTUAL04
    case 0xC0F53C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:112 ASL
    case 0xC0F53E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:113 ASL
    case 0xC0F53F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:114 ASL
    case 0xC0F540: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:115 ASL
    case 0xC0F541: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:116 ASL
    case 0xC0F542: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:117 CLC
    case 0xC0F543: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:118 ADC #$6C10
    case 0xC0F544: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x006C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:118 ADC #$6C10
    // Overlapping static entry reached from 0xC0F544.
    case 0xC0F546: {
        Instruction step(cpu, 0x6C, 0x00847Au, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:119 PLY
    case 0xC0F547: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:120 STY @VIRTUAL04
    case 0xC0F548: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:121 SEC
    case 0xC0F54A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:122 SBC @VIRTUAL04
    case 0xC0F54B: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:123 STA @LOCAL03
    case 0xC0F54D: {
        Instruction step(cpu, 0x85, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:124 LDA @LOCAL08
    case 0xC0F54F: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:125 ASL
    case 0xC0F551: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:126 ASL
    case 0xC0F552: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:127 ASL
    case 0xC0F553: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:128 ASL
    case 0xC0F554: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:129 ASL
    case 0xC0F555: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:130 ASL
    case 0xC0F556: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:131 CLC
    case 0xC0F557: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:132 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F558: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:132 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F558.
    case 0xC0F55A: {
        Instruction step(cpu, 0x7D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F55B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F55D: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F55E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F560: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F561: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:133 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F563: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC0F565: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F567: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F569: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F56B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F56D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:136 LDA @LOCAL03
    case 0xC0F56F: {
        Instruction step(cpu, 0xA5, 0x000015u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:137 TAY
    case 0xC0F571: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:138 LDA @VIRTUAL02
    case 0xC0F572: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:139 ASL
    case 0xC0F574: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:140 TAX
    case 0xC0F575: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F576: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:142 LDA #0
    case 0xC0F578: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:143 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F57A: {
        Instruction step(cpu, 0x22, 0xC4EFC4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:143 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F578.
    case 0xC0F57B: {
        Instruction step(cpu, 0xC4, 0x0000EFu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:143 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F57B.
    case 0xC0F57D: {
        Instruction step(cpu, 0xC4, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:144 JMP @UNKNOWN36
    case 0xC0F57E: {
        Instruction step(cpu, 0x4C, 0x00F84Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:144 JMP @UNKNOWN36
    // Overlapping static entry reached from 0xC0F57D.
    case 0xC0F57F: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:144 JMP @UNKNOWN36
    // Overlapping static entry reached from 0xC0F57F.
    case 0xC0F580: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:147 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F581: {
        Instruction step(cpu, 0xAD, 0x00B4E3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:148 CLC
    case 0xC0F584: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:149 ADC #16
    case 0xC0F585: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:149 ADC #16
    // Overlapping static entry reached from 0xC0F585.
    case 0xC0F587: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:150 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F588: {
        Instruction step(cpu, 0x8D, 0x00B4E3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:151 BRA @UNKNOWN11
    case 0xC0F58B: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:153 AND #$00FF
    case 0xC0F58D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC0F58D.
    case 0xC0F58F: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:154 CLC
    case 0xC0F590: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:155 ADC #$2400
    case 0xC0F591: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:155 ADC #$2400
    // Overlapping static entry reached from 0xC0F591.
    case 0xC0F593: {
        Instruction step(cpu, 0x24, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F594: {
        Instruction step(cpu, 0xA6, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F593.
    case 0xC0F595: {
        Instruction step(cpu, 0x17, 0x000086u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F596: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F595.
    case 0xC0F597: {
        Instruction step(cpu, 0x06, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F598: {
        Instruction step(cpu, 0xA6, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F597.
    case 0xC0F599: {
        Instruction step(cpu, 0x19, 0x000886u, 3u, AddressMode::AbsoluteIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:156 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC0F59A: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:157 STA [@VIRTUAL06]
    case 0xC0F59C: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:158 INC @VIRTUAL06
    case 0xC0F59E: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:159 INC @VIRTUAL06
    case 0xC0F5A0: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:160 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F5A2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:160 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F5A4: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:160 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F5A6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:160 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F5A8: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:161 LDA [@LOCAL05]
    case 0xC0F5AA: {
        Instruction step(cpu, 0xA7, 0x00001Bu, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:162 AND #$00FF
    case 0xC0F5AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:162 AND #$00FF
    // Overlapping static entry reached from 0xC0F5AC.
    case 0xC0F5AE: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:163 CLC
    case 0xC0F5AF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:164 ADC #$2410
    case 0xC0F5B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x002410u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:164 ADC #$2410
    // Overlapping static entry reached from 0xC0F5B0.
    case 0xC0F5B2: {
        Instruction step(cpu, 0x24, 0x000087u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:165 STA [@VIRTUAL0A]
    case 0xC0F5B3: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:165 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC0F5B2.
    case 0xC0F5B4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:166 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F5B5: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:166 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F5B7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:166 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F5B9: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:166 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F5BB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:167 INC @VIRTUAL06
    case 0xC0F5BD: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:168 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F5BF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:168 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F5C1: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:168 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F5C3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:168 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F5C5: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:169 INC @VIRTUAL0A
    case 0xC0F5C7: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:170 INC @VIRTUAL0A
    case 0xC0F5C9: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:171 INC @VIRTUAL02
    case 0xC0F5CB: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:172 LDA @VIRTUAL02
    case 0xC0F5CD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:173 STA @LOCAL06
    case 0xC0F5CF: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:175 LDA [@LOCAL05]
    case 0xC0F5D1: {
        Instruction step(cpu, 0xA7, 0x00001Bu, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:176 AND #$00FF
    case 0xC0F5D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:176 AND #$00FF
    // Overlapping static entry reached from 0xC0F5D3.
    case 0xC0F5D5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:177 BNE @UNKNOWN10
    case 0xC0F5D6: {
        Instruction step(cpu, 0xD0, 0x0000B5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:178 LDA @VIRTUAL02
    case 0xC0F5D8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:179 LSR
    case 0xC0F5DA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:180 STA @VIRTUAL02
    case 0xC0F5DB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:181 LDA @VIRTUAL04
    case 0xC0F5DD: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:182 ASL
    case 0xC0F5DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:183 ASL
    case 0xC0F5E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:184 ASL
    case 0xC0F5E1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:185 ASL
    case 0xC0F5E2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:186 ASL
    case 0xC0F5E3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:187 CLC
    case 0xC0F5E4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:188 ADC #$6C10
    case 0xC0F5E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x006C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:188 ADC #$6C10
    // Overlapping static entry reached from 0xC0F5E5.
    case 0xC0F5E7: {
        Instruction step(cpu, 0x6C, 0x00E538u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:189 SEC
    case 0xC0F5E8: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:190 SBC @VIRTUAL02
    case 0xC0F5E9: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:191 STA @LOCAL02
    case 0xC0F5EB: {
        Instruction step(cpu, 0x85, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:192 LDA @LOCAL08
    case 0xC0F5ED: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:193 ASL
    case 0xC0F5EF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:194 ASL
    case 0xC0F5F0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:195 ASL
    case 0xC0F5F1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:196 ASL
    case 0xC0F5F2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:197 ASL
    case 0xC0F5F3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:198 ASL
    case 0xC0F5F4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:199 CLC
    case 0xC0F5F5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:200 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F5F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:200 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F5F6.
    case 0xC0F5F8: {
        Instruction step(cpu, 0x7D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F5F9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F5FB: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F5FC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F5FE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F5FF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:201 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F601: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:202 REP #PROC_FLAGS::ACCUM8
    case 0xC0F603: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F605: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F607: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F609: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:203 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F60B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:204 LDY @LOCAL02
    case 0xC0F60D: {
        Instruction step(cpu, 0xA4, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:205 LDA @LOCAL06
    case 0xC0F60F: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:206 STA @VIRTUAL02
    case 0xC0F611: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:207 ASL
    case 0xC0F613: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:208 TAX
    case 0xC0F614: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:209 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F615: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:210 LDA #0
    case 0xC0F617: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:211 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F619: {
        Instruction step(cpu, 0x22, 0xC4EFC4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:211 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F617.
    case 0xC0F61A: {
        Instruction step(cpu, 0xC4, 0x0000EFu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:211 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F61A.
    case 0xC0F61C: {
        Instruction step(cpu, 0xC4, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:212 LDA @VIRTUAL04
    case 0xC0F61D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:212 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC0F61C.
    case 0xC0F61E: {
        Instruction step(cpu, 0x04, 0x0000C9u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:214 CMP #31
    case 0xC0F61F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:214 CMP #31
    // Overlapping static entry reached from 0xC0F61E.
    case 0xC0F620: {
        Instruction step(cpu, 0x1F, 0x0AF000u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:214 CMP #31
    // Overlapping static entry reached from 0xC0F61F.
    case 0xC0F621: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:215 BEQ @UNKNOWN12
    case 0xC0F622: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:216 LDA @LOCAL02
    case 0xC0F624: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:217 CLC
    case 0xC0F626: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:218 ADC #32
    case 0xC0F627: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:218 ADC #32
    // Overlapping static entry reached from 0xC0F627.
    case 0xC0F629: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:219 STA @LOCAL08
    case 0xC0F62A: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:220 BRA @UNKNOWN13
    case 0xC0F62C: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:222 LDA @LOCAL02
    case 0xC0F62E: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:223 SEC
    case 0xC0F630: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:224 SBC #$03E0
    case 0xC0F631: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:224 SBC #$03E0
    // Overlapping static entry reached from 0xC0F631.
    case 0xC0F633: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:225 STA @LOCAL08
    case 0xC0F634: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:225 STA @LOCAL08
    // Overlapping static entry reached from 0xC0F633.
    case 0xC0F635: {
        Instruction step(cpu, 0x23, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:227 LDA @LOCAL07
    case 0xC0F636: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:227 LDA @LOCAL07
    // Overlapping static entry reached from 0xC0F635.
    case 0xC0F637: {
        Instruction step(cpu, 0x21, 0x00000Au, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:228 ASL
    case 0xC0F638: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:229 ASL
    case 0xC0F639: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:230 ASL
    case 0xC0F63A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:231 ASL
    case 0xC0F63B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:232 ASL
    case 0xC0F63C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:233 ASL
    case 0xC0F63D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:234 CLC
    case 0xC0F63E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:235 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F63F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:235 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F63F.
    case 0xC0F641: {
        Instruction step(cpu, 0x7D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F642: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F644: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F645: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F647: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F648: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:236 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F64A: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:237 REP #PROC_FLAGS::ACCUM8
    case 0xC0F64C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:238 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F64E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:238 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F650: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:238 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F652: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:238 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F654: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:239 LDA @LOCAL08
    case 0xC0F656: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:240 TAY
    case 0xC0F658: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:241 LDA @VIRTUAL02
    case 0xC0F659: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:242 ASL
    case 0xC0F65B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:243 TAX
    case 0xC0F65C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:244 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F65D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:245 LDA #0
    case 0xC0F65F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:246 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F661: {
        Instruction step(cpu, 0x22, 0xC4EFC4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:246 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F65F.
    case 0xC0F662: {
        Instruction step(cpu, 0xC4, 0x0000EFu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:246 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F662.
    case 0xC0F664: {
        Instruction step(cpu, 0xC4, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:247 JMP @UNKNOWN36
    case 0xC0F665: {
        Instruction step(cpu, 0x4C, 0x00F84Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:247 JMP @UNKNOWN36
    // Overlapping static entry reached from 0xC0F664.
    case 0xC0F666: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:247 JMP @UNKNOWN36
    // Overlapping static entry reached from 0xC0F666.
    case 0xC0F667: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:250 LDA [@LOCAL05]
    case 0xC0F668: {
        Instruction step(cpu, 0xA7, 0x00001Bu, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:251 AND #$00FF
    case 0xC0F66A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:251 AND #$00FF
    // Overlapping static entry reached from 0xC0F66A.
    case 0xC0F66C: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:252 ASL
    case 0xC0F66D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:253 ASL
    case 0xC0F66E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:254 ASL
    case 0xC0F66F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:255 CLC
    case 0xC0F670: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:256 ADC CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F671: {
        Instruction step(cpu, 0x6D, 0x00B4E3u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:257 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F674: {
        Instruction step(cpu, 0x8D, 0x00B4E3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:258 JMP @UNKNOWN36
    case 0xC0F677: {
        Instruction step(cpu, 0x4C, 0x00F84Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:260 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC0F67A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x009801u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:260 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC0F67A.
    case 0xC0F67C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:261 STX @LOCAL03
    case 0xC0F67D: {
        Instruction step(cpu, 0x86, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:262 LDA __BSS_START__,X
    case 0xC0F67F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:263 AND #$00FF
    case 0xC0F682: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:263 AND #$00FF
    // Overlapping static entry reached from 0xC0F682.
    case 0xC0F684: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame.asm:264 BEQL @UNKNOWN34
    case 0xC0F685: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:264 BEQL @UNKNOWN34
    case 0xC0F687: {
        Instruction step(cpu, 0x4C, 0x00F831u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:265 LDY #.LOWORD(CREDITS_PLAYER_NAME_BUFFER)
    case 0xC0F68A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F9u : 0x00B4F9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:265 LDY #.LOWORD(CREDITS_PLAYER_NAME_BUFFER)
    // Overlapping static entry reached from 0xC0F68A.
    case 0xC0F68C: {
        Instruction step(cpu, 0xB4, 0x0000E2u, 2u, AddressMode::DirectPageIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:266 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F68D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:266 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F68C.
    case 0xC0F68E: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:267 LDA #0
    case 0xC0F68F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:268 STA @LOCAL01
    case 0xC0F691: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:268 STA @LOCAL01
    // Overlapping static entry reached from 0xC0F68F.
    case 0xC0F692: {
        Instruction step(cpu, 0x12, 0x00004Cu, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:269 JMP @UNKNOWN27
    case 0xC0F693: {
        Instruction step(cpu, 0x4C, 0x00F72Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:269 JMP @UNKNOWN27
    // Overlapping static entry reached from 0xC0F692.
    case 0xC0F694: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:269 JMP @UNKNOWN27
    // Overlapping static entry reached from 0xC0F694.
    case 0xC0F695: {
        Instruction step(cpu, 0xF7, 0x0000A5u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:272 LDA @VIRTUAL00
    case 0xC0F696: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:272 LDA @VIRTUAL00
    // Overlapping static entry reached from 0xC0F695.
    case 0xC0F697: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:273 AND #$00FF
    case 0xC0F698: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:273 AND #$00FF
    // Overlapping static entry reached from 0xC0F698.
    case 0xC0F69A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:274 STA @LOCAL02
    case 0xC0F69B: {
        Instruction step(cpu, 0x85, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:275 CMP #172
    case 0xC0F69D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000ACu : 0x0000ACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:275 CMP #172
    // Overlapping static entry reached from 0xC0F69D.
    case 0xC0F69F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:276 BEQ @UNKNOWN18
    case 0xC0F6A0: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:277 CMP #174
    case 0xC0F6A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000AEu : 0x0000AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:277 CMP #174
    // Overlapping static entry reached from 0xC0F6A2.
    case 0xC0F6A4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:278 BEQ @UNKNOWN19
    case 0xC0F6A5: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:279 CMP #175
    case 0xC0F6A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000AFu : 0x0000AFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:279 CMP #175
    // Overlapping static entry reached from 0xC0F6A7.
    case 0xC0F6A9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:280 BEQ @UNKNOWN20
    case 0xC0F6AA: {
        Instruction step(cpu, 0xF0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:281 BRA @UNKNOWN21
    case 0xC0F6AC: {
        Instruction step(cpu, 0x80, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:284 LDA @LOCAL01
    case 0xC0F6AE: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:285 AND #$00FF
    case 0xC0F6B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:285 AND #$00FF
    // Overlapping static entry reached from 0xC0F6B0.
    case 0xC0F6B2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:286 STA @VIRTUAL02
    case 0xC0F6B3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:287 TYA
    case 0xC0F6B5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:288 CLC
    case 0xC0F6B6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:289 ADC @VIRTUAL02
    case 0xC0F6B7: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:290 TAX
    case 0xC0F6B9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:291 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F6BA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:292 LDA #124
    case 0xC0F6BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x009D7Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:293 STA __BSS_START__,X
    case 0xC0F6BE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:293 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0F6BC.
    case 0xC0F6BF: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:294 BRA @UNKNOWN26
    case 0xC0F6C1: {
        Instruction step(cpu, 0x80, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:297 LDA @LOCAL01
    case 0xC0F6C3: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:298 AND #$00FF
    case 0xC0F6C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:298 AND #$00FF
    // Overlapping static entry reached from 0xC0F6C5.
    case 0xC0F6C7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:299 STA @VIRTUAL02
    case 0xC0F6C8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:300 TYA
    case 0xC0F6CA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:301 CLC
    case 0xC0F6CB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:302 ADC @VIRTUAL02
    case 0xC0F6CC: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:303 TAX
    case 0xC0F6CE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:304 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F6CF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:305 LDA #126
    case 0xC0F6D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x009D7Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:306 STA __BSS_START__,X
    case 0xC0F6D3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:306 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0F6D1.
    case 0xC0F6D4: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:307 BRA @UNKNOWN26
    case 0xC0F6D6: {
        Instruction step(cpu, 0x80, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:310 LDA @LOCAL01
    case 0xC0F6D8: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:311 AND #$00FF
    case 0xC0F6DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:311 AND #$00FF
    // Overlapping static entry reached from 0xC0F6DA.
    case 0xC0F6DC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:312 STA @VIRTUAL02
    case 0xC0F6DD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:313 TYA
    case 0xC0F6DF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:314 CLC
    case 0xC0F6E0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:315 ADC @VIRTUAL02
    case 0xC0F6E1: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:316 TAX
    case 0xC0F6E3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:317 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F6E4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:318 LDA #127
    case 0xC0F6E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x009D7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:319 STA __BSS_START__,X
    case 0xC0F6E8: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:319 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC0F6E6.
    case 0xC0F6E9: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:320 BRA @UNKNOWN26
    case 0xC0F6EB: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:323 LDA @LOCAL02
    case 0xC0F6ED: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:324 CLC
    case 0xC0F6EF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:325 SBC #144
    case 0xC0F6F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000090u : 0x000090u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:325 SBC #144
    // Overlapping static entry reached from 0xC0F6F0.
    case 0xC0F6F2: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/ending/credits_scroll_frame.asm:326 BRANCHLTEQS @UNKNOWN24
    case 0xC0F6F3: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/ending/credits_scroll_frame.asm:326 BRANCHLTEQS @UNKNOWN24
    case 0xC0F6F5: {
        Instruction step(cpu, 0x10, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/ending/credits_scroll_frame.asm:326 BRANCHLTEQS @UNKNOWN24
    case 0xC0F6F7: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/ending/credits_scroll_frame.asm:326 BRANCHLTEQS @UNKNOWN24
    case 0xC0F6F9: {
        Instruction step(cpu, 0x30, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:327 LDA @LOCAL02
    case 0xC0F6FB: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:328 SEC
    case 0xC0F6FD: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:329 SBC #80
    case 0xC0F6FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:329 SBC #80
    // Overlapping static entry reached from 0xC0F6FE.
    case 0xC0F700: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:330 STA @LOCAL02
    case 0xC0F701: {
        Instruction step(cpu, 0x85, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:331 BRA @UNKNOWN25
    case 0xC0F703: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:333 LDA @LOCAL02
    case 0xC0F705: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:334 SEC
    case 0xC0F707: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:335 SBC #48
    case 0xC0F708: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:335 SBC #48
    // Overlapping static entry reached from 0xC0F708.
    case 0xC0F70A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:336 STA @LOCAL02
    case 0xC0F70B: {
        Instruction step(cpu, 0x85, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:338 LDA @LOCAL01
    case 0xC0F70D: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:339 AND #$00FF
    case 0xC0F70F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:339 AND #$00FF
    // Overlapping static entry reached from 0xC0F70F.
    case 0xC0F711: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:340 STA @VIRTUAL02
    case 0xC0F712: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:341 TYA
    case 0xC0F714: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:342 CLC
    case 0xC0F715: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:343 ADC @VIRTUAL02
    case 0xC0F716: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:344 TAX
    case 0xC0F718: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:345 LDA @LOCAL02
    case 0xC0F719: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:346 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F71B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:347 STA __BSS_START__,X
    case 0xC0F71D: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:349 LDX @LOCAL03
    case 0xC0F720: {
        Instruction step(cpu, 0xA6, 0x000015u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:350 INX
    case 0xC0F722: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:351 STX @LOCAL03
    case 0xC0F723: {
        Instruction step(cpu, 0x86, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:352 LDA @LOCAL01
    case 0xC0F725: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:353 INC
    case 0xC0F727: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:354 STA @LOCAL01
    case 0xC0F728: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:356 LDA __BSS_START__,X
    case 0xC0F72A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:357 STA @VIRTUAL00
    case 0xC0F72D: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:358 REP #PROC_FLAGS::ACCUM8
    case 0xC0F72F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:359 LDA @VIRTUAL00
    case 0xC0F731: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:360 AND #$00FF
    case 0xC0F733: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:360 AND #$00FF
    // Overlapping static entry reached from 0xC0F733.
    case 0xC0F735: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/ending/credits_scroll_frame.asm:361 BNEL @UNKNOWN17
    case 0xC0F736: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/ending/credits_scroll_frame.asm:361 BNEL @UNKNOWN17
    case 0xC0F738: {
        Instruction step(cpu, 0x4C, 0x00F696u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:362 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F73B: {
        Instruction step(cpu, 0xAD, 0x00B4E3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:363 CLC
    case 0xC0F73E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:364 ADC #16
    case 0xC0F73F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:364 ADC #16
    // Overlapping static entry reached from 0xC0F73F.
    case 0xC0F741: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:365 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F742: {
        Instruction step(cpu, 0x8D, 0x00B4E3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:366 LDX #0
    case 0xC0F745: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:366 LDX #0
    // Overlapping static entry reached from 0xC0F745.
    case 0xC0F747: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:367 BRA @UNKNOWN30
    case 0xC0F748: {
        Instruction step(cpu, 0x80, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:369 AND #$00FF
    case 0xC0F74A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:369 AND #$00FF
    // Overlapping static entry reached from 0xC0F74A.
    case 0xC0F74C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:370 STA @VIRTUAL02
    case 0xC0F74D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:371 AND #$00F0
    case 0xC0F74F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000F0u : 0x0000F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:371 AND #$00F0
    // Overlapping static entry reached from 0xC0F74F.
    case 0xC0F751: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:372 CLC
    case 0xC0F752: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:373 ADC @VIRTUAL02
    case 0xC0F753: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:374 CLC
    case 0xC0F755: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:375 ADC #$2400
    case 0xC0F756: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:375 ADC #$2400
    // Overlapping static entry reached from 0xC0F756.
    case 0xC0F758: {
        Instruction step(cpu, 0x24, 0x000048u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:376 PHA
    case 0xC0F759: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:377 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F75A: {
        Instruction step(cpu, 0xA5, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:377 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F75C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:377 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F75E: {
        Instruction step(cpu, 0xA5, 0x000019u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:377 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0F760: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:378 PLA
    case 0xC0F762: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:379 STA [@VIRTUAL06]
    case 0xC0F763: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:380 INC @VIRTUAL06
    case 0xC0F765: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:381 INC @VIRTUAL06
    case 0xC0F767: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:382 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F769: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:382 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F76B: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:382 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F76D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:382 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0F76F: {
        Instruction step(cpu, 0x85, 0x000019u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:383 LDA __BSS_START__,Y
    case 0xC0F771: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:384 AND #$00FF
    case 0xC0F774: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:384 AND #$00FF
    // Overlapping static entry reached from 0xC0F774.
    case 0xC0F776: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:385 STA @VIRTUAL02
    case 0xC0F777: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:386 AND #$00F0
    case 0xC0F779: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000F0u : 0x0000F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:386 AND #$00F0
    // Overlapping static entry reached from 0xC0F779.
    case 0xC0F77B: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:387 CLC
    case 0xC0F77C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:388 ADC @VIRTUAL02
    case 0xC0F77D: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:389 CLC
    case 0xC0F77F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:390 ADC #$2410
    case 0xC0F780: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x002410u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:390 ADC #$2410
    // Overlapping static entry reached from 0xC0F780.
    case 0xC0F782: {
        Instruction step(cpu, 0x24, 0x000087u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:391 STA [@VIRTUAL0A]
    case 0xC0F783: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:391 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC0F782.
    case 0xC0F784: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:392 INC @VIRTUAL0A
    case 0xC0F785: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:393 INC @VIRTUAL0A
    case 0xC0F787: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:394 INY
    case 0xC0F789: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:395 LDA @LOCAL06
    case 0xC0F78A: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:396 STA @VIRTUAL02
    case 0xC0F78C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:397 INC @VIRTUAL02
    case 0xC0F78E: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:398 LDA @VIRTUAL02
    case 0xC0F790: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:399 STA @LOCAL06
    case 0xC0F792: {
        Instruction step(cpu, 0x85, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:400 INX
    case 0xC0F794: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:402 LDA __BSS_START__,Y
    case 0xC0F795: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:403 AND #$00FF
    case 0xC0F798: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:403 AND #$00FF
    // Overlapping static entry reached from 0xC0F798.
    case 0xC0F79A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:404 BEQ @UNKNOWN31
    case 0xC0F79B: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:405 CPX #24
    case 0xC0F79D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:405 CPX #24
    // Overlapping static entry reached from 0xC0F79D.
    case 0xC0F79F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:406 BCC @UNKNOWN29
    case 0xC0F7A0: {
        Instruction step(cpu, 0x90, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:408 LDA @LOCAL06
    case 0xC0F7A2: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:409 STA @VIRTUAL02
    case 0xC0F7A4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:410 LSR
    case 0xC0F7A6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:411 STA @VIRTUAL02
    case 0xC0F7A7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:412 LDA @VIRTUAL04
    case 0xC0F7A9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:413 ASL
    case 0xC0F7AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:414 ASL
    case 0xC0F7AC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:415 ASL
    case 0xC0F7AD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:416 ASL
    case 0xC0F7AE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:417 ASL
    case 0xC0F7AF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:418 CLC
    case 0xC0F7B0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:419 ADC #$6C10
    case 0xC0F7B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x006C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:419 ADC #$6C10
    // Overlapping static entry reached from 0xC0F7B1.
    case 0xC0F7B3: {
        Instruction step(cpu, 0x6C, 0x00E538u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:420 SEC
    case 0xC0F7B4: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:421 SBC @VIRTUAL02
    case 0xC0F7B5: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:422 STA @LOCAL02
    case 0xC0F7B7: {
        Instruction step(cpu, 0x85, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:423 LDA @LOCAL08
    case 0xC0F7B9: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:424 ASL
    case 0xC0F7BB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:425 ASL
    case 0xC0F7BC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:426 ASL
    case 0xC0F7BD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:427 ASL
    case 0xC0F7BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:428 ASL
    case 0xC0F7BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:429 ASL
    case 0xC0F7C0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:430 CLC
    case 0xC0F7C1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:431 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F7C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:431 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F7C2.
    case 0xC0F7C4: {
        Instruction step(cpu, 0x7D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7C5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7C7: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7C8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7CA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7CB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:432 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F7CD: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:433 REP #PROC_FLAGS::ACCUM8
    case 0xC0F7CF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:434 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F7D1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:434 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F7D3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:434 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F7D5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:434 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F7D7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:435 LDY @LOCAL02
    case 0xC0F7D9: {
        Instruction step(cpu, 0xA4, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:436 LDA @LOCAL06
    case 0xC0F7DB: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:437 STA @VIRTUAL02
    case 0xC0F7DD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:438 ASL
    case 0xC0F7DF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:439 TAX
    case 0xC0F7E0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:440 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F7E1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:441 LDA #0
    case 0xC0F7E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:442 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F7E5: {
        Instruction step(cpu, 0x22, 0xC4EFC4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:442 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F7E3.
    case 0xC0F7E6: {
        Instruction step(cpu, 0xC4, 0x0000EFu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:442 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F7E6.
    case 0xC0F7E8: {
        Instruction step(cpu, 0xC4, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:444 LDA @VIRTUAL04
    case 0xC0F7E9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:444 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC0F7E8.
    case 0xC0F7EA: {
        Instruction step(cpu, 0x04, 0x0000C9u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:445 CMP #31
    case 0xC0F7EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:445 CMP #31
    // Overlapping static entry reached from 0xC0F7EA.
    case 0xC0F7EC: {
        Instruction step(cpu, 0x1F, 0x0AF000u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:445 CMP #31
    // Overlapping static entry reached from 0xC0F7EB.
    case 0xC0F7ED: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:446 BEQ @UNKNOWN32
    case 0xC0F7EE: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:447 LDA @LOCAL02
    case 0xC0F7F0: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:448 CLC
    case 0xC0F7F2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:449 ADC #32
    case 0xC0F7F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:449 ADC #32
    // Overlapping static entry reached from 0xC0F7F3.
    case 0xC0F7F5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:450 STA @LOCAL08
    case 0xC0F7F6: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:451 BRA @UNKNOWN33
    case 0xC0F7F8: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:454 LDA @LOCAL02
    case 0xC0F7FA: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:455 SEC
    case 0xC0F7FC: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:456 SBC #$03E0
    case 0xC0F7FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:456 SBC #$03E0
    // Overlapping static entry reached from 0xC0F7FD.
    case 0xC0F7FF: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:457 STA @LOCAL08
    case 0xC0F800: {
        Instruction step(cpu, 0x85, 0x000023u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:457 STA @LOCAL08
    // Overlapping static entry reached from 0xC0F7FF.
    case 0xC0F801: {
        Instruction step(cpu, 0x23, 0x0000A5u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:459 LDA @LOCAL07
    case 0xC0F802: {
        Instruction step(cpu, 0xA5, 0x000021u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:459 LDA @LOCAL07
    // Overlapping static entry reached from 0xC0F801.
    case 0xC0F803: {
        Instruction step(cpu, 0x21, 0x00000Au, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:460 ASL
    case 0xC0F804: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:461 ASL
    case 0xC0F805: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:462 ASL
    case 0xC0F806: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:463 ASL
    case 0xC0F807: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:464 ASL
    case 0xC0F808: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:465 ASL
    case 0xC0F809: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:466 CLC
    case 0xC0F80A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:467 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0F80B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:467 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0F80B.
    case 0xC0F80D: {
        Instruction step(cpu, 0x7D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F80E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F810: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F811: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F813: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F814: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame.asm:468 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0F816: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:469 REP #PROC_FLAGS::ACCUM8
    case 0xC0F818: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:470 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F81A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:470 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F81C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:470 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F81E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:470 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0F820: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:471 LDA @LOCAL08
    case 0xC0F822: {
        Instruction step(cpu, 0xA5, 0x000023u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:472 TAY
    case 0xC0F824: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:473 LDA @VIRTUAL02
    case 0xC0F825: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:474 ASL
    case 0xC0F827: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:475 TAX
    case 0xC0F828: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:476 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F829: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:477 LDA #0
    case 0xC0F82B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:478 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F82D: {
        Instruction step(cpu, 0x22, 0xC4EFC4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:478 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F82B.
    case 0xC0F82E: {
        Instruction step(cpu, 0xC4, 0x0000EFu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:478 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F82E.
    case 0xC0F830: {
        Instruction step(cpu, 0xC4, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:480 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F831: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:480 MOVE_INT @LOCAL05, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F830.
    case 0xC0F832: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:480 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F833: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:480 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F835: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:480 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F837: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:481 DEC @VIRTUAL06
    case 0xC0F839: {
        Instruction step(cpu, 0xC6, 0x000006u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:482 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F83B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:482 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F83D: {
        Instruction step(cpu, 0x85, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:482 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F83F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:482 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC0F841: {
        Instruction step(cpu, 0x85, 0x00001Du, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:483 BRA @UNKNOWN36
    case 0xC0F843: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:486 LDA #.LOWORD(-1)
    case 0xC0F845: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:486 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0F845.
    case 0xC0F847: {
        Instruction step(cpu, 0xFF, 0xB4E38Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:487 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0F848: {
        Instruction step(cpu, 0x8D, 0x00B4E3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:489 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F84B: {
        Instruction step(cpu, 0xA5, 0x00001Bu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:489 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F84D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:489 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F84F: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:489 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC0F851: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:490 INC @VIRTUAL06
    case 0xC0F853: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:491 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0F855: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:491 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0F857: {
        Instruction step(cpu, 0x8D, 0x00B4E7u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:491 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0F85A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:491 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0F85C: {
        Instruction step(cpu, 0x8D, 0x00B4E9u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:493 LDA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0F85F: {
        Instruction step(cpu, 0xAD, 0x00B4E5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:494 CMP BG3_Y_POS
    case 0xC0F862: {
        Instruction step(cpu, 0xCD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:495 BCS @UNKNOWN38
    case 0xC0F865: {
        Instruction step(cpu, 0xB0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:496 LDA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0F867: {
        Instruction step(cpu, 0xAD, 0x00B4E5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:497 CLC
    case 0xC0F86A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:498 ADC #8
    case 0xC0F86B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:498 ADC #8
    // Overlapping static entry reached from 0xC0F86B.
    case 0xC0F86D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:499 STA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0F86E: {
        Instruction step(cpu, 0x8D, 0x00B4E5u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0F871: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E8u : 0x000BE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    // Overlapping static entry reached from 0xC0F871.
    case 0xC0F873: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0F874: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0F876: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    // Overlapping static entry reached from 0xC0F876.
    case 0xC0F878: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/credits_scroll_frame.asm:500 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0F879: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:501 LDA BG3_Y_POS
    case 0xC0F87B: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:502 LSR
    case 0xC0F87E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:503 LSR
    case 0xC0F87F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:504 LSR
    case 0xC0F880: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:505 DEC
    case 0xC0F881: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:506 AND #$001F
    case 0xC0F882: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:506 AND #$001F
    // Overlapping static entry reached from 0xC0F882.
    case 0xC0F884: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:507 ASL
    case 0xC0F885: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:508 ASL
    case 0xC0F886: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:509 ASL
    case 0xC0F887: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:510 ASL
    case 0xC0F888: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:511 ASL
    case 0xC0F889: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:512 CLC
    case 0xC0F88A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:513 ADC #$6C00
    case 0xC0F88B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x006C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:513 ADC #$6C00
    // Overlapping static entry reached from 0xC0F88B.
    case 0xC0F88D: {
        Instruction step(cpu, 0x6C, 0x00A2A8u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:514 TAY
    case 0xC0F88E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:515 LDX #64
    case 0xC0F88F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:515 LDX #64
    // Overlapping static entry reached from 0xC0F88F.
    case 0xC0F891: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:516 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F892: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:517 LDA #3
    case 0xC0F894: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:518 JSL ENQUEUE_CREDITS_DMA
    case 0xC0F896: {
        Instruction step(cpu, 0x22, 0xC4EFC4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:518 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F894.
    case 0xC0F897: {
        Instruction step(cpu, 0xC4, 0x0000EFu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:518 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0F897.
    case 0xC0F899: {
        Instruction step(cpu, 0xC4, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0F89A: {
        Instruction step(cpu, 0xAD, 0x00B4EBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F899.
    case 0xC0F89B: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F89B.
    case 0xC0F89C: {
        Instruction step(cpu, 0xB4, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0F89D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F89C.
    case 0xC0F89E: {
        Instruction step(cpu, 0x06, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0F89F: {
        Instruction step(cpu, 0xAD, 0x00B4EDu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F89E.
    case 0xC0F8A0: {
        Instruction step(cpu, 0xED, 0x0085B4u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0F8A2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:521 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F8A0.
    case 0xC0F8A3: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:522 CLC
    case 0xC0F8A4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:523 LDA @VIRTUAL06 + fixed_point::fraction
    case 0xC0F8A5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:524 ADC #$4000
    case 0xC0F8A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:524 ADC #$4000
    // Overlapping static entry reached from 0xC0F8A7.
    case 0xC0F8A9: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:525 STA @VIRTUAL06 + fixed_point::fraction
    case 0xC0F8AA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:526 BCC @UNKNOWN39
    case 0xC0F8AC: {
        Instruction step(cpu, 0x90, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:527 INC @VIRTUAL06 + fixed_point::integer
    case 0xC0F8AE: {
        Instruction step(cpu, 0xE6, 0x000008u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame.asm:529 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0F8B0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame.asm:529 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0F8B2: {
        Instruction step(cpu, 0x8D, 0x00B4EBu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame.asm:529 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0F8B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame.asm:529 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0F8B7: {
        Instruction step(cpu, 0x8D, 0x00B4EDu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:530 STA BG3_Y_POS
    case 0xC0F8BA: {
        Instruction step(cpu, 0x8D, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame.asm:531 JSR UNKNOWN_C0AD9F
    case 0xC0F8BD: {
        Instruction step(cpu, 0x20, 0x00AD9Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/credits_scroll_frame.asm:532 END_C_FUNCTION
    case 0xC0F8C0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/ending/credits_scroll_frame.asm:532 END_C_FUNCTION
    case 0xC0F8C1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
