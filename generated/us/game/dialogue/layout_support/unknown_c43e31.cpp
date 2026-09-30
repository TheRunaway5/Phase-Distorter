// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C4/C43E31.asm
bool resume_unresolved_c4_c43e31(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43E31.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43E31: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E33: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E34: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E35: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC43E36.
    case 0xC43E38: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E39: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43E31.asm:12 END_STACK_VARS
    case 0xC43E3A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:13 TAY
    case 0xC43E3B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:14 STY @LOCAL03
    case 0xC43E3C: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C43E31.asm:15 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43E3E: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C43E31.asm:15 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43E40: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C43E31.asm:15 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43E42: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C43E31.asm:15 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC43E44: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:16 LDX #0
    case 0xC43E46: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:16 LDX #0
    // Overlapping static entry reached from 0xC43E46.
    case 0xC43E48: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:17 STX @LOCAL02
    case 0xC43E49: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:18 LDA CURRENT_FOCUS_WINDOW
    case 0xC43E4B: {
        Instruction step(cpu, 0xAD, 0x008958u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:19 ASL
    case 0xC43E4E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:20 TAX
    case 0xC43E4F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:21 LDA OPEN_WINDOW_TABLE,X
    case 0xC43E50: {
        Instruction step(cpu, 0xBD, 0x0088E4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:22 LDY #.SIZEOF(window_stats)
    case 0xC43E53: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:22 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC43E53.
    case 0xC43E55: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:23 JSL MULT168
    case 0xC43E56: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:24 CLC
    case 0xC43E5A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:25 ADC #.LOWORD(WINDOW_STATS)
    case 0xC43E5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000050u : 0x008650u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:25 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC43E5B.
    case 0xC43E5D: {
        Instruction step(cpu, 0x86, 0x000085u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:26 STA @VIRTUAL02
    case 0xC43E5E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:26 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC43E5D.
    case 0xC43E5F: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:27 STA @LOCAL01
    case 0xC43E60: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:31 JMP @UNKNOWN3
    case 0xC43E62: {
        Instruction step(cpu, 0x4C, 0x003EE5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:34 DEY
    case 0xC43E65: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:35 STY @LOCAL03
    case 0xC43E66: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:36 AND #$00FF
    case 0xC43E68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC43E68.
    case 0xC43E6A: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:37 SEC
    case 0xC43E6B: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:38 SBC #$50
    case 0xC43E6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000050u : 0x000050u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:38 SBC #$50
    // Overlapping static entry reached from 0xC43E6C.
    case 0xC43E6E: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:39 AND #$007F
    case 0xC43E6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:39 AND #$007F
    // Overlapping static entry reached from 0xC43E6F.
    case 0xC43E71: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:40 STA @LOCAL00
    case 0xC43E72: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:41 INC @VIRTUAL06
    case 0xC43E74: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:43 LDA FORCE_NORMAL_FONT_FOR_LENGTH_CALCULATIONS
    case 0xC43E76: {
        Instruction step(cpu, 0xAD, 0x00B4CEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:44 AND #$00FF
    case 0xC43E79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC43E79.
    case 0xC43E7B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:45 BEQ @UNKNOWN1
    case 0xC43E7C: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C43E31.asm:46 MOVE_INT FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E7E: {
        Instruction step(cpu, 0xAF, 0xC3F054u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C43E31.asm:46 MOVE_INT FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E82: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C43E31.asm:46 MOVE_INT FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E84: {
        Instruction step(cpu, 0xAF, 0xC3F056u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C43E31.asm:46 MOVE_INT FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E88: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:47 LDA @LOCAL00
    case 0xC43E8A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:48 CLC
    case 0xC43E8C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:49 ADC @VIRTUAL0A
    case 0xC43E8D: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:50 STA @VIRTUAL0A
    case 0xC43E8F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:51 LDA [@VIRTUAL0A]
    case 0xC43E91: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:52 AND #$00FF
    case 0xC43E93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC43E93.
    case 0xC43E95: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:53 BRA @UNKNOWN2
    case 0xC43E96: {
        Instruction step(cpu, 0x80, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000054u : 0x00F054u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43E98.
    case 0xC43E9A: {
        Instruction step(cpu, 0xF0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E9B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43E9A.
    case 0xC43E9C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43E9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43E9D.
    case 0xC43E9F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C43E31.asm:56 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC43EA0: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:57 LDA @LOCAL01
    case 0xC43EA2: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:58 STA @VIRTUAL02
    case 0xC43EA4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:59 LDX @VIRTUAL02
    case 0xC43EA6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:60 LDA a:window_stats::font,X
    case 0xC43EA8: {
        Instruction step(cpu, 0xBD, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C4/C43E31.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC43EAB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C4/C43E31.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC43EAD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C4/C43E31.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC43EAE: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C4/C43E31.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC43EB0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C4/C43E31.asm:61 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC43EB1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:62 CLC
    case 0xC43EB2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:63 ADC @VIRTUAL0A
    case 0xC43EB3: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:64 STA @VIRTUAL0A
    case 0xC43EB5: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EB7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43EB7.
    case 0xC43EB9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EBA: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EBC: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EBD: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EBF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C43E31.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC43EC1: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:66 LDA @LOCAL00
    case 0xC43EC3: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:67 CLC
    case 0xC43EC5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:68 ADC @VIRTUAL0A
    case 0xC43EC6: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:69 STA @VIRTUAL0A
    case 0xC43EC8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:70 LDA [@VIRTUAL0A]
    case 0xC43ECA: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:71 AND #$00FF
    case 0xC43ECC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC43ECC.
    case 0xC43ECE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:73 STA @VIRTUAL02
    case 0xC43ECF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:74 LDA CHARACTER_PADDING
    case 0xC43ED1: {
        Instruction step(cpu, 0xAD, 0x005E6Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:75 AND #$00FF
    case 0xC43ED4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC43ED4.
    case 0xC43ED6: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:76 CLC
    case 0xC43ED7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:77 ADC @VIRTUAL02
    case 0xC43ED8: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:78 STA @VIRTUAL04
    case 0xC43EDA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:79 LDX @LOCAL02
    case 0xC43EDC: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:80 TXA
    case 0xC43EDE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:81 CLC
    case 0xC43EDF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:82 ADC @VIRTUAL04
    case 0xC43EE0: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:83 TAX
    case 0xC43EE2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:84 STX @LOCAL02
    case 0xC43EE3: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:86 LDA [@VIRTUAL06]
    case 0xC43EE5: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:87 AND #$00FF
    case 0xC43EE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC43EE7.
    case 0xC43EE9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:88 BEQ @UNKNOWN4
    case 0xC43EEA: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:89 LDY @LOCAL03
    case 0xC43EEC: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C43E31.asm:93 BNEL @UNKNOWN0
    case 0xC43EEE: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C43E31.asm:93 BNEL @UNKNOWN0
    case 0xC43EF0: {
        Instruction step(cpu, 0x4C, 0x003E65u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:96 LDX @LOCAL02
    case 0xC43EF3: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43E31.asm:97 TXA
    case 0xC43EF5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43E31.asm:98 END_C_FUNCTION
    case 0xC43EF6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43E31.asm:98 END_C_FUNCTION
    case 0xC43EF7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
