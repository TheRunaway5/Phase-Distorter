// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm
bool resume_overworld_prepare_your_sanctuary_location_tile_arrangement_data(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4B18E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B190: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B191: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B192: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B193: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E7u : 0x00FFE7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B193.
    case 0xC4B195: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B196: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4B197: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:15 STY @LOCAL05
    case 0xC4B198: {
        Instruction step(cpu, 0x84, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:15 STY @LOCAL05
    // Overlapping static entry reached from 0xC4B195.
    case 0xC4B199: {
        Instruction step(cpu, 0x17, 0x000038u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:16 SEC
    case 0xC4B19A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:17 SBC #16
    case 0xC4B19B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:17 SBC #16
    // Overlapping static entry reached from 0xC4B19B.
    case 0xC4B19D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:18 STA @LOCAL04
    case 0xC4B19E: {
        Instruction step(cpu, 0x85, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:19 TXA
    case 0xC4B1A0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:20 SEC
    case 0xC4B1A1: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:21 SBC #14
    case 0xC4B1A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:21 SBC #14
    // Overlapping static entry reached from 0xC4B1A2.
    case 0xC4B1A4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:22 STA @LOCAL03
    case 0xC4B1A5: {
        Instruction step(cpu, 0x85, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B1A7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:24 STZ_BADOPT @LOCAL00
    case 0xC4B1A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:24 STZ_BADOPT @LOCAL00
    case 0xC4B1AB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:24 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC4B1A9.
    case 0xC4B1AC: {
        Instruction step(cpu, 0x0E, 0x0000A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:25 LDX #$0800
    case 0xC4B1AD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:25 LDX #$0800
    // Overlapping static entry reached from 0xC4B1AD.
    case 0xC4B1AF: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC4B1B0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:27 LDA #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC4B1B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00F000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:27 LDA #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC4B1B2.
    case 0xC4B1B4: {
        Instruction step(cpu, 0xF0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:28 JSL MEMSET16
    case 0xC4B1B5: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:28 JSL MEMSET16
    // Overlapping static entry reached from 0xC4B1B4.
    case 0xC4B1B6: {
        Instruction step(cpu, 0xED, 0x00C08Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B1B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B1B9.
    case 0xC4B1BB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B1BC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B1BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B1BE.
    case 0xC4B1C0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B1C1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:30 LDY @LOCAL05
    case 0xC4B1C3: {
        Instruction step(cpu, 0xA4, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:31 TYA
    case 0xC4B1C5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:32 LDY #$0800
    case 0xC4B1C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:32 LDY #$0800
    // Overlapping static entry reached from 0xC4B1C6.
    case 0xC4B1C8: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:33 JSL MULT16
    case 0xC4B1C9: {
        Instruction step(cpu, 0x22, 0xC09014u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:34 CLC
    case 0xC4B1CD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:35 ADC @VIRTUAL06
    case 0xC4B1CE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:36 STA @VIRTUAL06
    case 0xC4B1D0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:37 LDA #0
    case 0xC4B1D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:37 LDA #0
    // Overlapping static entry reached from 0xC4B1D2.
    case 0xC4B1D4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:38 STA @VIRTUAL04
    case 0xC4B1D5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:39 JMP @UNKNOWN6
    case 0xC4B1D7: {
        Instruction step(cpu, 0x4C, 0x00B291u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:39 JMP @UNKNOWN6
    // Overlapping static entry reached from 0xC4B1B4.
    case 0xC4B1D8: {
        Instruction step(cpu, 0x91, 0x0000B2u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    case 0xC4B1DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4B254.
    case 0xC4B1DB: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4B1DA.
    case 0xC4B1DC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:42 STA @VIRTUAL02
    case 0xC4B1DD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:43 STA @LOCAL02
    case 0xC4B1DF: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:44 JMP @UNKNOWN4
    case 0xC4B1E1: {
        Instruction step(cpu, 0x4C, 0x00B283u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:46 LDA @VIRTUAL04
    case 0xC4B1E4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:47 CLC
    case 0xC4B1E6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:48 ADC @LOCAL03
    case 0xC4B1E7: {
        Instruction step(cpu, 0x65, 0x000013u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:49 LSR
    case 0xC4B1E9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:50 LSR
    case 0xC4B1EA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:51 STA @LOCAL01
    case 0xC4B1EB: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:52 LDA @VIRTUAL02
    case 0xC4B1ED: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:53 CLC
    case 0xC4B1EF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:54 ADC @LOCAL04
    case 0xC4B1F0: {
        Instruction step(cpu, 0x65, 0x000015u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:55 LSR
    case 0xC4B1F2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:56 LSR
    case 0xC4B1F3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:57 TAY
    case 0xC4B1F4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:58 LSR
    case 0xC4B1F5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:59 LSR
    case 0xC4B1F6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:60 LSR
    case 0xC4B1F7: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:61 STA @VIRTUAL02
    case 0xC4B1F8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:62 LDA @LOCAL01
    case 0xC4B1FA: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:63 AND #$FFFC
    case 0xC4B1FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FCu : 0x00FFFCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:63 AND #$FFFC
    // Overlapping static entry reached from 0xC4B1FC.
    case 0xC4B1FE: {
        Instruction step(cpu, 0xFF, 0x0A0A0Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B1FF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B200: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B201: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:65 CLC
    case 0xC4B202: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:66 ADC @VIRTUAL02
    case 0xC4B203: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:67 TAX
    case 0xC4B205: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B206: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:69 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC4B208: {
        Instruction step(cpu, 0xBF, 0xD7A800u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:70 LSR
    case 0xC4B20C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:71 LSR
    case 0xC4B20D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:72 LSR
    case 0xC4B20E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC4B20F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:74 AND #$00FF
    case 0xC4B211: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC4B211.
    case 0xC4B213: {
        Instruction step(cpu, 0x00, 0x0000CDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:75 CMP LOADED_MAP_TILE_COMBO
    case 0xC4B214: {
        Instruction step(cpu, 0xCD, 0x0046F4u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:76 BNE @UNKNOWN2
    case 0xC4B217: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:77 LDA @LOCAL01
    case 0xC4B219: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:78 TAX
    case 0xC4B21B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:79 TYA
    case 0xC4B21C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:80 JSL REDIRECT_C0A156
    case 0xC4B21D: {
        Instruction step(cpu, 0x22, 0xC0A131u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:81 STA @LOCAL01
    case 0xC4B221: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:82 BRA @UNKNOWN3
    case 0xC4B223: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:84 LDA #0
    case 0xC4B225: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:84 LDA #0
    // Overlapping static entry reached from 0xC4B225.
    case 0xC4B227: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:85 STA @LOCAL01
    case 0xC4B228: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:87 LDA @LOCAL02
    case 0xC4B22A: {
        Instruction step(cpu, 0xA5, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:88 STA @VIRTUAL02
    case 0xC4B22C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:89 CLC
    case 0xC4B22E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:90 ADC @LOCAL04
    case 0xC4B22F: {
        Instruction step(cpu, 0x65, 0x000015u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:91 AND #$0003
    case 0xC4B231: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:91 AND #$0003
    // Overlapping static entry reached from 0xC4B231.
    case 0xC4B233: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:92 PHA
    case 0xC4B234: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:93 LDA @VIRTUAL04
    case 0xC4B235: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:94 CLC
    case 0xC4B237: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:95 ADC @LOCAL03
    case 0xC4B238: {
        Instruction step(cpu, 0x65, 0x000013u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:96 AND #$0003
    case 0xC4B23A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:96 AND #$0003
    // Overlapping static entry reached from 0xC4B23A.
    case 0xC4B23C: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:97 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B23D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:97 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B23E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:98 STA @VIRTUAL02
    case 0xC4B23F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:99 LDA @LOCAL01
    case 0xC4B241: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:589 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4B243: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:590 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4B244: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:591 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4B245: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:592 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4B246: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:101 CLC
    case 0xC4B247: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:102 ADC @VIRTUAL02
    case 0xC4B248: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:103 PLY
    case 0xC4B24A: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:104 STY @VIRTUAL02
    case 0xC4B24B: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:105 CLC
    case 0xC4B24D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:106 ADC @VIRTUAL02
    case 0xC4B24E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:107 STA @LOCAL01
    case 0xC4B250: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4B252: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B252.
    case 0xC4B254: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4B255: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4B257: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B257.
    case 0xC4B259: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4B25A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:109 LDA @LOCAL01
    case 0xC4B25C: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:110 ASL
    case 0xC4B25E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:111 CLC
    case 0xC4B25F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:112 ADC @VIRTUAL0A
    case 0xC4B260: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:113 STA @VIRTUAL0A
    case 0xC4B262: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:114 LDA [@VIRTUAL0A]
    case 0xC4B264: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:115 AND #$03FF
    case 0xC4B266: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0003FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:115 AND #$03FF
    // Overlapping static entry reached from 0xC4B266.
    case 0xC4B268: {
        Instruction step(cpu, 0x03, 0x00000Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:116 ASL
    case 0xC4B269: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:117 TAX
    case 0xC4B26A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:118 LDA #$FFFF
    case 0xC4B26B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:118 LDA #$FFFF
    // Overlapping static entry reached from 0xC4B26B.
    case 0xC4B26D: {
        Instruction step(cpu, 0xFF, 0xF0009Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:119 STA LOADED_MAP_BLOCKS,X
    case 0xC4B26E: {
        Instruction step(cpu, 0x9D, 0x00F000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:120 LDA [@VIRTUAL0A]
    case 0xC4B271: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:121 STA [@VIRTUAL06]
    case 0xC4B273: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:122 INC @VIRTUAL06
    case 0xC4B275: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:123 INC @VIRTUAL06
    case 0xC4B277: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:124 LDA @LOCAL02
    case 0xC4B279: {
        Instruction step(cpu, 0xA5, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:125 STA @VIRTUAL02
    case 0xC4B27B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:126 INC @VIRTUAL02
    case 0xC4B27D: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:127 LDA @VIRTUAL02
    case 0xC4B27F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:128 STA @LOCAL02
    case 0xC4B281: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:130 LDA @VIRTUAL02
    case 0xC4B283: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:131 CMP #32
    case 0xC4B285: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:131 CMP #32
    // Overlapping static entry reached from 0xC4B285.
    case 0xC4B287: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4B288: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4B28A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4B28C: {
        Instruction step(cpu, 0x4C, 0x00B1E4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:133 INC @VIRTUAL04
    case 0xC4B28F: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:135 LDA @VIRTUAL04
    case 0xC4B291: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:136 CMP #30
    case 0xC4B293: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:136 CMP #30
    // Overlapping static entry reached from 0xC4B293.
    case 0xC4B295: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4B296: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4B298: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4B29A: {
        Instruction step(cpu, 0x4C, 0x00B1DAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:138 END_C_FUNCTION
    case 0xC4B29D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:138 END_C_FUNCTION
    case 0xC4B29E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
