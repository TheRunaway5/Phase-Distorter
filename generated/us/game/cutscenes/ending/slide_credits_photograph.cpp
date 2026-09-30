// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/slide_credits_photograph.asm
bool resume_ending_slide_credits_photograph(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/slide_credits_photograph.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F46F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F471: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F472: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F473: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F474: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x00FFDCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F474.
    case 0xC4F476: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F477: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4F478: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:16 STA @LOCAL08
    case 0xC4F479: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:16 STA @LOCAL08
    // Overlapping static entry reached from 0xC4F476.
    case 0xC4F47A: {
        Instruction step(cpu, 0x22, 0x2F8AA9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4F47B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00008Au : 0x002F8Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F47B.
    case 0xC4F47D: {
        Instruction step(cpu, 0x2F, 0xA90685u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4F47E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4F480: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F47D.
    case 0xC4F481: {
        Instruction step(cpu, 0xE1, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4F480.
    case 0xC4F482: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4F483: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:18 LDA @LOCAL08
    case 0xC4F485: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:19 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4F487: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Eu : 0x00003Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:19 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4F487.
    case 0xC4F489: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:20 JSL MULT168
    case 0xC4F48A: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:21 CLC
    case 0xC4F48E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:22 ADC @VIRTUAL06
    case 0xC4F48F: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:23 STA @VIRTUAL06
    case 0xC4F491: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:24 STA @LOCAL07
    case 0xC4F493: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:25 LDA @VIRTUAL06+2
    case 0xC4F495: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:26 STA @LOCAL07+2
    case 0xC4F497: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:27 LDX #256
    case 0xC4F499: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:27 LDX #256
    // Overlapping static entry reached from 0xC4F499.
    case 0xC4F49B: {
        Instruction step(cpu, 0x01, 0x0000E2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F49C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4F49B.
    case 0xC4F49D: {
        Instruction step(cpu, 0x20, 0x0008A0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:29 LDY #photographer_config_entry::slide_direction
    case 0xC4F49E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:29 LDY #photographer_config_entry::slide_direction
    // Overlapping static entry reached from 0xC4F49E.
    case 0xC4F4A0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:30 LDA [@VIRTUAL06],Y
    case 0xC4F4A1: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC4F4A3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:32 AND #$00FF
    case 0xC4F4A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC4F4A5.
    case 0xC4F4A7: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:33 LDY #1024
    case 0xC4F4A8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:33 LDY #1024
    // Overlapping static entry reached from 0xC4F4A8.
    case 0xC4F4AA: {
        Instruction step(cpu, 0x04, 0x000022u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    case 0xC4F4AB: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    // Overlapping static entry reached from 0xC4F4AA.
    case 0xC4F4AC: {
        Instruction step(cpu, 0x32, 0x000090u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    // Overlapping static entry reached from 0xC4F4AC.
    case 0xC4F4AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x00FF22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    case 0xC4F4AF: {
        Instruction step(cpu, 0x22, 0xC41FFFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC4F4AE.
    case 0xC4F4B0: {
        Instruction step(cpu, 0xFF, 0xA5C41Fu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC4F4AE.
    case 0xC4F4B1: {
        Instruction step(cpu, 0x1F, 0x06A5C4u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4F4B3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F4B0.
    case 0xC4F4B4: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4F4B5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F4B4.
    case 0xC4F4B6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4F4B7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4F4B9: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4F4BB: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4F4BD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4F4BF: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4F4C1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F4C3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F4C5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F4C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F4C9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4F4CB: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4F4CD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4F4CF: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4F4D1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F4D3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:41 LDY #photographer_config_entry::slide_distance
    case 0xC4F4D5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:41 LDY #photographer_config_entry::slide_distance
    // Overlapping static entry reached from 0xC4F4D5.
    case 0xC4F4D7: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:42 LDA [@VIRTUAL06],Y
    case 0xC4F4D8: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC4F4DA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:44 AND #$00FF
    case 0xC4F4DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC4F4DC.
    case 0xC4F4DE: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:45 XBA
    case 0xC4F4DF: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:46 AND #$FF00
    case 0xC4F4E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:46 AND #$FF00
    // Overlapping static entry reached from 0xC4F4E0.
    case 0xC4F4E2: {
        Instruction step(cpu, 0xFF, 0x0100A0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:47 LDY #256
    case 0xC4F4E3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:47 LDY #256
    // Overlapping static entry reached from 0xC4F4E3.
    case 0xC4F4E5: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    case 0xC4F4E6: {
        Instruction step(cpu, 0x22, 0xC090E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    // Overlapping static entry reached from 0xC4F4E5.
    case 0xC4F4E7: {
        Instruction step(cpu, 0xE6, 0x000090u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    // Overlapping static entry reached from 0xC4F4E7.
    case 0xC4F4E9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x002285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:49 STA @LOCAL08
    case 0xC4F4EA: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:49 STA @LOCAL08
    // Overlapping static entry reached from 0xC4F4E9.
    case 0xC4F4EB: {
        Instruction step(cpu, 0x22, 0x8510A5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:50 LDA @LOCAL00+2
    case 0xC4F4EC: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:51 STA @LOCAL06
    case 0xC4F4EE: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:51 STA @LOCAL06
    // Overlapping static entry reached from 0xC4F4EB.
    case 0xC4F4EF: {
        Instruction step(cpu, 0x1C, 0x000EA5u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:52 LDA @LOCAL00
    case 0xC4F4F0: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:53 STA @LOCAL05
    case 0xC4F4F2: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:54 LDA BG1_X_POS
    case 0xC4F4F4: {
        Instruction step(cpu, 0xAD, 0x000031u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:55 STA @LOCAL04
    case 0xC4F4F7: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:56 LDA BG1_Y_POS
    case 0xC4F4F9: {
        Instruction step(cpu, 0xAD, 0x000033u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:57 STA @LOCAL03
    case 0xC4F4FC: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:58 LDA #0
    case 0xC4F4FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:58 LDA #0
    // Overlapping static entry reached from 0xC4F4FE.
    case 0xC4F500: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:59 STA @VIRTUAL04
    case 0xC4F501: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:60 STA @VIRTUAL02
    case 0xC4F503: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:61 TAY
    case 0xC4F505: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:62 STY @LOCAL02
    case 0xC4F506: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:63 BRA @UNKNOWN1
    case 0xC4F508: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:65 LDA @VIRTUAL02
    case 0xC4F50A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:66 CLC
    case 0xC4F50C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:67 ADC @LOCAL06
    case 0xC4F50D: {
        Instruction step(cpu, 0x65, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:68 STA @VIRTUAL02
    case 0xC4F50F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:69 LDA @VIRTUAL04
    case 0xC4F511: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:70 CLC
    case 0xC4F513: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:71 ADC @LOCAL05
    case 0xC4F514: {
        Instruction step(cpu, 0x65, 0x00001Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:72 STA @VIRTUAL04
    case 0xC4F516: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:73 LDY #256
    case 0xC4F518: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:73 LDY #256
    // Overlapping static entry reached from 0xC4F518.
    case 0xC4F51A: {
        Instruction step(cpu, 0x01, 0x0000A5u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:74 LDA @VIRTUAL02
    case 0xC4F51B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:74 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4F51A.
    case 0xC4F51C: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:75 JSL DIVISION16
    case 0xC4F51D: {
        Instruction step(cpu, 0x22, 0xC090E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:76 TAX
    case 0xC4F521: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:77 CLC
    case 0xC4F522: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:78 ADC @LOCAL04
    case 0xC4F523: {
        Instruction step(cpu, 0x65, 0x000018u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:79 STA BG1_X_POS
    case 0xC4F525: {
        Instruction step(cpu, 0x8D, 0x000031u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:80 LDY #256
    case 0xC4F528: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:80 LDY #256
    // Overlapping static entry reached from 0xC4F528.
    case 0xC4F52A: {
        Instruction step(cpu, 0x01, 0x0000A5u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:81 LDA @VIRTUAL04
    case 0xC4F52B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:81 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC4F52A.
    case 0xC4F52C: {
        Instruction step(cpu, 0x04, 0x000022u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    case 0xC4F52D: {
        Instruction step(cpu, 0x22, 0xC090E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    // Overlapping static entry reached from 0xC4F52C.
    case 0xC4F52E: {
        Instruction step(cpu, 0xE6, 0x000090u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    // Overlapping static entry reached from 0xC4F52E.
    case 0xC4F530: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x001285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:83 STA @LOCAL01
    case 0xC4F531: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:83 STA @LOCAL01
    // Overlapping static entry reached from 0xC4F530.
    case 0xC4F532: {
        Instruction step(cpu, 0x12, 0x000018u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:84 CLC
    case 0xC4F533: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:85 ADC @LOCAL03
    case 0xC4F534: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:86 STA BG1_Y_POS
    case 0xC4F536: {
        Instruction step(cpu, 0x8D, 0x000033u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:87 STX BG2_X_POS
    case 0xC4F539: {
        Instruction step(cpu, 0x8E, 0x000035u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:88 LDA @LOCAL01
    case 0xC4F53C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:89 STA BG2_Y_POS
    case 0xC4F53E: {
        Instruction step(cpu, 0x8D, 0x000037u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:90 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4F541: {
        Instruction step(cpu, 0x22, 0xC4F01Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:91 JSL UNKNOWN_C1004E
    case 0xC4F545: {
        Instruction step(cpu, 0x22, 0xC1004Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:92 LDY @LOCAL02
    case 0xC4F549: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:93 INY
    case 0xC4F54B: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:94 STY @LOCAL02
    case 0xC4F54C: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:96 CPY @LOCAL08
    case 0xC4F54E: {
        Instruction step(cpu, 0xC4, 0x000022u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:97 BCC @UNKNOWN0
    case 0xC4F550: {
        Instruction step(cpu, 0x90, 0x0000B8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/slide_credits_photograph.asm:98 END_C_FUNCTION
    case 0xC4F552: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/slide_credits_photograph.asm:98 END_C_FUNCTION
    case 0xC4F553: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
