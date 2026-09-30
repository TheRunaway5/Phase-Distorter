// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/slide_credits_photograph.asm
bool resume_ending_slide_credits_photograph(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/slide_credits_photograph.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C4AF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x00FFDCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C4B4.
    case 0xC4C4B6: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:16 STA @LOCAL08
    case 0xC4C4B9: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:16 STA @LOCAL08
    // Overlapping static entry reached from 0xC4C4B6.
    case 0xC4C4BA: {
        Instruction step(cpu, 0x22, 0x23E1A9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4C4BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0023E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C4BB.
    case 0xC4C4BD: {
        Instruction step(cpu, 0x23, 0x000085u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4C4BE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C4BD.
    case 0xC4C4BF: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4C4C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C4BF.
    case 0xC4C4C1: {
        Instruction step(cpu, 0xE1, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C4C0.
    case 0xC4C4C2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4C4C3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:18 LDA @LOCAL08
    case 0xC4C4C5: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:19 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4C4C7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Eu : 0x00003Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:19 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4C4C7.
    case 0xC4C4C9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:20 JSL MULT168
    case 0xC4C4CA: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:21 CLC
    case 0xC4C4CE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:22 ADC @VIRTUAL06
    case 0xC4C4CF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:23 STA @VIRTUAL06
    case 0xC4C4D1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:24 STA @LOCAL07
    case 0xC4C4D3: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:25 LDA @VIRTUAL06+2
    case 0xC4C4D5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:26 STA @LOCAL07+2
    case 0xC4C4D7: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:27 LDX #256
    case 0xC4C4D9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:27 LDX #256
    // Overlapping static entry reached from 0xC4C4D9.
    case 0xC4C4DB: {
        Instruction step(cpu, 0x01, 0x0000E2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C4DC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C4DB.
    case 0xC4C4DD: {
        Instruction step(cpu, 0x20, 0x0008A0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:29 LDY #photographer_config_entry::slide_direction
    case 0xC4C4DE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:29 LDY #photographer_config_entry::slide_direction
    // Overlapping static entry reached from 0xC4C4DE.
    case 0xC4C4E0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:30 LDA [@VIRTUAL06],Y
    case 0xC4C4E1: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC4C4E3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:32 AND #$00FF
    case 0xC4C4E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC4C4E5.
    case 0xC4C4E7: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:33 LDY #1024
    case 0xC4C4E8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:33 LDY #1024
    // Overlapping static entry reached from 0xC4C4E8.
    case 0xC4C4EA: {
        Instruction step(cpu, 0x04, 0x000022u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    case 0xC4C4EB: {
        Instruction step(cpu, 0x22, 0xC09014u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    // Overlapping static entry reached from 0xC4C4EA.
    case 0xC4C4EC: {
        Instruction step(cpu, 0x14, 0x000090u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    // Overlapping static entry reached from 0xC4C4EC.
    case 0xC4C4EE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000022u : 0x004B22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    case 0xC4C4EF: {
        Instruction step(cpu, 0x22, 0xC41F4Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC4C4EE.
    case 0xC4C4F0: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC4C4EE.
    case 0xC4C4F1: {
        Instruction step(cpu, 0x1F, 0x06A5C4u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C4F3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C4F5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C4F7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C4F9: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4C4FB: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4C4FD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4C4FF: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4C501: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C503: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C505: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C507: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C509: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4C50B: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4C50D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4C50F: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4C511: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C513: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:41 LDY #photographer_config_entry::slide_distance
    case 0xC4C515: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:41 LDY #photographer_config_entry::slide_distance
    // Overlapping static entry reached from 0xC4C515.
    case 0xC4C517: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:42 LDA [@VIRTUAL06],Y
    case 0xC4C518: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC4C51A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:44 AND #$00FF
    case 0xC4C51C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC4C51C.
    case 0xC4C51E: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:45 XBA
    case 0xC4C51F: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:46 AND #$FF00
    case 0xC4C520: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:46 AND #$FF00
    // Overlapping static entry reached from 0xC4C520.
    case 0xC4C522: {
        Instruction step(cpu, 0xFF, 0x0100A0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:47 LDY #256
    case 0xC4C523: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:47 LDY #256
    // Overlapping static entry reached from 0xC4C523.
    case 0xC4C525: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    case 0xC4C526: {
        Instruction step(cpu, 0x22, 0xC090C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    // Overlapping static entry reached from 0xC4C525.
    case 0xC4C527: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    // Overlapping static entry reached from 0xC4C527.
    case 0xC4C528: {
        Instruction step(cpu, 0x90, 0x0000C0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:49 STA @LOCAL08
    case 0xC4C52A: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:50 LDA @LOCAL00+2
    case 0xC4C52C: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:51 STA @LOCAL06
    case 0xC4C52E: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:52 LDA @LOCAL00
    case 0xC4C530: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:52 LDA @LOCAL00
    // Overlapping static entry reached from 0xC4C56F.
    case 0xC4C531: {
        Instruction step(cpu, 0x0E, 0x001A85u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:53 STA @LOCAL05
    case 0xC4C532: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:54 LDA BG1_X_POS
    case 0xC4C534: {
        Instruction step(cpu, 0xAD, 0x000031u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:55 STA @LOCAL04
    case 0xC4C537: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:56 LDA BG1_Y_POS
    case 0xC4C539: {
        Instruction step(cpu, 0xAD, 0x000033u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:57 STA @LOCAL03
    case 0xC4C53C: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:58 LDA #0
    case 0xC4C53E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:58 LDA #0
    // Overlapping static entry reached from 0xC4C53E.
    case 0xC4C540: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:59 STA @VIRTUAL04
    case 0xC4C541: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:60 STA @VIRTUAL02
    case 0xC4C543: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:61 TAY
    case 0xC4C545: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:62 STY @LOCAL02
    case 0xC4C546: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:63 BRA @UNKNOWN1
    case 0xC4C548: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:65 LDA @VIRTUAL02
    case 0xC4C54A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:66 CLC
    case 0xC4C54C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:67 ADC @LOCAL06
    case 0xC4C54D: {
        Instruction step(cpu, 0x65, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:68 STA @VIRTUAL02
    case 0xC4C54F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:69 LDA @VIRTUAL04
    case 0xC4C551: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:70 CLC
    case 0xC4C553: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:71 ADC @LOCAL05
    case 0xC4C554: {
        Instruction step(cpu, 0x65, 0x00001Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:72 STA @VIRTUAL04
    case 0xC4C556: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:73 LDY #256
    case 0xC4C558: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:73 LDY #256
    // Overlapping static entry reached from 0xC4C558.
    case 0xC4C55A: {
        Instruction step(cpu, 0x01, 0x0000A5u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:74 LDA @VIRTUAL02
    case 0xC4C55B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:74 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4C55A.
    case 0xC4C55C: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:75 JSL DIVISION16
    case 0xC4C55D: {
        Instruction step(cpu, 0x22, 0xC090C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:76 TAX
    case 0xC4C561: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:77 CLC
    case 0xC4C562: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:78 ADC @LOCAL04
    case 0xC4C563: {
        Instruction step(cpu, 0x65, 0x000018u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:79 STA BG1_X_POS
    case 0xC4C565: {
        Instruction step(cpu, 0x8D, 0x000031u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:80 LDY #256
    case 0xC4C568: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:80 LDY #256
    // Overlapping static entry reached from 0xC4C568.
    case 0xC4C56A: {
        Instruction step(cpu, 0x01, 0x0000A5u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:81 LDA @VIRTUAL04
    case 0xC4C56B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:81 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC4C56A.
    case 0xC4C56C: {
        Instruction step(cpu, 0x04, 0x000022u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    case 0xC4C56D: {
        Instruction step(cpu, 0x22, 0xC090C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    // Overlapping static entry reached from 0xC4C56C.
    case 0xC4C56E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    // Overlapping static entry reached from 0xC4C56E.
    case 0xC4C56F: {
        Instruction step(cpu, 0x90, 0x0000C0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:83 STA @LOCAL01
    case 0xC4C571: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:84 CLC
    case 0xC4C573: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:85 ADC @LOCAL03
    case 0xC4C574: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:86 STA BG1_Y_POS
    case 0xC4C576: {
        Instruction step(cpu, 0x8D, 0x000033u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:87 STX BG2_X_POS
    case 0xC4C579: {
        Instruction step(cpu, 0x8E, 0x000035u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:88 LDA @LOCAL01
    case 0xC4C57C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:89 STA BG2_Y_POS
    case 0xC4C57E: {
        Instruction step(cpu, 0x8D, 0x000037u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:90 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C581: {
        Instruction step(cpu, 0x22, 0xC4C057u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:91 JSL UNKNOWN_C1004E
    case 0xC4C585: {
        Instruction step(cpu, 0x22, 0xC100C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:92 LDY @LOCAL02
    case 0xC4C589: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:93 INY
    case 0xC4C58B: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:94 STY @LOCAL02
    case 0xC4C58C: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:96 CPY @LOCAL08
    case 0xC4C58E: {
        Instruction step(cpu, 0xC4, 0x000022u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/ending/slide_credits_photograph.asm:97 BCC @UNKNOWN0
    case 0xC4C590: {
        Instruction step(cpu, 0x90, 0x0000B8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/slide_credits_photograph.asm:98 END_C_FUNCTION
    case 0xC4C592: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/slide_credits_photograph.asm:98 END_C_FUNCTION
    case 0xC4C593: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
