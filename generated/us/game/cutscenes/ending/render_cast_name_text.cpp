// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/render_cast_name_text.asm
bool resume_ending_render_cast_name_text(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/render_cast_name_text.asm:3 BEGIN_C_FUNCTION
    case 0xC4E583: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E585: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E586: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E587: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E588: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x00FFD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E588.
    case 0xC4E58A: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E58B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/render_cast_name_text.asm:18 END_STACK_VARS
    case 0xC4E58C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:19 STY @LOCAL09
    case 0xC4E58D: {
        Instruction step(cpu, 0x84, 0x000028u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:19 STY @LOCAL09
    // Overlapping static entry reached from 0xC4E58A.
    case 0xC4E58E: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:20 STX @LOCAL08
    case 0xC4E58F: {
        Instruction step(cpu, 0x86, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:21 STA @VIRTUAL02
    case 0xC4E591: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    case 0xC4E593: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000054u : 0x00F054u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    // Overlapping static entry reached from 0xC4E593.
    case 0xC4E595: {
        Instruction step(cpu, 0xF0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    case 0xC4E596: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    // Overlapping static entry reached from 0xC4E595.
    case 0xC4E597: {
        Instruction step(cpu, 0x22, 0x00C3A9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    case 0xC4E598: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    // Overlapping static entry reached from 0xC4E598.
    case 0xC4E59A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/render_cast_name_text.asm:22 LOADPTR FONT_PTR_TABLE, @LOCAL07
    case 0xC4E59B: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:23 STZ VWF_TILE
    case 0xC4E59D: {
        Instruction step(cpu, 0x9C, 0x009E25u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:24 STZ VWF_X
    case 0xC4E5A0: {
        Instruction step(cpu, 0x9C, 0x009E23u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E5A3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:26 LDA #<-1
    case 0xC4E5A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0085FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:27 STA @LOCAL00
    case 0xC4E5A7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:27 STA @LOCAL00
    // Overlapping static entry reached from 0xC4E5A5.
    case 0xC4E5A8: {
        Instruction step(cpu, 0x0E, 0x0040A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:28 LDX #32 * 26
    case 0xC4E5A9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000340u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:28 LDX #32 * 26
    // Overlapping static entry reached from 0xC4E5A9.
    case 0xC4E5AB: {
        Instruction step(cpu, 0x03, 0x0000C2u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC4E5AC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:29 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E5AB.
    case 0xC4E5AD: {
        Instruction step(cpu, 0x20, 0x0092A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:30 LDA #.LOWORD(VWF_BUFFER)
    case 0xC4E5AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000092u : 0x003492u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:30 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC4E5AE.
    case 0xC4E5B0: {
        Instruction step(cpu, 0x34, 0x000022u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:31 JSL MEMSET16
    case 0xC4E5B1: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:31 JSL MEMSET16
    // Overlapping static entry reached from 0xC4E5B0.
    case 0xC4E5B2: {
        Instruction step(cpu, 0xFC, 0x00C08Eu, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:32 STZ TEXT_RENDER_STATE + 2
    case 0xC4E5B5: {
        Instruction step(cpu, 0x9C, 0x009654u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:33 STZ TEXT_RENDER_STATE
    case 0xC4E5B8: {
        Instruction step(cpu, 0x9C, 0x009652u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:34 LDA @VIRTUAL02
    case 0xC4E5BB: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5BD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5BF: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5C0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5C2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5C3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/render_cast_name_text.asm:35 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E5C5: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC4E5C7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E5C9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E5CB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E5CD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E5CF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:38 LDX @LOCAL08
    case 0xC4E5D1: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:39 LDA #.LOWORD(-1)
    case 0xC4E5D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:39 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4E5D3.
    case 0xC4E5D5: {
        Instruction step(cpu, 0xFF, 0xFF9922u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:40 JSL UNKNOWN_C1FF99
    case 0xC4E5D6: {
        Instruction step(cpu, 0x22, 0xC1FF99u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:40 JSL UNKNOWN_C1FF99
    // Overlapping static entry reached from 0xC4E5D5.
    case 0xC4E5D9: {
        Instruction step(cpu, 0xC1, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:41 LDA #0
    case 0xC4E5DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4E5D9.
    case 0xC4E5DB: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4E5DA.
    case 0xC4E5DC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:42 STA @VIRTUAL04
    case 0xC4E5DD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:43 JMP @UNKNOWN3
    case 0xC4E5DF: {
        Instruction step(cpu, 0x4C, 0x00E6B8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:45 AND #$00FF
    case 0xC4E5E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC4E5E2.
    case 0xC4E5E4: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:46 SEC
    case 0xC4E5E5: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:47 SBC #$50
    case 0xC4E5E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:47 SBC #$50
    // Overlapping static entry reached from 0xC4E5E6.
    case 0xC4E5E8: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:48 AND #$007F
    case 0xC4E5E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:48 AND #$007F
    // Overlapping static entry reached from 0xC4E5E9.
    case 0xC4E5EB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:49 STA @LOCAL06
    case 0xC4E5EC: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:50 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E5EE: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:50 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E5F0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:50 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E5F2: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:50 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E5F4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:51 LDY #4
    case 0xC4E5F6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:51 LDY #4
    // Overlapping static entry reached from 0xC4E5F6.
    case 0xC4E5F8: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:52 LDA [@VIRTUAL06],Y
    case 0xC4E5F9: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:53 PHA
    case 0xC4E5FB: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:54 INY
    case 0xC4E5FC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:55 INY
    case 0xC4E5FD: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:56 LDA [@VIRTUAL06],Y
    case 0xC4E5FE: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:57 STA @VIRTUAL0A+2
    case 0xC4E600: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:58 PLA
    case 0xC4E602: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:59 STA @VIRTUAL0A
    case 0xC4E603: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:60 LDA @LOCAL06
    case 0xC4E605: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:61 PHA
    case 0xC4E607: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:62 LDY #8
    case 0xC4E608: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:62 LDY #8
    // Overlapping static entry reached from 0xC4E608.
    case 0xC4E60A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:63 LDA [@LOCAL07],Y
    case 0xC4E60B: {
        Instruction step(cpu, 0xB7, 0x000022u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:64 PLY
    case 0xC4E60D: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:65 JSL MULT16
    case 0xC4E60E: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:66 CLC
    case 0xC4E612: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:67 ADC @VIRTUAL0A
    case 0xC4E613: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:68 STA @VIRTUAL0A
    case 0xC4E615: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:69 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E617: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:69 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E619: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:69 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E61B: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:69 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E61D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E61F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E61F.
    case 0xC4E621: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E622: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E624: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E625: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E627: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:70 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E629: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:71 LDA @LOCAL06
    case 0xC4E62B: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:72 CLC
    case 0xC4E62D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:73 ADC @VIRTUAL06
    case 0xC4E62E: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:74 STA @VIRTUAL06
    case 0xC4E630: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E632: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:76 LDA [@VIRTUAL06]
    case 0xC4E634: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:77 CLC
    case 0xC4E636: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:78 ADC CHARACTER_PADDING
    case 0xC4E637: {
        Instruction step(cpu, 0x6D, 0x005E6Du, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC4E63A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:80 AND #$00FF
    case 0xC4E63C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC4E63C.
    case 0xC4E63E: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:81 TAY
    case 0xC4E63F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:82 STY @LOCAL05
    case 0xC4E640: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:83 CPY #8
    case 0xC4E642: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:83 CPY #8
    // Overlapping static entry reached from 0xC4E642.
    case 0xC4E644: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/ending/render_cast_name_text.asm:84 BLTEQ @UNKNOWN2
    case 0xC4E645: {
        Instruction step(cpu, 0x90, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/ending/render_cast_name_text.asm:84 BLTEQ @UNKNOWN2
    case 0xC4E647: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:86 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E649: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:86 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E64B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:86 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E64D: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:86 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4E64F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:87 LDA #10
    case 0xC4E651: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:87 LDA #10
    // Overlapping static entry reached from 0xC4E651.
    case 0xC4E653: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:88 CLC
    case 0xC4E654: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:89 ADC @VIRTUAL06
    case 0xC4E655: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:90 STA @VIRTUAL06
    case 0xC4E657: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:91 STA @LOCAL04
    case 0xC4E659: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:92 LDA @VIRTUAL06+2
    case 0xC4E65B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:93 STA @LOCAL04+2
    case 0xC4E65D: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:94 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E65F: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:94 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E661: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:94 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E663: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:94 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E665: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:95 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E667: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:95 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E669: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:95 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E66B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:95 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E66D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:96 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4E66F: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:96 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4E671: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:96 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4E673: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:96 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4E675: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:97 LDA [@VIRTUAL06]
    case 0xC4E677: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:98 TAX
    case 0xC4E679: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:99 TYA
    case 0xC4E67A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:100 JSL UNKNOWN_C44B3A
    case 0xC4E67B: {
        Instruction step(cpu, 0x22, 0xC44B3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:101 LDY @LOCAL05
    case 0xC4E67F: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:102 TYA
    case 0xC4E681: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:103 SEC
    case 0xC4E682: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:104 SBC #8
    case 0xC4E683: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:104 SBC #8
    // Overlapping static entry reached from 0xC4E683.
    case 0xC4E685: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:105 TAY
    case 0xC4E686: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:106 STY @LOCAL05
    case 0xC4E687: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:107 LDA [@VIRTUAL06]
    case 0xC4E689: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:108 CLC
    case 0xC4E68B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:109 ADC @VIRTUAL0A
    case 0xC4E68C: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:110 STA @VIRTUAL0A
    case 0xC4E68E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:111 CPY #8
    case 0xC4E690: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:111 CPY #8
    // Overlapping static entry reached from 0xC4E690.
    case 0xC4E692: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/ending/render_cast_name_text.asm:112 BGT @UNKNOWN1
    case 0xC4E693: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/ending/render_cast_name_text.asm:112 BGT @UNKNOWN1
    case 0xC4E695: {
        Instruction step(cpu, 0xB0, 0x0000B2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:114 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E697: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:114 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E699: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:114 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E69B: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:114 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4E69D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E69F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E6A1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E6A3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:115 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E6A5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:116 LDY #10
    case 0xC4E6A7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:116 LDY #10
    // Overlapping static entry reached from 0xC4E6A7.
    case 0xC4E6A9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:117 LDA [@LOCAL07],Y
    case 0xC4E6AA: {
        Instruction step(cpu, 0xB7, 0x000022u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:118 TAX
    case 0xC4E6AC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:119 LDY @LOCAL05
    case 0xC4E6AD: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:120 TYA
    case 0xC4E6AF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:121 JSL UNKNOWN_C44B3A
    case 0xC4E6B0: {
        Instruction step(cpu, 0x22, 0xC44B3Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:122 INC @VIRTUAL02
    case 0xC4E6B4: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:123 INC @VIRTUAL04
    case 0xC4E6B6: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:125 LDX @VIRTUAL02
    case 0xC4E6B8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:126 LDA __BSS_START__,X
    case 0xC4E6BA: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:127 AND #$00FF
    case 0xC4E6BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xC4E6BD.
    case 0xC4E6BF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/ending/render_cast_name_text.asm:128 BNEL @UNKNOWN0
    case 0xC4E6C0: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/ending/render_cast_name_text.asm:128 BNEL @UNKNOWN0
    case 0xC4E6C2: {
        Instruction step(cpu, 0x4C, 0x00E5E2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:129 LDA @LOCAL08
    case 0xC4E6C5: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:130 JSL CHANGE_VWF_2BPP_TO_3_COLOUR
    case 0xC4E6C7: {
        Instruction step(cpu, 0x22, 0xC4EEE1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:131 LDA @LOCAL09
    case 0xC4E6CB: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:132 ASL
    case 0xC4E6CD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:133 ASL
    case 0xC4E6CE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:134 ASL
    case 0xC4E6CF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:135 STA @VIRTUAL04
    case 0xC4E6D0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:136 LDA #0
    case 0xC4E6D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:136 LDA #0
    // Overlapping static entry reached from 0xC4E6D2.
    case 0xC4E6D4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:137 STA @VIRTUAL02
    case 0xC4E6D5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:138 STA @LOCAL03
    case 0xC4E6D7: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:139 JMP @UNKNOWN6
    case 0xC4E6D9: {
        Instruction step(cpu, 0x4C, 0x00E789u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:141 LDA @LOCAL09
    case 0xC4E6DC: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:142 AND #$000F
    case 0xC4E6DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:142 AND #$000F
    // Overlapping static entry reached from 0xC4E6DE.
    case 0xC4E6E0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:143 STA @VIRTUAL02
    case 0xC4E6E1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:144 LDA @LOCAL09
    case 0xC4E6E3: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:145 AND #$03F0
    case 0xC4E6E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000F0u : 0x0003F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:145 AND #$03F0
    // Overlapping static entry reached from 0xC4E6E5.
    case 0xC4E6E7: {
        Instruction step(cpu, 0x03, 0x00000Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:146 ASL
    case 0xC4E6E8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:147 CLC
    case 0xC4E6E9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:148 ADC @VIRTUAL02
    case 0xC4E6EA: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:149 ASL
    case 0xC4E6EC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:150 ASL
    case 0xC4E6ED: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:151 ASL
    case 0xC4E6EE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:152 ASL
    case 0xC4E6EF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:153 TAY
    case 0xC4E6F0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:154 STY @LOCAL02
    case 0xC4E6F1: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E6F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E6F3.
    case 0xC4E6F5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E6F6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E6F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E6F8.
    case 0xC4E6FA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/render_cast_name_text.asm:155 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E6FB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:156 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC4E6FD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:156 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC4E6FF: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:156 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC4E701: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:156 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC4E703: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:157 LDA @LOCAL03
    case 0xC4E705: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:158 STA @VIRTUAL02
    case 0xC4E707: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:159 ASL
    case 0xC4E709: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:160 ASL
    case 0xC4E70A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:161 ASL
    case 0xC4E70B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:162 ASL
    case 0xC4E70C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:163 ASL
    case 0xC4E70D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:164 TAX
    case 0xC4E70E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:165 STX @LOCAL06
    case 0xC4E70F: {
        Instruction step(cpu, 0x86, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:166 TYA
    case 0xC4E711: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:167 CLC
    case 0xC4E712: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:168 ADC @VIRTUAL06
    case 0xC4E713: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:169 STA @VIRTUAL06
    case 0xC4E715: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:170 STA @LOCAL00
    case 0xC4E717: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:171 LDA @VIRTUAL06+2
    case 0xC4E719: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:172 STA @LOCAL00+2
    case 0xC4E71B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:173 TXA
    case 0xC4E71D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:174 CLC
    case 0xC4E71E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:175 ADC #.LOWORD(VWF_BUFFER)
    case 0xC4E71F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000092u : 0x003492u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:175 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC4E71F.
    case 0xC4E721: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E722: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC4E721.
    case 0xC4E723: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E724: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E725: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E727: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E728: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/render_cast_name_text.asm:176 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E72A: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:177 REP #PROC_FLAGS::ACCUM8
    case 0xC4E72C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:178 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E72E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:178 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E730: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:178 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E732: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:178 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E734: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:179 LDA #16
    case 0xC4E736: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:179 LDA #16
    // Overlapping static entry reached from 0xC4E736.
    case 0xC4E738: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:180 JSL MEMCPY24
    case 0xC4E739: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:181 LDY @LOCAL02
    case 0xC4E73D: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:182 TYA
    case 0xC4E73F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:183 CLC
    case 0xC4E740: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:184 ADC #256
    case 0xC4E741: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:184 ADC #256
    // Overlapping static entry reached from 0xC4E741.
    case 0xC4E743: {
        Instruction step(cpu, 0x01, 0x0000A6u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/render_cast_name_text.asm:185 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4E744: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/render_cast_name_text.asm:185 MOVE_INTX @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E743.
    case 0xC4E745: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/render_cast_name_text.asm:185 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4E746: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/render_cast_name_text.asm:185 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4E748: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:185 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xC4E74A: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:186 CLC
    case 0xC4E74C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:187 ADC @VIRTUAL06
    case 0xC4E74D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:188 STA @VIRTUAL06
    case 0xC4E74F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:189 STA @LOCAL00
    case 0xC4E751: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:190 LDA @VIRTUAL06+2
    case 0xC4E753: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:191 STA @LOCAL00+2
    case 0xC4E755: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:192 LDX @LOCAL06
    case 0xC4E757: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:193 TXA
    case 0xC4E759: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:194 CLC
    case 0xC4E75A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:195 ADC #.LOWORD(VWF_BUFFER) + 16
    case 0xC4E75B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A2u : 0x0034A2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:195 ADC #.LOWORD(VWF_BUFFER) + 16
    // Overlapping static entry reached from 0xC4E75B.
    case 0xC4E75D: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E75E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC4E75D.
    case 0xC4E75F: {
        Instruction step(cpu, 0x06, 0x00008Bu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E760: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E761: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E763: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E764: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/render_cast_name_text.asm:196 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4E766: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:197 REP #PROC_FLAGS::ACCUM8
    case 0xC4E768: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/render_cast_name_text.asm:198 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E76A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/render_cast_name_text.asm:198 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E76C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/render_cast_name_text.asm:198 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E76E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/render_cast_name_text.asm:198 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E770: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:199 LDA #16
    case 0xC4E772: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:199 LDA #16
    // Overlapping static entry reached from 0xC4E772.
    case 0xC4E774: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:200 JSL MEMCPY24
    case 0xC4E775: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:201 INC @VIRTUAL02
    case 0xC4E779: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:202 LDA @VIRTUAL02
    case 0xC4E77B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:203 STA @LOCAL03
    case 0xC4E77D: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:204 LDA @VIRTUAL04
    case 0xC4E77F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:205 CLC
    case 0xC4E781: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:206 ADC #8
    case 0xC4E782: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:206 ADC #8
    // Overlapping static entry reached from 0xC4E782.
    case 0xC4E784: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:207 STA @VIRTUAL04
    case 0xC4E785: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:208 INC @LOCAL09
    case 0xC4E787: {
        Instruction step(cpu, 0xE6, 0x000028u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:210 LDA @VIRTUAL02
    case 0xC4E789: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/render_cast_name_text.asm:211 CMP @LOCAL08
    case 0xC4E78B: {
        Instruction step(cpu, 0xC5, 0x000026u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/render_cast_name_text.asm:212 BCCL @UNKNOWN5
    case 0xC4E78D: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/render_cast_name_text.asm:212 BCCL @UNKNOWN5
    case 0xC4E78F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/render_cast_name_text.asm:212 BCCL @UNKNOWN5
    case 0xC4E791: {
        Instruction step(cpu, 0x4C, 0x00E6DCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/render_cast_name_text.asm:213 END_C_FUNCTION
    case 0xC4E794: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/ending/render_cast_name_text.asm:213 END_C_FUNCTION
    case 0xC4E795: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
