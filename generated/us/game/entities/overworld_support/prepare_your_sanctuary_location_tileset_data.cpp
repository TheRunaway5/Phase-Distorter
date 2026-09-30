// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/prepare_your_sanctuary_location_tileset_data.asm
bool resume_overworld_prepare_your_sanctuary_location_tileset_data(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4E08C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E08E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E08F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E090: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E091: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E091.
    case 0xC4E093: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E094: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:9 END_STACK_VARS
    case 0xC4E095: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:10 STA @LOCAL02
    case 0xC4E096: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC4E093.
    case 0xC4E097: {
        Instruction step(cpu, 0x14, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:11 LDA #0
    case 0xC4E098: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:11 LDA #0
    // Overlapping static entry reached from 0xC4E097.
    case 0xC4E099: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:11 LDA #0
    // Overlapping static entry reached from 0xC4E098.
    case 0xC4E09A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:12 STA @VIRTUAL04
    case 0xC4E09B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:13 BRA @UNKNOWN2
    case 0xC4E09D: {
        Instruction step(cpu, 0x80, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:15 LDA @VIRTUAL04
    case 0xC4E09F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:16 ASL
    case 0xC4E0A1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:17 CLC
    case 0xC4E0A2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:18 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC4E0A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x00F000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:18 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC4E0A3.
    case 0xC4E0A5: {
        Instruction step(cpu, 0xF0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:19 STA @VIRTUAL02
    case 0xC4E0A6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:19 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4E0A5.
    case 0xC4E0A7: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:20 LDX @VIRTUAL02
    case 0xC4E0A8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:21 LDA __BSS_START__,X
    case 0xC4E0AA: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:22 BEQ @UNKNOWN1
    case 0xC4E0AD: {
        Instruction step(cpu, 0xF0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E0AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E0AF.
    case 0xC4E0B1: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E0B2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E0B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E0B4.
    case 0xC4E0B6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E0B7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:24 LDA @VIRTUAL04
    case 0xC4E0B9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:25 ASL
    case 0xC4E0BB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:26 ASL
    case 0xC4E0BC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:27 ASL
    case 0xC4E0BD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:28 ASL
    case 0xC4E0BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:29 ASL
    case 0xC4E0BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:30 CLC
    case 0xC4E0C0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:31 ADC @VIRTUAL06
    case 0xC4E0C1: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:32 STA @VIRTUAL06
    case 0xC4E0C3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:33 STA @LOCAL00
    case 0xC4E0C5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:34 LDA @VIRTUAL06+2
    case 0xC4E0C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:35 STA @LOCAL00+2
    case 0xC4E0C9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:36 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4E0CB: {
        Instruction step(cpu, 0xAD, 0x00B4B8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:37 ASL
    case 0xC4E0CE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:38 ASL
    case 0xC4E0CF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:39 ASL
    case 0xC4E0D0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:40 ASL
    case 0xC4E0D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:41 CLC
    case 0xC4E0D2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:42 ADC #$6000
    case 0xC4E0D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:42 ADC #$6000
    // Overlapping static entry reached from 0xC4E0D3.
    case 0xC4E0D5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:43 AND #$7FFF
    case 0xC4E0D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:43 AND #$7FFF
    // Overlapping static entry reached from 0xC4E0D6.
    case 0xC4E0D8: {
        Instruction step(cpu, 0x7F, 0x20A2A8u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:44 TAY
    case 0xC4E0D9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:45 LDX #32
    case 0xC4E0DA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:45 LDX #32
    // Overlapping static entry reached from 0xC4E0DA.
    case 0xC4E0DC: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E0DD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:47 LDA #0
    case 0xC4E0DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:48 JSL PREPARE_VRAM_COPY
    case 0xC4E0E1: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E0DF.
    case 0xC4E0E2: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:48 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E0E2.
    case 0xC4E0E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000ADu : 0x00B8ADu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:50 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4E0E5: {
        Instruction step(cpu, 0xAD, 0x00B4B8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:50 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    // Overlapping static entry reached from 0xC4E0E4.
    case 0xC4E0E6: {
        Instruction step(cpu, 0xB8, 0x000000u, 1u, AddressMode::Implied);
        step.clear_overflow();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:50 LDA NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    // Overlapping static entry reached from 0xC4E0E4.
    case 0xC4E0E7: {
        Instruction step(cpu, 0xB4, 0x0000A6u, 2u, AddressMode::DirectPageIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:51 LDX @VIRTUAL02
    case 0xC4E0E8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:51 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC4E0E7.
    case 0xC4E0E9: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:52 STA __BSS_START__,X
    case 0xC4E0EA: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:53 INC NEXT_YOUR_SANCTUARY_LOCATION_TILE_INDEX
    case 0xC4E0ED: {
        Instruction step(cpu, 0xEE, 0x00B4B8u, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:54 INC YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4E0F0: {
        Instruction step(cpu, 0xEE, 0x00B4BCu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:56 INC @VIRTUAL04
    case 0xC4E0F3: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:58 LDA @VIRTUAL04
    case 0xC4E0F5: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:59 CMP #1024
    case 0xC4E0F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:59 CMP #1024
    // Overlapping static entry reached from 0xC4E0F7.
    case 0xC4E0F9: {
        Instruction step(cpu, 0x04, 0x000090u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:60 BCC @UNKNOWN0
    case 0xC4E0FA: {
        Instruction step(cpu, 0x90, 0x0000A3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:60 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC4E0F9.
    case 0xC4E0FB: {
        Instruction step(cpu, 0xA3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E0FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E0FB.
    case 0xC4E0FD: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E0FC.
    case 0xC4E0FE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E0FF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E101: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E101.
    case 0xC4E103: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:61 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E104: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:62 LDY #$0800
    case 0xC4E106: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:62 LDY #$0800
    // Overlapping static entry reached from 0xC4E106.
    case 0xC4E108: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:63 LDA @LOCAL02
    case 0xC4E109: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:64 JSL MULT16
    case 0xC4E10B: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:65 CLC
    case 0xC4E10F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:66 ADC @VIRTUAL06
    case 0xC4E110: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:67 STA @VIRTUAL06
    case 0xC4E112: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:68 LDX #0
    case 0xC4E114: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:68 LDX #0
    // Overlapping static entry reached from 0xC4E114.
    case 0xC4E116: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:69 STX @LOCAL01
    case 0xC4E117: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:70 BRA @UNKNOWN4
    case 0xC4E119: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:72 LDA [@VIRTUAL06]
    case 0xC4E11B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:73 STA @LOCAL02
    case 0xC4E11D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:74 AND #$03FF
    case 0xC4E11F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0003FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:74 AND #$03FF
    // Overlapping static entry reached from 0xC4E11F.
    case 0xC4E121: {
        Instruction step(cpu, 0x03, 0x00000Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:75 ASL
    case 0xC4E122: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:76 TAX
    case 0xC4E123: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:77 LDA @LOCAL02
    case 0xC4E124: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:78 AND #$FC00
    case 0xC4E126: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FC00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:78 AND #$FC00
    // Overlapping static entry reached from 0xC4E126.
    case 0xC4E128: {
        Instruction step(cpu, 0xFC, 0x00001Du, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:79 ORA LOADED_MAP_BLOCKS,X
    case 0xC4E129: {
        Instruction step(cpu, 0x1D, 0x00F000u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:79 ORA LOADED_MAP_BLOCKS,X
    // Overlapping static entry reached from 0xC4E128.
    case 0xC4E12B: {
        Instruction step(cpu, 0xF0, 0x000087u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:80 STA [@VIRTUAL06]
    case 0xC4E12C: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:80 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4E12B.
    case 0xC4E12D: {
        Instruction step(cpu, 0x06, 0x0000E6u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:81 INC @VIRTUAL06
    case 0xC4E12E: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:81 INC @VIRTUAL06
    // Overlapping static entry reached from 0xC4E12D.
    case 0xC4E12F: {
        Instruction step(cpu, 0x06, 0x0000E6u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:82 INC @VIRTUAL06
    case 0xC4E130: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:82 INC @VIRTUAL06
    // Overlapping static entry reached from 0xC4E12F.
    case 0xC4E131: {
        Instruction step(cpu, 0x06, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:83 LDX @LOCAL01
    case 0xC4E132: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:83 LDX @LOCAL01
    // Overlapping static entry reached from 0xC4E131.
    case 0xC4E133: {
        Instruction step(cpu, 0x12, 0x0000E8u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:84 INX
    case 0xC4E134: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:85 STX @LOCAL01
    case 0xC4E135: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:87 CPX #960
    case 0xC4E137: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000C0u : 0x0003C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:87 CPX #960
    // Overlapping static entry reached from 0xC4E137.
    case 0xC4E139: {
        Instruction step(cpu, 0x03, 0x000090u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:88 BCC @UNKNOWN3
    case 0xC4E13A: {
        Instruction step(cpu, 0x90, 0x0000DFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tileset_data.asm:88 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC4E139.
    case 0xC4E13B: {
        Instruction step(cpu, 0xDF, 0xC2602Bu, 4u, AddressMode::LongIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:89 END_C_FUNCTION
    case 0xC4E13C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tileset_data.asm:89 END_C_FUNCTION
    case 0xC4E13D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
