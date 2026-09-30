// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/load_your_sanctuary_location_data.asm
bool resume_overworld_load_your_sanctuary_location_data(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4E13E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC4E13B.
    case 0xC4E13F: {
        Instruction step(cpu, 0x31, 0x00000Bu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E140: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E141: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E142: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E143: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DEu : 0x00FFDEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E143.
    case 0xC4E145: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E146: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4E147: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:16 STY @LOCAL06
    case 0xC4E148: {
        Instruction step(cpu, 0x84, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:16 STY @LOCAL06
    // Overlapping static entry reached from 0xC4E145.
    case 0xC4E149: {
        Instruction step(cpu, 0x20, 0x000286u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:17 STX @VIRTUAL02
    case 0xC4E14A: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:18 STX @LOCAL05
    case 0xC4E14C: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:19 STA @VIRTUAL04
    case 0xC4E14E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:20 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4E150: {
        Instruction step(cpu, 0x9C, 0x00B4BCu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:21 LDA @VIRTUAL04
    case 0xC4E153: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:22 LSR
    case 0xC4E155: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:23 LSR
    case 0xC4E156: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:24 LSR
    case 0xC4E157: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:25 LSR
    case 0xC4E158: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:26 LSR
    case 0xC4E159: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:27 STA @LOCAL04
    case 0xC4E15A: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:28 LDA @VIRTUAL02
    case 0xC4E15C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:29 LSR
    case 0xC4E15E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:30 LSR
    case 0xC4E15F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:31 LSR
    case 0xC4E160: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:32 LSR
    case 0xC4E161: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:33 TAX
    case 0xC4E162: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4E163: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00A800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E163.
    case 0xC4E165: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4E166: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4E168: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x0000D7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E168.
    case 0xC4E16A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4E16B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:35 LDA @LOCAL04
    case 0xC4E16D: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:36 STA @VIRTUAL02
    case 0xC4E16F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:37 TXA
    case 0xC4E171: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4E172: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4E173: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4E174: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4E175: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4E176: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:39 CLC
    case 0xC4E177: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:40 ADC @VIRTUAL02
    case 0xC4E178: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E17A: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E17C: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E17E: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E180: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:42 CLC
    case 0xC4E182: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:43 ADC @VIRTUAL0A
    case 0xC4E183: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:44 STA @VIRTUAL0A
    case 0xC4E185: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:45 LDA [@VIRTUAL0A]
    case 0xC4E187: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:46 AND #$00FF
    case 0xC4E189: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC4E189.
    case 0xC4E18B: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:47 TAY
    case 0xC4E18C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:48 STY @LOCAL03
    case 0xC4E18D: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:49 LDA @VIRTUAL04
    case 0xC4E18F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:50 LSR
    case 0xC4E191: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:51 LSR
    case 0xC4E192: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:52 LSR
    case 0xC4E193: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:53 LSR
    case 0xC4E194: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:54 LSR
    case 0xC4E195: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:55 PHA
    case 0xC4E196: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:56 LDA @LOCAL05
    case 0xC4E197: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:57 STA @VIRTUAL02
    case 0xC4E199: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:58 LSR
    case 0xC4E19B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:59 LSR
    case 0xC4E19C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:60 AND #$FFFC
    case 0xC4E19D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FCu : 0x00FFFCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:60 AND #$FFFC
    // Overlapping static entry reached from 0xC4E19D.
    case 0xC4E19F: {
        Instruction step(cpu, 0xFF, 0x0A0A0Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4E1A0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4E1A1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4E1A2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:62 PLX
    case 0xC4E1A3: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:63 STX @VIRTUAL02
    case 0xC4E1A4: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:64 CLC
    case 0xC4E1A6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:65 ADC @VIRTUAL02
    case 0xC4E1A7: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:66 CLC
    case 0xC4E1A9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:67 ADC @VIRTUAL06
    case 0xC4E1AA: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:68 STA @VIRTUAL06
    case 0xC4E1AC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E1AE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:70 LDA [@VIRTUAL06]
    case 0xC4E1B0: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:71 LSR
    case 0xC4E1B2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:72 LSR
    case 0xC4E1B3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:73 LSR
    case 0xC4E1B4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC4E1B5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:75 AND #$00FF
    case 0xC4E1B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC4E1B7.
    case 0xC4E1B9: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:76 STA LOADED_MAP_TILE_COMBO
    case 0xC4E1BA: {
        Instruction step(cpu, 0x8D, 0x00436Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:77 LDX @LOCAL06
    case 0xC4E1BD: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:78 TYA
    case 0xC4E1BF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:79 JSR PREPARE_YOUR_SANCTUARY_LOCATION_PALETTE_DATA
    case 0xC4E1C0: {
        Instruction step(cpu, 0x20, 0x00DEE9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:79 JSR PREPARE_YOUR_SANCTUARY_LOCATION_PALETTE_DATA
    // Overlapping static entry reached from 0xC4E23A.
    case 0xC4E1C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000DEu : 0x00A9DEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4E1C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00101Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E1C1.
    case 0xC4E1C4: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E1C3.
    case 0xC4E1C5: {
        Instruction step(cpu, 0x10, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4E1C6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E1C5.
    case 0xC4E1C7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4E1C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E1C8.
    case 0xC4E1CA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4E1CB: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:81 LDY @LOCAL03
    case 0xC4E1CD: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:82 TYA
    case 0xC4E1CF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:83 LSR
    case 0xC4E1D0: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:84 LSR
    case 0xC4E1D1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:85 LSR
    case 0xC4E1D2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:86 ASL
    case 0xC4E1D3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:87 CLC
    case 0xC4E1D4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:88 ADC @VIRTUAL0A
    case 0xC4E1D5: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:89 STA @VIRTUAL0A
    case 0xC4E1D7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E1D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1D9.
    case 0xC4E1DB: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E1DC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E1DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1DE.
    case 0xC4E1E0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4E1E1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4E1E3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4E1E5: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4E1E7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4E1E9: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4E1EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ABu : 0x0010ABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1EB.
    case 0xC4E1ED: {
        Instruction step(cpu, 0x10, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4E1EE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1ED.
    case 0xC4E1EF: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4E1F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1EF.
    case 0xC4E1F1: {
        Instruction step(cpu, 0xEF, 0x088500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1F0.
    case 0xC4E1F2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4E1F3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:93 LDA [@VIRTUAL0A]
    case 0xC4E1F5: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:94 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E1F7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:94 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E1F8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:95 CLC
    case 0xC4E1F9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:96 ADC @VIRTUAL06
    case 0xC4E1FA: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:97 STA @VIRTUAL06
    case 0xC4E1FC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E1FE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E1FE.
    case 0xC4E200: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E201: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E203: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E204: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E206: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4E208: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E20A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E20C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E20E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E210: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E212: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E214: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E216: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E218: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E21A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E21C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E21E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E220: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:102 JSL DECOMP
    case 0xC4E222: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:103 LDY @LOCAL06
    case 0xC4E226: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:104 LDA @LOCAL05
    case 0xC4E228: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:105 STA @VIRTUAL02
    case 0xC4E22A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:106 LDX @VIRTUAL02
    case 0xC4E22C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:107 LDA @VIRTUAL04
    case 0xC4E22E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:108 JSR PREPARE_YOUR_SANCTUARY_LOCATION_TILE_ARRANGEMENT_DATA
    case 0xC4E230: {
        Instruction step(cpu, 0x20, 0x00DF7Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:119 LDA [@VIRTUAL0A]
    case 0xC4E233: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:120 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E235: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:120 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4E236: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:121 PHA
    case 0xC4E237: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC4E238: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Bu : 0x00105Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E238.
    case 0xC4E23A: {
        Instruction step(cpu, 0x10, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC4E23B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E23A.
    case 0xC4E23C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC4E23D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4E23D.
    case 0xC4E23F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:122 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL0A
    case 0xC4E240: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:123 PLA
    case 0xC4E242: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:124 CLC
    case 0xC4E243: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:125 ADC @VIRTUAL0A
    case 0xC4E244: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:126 STA @VIRTUAL0A
    case 0xC4E246: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E248: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E248.
    case 0xC4E24A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E24B: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E24D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E24E: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E250: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4E252: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E254: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E256: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E258: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4E25A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E25C: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E25E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E260: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4E262: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E264: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E266: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E268: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4E26A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:132 JSL DECOMP
    case 0xC4E26C: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:133 LDA @LOCAL06
    case 0xC4E270: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:134 JSR PREPARE_YOUR_SANCTUARY_LOCATION_TILESET_DATA
    case 0xC4E272: {
        Instruction step(cpu, 0x20, 0x00E08Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:135 LDA TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4E275: {
        Instruction step(cpu, 0xAD, 0x00B4BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:136 CLC
    case 0xC4E278: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:137 ADC YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4E279: {
        Instruction step(cpu, 0x6D, 0x00B4BCu, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:138 STA TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4E27C: {
        Instruction step(cpu, 0x8D, 0x00B4BAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:139 PLD
    case 0xC4E27F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:140 RTS
    case 0xC4E280: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
