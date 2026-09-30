// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/load_map_column.asm
bool resume_overworld_load_map_column(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_column.asm:3 BEGIN_C_FUNCTION
    case 0xC00BDC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BDE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BDF: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BE0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC00BE1.
    case 0xC00BE3: {
        Instruction step(cpu, 0xFF, 0x4A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BE4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_column.asm:14 END_STACK_VARS
    case 0xC00BE5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:15 LSR
    case 0xC00BE6: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:16 LSR
    case 0xC00BE7: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:17 STA @VIRTUAL04
    case 0xC00BE8: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:18 TXA
    case 0xC00BEA: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:19 AND #$8000
    case 0xC00BEB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:19 AND #$8000
    // Overlapping static entry reached from 0xC00BEB.
    case 0xC00BED: {
        Instruction step(cpu, 0x80, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:20 BEQ @UNKNOWN0
    case 0xC00BEE: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:21 TXA
    case 0xC00BF0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:22 LSR
    case 0xC00BF1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:23 LSR
    case 0xC00BF2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:24 ORA #$E000
    case 0xC00BF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00E000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:24 ORA #$E000
    // Overlapping static entry reached from 0xC00BF3.
    case 0xC00BF5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000A8u : 0x0084A8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:25 TAY
    case 0xC00BF6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:26 STY @LOCAL06
    case 0xC00BF7: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:26 STY @LOCAL06
    // Overlapping static entry reached from 0xC00BF5.
    case 0xC00BF8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:27 BRA @UNKNOWN1
    case 0xC00BF9: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:29 TXA
    case 0xC00BFB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:30 LSR
    case 0xC00BFC: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:31 LSR
    case 0xC00BFD: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:32 TAY
    case 0xC00BFE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:33 STY @LOCAL06
    case 0xC00BFF: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:35 LDA @VIRTUAL04
    case 0xC00C01: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:36 AND #$000F
    case 0xC00C03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:36 AND #$000F
    // Overlapping static entry reached from 0xC00C03.
    case 0xC00C05: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:37 STA @LOCAL05
    case 0xC00C06: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:38 TAX
    case 0xC00C08: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:39 LDA @VIRTUAL04
    case 0xC00C09: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C0B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:41 STA LOADED_COLUMNS_X,X
    case 0xC00C0D: {
        Instruction step(cpu, 0x9D, 0x0043B0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC00C10: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:43 TYA
    case 0xC00C12: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:44 AND #$000F
    case 0xC00C13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:44 AND #$000F
    // Overlapping static entry reached from 0xC00C13.
    case 0xC00C15: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:45 TAX
    case 0xC00C16: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:46 STX @LOCAL04
    case 0xC00C17: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:47 TYA
    case 0xC00C19: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C1A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:49 STA LOADED_COLUMNS_Y,X
    case 0xC00C1C: {
        Instruction step(cpu, 0x9D, 0x0043C0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC00C1F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:51 LDA @VIRTUAL04
    case 0xC00C21: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:52 LSR
    case 0xC00C23: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:53 LSR
    case 0xC00C24: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:54 LSR
    case 0xC00C25: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:55 STA @VIRTUAL02
    case 0xC00C26: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:56 TYA
    case 0xC00C28: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:57 AND #$FFFC
    case 0xC00C29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FCu : 0x00FFFCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:57 AND #$FFFC
    // Overlapping static entry reached from 0xC00C29.
    case 0xC00C2B: {
        Instruction step(cpu, 0xFF, 0x0A0A0Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_map_column.asm:58 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C2C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_map_column.asm:58 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C2D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_map_column.asm:58 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C2E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:59 CLC
    case 0xC00C2F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:60 ADC @VIRTUAL02
    case 0xC00C30: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:61 TAX
    case 0xC00C32: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C33: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:63 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC00C35: {
        Instruction step(cpu, 0xBF, 0xD7A800u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:64 LSR
    case 0xC00C39: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:65 LSR
    case 0xC00C3A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:66 LSR
    case 0xC00C3B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC00C3C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:68 AND #$00FF
    case 0xC00C3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC00C3E.
    case 0xC00C40: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:69 STA @LOCAL03
    case 0xC00C41: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:70 LDA @LOCAL05
    case 0xC00C43: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:71 ASL
    case 0xC00C45: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:72 CLC
    case 0xC00C46: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:73 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    case 0xC00C47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x00F000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:73 ADC #.LOWORD(LOADED_MAP_BLOCKS)
    // Overlapping static entry reached from 0xC00C47.
    case 0xC00C49: {
        Instruction step(cpu, 0xF0, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:74 STA @LOCAL02
    case 0xC00C4A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:74 STA @LOCAL02
    // Overlapping static entry reached from 0xC00C49.
    case 0xC00C4B: {
        Instruction step(cpu, 0x12, 0x0000A5u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:75 LDA @VIRTUAL04
    case 0xC00C4C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:75 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC00C4B.
    case 0xC00C4D: {
        Instruction step(cpu, 0x04, 0x0000C9u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:76 CMP #256
    case 0xC00C4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:76 CMP #256
    // Overlapping static entry reached from 0xC00C4D.
    case 0xC00C4F: {
        Instruction step(cpu, 0x00, 0x000001u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:76 CMP #256
    // Overlapping static entry reached from 0xC00C4E.
    case 0xC00C50: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:77 BCC @UNKNOWN2
    case 0xC00C51: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:77 BCC @UNKNOWN2
    // Overlapping static entry reached from 0xC00C50.
    case 0xC00C52: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:78 JMP @UNKNOWN8
    case 0xC00C53: {
        Instruction step(cpu, 0x4C, 0x000CD5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:78 JMP @UNKNOWN8
    // Overlapping static entry reached from 0xC00C52.
    case 0xC00C54: {
        Instruction step(cpu, 0xD5, 0x00000Cu, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:80 LDX @LOCAL04
    case 0xC00C56: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:81 TXA
    case 0xC00C58: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:589 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C59: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:590 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C5A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:591 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C5B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:592 ASL
    // Macro caller: src/overworld/load_map_column.asm:82 OPTIMIZED_MULT @VIRTUAL04, 16
    case 0xC00C5C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:83 STA @VIRTUAL02
    case 0xC00C5D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:84 STA @LOCAL01
    case 0xC00C5F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:85 STZ @LOCAL00
    case 0xC00C61: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:86 BRA @UNKNOWN7
    case 0xC00C63: {
        Instruction step(cpu, 0x80, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:88 TYA
    case 0xC00C65: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:89 AND #$0003
    case 0xC00C66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:89 AND #$0003
    // Overlapping static entry reached from 0xC00C66.
    case 0xC00C68: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:90 BNE @UNKNOWN4
    case 0xC00C69: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:91 LDA @VIRTUAL04
    case 0xC00C6B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:92 LSR
    case 0xC00C6D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:93 LSR
    case 0xC00C6E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:94 LSR
    case 0xC00C6F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:95 STA @VIRTUAL02
    case 0xC00C70: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:96 TYA
    case 0xC00C72: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:97 AND #$FFFC
    case 0xC00C73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FCu : 0x00FFFCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:97 AND #$FFFC
    // Overlapping static entry reached from 0xC00C73.
    case 0xC00C75: {
        Instruction step(cpu, 0xFF, 0x0A0A0Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/load_map_column.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C76: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/load_map_column.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C77: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/load_map_column.asm:98 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00C78: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:99 CLC
    case 0xC00C79: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:100 ADC @VIRTUAL02
    case 0xC00C7A: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:101 TAX
    case 0xC00C7C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC00C7D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:103 LDA f:GLOBAL_MAP_TILESETPALETTE_DATA,X
    case 0xC00C7F: {
        Instruction step(cpu, 0xBF, 0xD7A800u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:104 LSR
    case 0xC00C83: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:105 LSR
    case 0xC00C84: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:106 LSR
    case 0xC00C85: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:107 REP #PROC_FLAGS::ACCUM8
    case 0xC00C86: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:108 AND #$00FF
    case 0xC00C88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC00C88.
    case 0xC00C8A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:109 STA @LOCAL03
    case 0xC00C8B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:111 CPY #320
    case 0xC00C8D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000040u : 0x000140u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:111 CPY #320
    // Overlapping static entry reached from 0xC00C8D.
    case 0xC00C8F: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:112 BCS @UNKNOWN5
    case 0xC00C90: {
        Instruction step(cpu, 0xB0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:112 BCS @UNKNOWN5
    // Overlapping static entry reached from 0xC00C8F.
    case 0xC00C91: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:113 LDA LOADED_MAP_TILE_COMBO
    case 0xC00C92: {
        Instruction step(cpu, 0xAD, 0x00436Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:113 LDA LOADED_MAP_TILE_COMBO
    // Overlapping static entry reached from 0xC00D0D.
    case 0xC00C94: {
        Instruction step(cpu, 0x43, 0x0000C5u, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:114 CMP @LOCAL03
    case 0xC00C95: {
        Instruction step(cpu, 0xC5, 0x000014u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:114 CMP @LOCAL03
    // Overlapping static entry reached from 0xC00C94.
    case 0xC00C96: {
        Instruction step(cpu, 0x14, 0x0000D0u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:115 BNE @UNKNOWN5
    case 0xC00C97: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:115 BNE @UNKNOWN5
    // Overlapping static entry reached from 0xC00C96.
    case 0xC00C98: {
        Instruction step(cpu, 0x14, 0x0000BBu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:116 TYX
    case 0xC00C99: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:117 LDA @VIRTUAL04
    case 0xC00C9A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:118 JSR UNKNOWN_C0A156
    case 0xC00C9C: {
        Instruction step(cpu, 0x20, 0x00A156u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:119 STA @LOCAL05
    case 0xC00C9F: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:120 LDA @LOCAL01
    case 0xC00CA1: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:121 STA @VIRTUAL02
    case 0xC00CA3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:122 ASL
    case 0xC00CA5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:123 TAY
    case 0xC00CA6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:124 LDA @LOCAL05
    case 0xC00CA7: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:125 STA (@LOCAL02),Y
    case 0xC00CA9: {
        Instruction step(cpu, 0x91, 0x000012u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:126 BRA @UNKNOWN6
    case 0xC00CAB: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:128 LDA @LOCAL01
    case 0xC00CAD: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:129 STA @VIRTUAL02
    case 0xC00CAF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:130 ASL
    case 0xC00CB1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:131 TAY
    case 0xC00CB2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:132 LDA #0
    case 0xC00CB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:132 LDA #0
    // Overlapping static entry reached from 0xC00CB3.
    case 0xC00CB5: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:133 STA (@LOCAL02),Y
    case 0xC00CB6: {
        Instruction step(cpu, 0x91, 0x000012u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:135 LDA @VIRTUAL02
    case 0xC00CB8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:136 CLC
    case 0xC00CBA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:137 ADC #16
    case 0xC00CBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:137 ADC #16
    // Overlapping static entry reached from 0xC00CBB.
    case 0xC00CBD: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:138 AND #$00FF
    case 0xC00CBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC00CBE.
    case 0xC00CC0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:139 STA @VIRTUAL02
    case 0xC00CC1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:140 STA @LOCAL01
    case 0xC00CC3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:141 LDY @LOCAL06
    case 0xC00CC5: {
        Instruction step(cpu, 0xA4, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:142 INY
    case 0xC00CC7: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:143 STY @LOCAL06
    case 0xC00CC8: {
        Instruction step(cpu, 0x84, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:144 INC @LOCAL00
    case 0xC00CCA: {
        Instruction step(cpu, 0xE6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:146 LDA @LOCAL00
    case 0xC00CCC: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:147 CMP #16
    case 0xC00CCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:147 CMP #16
    // Overlapping static entry reached from 0xC00CCE.
    case 0xC00CD0: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:148 BCC @UNKNOWN3
    case 0xC00CD1: {
        Instruction step(cpu, 0x90, 0x000092u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:149 BRA @UNKNOWN11
    case 0xC00CD3: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:151 LDA #0
    case 0xC00CD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:151 LDA #0
    // Overlapping static entry reached from 0xC00CD5.
    case 0xC00CD7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:152 STA @LOCAL05
    case 0xC00CD8: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:153 BRA @UNKNOWN10
    case 0xC00CDA: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CDC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CDD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CDE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CDF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/load_map_column.asm:155 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00CE0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:156 TAY
    case 0xC00CE1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:157 LDA #0
    case 0xC00CE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:157 LDA #0
    // Overlapping static entry reached from 0xC00CE2.
    case 0xC00CE4: {
        Instruction step(cpu, 0x00, 0x000091u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:158 STA (@LOCAL02),Y
    case 0xC00CE5: {
        Instruction step(cpu, 0x91, 0x000012u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:159 LDA @LOCAL05
    case 0xC00CE7: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:160 INC
    case 0xC00CE9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:161 STA @LOCAL05
    case 0xC00CEA: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:163 CMP #16
    case 0xC00CEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:163 CMP #16
    // Overlapping static entry reached from 0xC00CEC.
    case 0xC00CEE: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_column.asm:164 BCC @UNKNOWN9
    case 0xC00CEF: {
        Instruction step(cpu, 0x90, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_column.asm:166 END_C_FUNCTION
    case 0xC00CF1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_map_column.asm:166 END_C_FUNCTION
    case 0xC00CF2: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
