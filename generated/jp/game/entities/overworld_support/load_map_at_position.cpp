// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/load_map_at_position.asm
bool resume_overworld_load_map_at_position(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_at_position.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0140C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC0140E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC0140F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC01410: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC01411: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC01411.
    case 0xC01413: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC01414: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_at_position.asm:12 END_STACK_VARS
    case 0xC01415: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:13 STX @LOCAL04
    case 0xC01416: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:13 STX @LOCAL04
    // Overlapping static entry reached from 0xC01413.
    case 0xC01417: {
        Instruction step(cpu, 0x16, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:14 STA @LOCAL03
    case 0xC01418: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:14 STA @LOCAL03
    // Overlapping static entry reached from 0xC01417.
    case 0xC01419: {
        Instruction step(cpu, 0x14, 0x000022u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:15 JSL UNKNOWN_C02194
    case 0xC0141A: {
        Instruction step(cpu, 0x22, 0xC021A2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:15 JSL UNKNOWN_C02194
    // Overlapping static entry reached from 0xC01419.
    case 0xC0141B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000021u : 0x00C021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:15 JSL UNKNOWN_C02194
    // Overlapping static entry reached from 0xC0141B.
    case 0xC0141D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x0014A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:16 LDA @LOCAL03
    case 0xC0141E: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:16 LDA @LOCAL03
    // Overlapping static entry reached from 0xC0141D.
    case 0xC0141F: {
        Instruction step(cpu, 0x14, 0x00008Du, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:17 STA SCREEN_X_PIXELS
    case 0xC01420: {
        Instruction step(cpu, 0x8D, 0x004706u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:17 STA SCREEN_X_PIXELS
    // Overlapping static entry reached from 0xC0141F.
    case 0xC01421: {
        Instruction step(cpu, 0x06, 0x000047u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:18 STA SCREEN_X_PIXELS_COPY
    case 0xC01423: {
        Instruction step(cpu, 0x8D, 0x004702u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:19 LDX @LOCAL04
    case 0xC01426: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:20 STX SCREEN_Y_PIXELS
    case 0xC01428: {
        Instruction step(cpu, 0x8E, 0x004708u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:21 STX SCREEN_Y_PIXELS_COPY
    case 0xC0142B: {
        Instruction step(cpu, 0x8E, 0x004704u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:22 LSR
    case 0xC0142E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:23 LSR
    case 0xC0142F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:24 LSR
    case 0xC01430: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:25 STA @VIRTUAL02
    case 0xC01431: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:26 TXA
    case 0xC01433: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:27 LSR
    case 0xC01434: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:28 LSR
    case 0xC01435: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:29 LSR
    case 0xC01436: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:30 TAY
    case 0xC01437: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:31 STY @LOCAL02
    case 0xC01438: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:32 TYA
    case 0xC0143A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:33 LSR
    case 0xC0143B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:34 LSR
    case 0xC0143C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:35 LSR
    case 0xC0143D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:36 LSR
    case 0xC0143E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:37 TAX
    case 0xC0143F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:38 LDA @VIRTUAL02
    case 0xC01440: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:39 LSR
    case 0xC01442: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:40 LSR
    case 0xC01443: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:41 LSR
    case 0xC01444: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:42 LSR
    case 0xC01445: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:43 LSR
    case 0xC01446: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:44 JSR LOAD_MAP_AT_SECTOR
    case 0xC01447: {
        Instruction step(cpu, 0x20, 0x0008D3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:45 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC0144A: {
        Instruction step(cpu, 0xAD, 0x00B6B8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:46 BNE @UNKNOWN0
    case 0xC0144D: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:47 JSL OVERWORLD_SETUP_VRAM
    case 0xC0144F: {
        Instruction step(cpu, 0x22, 0xC00013u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:49 LDA @VIRTUAL02
    case 0xC01453: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:50 SEC
    case 0xC01455: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:51 SBC #16
    case 0xC01456: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:51 SBC #16
    // Overlapping static entry reached from 0xC01456.
    case 0xC01458: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:52 STA @LOCAL01
    case 0xC01459: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:53 LDY @LOCAL02
    case 0xC0145B: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:54 TYA
    case 0xC0145D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:55 SEC
    case 0xC0145E: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:56 SBC #14
    case 0xC0145F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:56 SBC #14
    // Overlapping static entry reached from 0xC0145F.
    case 0xC01461: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:57 STA @LOCAL03
    case 0xC01462: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:58 LDA @VIRTUAL02
    case 0xC01464: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:59 SEC
    case 0xC01466: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:60 SBC #32
    case 0xC01467: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:60 SBC #32
    // Overlapping static entry reached from 0xC01467.
    case 0xC01469: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:61 STA @VIRTUAL04
    case 0xC0146A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:62 TYA
    case 0xC0146C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:63 SEC
    case 0xC0146D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:64 SBC #32
    case 0xC0146E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:64 SBC #32
    // Overlapping static entry reached from 0xC0146E.
    case 0xC01470: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:65 STA @VIRTUAL02
    case 0xC01471: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:66 STA @LOCAL00
    case 0xC01473: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:67 LDX #0
    case 0xC01475: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:67 LDX #0
    // Overlapping static entry reached from 0xC01475.
    case 0xC01477: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:68 BRA @UNKNOWN2
    case 0xC01478: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC0147A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:71 LDA #$00FF
    case 0xC0147C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x009DFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:72 STA LOADED_COLUMNS_Y,X
    case 0xC0147E: {
        Instruction step(cpu, 0x9D, 0x004746u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:72 STA LOADED_COLUMNS_Y,X
    // Overlapping static entry reached from 0xC0147C.
    case 0xC0147F: {
        Instruction step(cpu, 0x46, 0x000047u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:73 STA LOADED_COLUMNS_X,X
    case 0xC01481: {
        Instruction step(cpu, 0x9D, 0x004736u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:74 STA LOADED_ROWS_Y,X
    case 0xC01484: {
        Instruction step(cpu, 0x9D, 0x004726u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:75 STA LOADED_ROWS_X,X
    case 0xC01487: {
        Instruction step(cpu, 0x9D, 0x004716u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:76 INX
    case 0xC0148A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:78 CPX #16
    case 0xC0148B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:78 CPX #16
    // Overlapping static entry reached from 0xC0148B.
    case 0xC0148D: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:79 BCC @UNKNOWN1
    case 0xC0148E: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:80 LDY #0
    case 0xC01490: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:80 LDY #0
    // Overlapping static entry reached from 0xC01490.
    case 0xC01492: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:81 STY @LOCAL02
    case 0xC01493: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:82 BRA @UNKNOWN4
    case 0xC01495: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC01497: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:85 LDA @LOCAL00
    case 0xC01499: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:86 STA @VIRTUAL02
    case 0xC0149B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:87 STY @VIRTUAL02
    case 0xC0149D: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:88 CLC
    case 0xC0149F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:89 ADC @VIRTUAL02
    case 0xC014A0: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:90 TAX
    case 0xC014A2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:91 LDA @VIRTUAL04
    case 0xC014A3: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:92 JSR LOAD_MAP_ROW
    case 0xC014A5: {
        Instruction step(cpu, 0x20, 0x000AD7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:93 LDY @LOCAL02
    case 0xC014A8: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:94 INY
    case 0xC014AA: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:95 STY @LOCAL02
    case 0xC014AB: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:97 CPY #60
    case 0xC014AD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:97 CPY #60
    // Overlapping static entry reached from 0xC014AD.
    case 0xC014AF: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:98 BCC @UNKNOWN3
    case 0xC014B0: {
        Instruction step(cpu, 0x90, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:99 LDY #0
    case 0xC014B2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:99 LDY #0
    // Overlapping static entry reached from 0xC014B2.
    case 0xC014B4: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:100 STY @LOCAL02
    case 0xC014B5: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:101 BRA @UNKNOWN6
    case 0xC014B7: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:103 REP #PROC_FLAGS::ACCUM8
    case 0xC014B9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:104 LDA @LOCAL00
    case 0xC014BB: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:105 STA @VIRTUAL02
    case 0xC014BD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:106 STY @VIRTUAL02
    case 0xC014BF: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:107 CLC
    case 0xC014C1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:108 ADC @VIRTUAL02
    case 0xC014C2: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:109 TAX
    case 0xC014C4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:110 LDA @VIRTUAL04
    case 0xC014C5: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:111 JSR LOAD_COLLISION_ROW
    case 0xC014C7: {
        Instruction step(cpu, 0x20, 0x000D05u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:112 LDY @LOCAL02
    case 0xC014CA: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:113 INY
    case 0xC014CC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:114 STY @LOCAL02
    case 0xC014CD: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:116 CPY #60
    case 0xC014CF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:116 CPY #60
    // Overlapping static entry reached from 0xC014CF.
    case 0xC014D1: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:117 BCC @UNKNOWN5
    case 0xC014D2: {
        Instruction step(cpu, 0x90, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:119 REP #PROC_FLAGS::ACCUM8
    case 0xC014D4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:120 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC014D6: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:121 AND #$00FF
    case 0xC014D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:121 AND #$00FF
    // Overlapping static entry reached from 0xC014D9.
    case 0xC014DB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:122 BNE @UNKNOWN7
    case 0xC014DC: {
        Instruction step(cpu, 0xD0, 0x0000F6u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:123 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC014DE: {
        Instruction step(cpu, 0xAD, 0x00B6B8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:124 BNE @UNKNOWN8
    case 0xC014E1: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:125 SEP #PROC_FLAGS::ACCUM8
    case 0xC014E3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:126 LDA #$17
    case 0xC014E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:127 STA TM_MIRROR
    case 0xC014E7: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:127 STA TM_MIRROR
    // Overlapping static entry reached from 0xC014E5.
    case 0xC014E8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:127 STA TM_MIRROR
    // Overlapping static entry reached from 0xC014E8.
    case 0xC014E9: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC014EA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:130 LDA NPC_SPAWNS_ENABLED
    case 0xC014EC: {
        Instruction step(cpu, 0xAD, 0x004DDEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:131 BEQ @UNKNOWN9
    case 0xC014EF: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:132 LDA #1
    case 0xC014F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:132 LDA #1
    // Overlapping static entry reached from 0xC014F1.
    case 0xC014F3: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:133 STA NPC_SPAWNS_ENABLED
    case 0xC014F4: {
        Instruction step(cpu, 0x8D, 0x004DDEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:135 LDA SCREEN_X_PIXELS
    case 0xC014F7: {
        Instruction step(cpu, 0xAD, 0x004706u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:136 SEC
    case 0xC014FA: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:137 SBC #128
    case 0xC014FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:137 SBC #128
    // Overlapping static entry reached from 0xC014FB.
    case 0xC014FD: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:138 STA BG2_X_POS
    case 0xC014FE: {
        Instruction step(cpu, 0x8D, 0x000035u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:139 STA BG1_X_POS
    case 0xC01501: {
        Instruction step(cpu, 0x8D, 0x000031u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:140 LDA SCREEN_Y_PIXELS
    case 0xC01504: {
        Instruction step(cpu, 0xAD, 0x004708u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:141 SEC
    case 0xC01507: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:142 SBC #112
    case 0xC01508: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000070u : 0x000070u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:142 SBC #112
    // Overlapping static entry reached from 0xC01508.
    case 0xC0150A: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:143 STA BG2_Y_POS
    case 0xC0150B: {
        Instruction step(cpu, 0x8D, 0x000037u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:144 STA BG1_Y_POS
    case 0xC0150E: {
        Instruction step(cpu, 0x8D, 0x000033u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:145 LDY #.LOWORD(-1)
    case 0xC01511: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:145 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC01511.
    case 0xC01513: {
        Instruction step(cpu, 0xFF, 0x801284u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:146 STY @LOCAL02
    case 0xC01514: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:147 BRA @UNKNOWN11
    case 0xC01516: {
        Instruction step(cpu, 0x80, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:147 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xC01513.
    case 0xC01517: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:149 TYA
    case 0xC01518: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:150 CLC
    case 0xC01519: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:151 ADC @LOCAL03
    case 0xC0151A: {
        Instruction step(cpu, 0x65, 0x000014u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:152 STA @VIRTUAL02
    case 0xC0151C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:153 LDX @VIRTUAL02
    case 0xC0151E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:154 LDA @LOCAL01
    case 0xC01520: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:155 JSR UNKNOWN_C00E16
    case 0xC01522: {
        Instruction step(cpu, 0x20, 0x000E28u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:156 LDX @VIRTUAL02
    case 0xC01525: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:157 LDA @LOCAL01
    case 0xC01527: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:158 JSL UNKNOWN_C0255C
    case 0xC01529: {
        Instruction step(cpu, 0x22, 0xC0256Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:159 LDY @LOCAL02
    case 0xC0152D: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:160 INY
    case 0xC0152F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:161 STY @LOCAL02
    case 0xC01530: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:163 CPY #31
    case 0xC01532: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:163 CPY #31
    // Overlapping static entry reached from 0xC01532.
    case 0xC01534: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:164 BNE @UNKNOWN10
    case 0xC01535: {
        Instruction step(cpu, 0xD0, 0x0000E1u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:165 LDY #.LOWORD(-8)
    case 0xC01537: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F8u : 0x00FFF8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:165 LDY #.LOWORD(-8)
    // Overlapping static entry reached from 0xC01537.
    case 0xC01539: {
        Instruction step(cpu, 0xFF, 0x801284u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:166 STY @LOCAL02
    case 0xC0153A: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:167 BRA @UNKNOWN13
    case 0xC0153C: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:167 BRA @UNKNOWN13
    // Overlapping static entry reached from 0xC01539.
    case 0xC0153D: {
        Instruction step(cpu, 0x14, 0x000098u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:169 TYA
    case 0xC0153E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:170 CLC
    case 0xC0153F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:171 ADC @LOCAL03
    case 0xC01540: {
        Instruction step(cpu, 0x65, 0x000014u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:172 TAX
    case 0xC01542: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:173 LDA @LOCAL01
    case 0xC01543: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:174 SEC
    case 0xC01545: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:175 SBC #8
    case 0xC01546: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:175 SBC #8
    // Overlapping static entry reached from 0xC01546.
    case 0xC01548: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:176 JSL SPAWN_HORIZONTAL
    case 0xC01549: {
        Instruction step(cpu, 0x22, 0xC02A7Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:177 LDY @LOCAL02
    case 0xC0154D: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:178 INY
    case 0xC0154F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:179 STY @LOCAL02
    case 0xC01550: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:181 CPY #40
    case 0xC01552: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:181 CPY #40
    // Overlapping static entry reached from 0xC01552.
    case 0xC01554: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:182 BNE @UNKNOWN12
    case 0xC01555: {
        Instruction step(cpu, 0xD0, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:183 LDA NPC_SPAWNS_ENABLED
    case 0xC01557: {
        Instruction step(cpu, 0xAD, 0x004DDEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:184 BEQ @UNKNOWN14
    case 0xC0155A: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:185 LDA #.LOWORD(-1)
    case 0xC0155C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:185 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0155C.
    case 0xC0155E: {
        Instruction step(cpu, 0xFF, 0x4DDE8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:186 STA NPC_SPAWNS_ENABLED
    case 0xC0155F: {
        Instruction step(cpu, 0x8D, 0x004DDEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:188 LDA @LOCAL01
    case 0xC01562: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:189 STA SCREEN_LEFT_X
    case 0xC01564: {
        Instruction step(cpu, 0x8D, 0x0046FAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:190 LDA @LOCAL03
    case 0xC01567: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_at_position.asm:191 STA SCREEN_TOP_Y
    case 0xC01569: {
        Instruction step(cpu, 0x8D, 0x0046FCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_at_position.asm:192 END_C_FUNCTION
    case 0xC0156C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_map_at_position.asm:192 END_C_FUNCTION
    case 0xC0156D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
