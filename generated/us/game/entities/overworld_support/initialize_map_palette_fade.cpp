// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/initialize_map_palette_fade.asm
bool resume_overworld_initialize_map_palette_fade(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49208: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC491E5.
    case 0xC49209: {
        Instruction step(cpu, 0x31, 0x00000Bu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4920A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4920B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4920C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC4920D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4920D.
    case 0xC4920F: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC49210: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:11 END_STACK_VARS
    case 0xC49211: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:12 STA @LOCAL04
    case 0xC49212: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC4920F.
    case 0xC49213: {
        Instruction step(cpu, 0x16, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC49214: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x007800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC49213.
    case 0xC49215: {
        Instruction step(cpu, 0x00, 0x000078u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC49214.
    case 0xC49216: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC49217: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC49219: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC49219.
    case 0xC4921B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC4921C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:14 STZ @LOCAL03
    case 0xC4921E: {
        Instruction step(cpu, 0x64, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:15 JMP @UNKNOWN1
    case 0xC49220: {
        Instruction step(cpu, 0x4C, 0x0092C4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:17 LDA @LOCAL03
    case 0xC49223: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:18 ASL
    case 0xC49225: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:19 STA @VIRTUAL02
    case 0xC49226: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:20 CLC
    case 0xC49228: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:21 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC49229: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x000240u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:21 ADC #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC49229.
    case 0xC4922B: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:22 STA @LOCAL02
    case 0xC4922C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:23 LDA (@LOCAL02)
    case 0xC4922E: {
        Instruction step(cpu, 0xB2, 0x000012u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:24 STA @LOCAL01
    case 0xC49230: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:25 LDA [@VIRTUAL06]
    case 0xC49232: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:26 STA @VIRTUAL04
    case 0xC49234: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:27 LDY @LOCAL04
    case 0xC49236: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:28 LDA @VIRTUAL04
    case 0xC49238: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:29 AND #BGR555::RED
    case 0xC4923A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:29 AND #BGR555::RED
    // Overlapping static entry reached from 0xC4923A.
    case 0xC4923C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:30 TAX
    case 0xC4923D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:31 LDA @LOCAL01
    case 0xC4923E: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:32 AND #BGR555::RED
    case 0xC49240: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:32 AND #BGR555::RED
    // Overlapping static entry reached from 0xC49240.
    case 0xC49242: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:33 JSR GET_COLOUR_FADE_SLOPE
    case 0xC49243: {
        Instruction step(cpu, 0x20, 0x0091EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:34 LDX @VIRTUAL02
    case 0xC49246: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:35 STA BUFFER + $7900,X
    case 0xC49248: {
        Instruction step(cpu, 0x9F, 0x7F7900u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:36 LDY @LOCAL04
    case 0xC4924C: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:37 LDA @VIRTUAL04
    case 0xC4924E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:38 AND #BGR555::GREEN
    case 0xC49250: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:38 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC49250.
    case 0xC49252: {
        Instruction step(cpu, 0x03, 0x00004Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:39 LSR
    case 0xC49253: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:40 LSR
    case 0xC49254: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:41 LSR
    case 0xC49255: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:42 LSR
    case 0xC49256: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:43 LSR
    case 0xC49257: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:44 TAX
    case 0xC49258: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:45 LDA @LOCAL01
    case 0xC49259: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:46 AND #BGR555::GREEN
    case 0xC4925B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:46 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC4925B.
    case 0xC4925D: {
        Instruction step(cpu, 0x03, 0x00004Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:47 LSR
    case 0xC4925E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:48 LSR
    case 0xC4925F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:49 LSR
    case 0xC49260: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:50 LSR
    case 0xC49261: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:51 LSR
    case 0xC49262: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:52 JSR GET_COLOUR_FADE_SLOPE
    case 0xC49263: {
        Instruction step(cpu, 0x20, 0x0091EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:53 LDX @VIRTUAL02
    case 0xC49266: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:54 STA BUFFER + $7A00,X
    case 0xC49268: {
        Instruction step(cpu, 0x9F, 0x7F7A00u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:55 LDY @LOCAL04
    case 0xC4926C: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:56 STY @LOCAL00
    case 0xC4926E: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:57 LDY #$0400
    case 0xC49270: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:57 LDY #$0400
    // Overlapping static entry reached from 0xC49270.
    case 0xC49272: {
        Instruction step(cpu, 0x04, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:58 LDA @VIRTUAL04
    case 0xC49273: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:58 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC49272.
    case 0xC49274: {
        Instruction step(cpu, 0x04, 0x000029u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    case 0xC49275: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC49274.
    case 0xC49276: {
        Instruction step(cpu, 0x00, 0x00007Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:59 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC49275.
    case 0xC49277: {
        Instruction step(cpu, 0x7C, 0x005B22u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:60 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC49278: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:61 TAX
    case 0xC4927C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:62 LDY #$0400
    case 0xC4927D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:62 LDY #$0400
    // Overlapping static entry reached from 0xC4927D.
    case 0xC4927F: {
        Instruction step(cpu, 0x04, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:63 LDA @LOCAL01
    case 0xC49280: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:63 LDA @LOCAL01
    // Overlapping static entry reached from 0xC4927F.
    case 0xC49281: {
        Instruction step(cpu, 0x10, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    case 0xC49282: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC49281.
    case 0xC49283: {
        Instruction step(cpu, 0x00, 0x00007Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:64 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC49282.
    case 0xC49284: {
        Instruction step(cpu, 0x7C, 0x005B22u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:65 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC49285: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:66 LDY @LOCAL00
    case 0xC49289: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:67 JSR GET_COLOUR_FADE_SLOPE
    case 0xC4928B: {
        Instruction step(cpu, 0x20, 0x0091EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:68 LDX @VIRTUAL02
    case 0xC4928E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:69 STA BUFFER + $7B00,X
    case 0xC49290: {
        Instruction step(cpu, 0x9F, 0x7F7B00u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:70 LDA (@LOCAL02)
    case 0xC49294: {
        Instruction step(cpu, 0xB2, 0x000012u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:71 AND #BGR555::RED
    case 0xC49296: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:71 AND #BGR555::RED
    // Overlapping static entry reached from 0xC49296.
    case 0xC49298: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:72 XBA
    case 0xC49299: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:73 AND #$FF00
    case 0xC4929A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:73 AND #$FF00
    // Overlapping static entry reached from 0xC4929A.
    case 0xC4929C: {
        Instruction step(cpu, 0xFF, 0x9F02A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:74 LDX @VIRTUAL02
    case 0xC4929D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:75 STA BUFFER + $7C00,X
    case 0xC4929F: {
        Instruction step(cpu, 0x9F, 0x7F7C00u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:75 STA BUFFER + $7C00,X
    // Overlapping static entry reached from 0xC4929C.
    case 0xC492A0: {
        Instruction step(cpu, 0x00, 0x00007Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:76 LDA (@LOCAL02)
    case 0xC492A3: {
        Instruction step(cpu, 0xB2, 0x000012u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:77 AND #BGR555::GREEN
    case 0xC492A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000E0u : 0x0003E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:77 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC492A5.
    case 0xC492A7: {
        Instruction step(cpu, 0x03, 0x00000Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:78 ASL
    case 0xC492A8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:79 ASL
    case 0xC492A9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:80 ASL
    case 0xC492AA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:81 LDX @VIRTUAL02
    case 0xC492AB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:81 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC49281.
    case 0xC492AC: {
        Instruction step(cpu, 0x02, 0x00009Fu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:82 STA BUFFER + $7D00,X
    case 0xC492AD: {
        Instruction step(cpu, 0x9F, 0x7F7D00u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:83 LDA (@LOCAL02)
    case 0xC492B1: {
        Instruction step(cpu, 0xB2, 0x000012u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:84 AND #BGR555::BLUE
    case 0xC492B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:84 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC492B3.
    case 0xC492B5: {
        Instruction step(cpu, 0x7C, 0x004A4Au, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:85 LSR
    case 0xC492B6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:86 LSR
    case 0xC492B7: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:87 LDX @VIRTUAL02
    case 0xC492B8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:88 STA BUFFER + $7E00,X
    case 0xC492BA: {
        Instruction step(cpu, 0x9F, 0x7F7E00u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:89 INC @VIRTUAL06
    case 0xC492BE: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:90 INC @VIRTUAL06
    case 0xC492C0: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:91 INC @LOCAL03
    case 0xC492C2: {
        Instruction step(cpu, 0xE6, 0x000014u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:93 LDA @LOCAL03
    case 0xC492C4: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:94 CMP #BPP4PALETTE_SIZE * 3
    case 0xC492C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000060u : 0x000060u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/initialize_map_palette_fade.asm:94 CMP #BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC492C6.
    case 0xC492C8: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC492C9: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC492CB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:95 BCCL @UNKNOWN0
    case 0xC492CD: {
        Instruction step(cpu, 0x4C, 0x009223u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:96 END_C_FUNCTION
    case 0xC492D0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/initialize_map_palette_fade.asm:96 END_C_FUNCTION
    case 0xC492D1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
