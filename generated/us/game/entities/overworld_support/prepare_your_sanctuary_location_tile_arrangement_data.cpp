// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm
bool resume_overworld_prepare_your_sanctuary_location_tile_arrangement_data(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4DF7D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF7F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF80: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF81: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E7u : 0x00FFE7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DF82.
    case 0xC4DF84: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF85: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:14 END_STACK_VARS
    case 0xC4DF86: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:15 STY @LOCAL05
    case 0xC4DF87: {
        Instruction step(cpu, 0x84, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:15 STY @LOCAL05
    // Overlapping static entry reached from 0xC4DF84.
    case 0xC4DF88: {
        Instruction step(cpu, 0x17, 0x000038u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:16 SEC
    case 0xC4DF89: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:17 SBC #16
    case 0xC4DF8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:17 SBC #16
    // Overlapping static entry reached from 0xC4DF8A.
    case 0xC4DF8C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:18 STA @LOCAL04
    case 0xC4DF8D: {
        Instruction step(cpu, 0x85, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:19 TXA
    case 0xC4DF8F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:20 SEC
    case 0xC4DF90: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:21 SBC #14
    case 0xC4DF91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:21 SBC #14
    // Overlapping static entry reached from 0xC4DF91.
    case 0xC4DF93: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:22 STA @LOCAL03
    case 0xC4DF94: {
        Instruction step(cpu, 0x85, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DF96: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:24 STZ_BADOPT @LOCAL00
    case 0xC4DF98: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:25 LDX #$0800
    case 0xC4DF9A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:25 LDX #$0800
    // Overlapping static entry reached from 0xC4DF9A.
    case 0xC4DF9C: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC4DF9D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:27 LDA #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC4DF9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00F000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:27 LDA #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC4DF9F.
    case 0xC4DFA1: {
        Instruction step(cpu, 0xF0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:28 JSL MEMSET16
    case 0xC4DFA2: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:28 JSL MEMSET16
    // Overlapping static entry reached from 0xC4DFA1.
    case 0xC4DFA3: {
        Instruction step(cpu, 0xFC, 0x00C08Eu, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DFA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DFA6.
    case 0xC4DFA8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DFA9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DFAB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DFAB.
    case 0xC4DFAD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DFAE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:30 LDY @LOCAL05
    case 0xC4DFB0: {
        Instruction step(cpu, 0xA4, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:31 TYA
    case 0xC4DFB2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:32 LDY #$0800
    case 0xC4DFB3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:32 LDY #$0800
    // Overlapping static entry reached from 0xC4DFB3.
    case 0xC4DFB5: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:33 JSL MULT16
    case 0xC4DFB6: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:34 CLC
    case 0xC4DFBA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:35 ADC @VIRTUAL06
    case 0xC4DFBB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:36 STA @VIRTUAL06
    case 0xC4DFBD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:37 LDA #0
    case 0xC4DFBF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:37 LDA #0
    // Overlapping static entry reached from 0xC4DFBF.
    case 0xC4DFC1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:38 STA @VIRTUAL04
    case 0xC4DFC2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:39 JMP @UNKNOWN6
    case 0xC4DFC4: {
        Instruction step(cpu, 0x4C, 0x00E07Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:39 JMP @UNKNOWN6
    // Overlapping static entry reached from 0xC4DFA1.
    case 0xC4DFC5: {
        Instruction step(cpu, 0x7E, 0x00A9E0u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    case 0xC4DFC7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4E041.
    case 0xC4DFC8: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:41 LDA #0
    // Overlapping static entry reached from 0xC4DFC7.
    case 0xC4DFC9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:42 STA @VIRTUAL02
    case 0xC4DFCA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:43 STA @LOCAL02
    case 0xC4DFCC: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:44 JMP @UNKNOWN4
    case 0xC4DFCE: {
        Instruction step(cpu, 0x4C, 0x00E070u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:46 LDA @VIRTUAL04
    case 0xC4DFD1: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:47 CLC
    case 0xC4DFD3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:48 ADC @LOCAL03
    case 0xC4DFD4: {
        Instruction step(cpu, 0x65, 0x000013u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:49 LSR
    case 0xC4DFD6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:50 LSR
    case 0xC4DFD7: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:51 STA @LOCAL01
    case 0xC4DFD8: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:52 LDA @VIRTUAL02
    case 0xC4DFDA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:53 CLC
    case 0xC4DFDC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:54 ADC @LOCAL04
    case 0xC4DFDD: {
        Instruction step(cpu, 0x65, 0x000015u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:55 LSR
    case 0xC4DFDF: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:56 LSR
    case 0xC4DFE0: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:57 TAY
    case 0xC4DFE1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:58 LSR
    case 0xC4DFE2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:59 LSR
    case 0xC4DFE3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:60 LSR
    case 0xC4DFE4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:61 STA @VIRTUAL02
    case 0xC4DFE5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:62 LDA @LOCAL01
    case 0xC4DFE7: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:63 AND #$FFFC
    case 0xC4DFE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FCu : 0x00FFFCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:63 AND #$FFFC
    // Overlapping static entry reached from 0xC4DFE9.
    case 0xC4DFEB: {
        Instruction step(cpu, 0xFF, 0x0A0A0Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4DFEC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4DFED: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:64 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4DFEE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:65 CLC
    case 0xC4DFEF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:66 ADC @VIRTUAL02
    case 0xC4DFF0: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:67 TAX
    case 0xC4DFF2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DFF3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:69 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC4DFF5: {
        Instruction step(cpu, 0xBF, 0xD7A800u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:70 LSR
    case 0xC4DFF9: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:71 LSR
    case 0xC4DFFA: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:72 LSR
    case 0xC4DFFB: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC4DFFC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:74 AND #$00FF
    case 0xC4DFFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC4DFFE.
    case 0xC4E000: {
        Instruction step(cpu, 0x00, 0x0000CDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:75 CMP LOADED_MAP_TILE_COMBO
    case 0xC4E001: {
        Instruction step(cpu, 0xCD, 0x00436Eu, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:76 BNE @UNKNOWN2
    case 0xC4E004: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:77 LDA @LOCAL01
    case 0xC4E006: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:78 TAX
    case 0xC4E008: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:79 TYA
    case 0xC4E009: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:80 JSL REDIRECT_C0A156
    case 0xC4E00A: {
        Instruction step(cpu, 0x22, 0xC0A152u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:81 STA @LOCAL01
    case 0xC4E00E: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:82 BRA @UNKNOWN3
    case 0xC4E010: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:84 LDA #0
    case 0xC4E012: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:84 LDA #0
    // Overlapping static entry reached from 0xC4E012.
    case 0xC4E014: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:85 STA @LOCAL01
    case 0xC4E015: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:87 LDA @LOCAL02
    case 0xC4E017: {
        Instruction step(cpu, 0xA5, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:88 STA @VIRTUAL02
    case 0xC4E019: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:89 CLC
    case 0xC4E01B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:90 ADC @LOCAL04
    case 0xC4E01C: {
        Instruction step(cpu, 0x65, 0x000015u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:91 AND #$0003
    case 0xC4E01E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:91 AND #$0003
    // Overlapping static entry reached from 0xC4E01E.
    case 0xC4E020: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:92 PHA
    case 0xC4E021: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:93 LDA @VIRTUAL04
    case 0xC4E022: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:94 CLC
    case 0xC4E024: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:95 ADC @LOCAL03
    case 0xC4E025: {
        Instruction step(cpu, 0x65, 0x000013u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:96 AND #$0003
    case 0xC4E027: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:96 AND #$0003
    // Overlapping static entry reached from 0xC4E027.
    case 0xC4E029: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:97 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E02A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:97 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E02B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:98 STA @VIRTUAL02
    case 0xC4E02C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:99 LDA @LOCAL01
    case 0xC4E02E: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:589 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4E030: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:590 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4E031: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:591 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4E032: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:592 ASL
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:100 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC4E033: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:101 CLC
    case 0xC4E034: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:102 ADC @VIRTUAL02
    case 0xC4E035: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:103 PLY
    case 0xC4E037: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:104 STY @VIRTUAL02
    case 0xC4E038: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:105 CLC
    case 0xC4E03A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:106 ADC @VIRTUAL02
    case 0xC4E03B: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:107 STA @LOCAL01
    case 0xC4E03D: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4E03F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E03F.
    case 0xC4E041: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4E042: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4E044: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E044.
    case 0xC4E046: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:108 LOADPTR BUFFER + $8000, @VIRTUAL0A
    case 0xC4E047: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:109 LDA @LOCAL01
    case 0xC4E049: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:110 ASL
    case 0xC4E04B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:111 CLC
    case 0xC4E04C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:112 ADC @VIRTUAL0A
    case 0xC4E04D: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:113 STA @VIRTUAL0A
    case 0xC4E04F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:114 LDA [@VIRTUAL0A]
    case 0xC4E051: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:115 AND #$03FF
    case 0xC4E053: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0003FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:115 AND #$03FF
    // Overlapping static entry reached from 0xC4E053.
    case 0xC4E055: {
        Instruction step(cpu, 0x03, 0x00000Au, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:116 ASL
    case 0xC4E056: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:117 TAX
    case 0xC4E057: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:118 LDA #$FFFF
    case 0xC4E058: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:118 LDA #$FFFF
    // Overlapping static entry reached from 0xC4E058.
    case 0xC4E05A: {
        Instruction step(cpu, 0xFF, 0xF0009Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:119 STA LOADED_MAP_BLOCKS,X
    case 0xC4E05B: {
        Instruction step(cpu, 0x9D, 0x00F000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:120 LDA [@VIRTUAL0A]
    case 0xC4E05E: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:121 STA [@VIRTUAL06]
    case 0xC4E060: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:122 INC @VIRTUAL06
    case 0xC4E062: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:123 INC @VIRTUAL06
    case 0xC4E064: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:124 LDA @LOCAL02
    case 0xC4E066: {
        Instruction step(cpu, 0xA5, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:125 STA @VIRTUAL02
    case 0xC4E068: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:126 INC @VIRTUAL02
    case 0xC4E06A: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:127 LDA @VIRTUAL02
    case 0xC4E06C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:128 STA @LOCAL02
    case 0xC4E06E: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:130 LDA @VIRTUAL02
    case 0xC4E070: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:131 CMP #32
    case 0xC4E072: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:131 CMP #32
    // Overlapping static entry reached from 0xC4E072.
    case 0xC4E074: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4E075: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4E077: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:132 BCCL @UNKNOWN1
    case 0xC4E079: {
        Instruction step(cpu, 0x4C, 0x00DFD1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:133 INC @VIRTUAL04
    case 0xC4E07C: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:135 LDA @VIRTUAL04
    case 0xC4E07E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:136 CMP #30
    case 0xC4E080: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:136 CMP #30
    // Overlapping static entry reached from 0xC4E080.
    case 0xC4E082: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4E083: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4E085: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:137 BCCL @UNKNOWN0
    case 0xC4E087: {
        Instruction step(cpu, 0x4C, 0x00DFC7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:138 END_C_FUNCTION
    case 0xC4E08A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/prepare_your_sanctuary_location_tile_arrangement_data.asm:138 END_C_FUNCTION
    case 0xC4E08B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
