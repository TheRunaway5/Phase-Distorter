// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/adjust_sprite_palettes_by_average.asm
bool resume_overworld_adjust_sprite_palettes_by_average(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00480: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00482: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00483: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00484: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DEu : 0x00FFDEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC00484.
    case 0xC00486: {
        Instruction step(cpu, 0xFF, 0x40A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:15 END_STACK_VARS
    case 0xC00487: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:16 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC00488: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000240u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:16 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC00488.
    case 0xC0048A: {
        Instruction step(cpu, 0x02, 0x000020u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:17 JSR GET_COLOUR_AVERAGE
    case 0xC0048B: {
        Instruction step(cpu, 0x20, 0x000391u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:18 LDY SAVED_COLOUR_AVERAGE_RED
    case 0xC0048E: {
        Instruction step(cpu, 0xAC, 0x0043D6u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:19 LDA COLOUR_AVERAGE_RED
    case 0xC00491: {
        Instruction step(cpu, 0xAD, 0x0043D0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:20 XBA
    case 0xC00494: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:21 AND #$FF00
    case 0xC00495: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:21 AND #$FF00
    // Overlapping static entry reached from 0xC00495.
    case 0xC00497: {
        Instruction step(cpu, 0xFF, 0x915B22u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_RED / SAVED_COLOUR_AVERAGE_RED
    case 0xC00498: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_RED / SAVED_COLOUR_AVERAGE_RED
    // Overlapping static entry reached from 0xC00497.
    case 0xC0049B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x002085u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:23 STA @LOCAL09
    case 0xC0049C: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:23 STA @LOCAL09
    // Overlapping static entry reached from 0xC0049B.
    case 0xC0049D: {
        Instruction step(cpu, 0x20, 0x00D8ACu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:24 LDY SAVED_COLOUR_AVERAGE_GREEN
    case 0xC0049E: {
        Instruction step(cpu, 0xAC, 0x0043D8u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:24 LDY SAVED_COLOUR_AVERAGE_GREEN
    // Overlapping static entry reached from 0xC0049D.
    case 0xC004A0: {
        Instruction step(cpu, 0x43, 0x0000ADu, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:25 LDA COLOUR_AVERAGE_GREEN
    case 0xC004A1: {
        Instruction step(cpu, 0xAD, 0x0043D2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:25 LDA COLOUR_AVERAGE_GREEN
    // Overlapping static entry reached from 0xC004A0.
    case 0xC004A2: {
        Instruction step(cpu, 0xD2, 0x000043u, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:26 XBA
    case 0xC004A4: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:27 AND #$FF00
    case 0xC004A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:27 AND #$FF00
    // Overlapping static entry reached from 0xC004A5.
    case 0xC004A7: {
        Instruction step(cpu, 0xFF, 0x915B22u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:28 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_GREEN / SAVED_COLOUR_AVERAGE_GREEN
    case 0xC004A8: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:28 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_GREEN / SAVED_COLOUR_AVERAGE_GREEN
    // Overlapping static entry reached from 0xC004A7.
    case 0xC004AB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x001E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:29 STA @LOCAL08
    case 0xC004AC: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:29 STA @LOCAL08
    // Overlapping static entry reached from 0xC004AB.
    case 0xC004AD: {
        Instruction step(cpu, 0x1E, 0x00DAACu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:30 LDY SAVED_COLOUR_AVERAGE_BLUE
    case 0xC004AE: {
        Instruction step(cpu, 0xAC, 0x0043DAu, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:30 LDY SAVED_COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004AD.
    case 0xC004B0: {
        Instruction step(cpu, 0x43, 0x0000ADu, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:31 LDA COLOUR_AVERAGE_BLUE
    case 0xC004B1: {
        Instruction step(cpu, 0xAD, 0x0043D4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:31 LDA COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004B0.
    case 0xC004B2: {
        Instruction step(cpu, 0xD4, 0x000043u, 2u, AddressMode::DirectPage);
        step.push_effective_indirect();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:32 XBA
    case 0xC004B4: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:33 AND #$FF00
    case 0xC004B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:33 AND #$FF00
    // Overlapping static entry reached from 0xC004B5.
    case 0xC004B7: {
        Instruction step(cpu, 0xFF, 0x915B22u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:34 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_BLUE / SAVED_COLOUR_AVERAGE_BLUE
    case 0xC004B8: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:34 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_BLUE / SAVED_COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC08D20.
    case 0xC004B9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:34 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_BLUE / SAVED_COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004B9.
    case 0xC004BA: {
        Instruction step(cpu, 0x91, 0x0000C0u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:34 JSL DIVISION16S_DIVISOR_POSITIVE ; COLOUR_AVERAGE_BLUE / SAVED_COLOUR_AVERAGE_BLUE
    // Overlapping static entry reached from 0xC004B7.
    case 0xC004BB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000085u : 0x001C85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:35 STA @LOCAL07
    case 0xC004BC: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:35 STA @LOCAL07
    // Overlapping static entry reached from 0xC004BB.
    case 0xC004BD: {
        Instruction step(cpu, 0x1C, 0x0003A0u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:36 LDY #3
    case 0xC004BE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:36 LDY #3
    // Overlapping static entry reached from 0xC004BE.
    case 0xC004C0: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:37 LDA @LOCAL09
    case 0xC004C1: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:38 CLC
    case 0xC004C3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:39 ADC @LOCAL08
    case 0xC004C4: {
        Instruction step(cpu, 0x65, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:40 CLC
    case 0xC004C6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:41 ADC @LOCAL07
    case 0xC004C7: {
        Instruction step(cpu, 0x65, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:42 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC004C9: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:43 STA @LOCAL06
    case 0xC004CD: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:44 LDA @LOCAL09
    case 0xC004CF: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:45 CMP #256
    case 0xC004D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:45 CMP #256
    // Overlapping static entry reached from 0xC004D1.
    case 0xC004D3: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    case 0xC004D4: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004D3.
    case 0xC004D5: {
        Instruction step(cpu, 0x05, 0x000090u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    case 0xC004D6: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004D5.
    case 0xC004D7: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    case 0xC004D8: {
        Instruction step(cpu, 0x4C, 0x0005E5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:46 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004D7.
    case 0xC004D9: {
        Instruction step(cpu, 0xE5, 0x000005u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:47 LDA @LOCAL08
    case 0xC004DB: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:48 CMP #256
    case 0xC004DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:48 CMP #256
    // Overlapping static entry reached from 0xC004DD.
    case 0xC004DF: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    case 0xC004E0: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004DF.
    case 0xC004E1: {
        Instruction step(cpu, 0x05, 0x000090u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    case 0xC004E2: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004E1.
    case 0xC004E3: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    case 0xC004E4: {
        Instruction step(cpu, 0x4C, 0x0005E5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:49 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004E3.
    case 0xC004E5: {
        Instruction step(cpu, 0xE5, 0x000005u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:50 LDA @LOCAL07
    case 0xC004E7: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:51 CMP #256
    case 0xC004E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:51 CMP #256
    // Overlapping static entry reached from 0xC004E9.
    case 0xC004EB: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    case 0xC004EC: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004EB.
    case 0xC004ED: {
        Instruction step(cpu, 0x05, 0x000090u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    case 0xC004EE: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004ED.
    case 0xC004EF: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    case 0xC004F0: {
        Instruction step(cpu, 0x4C, 0x0005E5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:52 BGTL @UNKNOWN7
    // Overlapping static entry reached from 0xC004EF.
    case 0xC004F1: {
        Instruction step(cpu, 0xE5, 0x000005u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:53 LDA #128
    case 0xC004F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:53 LDA #128
    // Overlapping static entry reached from 0xC004F3.
    case 0xC004F5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:54 STA @LOCAL05
    case 0xC004F6: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:55 JMP @UNKNOWN6
    case 0xC004F8: {
        Instruction step(cpu, 0x4C, 0x0005D9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:57 LDA @LOCAL05
    case 0xC004FB: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:58 ASL
    case 0xC004FD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:59 TAX
    case 0xC004FE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:60 LDA PALETTES,X
    case 0xC004FF: {
        Instruction step(cpu, 0xBD, 0x000200u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:61 TAX
    case 0xC00502: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:63 AND #BGR555::RED
    case 0xC00503: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:63 AND #BGR555::RED
    // Overlapping static entry reached from 0xC00503.
    case 0xC00505: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:64 STA @LOCAL04
    case 0xC00506: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:65 TAY
    case 0xC00508: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:66 STY @LOCAL03
    case 0xC00509: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:68 TXA
    case 0xC0050B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:69 AND #BGR555::GREEN
    case 0xC0050C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:69 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC0050C.
    case 0xC0050E: {
        Instruction step(cpu, 0x03, 0x00004Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:71 LSR
    case 0xC0050F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:72 LSR
    case 0xC00510: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:73 LSR
    case 0xC00511: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:74 LSR
    case 0xC00512: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:75 LSR
    case 0xC00513: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:76 STA @VIRTUAL02
    case 0xC00514: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:77 STA @LOCAL02
    case 0xC00516: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:78 LDA @VIRTUAL02
    case 0xC00518: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:79 STA @LOCAL01
    case 0xC0051A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:81 TXA
    case 0xC0051C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:82 AND #BGR555::BLUE
    case 0xC0051D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:82 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC0051D.
    case 0xC0051F: {
        Instruction step(cpu, 0x7C, 0x0029EBu, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:84 XBA
    case 0xC00520: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:85 AND #$00FF
    case 0xC00521: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC00521.
    case 0xC00523: {
        Instruction step(cpu, 0x00, 0x00004Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:86 LSR
    case 0xC00524: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:87 LSR
    case 0xC00525: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:88 STA @VIRTUAL04
    case 0xC00526: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:89 STA @LOCAL00
    case 0xC00528: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:90 LDA @LOCAL04
    case 0xC0052A: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:91 CMP @VIRTUAL02
    case 0xC0052C: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:92 BNE @UNKNOWN4 ;red != green
    case 0xC0052E: {
        Instruction step(cpu, 0xD0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:93 LDA @VIRTUAL02
    case 0xC00530: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:94 CMP @VIRTUAL04
    case 0xC00532: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:95 BNE @UNKNOWN4 ;green != blue
    case 0xC00534: {
        Instruction step(cpu, 0xD0, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:96 LDA @LOCAL04
    case 0xC00536: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:97 STA @VIRTUAL02
    case 0xC00538: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:98 LDA @VIRTUAL04
    case 0xC0053A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:99 CMP @VIRTUAL02
    case 0xC0053C: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:100 BNE @UNKNOWN4 ;blue != red
    case 0xC0053E: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:101 LDY @LOCAL06
    case 0xC00540: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:102 LDA @LOCAL04
    case 0xC00542: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:103 JSL MULT16 ; red *= ???
    case 0xC00544: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:104 STA @LOCAL04
    case 0xC00548: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:105 LDY @LOCAL06
    case 0xC0054A: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:106 LDA @LOCAL02
    case 0xC0054C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:107 STA @VIRTUAL02
    case 0xC0054E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:108 JSL MULT16 ; blue *= ???
    case 0xC00550: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:109 STA @VIRTUAL02
    case 0xC00554: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:110 LDY @LOCAL06
    case 0xC00556: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:111 LDA @VIRTUAL04
    case 0xC00558: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:112 JSL MULT16 ; green *= ???
    case 0xC0055A: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:113 STA @VIRTUAL04
    case 0xC0055E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:114 BRA @UNKNOWN5
    case 0xC00560: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:116 LDY @LOCAL09
    case 0xC00562: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:117 LDA @LOCAL04
    case 0xC00564: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:118 JSL MULT16 ; red *= ???
    case 0xC00566: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:119 STA @LOCAL04
    case 0xC0056A: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:120 LDY @LOCAL08
    case 0xC0056C: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:121 LDA @LOCAL02
    case 0xC0056E: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:122 STA @VIRTUAL02
    case 0xC00570: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:123 JSL MULT16 ; blue *= ???
    case 0xC00572: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:124 STA @VIRTUAL02
    case 0xC00576: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:125 LDY @LOCAL07
    case 0xC00578: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:126 LDA @VIRTUAL04
    case 0xC0057A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:127 JSL MULT16 ; green *= ???
    case 0xC0057C: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:128 STA @VIRTUAL04
    case 0xC00580: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:130 LDA @LOCAL04
    case 0xC00582: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:131 XBA
    case 0xC00584: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:132 AND #$00FF
    case 0xC00585: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC00585.
    case 0xC00587: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:133 AND #$001F
    case 0xC00588: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:133 AND #$001F
    // Overlapping static entry reached from 0xC00588.
    case 0xC0058A: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:134 TAX
    case 0xC0058B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:135 LDY @LOCAL03
    case 0xC0058C: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:136 TYA
    case 0xC0058E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:137 JSR ADJUST_SINGLE_COLOUR ;red & new red
    case 0xC0058F: {
        Instruction step(cpu, 0x20, 0x000434u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:138 TAY
    case 0xC00592: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:139 STY @LOCAL03
    case 0xC00593: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:140 LDA @VIRTUAL02
    case 0xC00595: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:141 XBA
    case 0xC00597: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:142 AND #$00FF
    case 0xC00598: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC00598.
    case 0xC0059A: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:143 AND #$001F
    case 0xC0059B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:143 AND #$001F
    // Overlapping static entry reached from 0xC0059B.
    case 0xC0059D: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:144 TAX
    case 0xC0059E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:145 LDA @LOCAL01
    case 0xC0059F: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:146 JSR ADJUST_SINGLE_COLOUR ;green & new green
    case 0xC005A1: {
        Instruction step(cpu, 0x20, 0x000434u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:147 STA @VIRTUAL02
    case 0xC005A4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:148 LDA @VIRTUAL04
    case 0xC005A6: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:149 XBA
    case 0xC005A8: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:150 AND #$00FF
    case 0xC005A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:150 AND #$00FF
    // Overlapping static entry reached from 0xC005A9.
    case 0xC005AB: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:151 AND #$001F
    case 0xC005AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:151 AND #$001F
    // Overlapping static entry reached from 0xC005AC.
    case 0xC005AE: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:152 TAX
    case 0xC005AF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:153 LDA @LOCAL00
    case 0xC005B0: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:154 JSR ADJUST_SINGLE_COLOUR ;blue & new blue
    case 0xC005B2: {
        Instruction step(cpu, 0x20, 0x000434u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:155 STA @LOCAL00
    case 0xC005B5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:156 LDA @LOCAL05
    case 0xC005B7: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:157 ASL
    case 0xC005B9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:158 TAX
    case 0xC005BA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:159 LDY @LOCAL03 ;final red
    case 0xC005BB: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:160 LDA @VIRTUAL02 ;final green
    case 0xC005BD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:161 ASL
    case 0xC005BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:162 ASL
    case 0xC005C0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:163 ASL
    case 0xC005C1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:164 ASL
    case 0xC005C2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:165 ASL
    case 0xC005C3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:166 STA @VIRTUAL04
    case 0xC005C4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:167 LDA @LOCAL00 ;final blue
    case 0xC005C6: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:168 XBA
    case 0xC005C8: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:169 AND #$FF00
    case 0xC005C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:169 AND #$FF00
    // Overlapping static entry reached from 0xC005C9.
    case 0xC005CB: {
        Instruction step(cpu, 0xFF, 0x050A0Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:170 ASL
    case 0xC005CC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:171 ASL
    case 0xC005CD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:172 ORA @VIRTUAL04
    case 0xC005CE: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:172 ORA @VIRTUAL04
    // Overlapping static entry reached from 0xC005CB.
    case 0xC005CF: {
        Instruction step(cpu, 0x04, 0x000084u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:173 STY @VIRTUAL02
    case 0xC005D0: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:173 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC005CF.
    case 0xC005D1: {
        Instruction step(cpu, 0x02, 0x000005u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:174 ORA @VIRTUAL02
    case 0xC005D2: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:175 STA PALETTES,X
    case 0xC005D4: {
        Instruction step(cpu, 0x9D, 0x000200u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:176 INC @LOCAL05
    case 0xC005D7: {
        Instruction step(cpu, 0xE6, 0x000018u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:178 LDA @LOCAL05
    case 0xC005D9: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:179 CMP #256
    case 0xC005DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/adjust_sprite_palettes_by_average.asm:179 CMP #256
    // Overlapping static entry reached from 0xC005DB.
    case 0xC005DD: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    case 0xC005DE: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005DD.
    case 0xC005DF: {
        Instruction step(cpu, 0x05, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    case 0xC005E0: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005DF.
    case 0xC005E1: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    case 0xC005E2: {
        Instruction step(cpu, 0x4C, 0x0004FBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005E1.
    case 0xC005E3: {
        Instruction step(cpu, 0xFB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_carry_emulation();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:180 BCCL @UNKNOWN3
    // Overlapping static entry reached from 0xC005E3.
    case 0xC005E4: {
        Instruction step(cpu, 0x04, 0x00002Bu, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:182 END_C_FUNCTION
    case 0xC005E5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/adjust_sprite_palettes_by_average.asm:182 END_C_FUNCTION
    case 0xC005E6: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
