// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/handle_cast_scrolling.asm
bool resume_ending_handle_cast_scrolling(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/handle_cast_scrolling.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E51E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4E520: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4E521: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4E522: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E522.
    case 0xC4E524: {
        Instruction step(cpu, 0xFF, 0xFEA95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4E525: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4E526: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FEu : 0x007FFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E526.
    case 0xC4E528: {
        Instruction step(cpu, 0x7F, 0xA90685u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4E529: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4E52B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E528.
    case 0xC4E52C: {
        Instruction step(cpu, 0x7F, 0x088500u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E52B.
    case 0xC4E52D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4E52E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC4E530: {
        Instruction step(cpu, 0xAD, 0x001A42u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:10 ASL
    case 0xC4E533: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:11 TAX
    case 0xC4E534: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:12 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC4E535: {
        Instruction step(cpu, 0xBC, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:13 STY BG3_Y_POS
    case 0xC4E538: {
        Instruction step(cpu, 0x8C, 0x00003Bu, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:14 TXA
    case 0xC4E53B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:15 CLC
    case 0xC4E53C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:16 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC4E53D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000002u : 0x001002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:16 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC4E53D.
    case 0xC4E53F: {
        Instruction step(cpu, 0x10, 0x0000AAu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:17 TAX
    case 0xC4E540: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:18 LDA __BSS_START__,X
    case 0xC4E541: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:19 STY @VIRTUAL02
    case 0xC4E544: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:20 CMP @VIRTUAL02
    case 0xC4E546: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:21 BCS @UNKNOWN0
    case 0xC4E548: {
        Instruction step(cpu, 0xB0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:22 CLC
    case 0xC4E54A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:23 ADC #8
    case 0xC4E54B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:23 ADC #8
    // Overlapping static entry reached from 0xC4E54B.
    case 0xC4E54D: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:24 STA __BSS_START__,X
    case 0xC4E54E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:25 LDA BG3_Y_POS
    case 0xC4E551: {
        Instruction step(cpu, 0xAD, 0x00003Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:26 LSR
    case 0xC4E554: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:27 LSR
    case 0xC4E555: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:28 LSR
    case 0xC4E556: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:29 DEC
    case 0xC4E557: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:30 AND #$001F
    case 0xC4E558: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:30 AND #$001F
    // Overlapping static entry reached from 0xC4E558.
    case 0xC4E55A: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:31 ASL
    case 0xC4E55B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:32 ASL
    case 0xC4E55C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:33 ASL
    case 0xC4E55D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:34 ASL
    case 0xC4E55E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:35 ASL
    case 0xC4E55F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:36 CLC
    case 0xC4E560: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:37 ADC #VRAM::CAST_TILEMAP
    case 0xC4E561: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:37 ADC #VRAM::CAST_TILEMAP
    // Overlapping static entry reached from 0xC4E561.
    case 0xC4E563: {
        Instruction step(cpu, 0x7C, 0x001285u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:38 STA @LOCAL01
    case 0xC4E564: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:39 LDA #0
    case 0xC4E566: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:39 LDA #0
    // Overlapping static entry reached from 0xC4E566.
    case 0xC4E568: {
        Instruction step(cpu, 0x00, 0x000087u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:40 STA [@VIRTUAL06]
    case 0xC4E569: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E56B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E56D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E56F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E571: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:42 LDA @LOCAL01
    case 0xC4E573: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:43 TAY
    case 0xC4E575: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:44 LDX #64
    case 0xC4E576: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:44 LDX #64
    // Overlapping static entry reached from 0xC4E576.
    case 0xC4E578: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E579: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:46 LDA #3
    case 0xC4E57B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x002203u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:47 JSL PREPARE_VRAM_COPY
    case 0xC4E57D: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:47 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E57B.
    case 0xC4E57E: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/ending/handle_cast_scrolling.asm:47 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E57E.
    case 0xC4E580: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00002Bu : 0x006B2Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/handle_cast_scrolling.asm:49 END_C_FUNCTION
    case 0xC4E581: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/handle_cast_scrolling.asm:49 END_C_FUNCTION
    case 0xC4E582: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
