// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/prepare_your_sanctuary_location_palette_data.asm
bool resume_overworld_prepare_your_sanctuary_location_palette_data(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4B0FA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B0FC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B0FD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B0FE: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B0FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B0FF.
    case 0xC4B101: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B102: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4B103: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:12 STX @VIRTUAL02
    case 0xC4B104: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4B101.
    case 0xC4B105: {
        Instruction step(cpu, 0x02, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:13 TAY
    case 0xC4B106: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:14 STY @LOCAL03
    case 0xC4B107: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:15 JSL PREPARE_AVERAGE_FOR_SPRITE_PALETTES
    case 0xC4B109: {
        Instruction step(cpu, 0x22, 0xC005F7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B10D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4B10D.
    case 0xC4B10F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B110: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B112: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4B112.
    case 0xC4B114: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B115: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:17 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4B117: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:17 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B117.
    case 0xC4B119: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4B11A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B119.
    case 0xC4B11B: {
        Instruction step(cpu, 0x00, 0x000003u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B11A.
    case 0xC4B11C: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    case 0xC4B11D: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4B11C.
    case 0xC4B11E: {
        Instruction step(cpu, 0xC3, 0x00008Eu, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4B11E.
    case 0xC4B120: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A4u : 0x001AA4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:20 LDY @LOCAL03
    case 0xC4B121: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:20 LDY @LOCAL03
    // Overlapping static entry reached from 0xC4B120.
    case 0xC4B122: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:21 TYA
    case 0xC4B123: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:22 AND #$0007
    case 0xC4B124: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:22 AND #$0007
    // Overlapping static entry reached from 0xC4B124.
    case 0xC4B126: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:23 TAX
    case 0xC4B127: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:24 TYA
    case 0xC4B128: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:25 LSR
    case 0xC4B129: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:26 LSR
    case 0xC4B12A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:27 LSR
    case 0xC4B12B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:28 JSL LOAD_MAP_PAL
    case 0xC4B12C: {
        Instruction step(cpu, 0x22, 0xC007C6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:29 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    case 0xC4B130: {
        Instruction step(cpu, 0x22, 0xC00490u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B134: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:31 STZ PALETTE_UPLOAD_MODE
    case 0xC4B136: {
        Instruction step(cpu, 0x9C, 0x000030u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC4B139: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B13B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B13B.
    case 0xC4B13D: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B13E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B140: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B141: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B143: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B144: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B146: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC4B148: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B14A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B14C: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B14E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4B150: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:36 LDA #^PALETTES
    case 0xC4B152: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:36 LDA #^PALETTES
    // Overlapping static entry reached from 0xC4B152.
    case 0xC4B154: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:37 STA @LOCAL02+2
    case 0xC4B155: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B157: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B157.
    case 0xC4B159: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B15A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B15C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B15C.
    case 0xC4B15E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4B15F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:39 LDY #BPP4PALETTE_SIZE * 16
    case 0xC4B161: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:39 LDY #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC4B161.
    case 0xC4B163: {
        Instruction step(cpu, 0x02, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:40 LDA @VIRTUAL02
    case 0xC4B164: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:41 JSL MULT16
    case 0xC4B166: {
        Instruction step(cpu, 0x22, 0xC09014u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:42 CLC
    case 0xC4B16A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:43 ADC @VIRTUAL06
    case 0xC4B16B: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:44 STA @VIRTUAL06
    case 0xC4B16D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:45 STA @LOCAL00
    case 0xC4B16F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:46 LDA @VIRTUAL06+2
    case 0xC4B171: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:47 STA @LOCAL00+2
    case 0xC4B173: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B175: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B177: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B179: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4B17B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B17D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B17F: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B181: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B183: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:50 LDA #BPP4PALETTE_SIZE * 8
    case 0xC4B185: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:50 LDA #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B185.
    case 0xC4B187: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:51 JSL MEMCPY24
    case 0xC4B188: {
        Instruction step(cpu, 0x22, 0xC08EDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:51 JSL MEMCPY24
    // Overlapping static entry reached from 0xC4B187.
    case 0xC4B189: {
        Instruction step(cpu, 0xDE, 0x00C08Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:52 END_C_FUNCTION
    case 0xC4B18C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:52 END_C_FUNCTION
    case 0xC4B18D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
