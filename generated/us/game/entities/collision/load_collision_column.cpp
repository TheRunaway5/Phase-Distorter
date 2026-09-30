// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/load_collision_column.asm
bool resume_overworld_load_collision_column(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_collision_column.asm:3 BEGIN_C_FUNCTION
    case 0xC00D7E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D80: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D81: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D82: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC00D83.
    case 0xC00D85: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D86: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_collision_column.asm:9 END_STACK_VARS
    case 0xC00D87: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:10 STA @LOCAL02
    case 0xC00D88: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:10 STA @LOCAL02
    // Overlapping static entry reached from 0xC00D85.
    case 0xC00D89: {
        Instruction step(cpu, 0x12, 0x00004Au, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:11 LSR
    case 0xC00D8A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:12 LSR
    case 0xC00D8B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:13 AND #$000F
    case 0xC00D8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:13 AND #$000F
    // Overlapping static entry reached from 0xC00D8C.
    case 0xC00D8E: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:14 ASL
    case 0xC00D8F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:15 CLC
    case 0xC00D90: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:16 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00D91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x00F000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:16 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00D91.
    case 0xC00D93: {
        Instruction step(cpu, 0xF0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:17 STA @VIRTUAL02
    case 0xC00D94: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:17 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC00D93.
    case 0xC00D95: {
        Instruction step(cpu, 0x02, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:18 LDA @LOCAL02
    case 0xC00D96: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:19 AND #$003F
    case 0xC00D98: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:19 AND #$003F
    // Overlapping static entry reached from 0xC00D98.
    case 0xC00D9A: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:20 CLC
    case 0xC00D9B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:21 ADC #.LOWORD(LOADED_COLLISION_TILES)
    case 0xC00D9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x00E000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:21 ADC #.LOWORD(LOADED_COLLISION_TILES)
    // Overlapping static entry reached from 0xC00D9C.
    case 0xC00D9E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000AAu : 0x0086AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:22 TAX
    case 0xC00D9F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:23 STX @LOCAL01
    case 0xC00DA0: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:23 STX @LOCAL01
    // Overlapping static entry reached from 0xC00D9E.
    case 0xC00DA1: {
        Instruction step(cpu, 0x10, 0x0000A5u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:24 LDA @LOCAL02
    case 0xC00DA2: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:24 LDA @LOCAL02
    // Overlapping static entry reached from 0xC00DA1.
    case 0xC00DA3: {
        Instruction step(cpu, 0x12, 0x000029u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:25 AND #$0003
    case 0xC00DA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:25 AND #$0003
    // Overlapping static entry reached from 0xC00DA3.
    case 0xC00DA5: {
        Instruction step(cpu, 0x03, 0x000000u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:25 AND #$0003
    // Overlapping static entry reached from 0xC00DA4.
    case 0xC00DA6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:26 STA @VIRTUAL04
    case 0xC00DA7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:27 LDY #0
    case 0xC00DA9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:27 LDY #0
    // Overlapping static entry reached from 0xC00DA9.
    case 0xC00DAB: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:28 STY @LOCAL00
    case 0xC00DAC: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:29 BRA @UNKNOWN1
    case 0xC00DAE: {
        Instruction step(cpu, 0x80, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:31 LDX @VIRTUAL02
    case 0xC00DB0: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:32 LDA __BSS_START__,X
    case 0xC00DB2: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:33 ASL
    case 0xC00DB5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:34 TAX
    case 0xC00DB6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:35 LDA f:TILE_COLLISION_BUFFER,X
    case 0xC00DB7: {
        Instruction step(cpu, 0xBF, 0x7FF800u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:36 STA @LOCAL02
    case 0xC00DBB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:37 LDA @VIRTUAL02
    case 0xC00DBD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:38 CLC
    case 0xC00DBF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:39 ADC #32
    case 0xC00DC0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:39 ADC #32
    // Overlapping static entry reached from 0xC00DC0.
    case 0xC00DC2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:40 STA @VIRTUAL02
    case 0xC00DC3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DC5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00DC5.
    case 0xC00DC7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DC8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D8u : 0x0000D8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00DCA.
    case 0xC00DCC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_collision_column.asm:41 LOADPTR MAP_DATA_TILE_COLLISION_ARRANGEMENT_TABLE, @VIRTUAL06
    case 0xC00DCD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:42 LDA @LOCAL02
    case 0xC00DCF: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:43 CLC
    case 0xC00DD1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:44 ADC @VIRTUAL04
    case 0xC00DD2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:45 CLC
    case 0xC00DD4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:46 ADC @VIRTUAL06
    case 0xC00DD5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:47 STA @VIRTUAL06
    case 0xC00DD7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:48 STA @VIRTUAL0A
    case 0xC00DD9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:49 LDA @VIRTUAL06+2
    case 0xC00DDB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:49 LDA @VIRTUAL06+2
    // Overlapping static entry reached from 0xC00E55.
    case 0xC00DDC: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:50 STA @VIRTUAL0A+2
    case 0xC00DDD: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC00DDF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:52 LDA [@VIRTUAL0A]
    case 0xC00DE1: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:53 LDX @LOCAL01
    case 0xC00DE3: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:54 STA __BSS_START__,X
    case 0xC00DE5: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:55 LDY #4
    case 0xC00DE8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:55 LDY #4
    // Overlapping static entry reached from 0xC00DE8.
    case 0xC00DEA: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:56 LDA [@VIRTUAL06],Y
    case 0xC00DEB: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:57 STA __BSS_START__+64,X
    case 0xC00DED: {
        Instruction step(cpu, 0x9D, 0x000040u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:58 LDY #8
    case 0xC00DF0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:58 LDY #8
    // Overlapping static entry reached from 0xC00DF0.
    case 0xC00DF2: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:59 LDA [@VIRTUAL06],Y
    case 0xC00DF3: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:60 STA __BSS_START__+128,X
    case 0xC00DF5: {
        Instruction step(cpu, 0x9D, 0x000080u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:61 LDY #12
    case 0xC00DF8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:61 LDY #12
    // Overlapping static entry reached from 0xC00DF8.
    case 0xC00DFA: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:62 LDA [@VIRTUAL06],Y
    case 0xC00DFB: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:63 STA __BSS_START__+192,X
    case 0xC00DFD: {
        Instruction step(cpu, 0x9D, 0x0000C0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC00E00: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:65 TXA
    case 0xC00E02: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:66 CLC
    case 0xC00E03: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:67 ADC #256
    case 0xC00E04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:67 ADC #256
    // Overlapping static entry reached from 0xC00E04.
    case 0xC00E06: {
        Instruction step(cpu, 0x01, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:68 TAX
    case 0xC00E07: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:69 STX @LOCAL01
    case 0xC00E08: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:70 LDY @LOCAL00
    case 0xC00E0A: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:71 INY
    case 0xC00E0C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:72 STY @LOCAL00
    case 0xC00E0D: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:74 CPY #16
    case 0xC00E0F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:74 CPY #16
    // Overlapping static entry reached from 0xC00E0F.
    case 0xC00E11: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_collision_column.asm:75 BCC @UNKNOWN0
    case 0xC00E12: {
        Instruction step(cpu, 0x90, 0x00009Cu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_collision_column.asm:76 END_C_FUNCTION
    case 0xC00E14: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_collision_column.asm:76 END_C_FUNCTION
    case 0xC00E15: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
