// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/initialize_map_palette_fade.asm
bool resume_overworld_initialize_map_palette_fade(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46852: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC4682F.
    case 0xC46853: {
        Instruction step(cpu, 0x31, 0x00000Bu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC46854: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC46855: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC46856: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC46857: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC46857.
    case 0xC46859: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4685A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4685B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:12 STA @LOCAL04
    case 0xC4685C: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC46859.
    case 0xC4685D: {
        Instruction step(cpu, 0x16, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC4685E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x007800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4685D.
    case 0xC4685F: {
        Instruction step(cpu, 0x00, 0x000078u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4685E.
    case 0xC46860: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC46861: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC46863: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC46863.
    case 0xC46865: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC46866: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:14 STZ @LOCAL03
    case 0xC46868: {
        Instruction step(cpu, 0x64, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:15 JMP @UNKNOWN1
    case 0xC4686A: {
        Instruction step(cpu, 0x4C, 0x00690Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:17 LDA @LOCAL03
    case 0xC4686D: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:18 ASL
    case 0xC4686F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:19 STA @VIRTUAL02
    case 0xC46870: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:20 CLC
    case 0xC46872: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:21 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC46873: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x000240u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:21 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC46873.
    case 0xC46875: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:22 STA @LOCAL02
    case 0xC46876: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:23 LDA (@LOCAL02)
    case 0xC46878: {
        Instruction step(cpu, 0xB2, 0x000012u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:24 STA @LOCAL01
    case 0xC4687A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:25 LDA [@VIRTUAL06]
    case 0xC4687C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:26 STA @VIRTUAL04
    case 0xC4687E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:27 LDY @LOCAL04
    case 0xC46880: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:28 LDA @VIRTUAL04
    case 0xC46882: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:29 AND #BGR555::RED
    case 0xC46884: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:29 AND #BGR555::RED
    // Overlapping static entry reached from 0xC46884.
    case 0xC46886: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:30 TAX
    case 0xC46887: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:31 LDA @LOCAL01
    case 0xC46888: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:32 AND #BGR555::RED
    case 0xC4688A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:32 AND #BGR555::RED
    // Overlapping static entry reached from 0xC4688A.
    case 0xC4688C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:33 JSR GET_COLOUR_FADE_SLOPE
    case 0xC4688D: {
        Instruction step(cpu, 0x20, 0x006838u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:34 LDX @VIRTUAL02
    case 0xC46890: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:35 STA BUFFER + $7900,X
    case 0xC46892: {
        Instruction step(cpu, 0x9F, 0x7F7900u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:36 LDY @LOCAL04
    case 0xC46896: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:37 LDA @VIRTUAL04
    case 0xC46898: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:38 AND #BGR555::GREEN
    case 0xC4689A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:38 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC4689A.
    case 0xC4689C: {
        Instruction step(cpu, 0x03, 0x00004Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:39 LSR
    case 0xC4689D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:40 LSR
    case 0xC4689E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:41 LSR
    case 0xC4689F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:42 LSR
    case 0xC468A0: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:43 LSR
    case 0xC468A1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:44 TAX
    case 0xC468A2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:45 LDA @LOCAL01
    case 0xC468A3: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:46 AND #BGR555::GREEN
    case 0xC468A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:46 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC468A5.
    case 0xC468A7: {
        Instruction step(cpu, 0x03, 0x00004Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:47 LSR
    case 0xC468A8: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:48 LSR
    case 0xC468A9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:49 LSR
    case 0xC468AA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:50 LSR
    case 0xC468AB: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:51 LSR
    case 0xC468AC: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:52 JSR GET_COLOUR_FADE_SLOPE
    case 0xC468AD: {
        Instruction step(cpu, 0x20, 0x006838u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:53 LDX @VIRTUAL02
    case 0xC468B0: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:54 STA BUFFER + $7A00,X
    case 0xC468B2: {
        Instruction step(cpu, 0x9F, 0x7F7A00u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:55 LDY @LOCAL04
    case 0xC468B6: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:56 STY @LOCAL00
    case 0xC468B8: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:57 LDY #$0400
    case 0xC468BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:57 LDY #$0400
    // Overlapping static entry reached from 0xC468BA.
    case 0xC468BC: {
        Instruction step(cpu, 0x04, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:58 LDA @VIRTUAL04
    case 0xC468BD: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:58 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC468BC.
    case 0xC468BE: {
        Instruction step(cpu, 0x04, 0x000029u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    case 0xC468BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC468BE.
    case 0xC468C0: {
        Instruction step(cpu, 0x00, 0x00007Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC468BF.
    case 0xC468C1: {
        Instruction step(cpu, 0x7C, 0x003D22u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:60 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC468C2: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:61 TAX
    case 0xC468C6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:62 LDY #$0400
    case 0xC468C7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:62 LDY #$0400
    // Overlapping static entry reached from 0xC468C7.
    case 0xC468C9: {
        Instruction step(cpu, 0x04, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:63 LDA @LOCAL01
    case 0xC468CA: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:63 LDA @LOCAL01
    // Overlapping static entry reached from 0xC468C9.
    case 0xC468CB: {
        Instruction step(cpu, 0x10, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    case 0xC468CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC468CB.
    case 0xC468CD: {
        Instruction step(cpu, 0x00, 0x00007Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC468CC.
    case 0xC468CE: {
        Instruction step(cpu, 0x7C, 0x003D22u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:65 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC468CF: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:66 LDY @LOCAL00
    case 0xC468D3: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:67 JSR GET_COLOUR_FADE_SLOPE
    case 0xC468D5: {
        Instruction step(cpu, 0x20, 0x006838u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:68 LDX @VIRTUAL02
    case 0xC468D8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:69 STA BUFFER + $7B00,X
    case 0xC468DA: {
        Instruction step(cpu, 0x9F, 0x7F7B00u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:70 LDA (@LOCAL02)
    case 0xC468DE: {
        Instruction step(cpu, 0xB2, 0x000012u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:71 AND #BGR555::RED
    case 0xC468E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:71 AND #BGR555::RED
    // Overlapping static entry reached from 0xC468E0.
    case 0xC468E2: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:72 XBA
    case 0xC468E3: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:73 AND #$FF00
    case 0xC468E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:73 AND #$FF00
    // Overlapping static entry reached from 0xC468E4.
    case 0xC468E6: {
        Instruction step(cpu, 0xFF, 0x9F02A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:74 LDX @VIRTUAL02
    case 0xC468E7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:75 STA BUFFER + $7C00,X
    case 0xC468E9: {
        Instruction step(cpu, 0x9F, 0x7F7C00u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:75 STA BUFFER + $7C00,X
    // Overlapping static entry reached from 0xC468E6.
    case 0xC468EA: {
        Instruction step(cpu, 0x00, 0x00007Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:76 LDA (@LOCAL02)
    case 0xC468ED: {
        Instruction step(cpu, 0xB2, 0x000012u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:77 AND #BGR555::GREEN
    case 0xC468EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:77 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC468EF.
    case 0xC468F1: {
        Instruction step(cpu, 0x03, 0x00000Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:78 ASL
    case 0xC468F2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:79 ASL
    case 0xC468F3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:80 ASL
    case 0xC468F4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:81 LDX @VIRTUAL02
    case 0xC468F5: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:81 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC468CB.
    case 0xC468F6: {
        Instruction step(cpu, 0x02, 0x00009Fu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:82 STA BUFFER + $7D00,X
    case 0xC468F7: {
        Instruction step(cpu, 0x9F, 0x7F7D00u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:83 LDA (@LOCAL02)
    case 0xC468FB: {
        Instruction step(cpu, 0xB2, 0x000012u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:84 AND #BGR555::BLUE
    case 0xC468FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:84 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC468FD.
    case 0xC468FF: {
        Instruction step(cpu, 0x7C, 0x004A4Au, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:85 LSR
    case 0xC46900: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:86 LSR
    case 0xC46901: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:87 LDX @VIRTUAL02
    case 0xC46902: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:88 STA BUFFER + $7E00,X
    case 0xC46904: {
        Instruction step(cpu, 0x9F, 0x7F7E00u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:89 INC @VIRTUAL06
    case 0xC46908: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:90 INC @VIRTUAL06
    case 0xC4690A: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:91 INC @LOCAL03
    case 0xC4690C: {
        Instruction step(cpu, 0xE6, 0x000014u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:93 LDA @LOCAL03
    case 0xC4690E: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:94 CMP #BPP4PALETTE_SIZE * 3
    case 0xC46910: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000060u : 0x000060u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:94 CMP #BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC46910.
    case 0xC46912: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC46913: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC46915: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC46917: {
        Instruction step(cpu, 0x4C, 0x00686Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    // Overlapping static entry reached from 0xC43FFF.
    case 0xC46918: {
        Instruction step(cpu, 0x6D, 0x002B68u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:96 END_C_FUNCTION
    case 0xC4691A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:96 END_C_FUNCTION
    case 0xC4691B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
