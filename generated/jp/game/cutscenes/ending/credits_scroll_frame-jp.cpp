// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/credits_scroll_frame-jp.asm
bool resume_ending_credits_scroll_frame_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC0FB8D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:13 END_STACK_VARS
    case 0xC0FB8F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:13 END_STACK_VARS
    case 0xC0FB90: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:13 END_STACK_VARS
    case 0xC0FB91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x00FFDCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC0FB91.
    case 0xC0FB93: {
        Instruction step(cpu, 0xFF, 0x3BAD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:13 END_STACK_VARS
    case 0xC0FB94: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:14 LDA BG3_Y_POS
    case 0xC0FB95: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:14 LDA BG3_Y_POS
    // Overlapping static entry reached from 0xC0FB93.
    case 0xC0FB97: {
        Instruction step(cpu, 0x00, 0x0000CDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:15 CMP CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FB98: {
        Instruction step(cpu, 0xCD, 0x00B6ACu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:16 BCS @UNKNOWN1
    case 0xC0FB9B: {
        Instruction step(cpu, 0xB0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:17 JMP @UNKNOWN37
    case 0xC0FB9D: {
        Instruction step(cpu, 0x4C, 0x00FF03u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:19 LDA CREDITS_CURRENT_ROW
    case 0xC0FBA0: {
        Instruction step(cpu, 0xAD, 0x00B6C0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:20 STA @LOCAL07
    case 0xC0FBA3: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:21 LDA CREDITS_CURRENT_ROW
    case 0xC0FBA5: {
        Instruction step(cpu, 0xAD, 0x00B6C0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:22 INC
    case 0xC0FBA8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:23 STA @LOCAL06
    case 0xC0FBA9: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:24 LDA CREDITS_CURRENT_ROW
    case 0xC0FBAB: {
        Instruction step(cpu, 0xAD, 0x00B6C0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:25 INC
    case 0xC0FBAE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:26 INC
    case 0xC0FBAF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:27 AND #$000F
    case 0xC0FBB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC0FBB0.
    case 0xC0FBB2: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:28 STA CREDITS_CURRENT_ROW
    case 0xC0FBB3: {
        Instruction step(cpu, 0x8D, 0x00B6C0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:29 LDA BG3_Y_POS
    case 0xC0FBB6: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:30 LSR
    case 0xC0FBB9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:31 LSR
    case 0xC0FBBA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:32 LSR
    case 0xC0FBBB: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:33 CLC
    case 0xC0FBBC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:34 ADC #$001D
    case 0xC0FBBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:34 ADC #$001D
    // Overlapping static entry reached from 0xC0FBBD.
    case 0xC0FBBF: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:35 AND #$001F
    case 0xC0FBC0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:35 AND #$001F
    // Overlapping static entry reached from 0xC0FBC0.
    case 0xC0FBC2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:36 STA @LOCAL05
    case 0xC0FBC3: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:37 LDA #0
    case 0xC0FBC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:37 LDA #0
    // Overlapping static entry reached from 0xC0FBC5.
    case 0xC0FBC7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:38 STA @VIRTUAL04
    case 0xC0FBC8: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:39 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0FBCA: {
        Instruction step(cpu, 0xAD, 0x00B6B0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:39 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0FBCD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:39 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0FBCF: {
        Instruction step(cpu, 0xAD, 0x00B6B2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:39 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0FBD2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:40 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FBD4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:40 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FBD6: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:40 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FBD8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:40 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FBDA: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:41 LDA @LOCAL07
    case 0xC0FBDC: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:42 ASL
    case 0xC0FBDE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:43 ASL
    case 0xC0FBDF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:44 ASL
    case 0xC0FBE0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:45 ASL
    case 0xC0FBE1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:46 ASL
    case 0xC0FBE2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:47 ASL
    case 0xC0FBE3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:48 CLC
    case 0xC0FBE4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:49 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FBE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:49 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FBE5.
    case 0xC0FBE7: {
        Instruction step(cpu, 0x81, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBE8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FBE7.
    case 0xC0FBE9: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBEA: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBEB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBED: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBEE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBF0: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC0FBF2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FBF4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FBF6: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FBF8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FBFA: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:53 LDA @LOCAL06
    case 0xC0FBFC: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:54 ASL
    case 0xC0FBFE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:55 ASL
    case 0xC0FBFF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:56 ASL
    case 0xC0FC00: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:57 ASL
    case 0xC0FC01: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:58 ASL
    case 0xC0FC02: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:59 ASL
    case 0xC0FC03: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:60 CLC
    case 0xC0FC04: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:61 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FC05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:61 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FC05.
    case 0xC0FC07: {
        Instruction step(cpu, 0x81, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC08: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    // Overlapping static entry reached from 0xC0FC07.
    case 0xC0FC09: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC0A: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC0B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC0D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC0E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC10: {
        Instruction step(cpu, 0x64, 0x00000Du, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC0FC12: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:64 LDA [@LOCAL04]
    case 0xC0FC14: {
        Instruction step(cpu, 0xA7, 0x00001Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:65 AND #$00FF
    case 0xC0FC16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC0FC16.
    case 0xC0FC18: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:66 STA @LOCAL02
    case 0xC0FC19: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:67 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC1B: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:67 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC1D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:67 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC1F: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:67 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC21: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:68 INC @VIRTUAL06
    case 0xC0FC23: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:69 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC25: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:69 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC27: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:69 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC29: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:69 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC2B: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:70 LDA @LOCAL02
    case 0xC0FC2D: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:71 CMP #1
    case 0xC0FC2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:71 CMP #1
    // Overlapping static entry reached from 0xC0FC2F.
    case 0xC0FC31: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:72 BEQ @UNKNOWN6
    case 0xC0FC32: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:73 CMP #2
    case 0xC0FC34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:73 CMP #2
    // Overlapping static entry reached from 0xC0FC34.
    case 0xC0FC36: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:74 BEQL @UNKNOWN9
    case 0xC0FC37: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:74 BEQL @UNKNOWN9
    case 0xC0FC39: {
        Instruction step(cpu, 0x4C, 0x00FCEAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:75 CMP #3
    case 0xC0FC3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:75 CMP #3
    // Overlapping static entry reached from 0xC0FC3C.
    case 0xC0FC3E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:76 BEQL @UNKNOWN14
    case 0xC0FC3F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:76 BEQL @UNKNOWN14
    case 0xC0FC41: {
        Instruction step(cpu, 0x4C, 0x00FDCBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:77 CMP #4
    case 0xC0FC44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:77 CMP #4
    // Overlapping static entry reached from 0xC0FC44.
    case 0xC0FC46: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:78 BEQL @UNKNOWN15
    case 0xC0FC47: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:78 BEQL @UNKNOWN15
    case 0xC0FC49: {
        Instruction step(cpu, 0x4C, 0x00FDDDu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:79 CMP #<-1
    case 0xC0FC4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:79 CMP #<-1
    // Overlapping static entry reached from 0xC0FC4C.
    case 0xC0FC4E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:80 BEQL @UNKNOWN35
    case 0xC0FC4F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:80 BEQL @UNKNOWN35
    case 0xC0FC51: {
        Instruction step(cpu, 0x4C, 0x00FEE9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:81 JMP @UNKNOWN36
    case 0xC0FC54: {
        Instruction step(cpu, 0x4C, 0x00FEEFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:83 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FC57: {
        Instruction step(cpu, 0xAD, 0x00B6ACu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:84 CLC
    case 0xC0FC5A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:85 ADC #8
    case 0xC0FC5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:85 ADC #8
    // Overlapping static entry reached from 0xC0FC5B.
    case 0xC0FC5D: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:86 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FC5E: {
        Instruction step(cpu, 0x8D, 0x00B6ACu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:87 BRA @UNKNOWN8
    case 0xC0FC61: {
        Instruction step(cpu, 0x80, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:89 AND #$00FF
    case 0xC0FC63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC0FC63.
    case 0xC0FC65: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:90 CLC
    case 0xC0FC66: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:91 ADC #$2000
    case 0xC0FC67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:91 ADC #$2000
    // Overlapping static entry reached from 0xC0FC67.
    case 0xC0FC69: {
        Instruction step(cpu, 0x20, 0x0016A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:92 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FC6A: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:92 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FC6C: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:92 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FC6E: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:92 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FC70: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:93 STA [@VIRTUAL06]
    case 0xC0FC72: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC74: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC76: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC78: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC7A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:95 INC @VIRTUAL06
    case 0xC0FC7C: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC7E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC80: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC82: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC84: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:97 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FC86: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:97 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FC88: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:97 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FC8A: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:97 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FC8C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:98 INC @VIRTUAL06
    case 0xC0FC8E: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:99 INC @VIRTUAL06
    case 0xC0FC90: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FC92: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FC94: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FC96: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FC98: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:101 INC @VIRTUAL04
    case 0xC0FC9A: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:103 LDA [@LOCAL04]
    case 0xC0FC9C: {
        Instruction step(cpu, 0xA7, 0x00001Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:104 AND #$00FF
    case 0xC0FC9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:104 AND #$00FF
    // Overlapping static entry reached from 0xC0FC9E.
    case 0xC0FCA0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:105 BNE @UNKNOWN7
    case 0xC0FCA1: {
        Instruction step(cpu, 0xD0, 0x0000C0u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:106 LDA @VIRTUAL04
    case 0xC0FCA3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:107 LSR
    case 0xC0FCA5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:108 STA @VIRTUAL02
    case 0xC0FCA6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:109 LDA @LOCAL05
    case 0xC0FCA8: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:110 ASL
    case 0xC0FCAA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:111 ASL
    case 0xC0FCAB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:112 ASL
    case 0xC0FCAC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:113 ASL
    case 0xC0FCAD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:114 ASL
    case 0xC0FCAE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:115 CLC
    case 0xC0FCAF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:116 ADC #$6C10
    case 0xC0FCB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x006C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:116 ADC #$6C10
    // Overlapping static entry reached from 0xC0FCB0.
    case 0xC0FCB2: {
        Instruction step(cpu, 0x6C, 0x00E538u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:117 SEC
    case 0xC0FCB3: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:118 SBC @VIRTUAL02
    case 0xC0FCB4: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:119 STA @LOCAL02
    case 0xC0FCB6: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:120 LDA @LOCAL07
    case 0xC0FCB8: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:121 ASL
    case 0xC0FCBA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:122 ASL
    case 0xC0FCBB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:123 ASL
    case 0xC0FCBC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:124 ASL
    case 0xC0FCBD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:125 ASL
    case 0xC0FCBE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:126 ASL
    case 0xC0FCBF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:127 CLC
    case 0xC0FCC0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:128 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FCC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:128 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FCC1.
    case 0xC0FCC3: {
        Instruction step(cpu, 0x81, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCC4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FCC3.
    case 0xC0FCC5: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCC6: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCC7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCC9: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCCA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCCC: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:130 REP #PROC_FLAGS::ACCUM8
    case 0xC0FCCE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FCD0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FCD2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FCD4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FCD6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:132 LDA @LOCAL02
    case 0xC0FCD8: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:133 TAY
    case 0xC0FCDA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:134 LDA @VIRTUAL04
    case 0xC0FCDB: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:135 ASL
    case 0xC0FCDD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:136 TAX
    case 0xC0FCDE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FCDF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:138 LDA #0
    case 0xC0FCE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:139 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FCE3: {
        Instruction step(cpu, 0x22, 0xC4BFFEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:139 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FCE1.
    case 0xC0FCE4: {
        Instruction step(cpu, 0xFE, 0x00C4BFu, 3u, AddressMode::AbsoluteIndexedX);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:140 JMP @UNKNOWN36
    case 0xC0FCE7: {
        Instruction step(cpu, 0x4C, 0x00FEEFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:143 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FCEA: {
        Instruction step(cpu, 0xAD, 0x00B6ACu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:144 CLC
    case 0xC0FCED: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:145 ADC #16
    case 0xC0FCEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:145 ADC #16
    // Overlapping static entry reached from 0xC0FCEE.
    case 0xC0FCF0: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:146 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FCF1: {
        Instruction step(cpu, 0x8D, 0x00B6ACu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:147 BRA @UNKNOWN11
    case 0xC0FCF4: {
        Instruction step(cpu, 0x80, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:149 AND #$00FF
    case 0xC0FCF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC0FCF6.
    case 0xC0FCF8: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:150 CLC
    case 0xC0FCF9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:151 ADC #$2400
    case 0xC0FCFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:151 ADC #$2400
    // Overlapping static entry reached from 0xC0FCFA.
    case 0xC0FCFC: {
        Instruction step(cpu, 0x24, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FCFD: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FCFC.
    case 0xC0FCFE: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FCFF: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FCFE.
    case 0xC0FD00: {
        Instruction step(cpu, 0x06, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FD01: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FD00.
    case 0xC0FD02: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FD03: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:153 STA [@VIRTUAL06]
    case 0xC0FD05: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:154 INC @VIRTUAL06
    case 0xC0FD07: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:155 INC @VIRTUAL06
    case 0xC0FD09: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FD0B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FD0D: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FD0F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FD11: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:157 LDA [@LOCAL04]
    case 0xC0FD13: {
        Instruction step(cpu, 0xA7, 0x00001Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:158 AND #$00FF
    case 0xC0FD15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:158 AND #$00FF
    // Overlapping static entry reached from 0xC0FD15.
    case 0xC0FD17: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:159 CLC
    case 0xC0FD18: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:160 ADC #$2410
    case 0xC0FD19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x002410u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:160 ADC #$2410
    // Overlapping static entry reached from 0xC0FD19.
    case 0xC0FD1B: {
        Instruction step(cpu, 0x24, 0x000087u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:161 STA [@VIRTUAL0A]
    case 0xC0FD1C: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:161 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC0FD1B.
    case 0xC0FD1D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:162 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FD1E: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:162 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FD20: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:162 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FD22: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:162 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FD24: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:163 INC @VIRTUAL06
    case 0xC0FD26: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:164 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FD28: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:164 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FD2A: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:164 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FD2C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:164 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FD2E: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:165 INC @VIRTUAL0A
    case 0xC0FD30: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:166 INC @VIRTUAL0A
    case 0xC0FD32: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:167 INC @VIRTUAL04
    case 0xC0FD34: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:169 LDA [@LOCAL04]
    case 0xC0FD36: {
        Instruction step(cpu, 0xA7, 0x00001Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:170 AND #$00FF
    case 0xC0FD38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:170 AND #$00FF
    // Overlapping static entry reached from 0xC0FD38.
    case 0xC0FD3A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:171 BNE @UNKNOWN10
    case 0xC0FD3B: {
        Instruction step(cpu, 0xD0, 0x0000B9u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:172 LDA @VIRTUAL04
    case 0xC0FD3D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:173 LSR
    case 0xC0FD3F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:174 STA @VIRTUAL02
    case 0xC0FD40: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:175 LDA @LOCAL05
    case 0xC0FD42: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:176 ASL
    case 0xC0FD44: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:177 ASL
    case 0xC0FD45: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:178 ASL
    case 0xC0FD46: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:179 ASL
    case 0xC0FD47: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:180 ASL
    case 0xC0FD48: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:181 CLC
    case 0xC0FD49: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:182 ADC #$6C10
    case 0xC0FD4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x006C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:182 ADC #$6C10
    // Overlapping static entry reached from 0xC0FD4A.
    case 0xC0FD4C: {
        Instruction step(cpu, 0x6C, 0x00E538u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:183 SEC
    case 0xC0FD4D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:184 SBC @VIRTUAL02
    case 0xC0FD4E: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:185 STA @VIRTUAL02
    case 0xC0FD50: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:186 LDA @LOCAL07
    case 0xC0FD52: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:187 ASL
    case 0xC0FD54: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:188 ASL
    case 0xC0FD55: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:189 ASL
    case 0xC0FD56: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:190 ASL
    case 0xC0FD57: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:191 ASL
    case 0xC0FD58: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:192 ASL
    case 0xC0FD59: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:193 CLC
    case 0xC0FD5A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:194 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FD5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:194 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FD5B.
    case 0xC0FD5D: {
        Instruction step(cpu, 0x81, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD5E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FD5D.
    case 0xC0FD5F: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD60: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD61: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD63: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD64: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD66: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:196 REP #PROC_FLAGS::ACCUM8
    case 0xC0FD68: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FD6A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FD6C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FD6E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FD70: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:198 LDY @VIRTUAL02
    case 0xC0FD72: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:199 LDA @VIRTUAL04
    case 0xC0FD74: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:200 ASL
    case 0xC0FD76: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:201 TAX
    case 0xC0FD77: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:202 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FD78: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:203 LDA #0
    case 0xC0FD7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:204 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FD7C: {
        Instruction step(cpu, 0x22, 0xC4BFFEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:204 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FD7A.
    case 0xC0FD7D: {
        Instruction step(cpu, 0xFE, 0x00C4BFu, 3u, AddressMode::AbsoluteIndexedX);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:205 LDA @LOCAL05
    case 0xC0FD80: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:207 CMP #31
    case 0xC0FD82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:207 CMP #31
    // Overlapping static entry reached from 0xC0FD82.
    case 0xC0FD84: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:208 BEQ @UNKNOWN12
    case 0xC0FD85: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:209 LDA @VIRTUAL02
    case 0xC0FD87: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:210 CLC
    case 0xC0FD89: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:211 ADC #32
    case 0xC0FD8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:211 ADC #32
    // Overlapping static entry reached from 0xC0FD8A.
    case 0xC0FD8C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:212 STA @LOCAL01
    case 0xC0FD8D: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:213 BRA @UNKNOWN13
    case 0xC0FD8F: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:215 LDA @VIRTUAL02
    case 0xC0FD91: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:216 SEC
    case 0xC0FD93: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:217 SBC #$03E0
    case 0xC0FD94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:217 SBC #$03E0
    // Overlapping static entry reached from 0xC0FD94.
    case 0xC0FD96: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:218 STA @LOCAL01
    case 0xC0FD97: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:218 STA @LOCAL01
    // Overlapping static entry reached from 0xC0FD96.
    case 0xC0FD98: {
        Instruction step(cpu, 0x12, 0x0000A5u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:220 LDA @LOCAL06
    case 0xC0FD99: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:220 LDA @LOCAL06
    // Overlapping static entry reached from 0xC0FD98.
    case 0xC0FD9A: {
        Instruction step(cpu, 0x20, 0x000A0Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:221 ASL
    case 0xC0FD9B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:222 ASL
    case 0xC0FD9C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:223 ASL
    case 0xC0FD9D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:224 ASL
    case 0xC0FD9E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:225 ASL
    case 0xC0FD9F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:226 ASL
    case 0xC0FDA0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:227 CLC
    case 0xC0FDA1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:228 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FDA2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:228 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FDA2.
    case 0xC0FDA4: {
        Instruction step(cpu, 0x81, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDA5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FDA4.
    case 0xC0FDA6: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDA7: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDA8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDAA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDAB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDAD: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:230 REP #PROC_FLAGS::ACCUM8
    case 0xC0FDAF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:231 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FDB1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:231 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FDB3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:231 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FDB5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:231 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FDB7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:232 LDA @LOCAL01
    case 0xC0FDB9: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:233 TAY
    case 0xC0FDBB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:234 LDA @VIRTUAL04
    case 0xC0FDBC: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:235 ASL
    case 0xC0FDBE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:236 TAX
    case 0xC0FDBF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:237 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FDC0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:238 LDA #0
    case 0xC0FDC2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:239 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FDC4: {
        Instruction step(cpu, 0x22, 0xC4BFFEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:239 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FDC2.
    case 0xC0FDC5: {
        Instruction step(cpu, 0xFE, 0x00C4BFu, 3u, AddressMode::AbsoluteIndexedX);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:240 JMP @UNKNOWN36
    case 0xC0FDC8: {
        Instruction step(cpu, 0x4C, 0x00FEEFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:243 LDA [@LOCAL04]
    case 0xC0FDCB: {
        Instruction step(cpu, 0xA7, 0x00001Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:244 AND #$00FF
    case 0xC0FDCD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:244 AND #$00FF
    // Overlapping static entry reached from 0xC0FDCD.
    case 0xC0FDCF: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:245 ASL
    case 0xC0FDD0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:246 ASL
    case 0xC0FDD1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:247 ASL
    case 0xC0FDD2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:248 CLC
    case 0xC0FDD3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:249 ADC CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FDD4: {
        Instruction step(cpu, 0x6D, 0x00B6ACu, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:250 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FDD7: {
        Instruction step(cpu, 0x8D, 0x00B6ACu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:251 JMP @UNKNOWN36
    case 0xC0FDDA: {
        Instruction step(cpu, 0x4C, 0x00FEEFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:253 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC0FDDD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B5u : 0x009AB5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:253 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC0FDDD.
    case 0xC0FDDF: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:254 LDA __BSS_START__,X
    case 0xC0FDE0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:255 AND #$00FF
    case 0xC0FDE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:255 AND #$00FF
    // Overlapping static entry reached from 0xC0FDE3.
    case 0xC0FDE5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:256 BEQL @UNKNOWN34
    case 0xC0FDE6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:256 BEQL @UNKNOWN34
    case 0xC0FDE8: {
        Instruction step(cpu, 0x4C, 0x00FED5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:257 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FDEB: {
        Instruction step(cpu, 0xAD, 0x00B6ACu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:258 CLC
    case 0xC0FDEE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:259 ADC #16
    case 0xC0FDEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:259 ADC #16
    // Overlapping static entry reached from 0xC0FDEF.
    case 0xC0FDF1: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:260 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FDF2: {
        Instruction step(cpu, 0x8D, 0x00B6ACu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:261 LDY #0
    case 0xC0FDF5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:261 LDY #0
    // Overlapping static entry reached from 0xC0FDF5.
    case 0xC0FDF7: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:262 BRA @UNKNOWN30
    case 0xC0FDF8: {
        Instruction step(cpu, 0x80, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:264 AND #$00FF
    case 0xC0FDFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:264 AND #$00FF
    // Overlapping static entry reached from 0xC0FDFA.
    case 0xC0FDFC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:265 STA @VIRTUAL02
    case 0xC0FDFD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:266 AND #$00F0
    case 0xC0FDFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000F0u : 0x0000F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:266 AND #$00F0
    // Overlapping static entry reached from 0xC0FDFF.
    case 0xC0FE01: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:267 CLC
    case 0xC0FE02: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:268 ADC @VIRTUAL02
    case 0xC0FE03: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:269 CLC
    case 0xC0FE05: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:270 ADC #$2400
    case 0xC0FE06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:270 ADC #$2400
    // Overlapping static entry reached from 0xC0FE06.
    case 0xC0FE08: {
        Instruction step(cpu, 0x24, 0x000048u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:271 PHA
    case 0xC0FE09: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:272 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FE0A: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:272 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FE0C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:272 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FE0E: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:272 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FE10: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:273 PLA
    case 0xC0FE12: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:274 STA [@VIRTUAL06]
    case 0xC0FE13: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:275 INC @VIRTUAL06
    case 0xC0FE15: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:276 INC @VIRTUAL06
    case 0xC0FE17: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:277 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FE19: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:277 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FE1B: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:277 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FE1D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:277 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FE1F: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:278 LDA __BSS_START__,X
    case 0xC0FE21: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:279 AND #$00FF
    case 0xC0FE24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:279 AND #$00FF
    // Overlapping static entry reached from 0xC0FE24.
    case 0xC0FE26: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:280 STA @VIRTUAL02
    case 0xC0FE27: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:281 AND #$00F0
    case 0xC0FE29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000F0u : 0x0000F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:281 AND #$00F0
    // Overlapping static entry reached from 0xC0FE29.
    case 0xC0FE2B: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:282 CLC
    case 0xC0FE2C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:283 ADC @VIRTUAL02
    case 0xC0FE2D: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:284 CLC
    case 0xC0FE2F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:285 ADC #$2410
    case 0xC0FE30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x002410u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:285 ADC #$2410
    // Overlapping static entry reached from 0xC0FE30.
    case 0xC0FE32: {
        Instruction step(cpu, 0x24, 0x000087u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:286 STA [@VIRTUAL0A]
    case 0xC0FE33: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:286 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC0FE32.
    case 0xC0FE34: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:287 INC @VIRTUAL0A
    case 0xC0FE35: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:288 INC @VIRTUAL0A
    case 0xC0FE37: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:289 INX
    case 0xC0FE39: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:290 INC @VIRTUAL04
    case 0xC0FE3A: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:291 INY
    case 0xC0FE3C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:293 LDA __BSS_START__,X
    case 0xC0FE3D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:294 AND #$00FF
    case 0xC0FE40: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:294 AND #$00FF
    // Overlapping static entry reached from 0xC0FE40.
    case 0xC0FE42: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:295 BEQ @UNKNOWN31
    case 0xC0FE43: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:296 CPY #24
    case 0xC0FE45: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:296 CPY #24
    // Overlapping static entry reached from 0xC0FE45.
    case 0xC0FE47: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:297 BCC @UNKNOWN29
    case 0xC0FE48: {
        Instruction step(cpu, 0x90, 0x0000B0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:299 LDA @VIRTUAL04
    case 0xC0FE4A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:300 LSR
    case 0xC0FE4C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:301 STA @VIRTUAL02
    case 0xC0FE4D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:302 LDA @LOCAL05
    case 0xC0FE4F: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:303 ASL
    case 0xC0FE51: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:304 ASL
    case 0xC0FE52: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:305 ASL
    case 0xC0FE53: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:306 ASL
    case 0xC0FE54: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:307 ASL
    case 0xC0FE55: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:308 CLC
    case 0xC0FE56: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:309 ADC #$6C10
    case 0xC0FE57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x006C10u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:309 ADC #$6C10
    // Overlapping static entry reached from 0xC0FE57.
    case 0xC0FE59: {
        Instruction step(cpu, 0x6C, 0x00E538u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:310 SEC
    case 0xC0FE5A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:311 SBC @VIRTUAL02
    case 0xC0FE5B: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:312 STA @VIRTUAL02
    case 0xC0FE5D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:313 LDA @LOCAL07
    case 0xC0FE5F: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:314 ASL
    case 0xC0FE61: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:315 ASL
    case 0xC0FE62: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:316 ASL
    case 0xC0FE63: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:317 ASL
    case 0xC0FE64: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:318 ASL
    case 0xC0FE65: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:319 ASL
    case 0xC0FE66: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:320 CLC
    case 0xC0FE67: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:321 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FE68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:321 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FE68.
    case 0xC0FE6A: {
        Instruction step(cpu, 0x81, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE6B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FE6A.
    case 0xC0FE6C: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE6D: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE6E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE70: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE71: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE73: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:323 REP #PROC_FLAGS::ACCUM8
    case 0xC0FE75: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:324 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FE77: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:324 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FE79: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:324 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FE7B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:324 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FE7D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:325 LDY @VIRTUAL02
    case 0xC0FE7F: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:326 LDA @VIRTUAL04
    case 0xC0FE81: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:327 ASL
    case 0xC0FE83: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:328 TAX
    case 0xC0FE84: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:329 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FE85: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:330 LDA #0
    case 0xC0FE87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:331 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FE89: {
        Instruction step(cpu, 0x22, 0xC4BFFEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:331 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FE87.
    case 0xC0FE8A: {
        Instruction step(cpu, 0xFE, 0x00C4BFu, 3u, AddressMode::AbsoluteIndexedX);
        step.increment();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:333 LDA @LOCAL05
    case 0xC0FE8D: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:334 CMP #$001F
    case 0xC0FE8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:334 CMP #$001F
    // Overlapping static entry reached from 0xC0FE8F.
    case 0xC0FE91: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:335 BEQ @UNKNOWN32
    case 0xC0FE92: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:336 LDA @VIRTUAL02
    case 0xC0FE94: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:337 CLC
    case 0xC0FE96: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:338 ADC #32
    case 0xC0FE97: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:338 ADC #32
    // Overlapping static entry reached from 0xC0FE97.
    case 0xC0FE99: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:339 STA @LOCAL01
    case 0xC0FE9A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:340 BRA @UNKNOWN33
    case 0xC0FE9C: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:343 LDA @VIRTUAL02
    case 0xC0FE9E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:344 SEC
    case 0xC0FEA0: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:345 SBC #$03E0
    case 0xC0FEA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:345 SBC #$03E0
    // Overlapping static entry reached from 0xC0FEA1.
    case 0xC0FEA3: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:346 STA @LOCAL01
    case 0xC0FEA4: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:346 STA @LOCAL01
    // Overlapping static entry reached from 0xC0FEA3.
    case 0xC0FEA5: {
        Instruction step(cpu, 0x12, 0x0000A5u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:348 LDA @LOCAL06
    case 0xC0FEA6: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:348 LDA @LOCAL06
    // Overlapping static entry reached from 0xC0FEA5.
    case 0xC0FEA7: {
        Instruction step(cpu, 0x20, 0x000A0Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:349 ASL
    case 0xC0FEA8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:350 ASL
    case 0xC0FEA9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:351 ASL
    case 0xC0FEAA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:352 ASL
    case 0xC0FEAB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:353 ASL
    case 0xC0FEAC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:354 ASL
    case 0xC0FEAD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:355 CLC
    case 0xC0FEAE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:356 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FEAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:356 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FEAF.
    case 0xC0FEB1: {
        Instruction step(cpu, 0x81, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEB2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FEB1.
    case 0xC0FEB3: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEB4: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEB5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEB7: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEB8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEBA: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:358 REP #PROC_FLAGS::ACCUM8
    case 0xC0FEBC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:359 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FEBE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:359 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FEC0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:359 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FEC2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:359 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FEC4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:360 LDA @LOCAL01
    case 0xC0FEC6: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:361 TAY
    case 0xC0FEC8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:362 LDA @VIRTUAL04
    case 0xC0FEC9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:363 ASL
    case 0xC0FECB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:364 TAX
    case 0xC0FECC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:365 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FECD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:366 LDA #0
    case 0xC0FECF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:367 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FED1: {
        Instruction step(cpu, 0x22, 0xC4BFFEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:367 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FECF.
    case 0xC0FED2: {
        Instruction step(cpu, 0xFE, 0x00C4BFu, 3u, AddressMode::AbsoluteIndexedX);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:369 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FED5: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:369 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FED7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:369 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FED9: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:369 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FEDB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:370 DEC @VIRTUAL06
    case 0xC0FEDD: {
        Instruction step(cpu, 0xC6, 0x000006u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:371 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FEDF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:371 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FEE1: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:371 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FEE3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:371 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FEE5: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:372 BRA @UNKNOWN36
    case 0xC0FEE7: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:375 LDA #.LOWORD(-1)
    case 0xC0FEE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:375 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0FEE9.
    case 0xC0FEEB: {
        Instruction step(cpu, 0xFF, 0xB6AC8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:376 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FEEC: {
        Instruction step(cpu, 0x8D, 0x00B6ACu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:378 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FEEF: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:378 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FEF1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:378 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FEF3: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:378 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FEF5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:379 INC @VIRTUAL06
    case 0xC0FEF7: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:380 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0FEF9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:380 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0FEFB: {
        Instruction step(cpu, 0x8D, 0x00B6B0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:380 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0FEFE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:380 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0FF00: {
        Instruction step(cpu, 0x8D, 0x00B6B2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:382 LDA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0FF03: {
        Instruction step(cpu, 0xAD, 0x00B6AEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:383 CMP BG3_Y_POS
    case 0xC0FF06: {
        Instruction step(cpu, 0xCD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:384 BCS @UNKNOWN38
    case 0xC0FF09: {
        Instruction step(cpu, 0xB0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:385 LDA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0FF0B: {
        Instruction step(cpu, 0xAD, 0x00B6AEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:386 CLC
    case 0xC0FF0E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:387 ADC #8
    case 0xC0FF0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:387 ADC #8
    // Overlapping static entry reached from 0xC0FF0F.
    case 0xC0FF11: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:388 STA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0FF12: {
        Instruction step(cpu, 0x8D, 0x00B6AEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0FF15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000034u : 0x000B34u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    // Overlapping static entry reached from 0xC0FF15.
    case 0xC0FF17: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0FF18: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0FF1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    // Overlapping static entry reached from 0xC0FF1A.
    case 0xC0FF1C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0FF1D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:390 LDA BG3_Y_POS
    case 0xC0FF1F: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:391 LSR
    case 0xC0FF22: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:392 LSR
    case 0xC0FF23: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:393 LSR
    case 0xC0FF24: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:394 DEC
    case 0xC0FF25: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:395 AND #$001F
    case 0xC0FF26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:395 AND #$001F
    // Overlapping static entry reached from 0xC0FF26.
    case 0xC0FF28: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:396 ASL
    case 0xC0FF29: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:397 ASL
    case 0xC0FF2A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:398 ASL
    case 0xC0FF2B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:399 ASL
    case 0xC0FF2C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:400 ASL
    case 0xC0FF2D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:401 CLC
    case 0xC0FF2E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:402 ADC #$6C00
    case 0xC0FF2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x006C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:402 ADC #$6C00
    // Overlapping static entry reached from 0xC0FF2F.
    case 0xC0FF31: {
        Instruction step(cpu, 0x6C, 0x00A2A8u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:403 TAY
    case 0xC0FF32: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:404 LDX #64
    case 0xC0FF33: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:404 LDX #64
    // Overlapping static entry reached from 0xC0FF33.
    case 0xC0FF35: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:405 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FF36: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:406 LDA #3
    case 0xC0FF38: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:407 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FF3A: {
        Instruction step(cpu, 0x22, 0xC4BFFEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:407 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FF38.
    case 0xC0FF3B: {
        Instruction step(cpu, 0xFE, 0x00C4BFu, 3u, AddressMode::AbsoluteIndexedX);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:410 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0FF3E: {
        Instruction step(cpu, 0xAD, 0x00B6B4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:410 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0FF41: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:410 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0FF43: {
        Instruction step(cpu, 0xAD, 0x00B6B6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:410 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0FF46: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:411 CLC
    case 0xC0FF48: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:412 LDA @VIRTUAL06 + fixed_point::fraction
    case 0xC0FF49: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:413 ADC #$4000
    case 0xC0FF4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:413 ADC #$4000
    // Overlapping static entry reached from 0xC0FF4B.
    case 0xC0FF4D: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:414 STA @VIRTUAL06 + fixed_point::fraction
    case 0xC0FF4E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:415 BCC @UNKNOWN39
    case 0xC0FF50: {
        Instruction step(cpu, 0x90, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:416 INC @VIRTUAL06 + fixed_point::integer
    case 0xC0FF52: {
        Instruction step(cpu, 0xE6, 0x000008u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:418 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0FF54: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:418 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0FF56: {
        Instruction step(cpu, 0x8D, 0x00B6B4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:418 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0FF59: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:418 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0FF5B: {
        Instruction step(cpu, 0x8D, 0x00B6B6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:419 STA BG3_Y_POS
    case 0xC0FF5E: {
        Instruction step(cpu, 0x8D, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/credits_scroll_frame-jp.asm:420 JSR UNKNOWN_C0AD9F
    case 0xC0FF61: {
        Instruction step(cpu, 0x20, 0x00AD7Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:421 END_C_FUNCTION
    case 0xC0FF64: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:421 END_C_FUNCTION
    case 0xC0FF65: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
