// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/load_your_sanctuary_location_data.asm
bool resume_overworld_load_your_sanctuary_location_data(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4B351: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC4B34E.
    case 0xC4B352: {
        Instruction step(cpu, 0x31, 0x00000Bu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B353: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B354: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B355: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B356: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DEu : 0x00FFDEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B356.
    case 0xC4B358: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B359: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:15 END_STACK_VARS
    case 0xC4B35A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:16 STY @LOCAL06
    case 0xC4B35B: {
        Instruction step(cpu, 0x84, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:16 STY @LOCAL06
    // Overlapping static entry reached from 0xC4B358.
    case 0xC4B35C: {
        Instruction step(cpu, 0x20, 0x000286u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:17 STX @VIRTUAL02
    case 0xC4B35D: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:18 STX @LOCAL05
    case 0xC4B35F: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:19 STA @VIRTUAL04
    case 0xC4B361: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:20 STZ YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B363: {
        Instruction step(cpu, 0x9C, 0x00B690u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:21 LDA @VIRTUAL04
    case 0xC4B366: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:22 LSR
    case 0xC4B368: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:23 LSR
    case 0xC4B369: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:24 LSR
    case 0xC4B36A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:25 LSR
    case 0xC4B36B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:26 LSR
    case 0xC4B36C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:27 STA @LOCAL04
    case 0xC4B36D: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:28 LDA @VIRTUAL02
    case 0xC4B36F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:29 LSR
    case 0xC4B371: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:30 LSR
    case 0xC4B372: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:31 LSR
    case 0xC4B373: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:32 LSR
    case 0xC4B374: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:33 TAX
    case 0xC4B375: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4B376: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00A800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B376.
    case 0xC4B378: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4B379: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4B37B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D7u : 0x0000D7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B37B.
    case 0xC4B37D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:34 LOADPTR GLOBAL_MAP_TILESETPALETTE_DATA, @VIRTUAL06
    case 0xC4B37E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:35 LDA @LOCAL04
    case 0xC4B380: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:36 STA @VIRTUAL02
    case 0xC4B382: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:37 TXA
    case 0xC4B384: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4B385: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4B386: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4B387: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4B388: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:38 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC4B389: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:39 CLC
    case 0xC4B38A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:40 ADC @VIRTUAL02
    case 0xC4B38B: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B38D: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B38F: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B391: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:41 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4B393: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:42 CLC
    case 0xC4B395: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:43 ADC @VIRTUAL0A
    case 0xC4B396: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:44 STA @VIRTUAL0A
    case 0xC4B398: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:45 LDA [@VIRTUAL0A]
    case 0xC4B39A: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:46 AND #$00FF
    case 0xC4B39C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC4B39C.
    case 0xC4B39E: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:47 TAY
    case 0xC4B39F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:48 STY @LOCAL03
    case 0xC4B3A0: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:49 LDA @VIRTUAL04
    case 0xC4B3A2: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:50 LSR
    case 0xC4B3A4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:51 LSR
    case 0xC4B3A5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:52 LSR
    case 0xC4B3A6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:53 LSR
    case 0xC4B3A7: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:54 LSR
    case 0xC4B3A8: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:55 PHA
    case 0xC4B3A9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:56 LDA @LOCAL05
    case 0xC4B3AA: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:57 STA @VIRTUAL02
    case 0xC4B3AC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:58 LSR
    case 0xC4B3AE: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:59 LSR
    case 0xC4B3AF: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:60 AND #$FFFC
    case 0xC4B3B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FCu : 0x00FFFCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:60 AND #$FFFC
    // Overlapping static entry reached from 0xC4B3B0.
    case 0xC4B3B2: {
        Instruction step(cpu, 0xFF, 0x0A0A0Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B3B3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B3B4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:61 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC4B3B5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:62 PLX
    case 0xC4B3B6: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:63 STX @VIRTUAL02
    case 0xC4B3B7: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:64 CLC
    case 0xC4B3B9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:65 ADC @VIRTUAL02
    case 0xC4B3BA: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:66 CLC
    case 0xC4B3BC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:67 ADC @VIRTUAL06
    case 0xC4B3BD: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:68 STA @VIRTUAL06
    case 0xC4B3BF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B3C1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:70 LDA [@VIRTUAL06]
    case 0xC4B3C3: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:71 LSR
    case 0xC4B3C5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:72 LSR
    case 0xC4B3C6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:73 LSR
    case 0xC4B3C7: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC4B3C8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:75 AND #$00FF
    case 0xC4B3CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC4B3CA.
    case 0xC4B3CC: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:76 STA LOADED_MAP_TILE_COMBO
    case 0xC4B3CD: {
        Instruction step(cpu, 0x8D, 0x0046F4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:77 LDX @LOCAL06
    case 0xC4B3D0: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:78 TYA
    case 0xC4B3D2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:79 JSR PREPARE_YOUR_SANCTUARY_LOCATION_PALETTE_DATA
    case 0xC4B3D3: {
        Instruction step(cpu, 0x20, 0x00B0FAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4B3D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Du : 0x00621Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B3D6.
    case 0xC4B3D8: {
        Instruction step(cpu, 0x62, 0x000A85u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4B3D9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4B3DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B3DB.
    case 0xC4B3DD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:80 LOADPTR TILESET_TABLE, @VIRTUAL0A
    case 0xC4B3DE: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:81 LDY @LOCAL03
    case 0xC4B3E0: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:82 TYA
    case 0xC4B3E2: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:83 LSR
    case 0xC4B3E3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:84 LSR
    case 0xC4B3E4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:85 LSR
    case 0xC4B3E5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:86 ASL
    case 0xC4B3E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:87 CLC
    case 0xC4B3E7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:88 ADC @VIRTUAL0A
    case 0xC4B3E8: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:89 STA @VIRTUAL0A
    case 0xC4B3EA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B3EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3EC.
    case 0xC4B3EE: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B3EF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B3F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3F1.
    case 0xC4B3F3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:90 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC4B3F4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B3F6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B3F8: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B3FA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:91 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B3FC: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4B3FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ADu : 0x0062ADu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3FE.
    case 0xC4B400: {
        Instruction step(cpu, 0x62, 0x000685u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4B401: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4B403: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B403.
    case 0xC4B405: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:92 LOADPTR MAP_DATA_TILE_ARRANGEMENT_PTR_TABLE, @VIRTUAL06
    case 0xC4B406: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:93 LDA [@VIRTUAL0A]
    case 0xC4B408: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:94 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B40A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:94 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B40B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:95 CLC
    case 0xC4B40C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:96 ADC @VIRTUAL06
    case 0xC4B40D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:97 STA @VIRTUAL06
    case 0xC4B40F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B411: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B411.
    case 0xC4B413: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B414: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B416: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B417: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B419: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:98 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4B41B: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B41D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B41F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B421: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B423: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B425: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B427: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B429: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:100 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B42B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B42D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B42F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B431: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:101 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B433: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:102 JSL DECOMP
    case 0xC4B435: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:102 JSL DECOMP
    // Overlapping static entry reached from 0xC4B4B0.
    case 0xC4B437: {
        Instruction step(cpu, 0x19, 0x00A4C4u, 3u, AddressMode::AbsoluteIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:103 LDY @LOCAL06
    case 0xC4B439: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:103 LDY @LOCAL06
    // Overlapping static entry reached from 0xC4B437.
    case 0xC4B43A: {
        Instruction step(cpu, 0x20, 0x001EA5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:104 LDA @LOCAL05
    case 0xC4B43B: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:105 STA @VIRTUAL02
    case 0xC4B43D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:106 LDX @VIRTUAL02
    case 0xC4B43F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:107 LDA @VIRTUAL04
    case 0xC4B441: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:108 JSR PREPARE_YOUR_SANCTUARY_LOCATION_TILE_ARRANGEMENT_DATA
    case 0xC4B443: {
        Instruction step(cpu, 0x20, 0x00B18Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    case 0xC4B446: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Du : 0x00625Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B446.
    case 0xC4B448: {
        Instruction step(cpu, 0x62, 0x000685u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    case 0xC4B449: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    case 0xC4B44B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B44B.
    case 0xC4B44D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:110 LOADPTR MAP_DATA_TILESET_PTR_TABLE, @VIRTUAL06
    case 0xC4B44E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:111 LDA [@VIRTUAL0A]
    case 0xC4B450: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:112 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B452: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:112 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC4B453: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:113 CLC
    case 0xC4B454: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:114 ADC @VIRTUAL06
    case 0xC4B455: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:115 STA @VIRTUAL06
    case 0xC4B457: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B459: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B459.
    case 0xC4B45B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B45C: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B45E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B45F: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B461: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:116 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC4B463: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:117 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4B465: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:117 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4B467: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:117 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4B469: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:117 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC4B46B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B46D: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B46F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B471: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:130 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B473: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B475: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B477: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B479: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location_data.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B47B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:132 JSL DECOMP
    case 0xC4B47D: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:133 LDA @LOCAL06
    case 0xC4B481: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:134 JSR PREPARE_YOUR_SANCTUARY_LOCATION_TILESET_DATA
    case 0xC4B483: {
        Instruction step(cpu, 0x20, 0x00B29Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:135 LDA TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B486: {
        Instruction step(cpu, 0xAD, 0x00B68Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:136 CLC
    case 0xC4B489: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:137 ADC YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B48A: {
        Instruction step(cpu, 0x6D, 0x00B690u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:138 STA TOTAL_YOUR_SANCTUARY_LOADED_TILESET_TILES
    case 0xC4B48D: {
        Instruction step(cpu, 0x8D, 0x00B68Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:139 PLD
    case 0xC4B490: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location_data.asm:140 RTS
    case 0xC4B491: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
