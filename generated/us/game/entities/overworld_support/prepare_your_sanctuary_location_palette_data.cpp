// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/prepare_your_sanctuary_location_palette_data.asm
bool resume_overworld_prepare_your_sanctuary_location_palette_data(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4DEE9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEEB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEEC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEED: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DEEE.
    case 0xC4DEF0: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEF1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:11 END_STACK_VARS
    case 0xC4DEF2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:12 STX @VIRTUAL02
    case 0xC4DEF3: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4DEF0.
    case 0xC4DEF4: {
        Instruction step(cpu, 0x02, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:13 TAY
    case 0xC4DEF5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:14 STY @LOCAL03
    case 0xC4DEF6: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:15 JSL PREPARE_AVERAGE_FOR_SPRITE_PALETTES
    case 0xC4DEF8: {
        Instruction step(cpu, 0x22, 0xC005E7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4DEFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4DEFC.
    case 0xC4DEFE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4DEFF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4DF01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4DF01.
    case 0xC4DF03: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:16 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4DF04: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:17 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4DF06: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:17 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4DF06.
    case 0xC4DF08: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4DF09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4DF08.
    case 0xC4DF0A: {
        Instruction step(cpu, 0x00, 0x000003u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4DF09.
    case 0xC4DF0B: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    case 0xC4DF0C: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4DF0B.
    case 0xC4DF0D: {
        Instruction step(cpu, 0xD2, 0x00008Eu, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4DF0D.
    case 0xC4DF0F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A4u : 0x001AA4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:20 LDY @LOCAL03
    case 0xC4DF10: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:20 LDY @LOCAL03
    // Overlapping static entry reached from 0xC4DF0F.
    case 0xC4DF11: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:21 TYA
    case 0xC4DF12: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:22 AND #$0007
    case 0xC4DF13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:22 AND #$0007
    // Overlapping static entry reached from 0xC4DF13.
    case 0xC4DF15: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:23 TAX
    case 0xC4DF16: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:24 TYA
    case 0xC4DF17: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:25 LSR
    case 0xC4DF18: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:26 LSR
    case 0xC4DF19: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:27 LSR
    case 0xC4DF1A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:28 JSL LOAD_MAP_PAL
    case 0xC4DF1B: {
        Instruction step(cpu, 0x22, 0xC007B6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:29 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    case 0xC4DF1F: {
        Instruction step(cpu, 0x22, 0xC00480u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DF23: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:31 STZ PALETTE_UPLOAD_MODE
    case 0xC4DF25: {
        Instruction step(cpu, 0x9C, 0x000030u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC4DF28: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DF2A.
    case 0xC4DF2C: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF2D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF2F: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF30: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF32: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF33: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:33 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DF35: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC4DF37: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4DF39: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4DF3B: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4DF3D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:35 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4DF3F: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:36 LDA #^PALETTES
    case 0xC4DF41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:36 LDA #^PALETTES
    // Overlapping static entry reached from 0xC4DF41.
    case 0xC4DF43: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:37 STA @LOCAL02+2
    case 0xC4DF44: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4DF46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DF46.
    case 0xC4DF48: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4DF49: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4DF4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DF4B.
    case 0xC4DF4D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:38 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4DF4E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:39 LDY #BPP4PALETTE_SIZE * 16
    case 0xC4DF50: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:39 LDY #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC4DF50.
    case 0xC4DF52: {
        Instruction step(cpu, 0x02, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:40 LDA @VIRTUAL02
    case 0xC4DF53: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:41 JSL MULT16
    case 0xC4DF55: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:42 CLC
    case 0xC4DF59: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:43 ADC @VIRTUAL06
    case 0xC4DF5A: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:44 STA @VIRTUAL06
    case 0xC4DF5C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:45 STA @LOCAL00
    case 0xC4DF5E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:46 LDA @VIRTUAL06+2
    case 0xC4DF60: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:47 STA @LOCAL00+2
    case 0xC4DF62: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4DF64: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4DF66: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4DF68: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:48 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4DF6A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DF6C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DF6E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DF70: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:49 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DF72: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:50 LDA #BPP4PALETTE_SIZE * 8
    case 0xC4DF74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:50 LDA #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4DF74.
    case 0xC4DF76: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:51 JSL MEMCPY24
    case 0xC4DF77: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/prepare_your_sanctuary_location_palette_data.asm:51 JSL MEMCPY24
    // Overlapping static entry reached from 0xC4DF76.
    case 0xC4DF78: {
        Instruction step(cpu, 0xED, 0x00C08Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:52 END_C_FUNCTION
    case 0xC4DF7B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/prepare_your_sanctuary_location_palette_data.asm:52 END_C_FUNCTION
    case 0xC4DF7C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
