// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/load_map_block_event_changes.asm
bool resume_overworld_load_map_block_event_changes(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_block_event_changes.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00702: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC00704: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC00705: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC00706: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC00707: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC00707.
    case 0xC00709: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC0070A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_block_event_changes.asm:8 END_STACK_VARS
    case 0xC0070B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:9 STA @LOCAL01
    case 0xC0070C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC00709.
    case 0xC0070D: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC0070E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0070D.
    case 0xC0070F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0070E.
    case 0xC00710: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC00711: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC00713: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC00713.
    case 0xC00715: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_block_event_changes.asm:10 LOADPTR EVENT_CONTROL_PTR_TABLE & $FF0000, @VIRTUAL06
    case 0xC00716: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:11 LDA @LOCAL01
    case 0xC00718: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:12 ASL
    case 0xC0071A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:13 TAX
    case 0xC0071B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:14 LDA f:EVENT_CONTROL_PTR_TABLE,X
    case 0xC0071C: {
        Instruction step(cpu, 0xBF, 0xD01598u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:15 CLC
    case 0xC00720: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:16 ADC @VIRTUAL06
    case 0xC00721: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:17 STA @VIRTUAL06
    case 0xC00723: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:19 LDA [@VIRTUAL06] ;map_tile_event::event_flag
    case 0xC00725: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:20 BEQ @UNKNOWN5
    case 0xC00727: {
        Instruction step(cpu, 0xF0, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:21 AND #$7FFF
    case 0xC00729: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:21 AND #$7FFF
    // Overlapping static entry reached from 0xC00729.
    case 0xC0072B: {
        Instruction step(cpu, 0x7F, 0x14D022u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:22 JSL GET_EVENT_FLAG
    case 0xC0072C: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:22 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC0072B.
    case 0xC0072F: {
        Instruction step(cpu, 0xC2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:23 STA @LOCAL00
    case 0xC00730: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:23 STA @LOCAL00
    // Overlapping static entry reached from 0xC0072F.
    case 0xC00731: {
        Instruction step(cpu, 0x0E, 0x0002A0u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:24 LDY #map_tile_event::count
    case 0xC00732: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:24 LDY #map_tile_event::count
    // Overlapping static entry reached from 0xC00732.
    case 0xC00734: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:25 LDA [@VIRTUAL06],Y
    case 0xC00735: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:26 TAY
    case 0xC00737: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:27 STY @LOCAL01
    case 0xC00738: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:28 LDX #0
    case 0xC0073A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:28 LDX #0
    // Overlapping static entry reached from 0xC0073A.
    case 0xC0073C: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:29 LDA [@VIRTUAL06]
    case 0xC0073D: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:30 CMP #$8000
    case 0xC0073F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:30 CMP #$8000
    // Overlapping static entry reached from 0xC0073F.
    case 0xC00741: {
        Instruction step(cpu, 0x80, 0x000090u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:31 BCC @UNKNOWN1
    case 0xC00742: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:32 LDX #1
    case 0xC00744: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:32 LDX #1
    // Overlapping static entry reached from 0xC00744.
    case 0xC00746: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:34 STX @VIRTUAL02
    case 0xC00747: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:35 LDA @LOCAL00
    case 0xC00749: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:36 CMP @VIRTUAL02
    case 0xC0074B: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:37 BNE @UNKNOWN4
    case 0xC0074D: {
        Instruction step(cpu, 0xD0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:38 LDA #map_tile_event::block_pairs
    case 0xC0074F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:38 LDA #map_tile_event::block_pairs
    // Overlapping static entry reached from 0xC0074F.
    case 0xC00751: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:39 CLC
    case 0xC00752: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:40 ADC @VIRTUAL06
    case 0xC00753: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:41 STA @VIRTUAL06
    case 0xC00755: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:42 BRA @UNKNOWN3
    case 0xC00757: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:44 LDY #map_tile_event::count
    case 0xC00759: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:44 LDY #map_tile_event::count
    // Overlapping static entry reached from 0xC00759.
    case 0xC0075B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:45 LDA [@VIRTUAL06],Y
    case 0xC0075C: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:46 TAX
    case 0xC0075E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:47 LDA [@VIRTUAL06]
    case 0xC0075F: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:48 JSR REPLACE_BLOCK
    case 0xC00761: {
        Instruction step(cpu, 0x20, 0x00068Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:49 LDA #map_tile_event::block_pairs
    case 0xC00764: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:49 LDA #map_tile_event::block_pairs
    // Overlapping static entry reached from 0xC00764.
    case 0xC00766: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:50 CLC
    case 0xC00767: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:51 ADC @VIRTUAL06
    case 0xC00768: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:52 STA @VIRTUAL06
    case 0xC0076A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:53 LDY @LOCAL01
    case 0xC0076C: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:54 DEY
    case 0xC0076E: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:55 STY @LOCAL01
    case 0xC0076F: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:57 CPY #0
    case 0xC00771: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:57 CPY #0
    // Overlapping static entry reached from 0xC00771.
    case 0xC00773: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:58 BNE @UNKNOWN2
    case 0xC00774: {
        Instruction step(cpu, 0xD0, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:59 BRA @UNKNOWN0
    case 0xC00776: {
        Instruction step(cpu, 0x80, 0x0000ADu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:61 TYA
    case 0xC00778: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/load_map_block_event_changes.asm:62 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00779: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/load_map_block_event_changes.asm:62 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC0077A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0077B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0077C: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0077D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/load_map_block_event_changes.asm:63 OPTIMIZED_ADD 4
    case 0xC0077E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:64 CLC
    case 0xC0077F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:65 ADC @VIRTUAL06
    case 0xC00780: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:66 STA @VIRTUAL06
    case 0xC00782: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_block_event_changes.asm:67 BRA @UNKNOWN0
    case 0xC00784: {
        Instruction step(cpu, 0x80, 0x00009Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_block_event_changes.asm:69 END_C_FUNCTION
    case 0xC00786: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_map_block_event_changes.asm:69 END_C_FUNCTION
    case 0xC00787: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
