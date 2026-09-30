// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/prepare_new_entity_at_teleport_destination.asm
bool resume_overworld_prepare_new_entity_at_teleport_destination(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46DE5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DE7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DE8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DE9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DEA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x00FFF1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC46DEA.
    case 0xC46DEC: {
        Instruction step(cpu, 0xFF, 0xE2685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DED: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:7 END_STACK_VARS
    case 0xC46DEE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC46DEF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:8 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC46DEC.
    case 0xC46DF0: {
        Instruction step(cpu, 0x20, 0x000E85u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:9 STA @LOCAL00
    case 0xC46DF1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC46DF3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC46DF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ABu : 0x00EBABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46DF5.
    case 0xC46DF7: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC46DF8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC46DFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC46DFA.
    case 0xC46DFC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:11 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL06
    case 0xC46DFD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:12 LDA @LOCAL00
    case 0xC46DFF: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:13 AND #$00FF
    case 0xC46E01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC46E01.
    case 0xC46E03: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC46E04: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC46E05: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:14 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC46E06: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:15 CLC
    case 0xC46E07: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:16 ADC @VIRTUAL06
    case 0xC46E08: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:17 STA @VIRTUAL06
    case 0xC46E0A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:18 STA @VIRTUAL0A
    case 0xC46E0C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:19 LDA @VIRTUAL06+2
    case 0xC46E0E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:20 STA @VIRTUAL0A+2
    case 0xC46E10: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:21 LDA [@VIRTUAL0A] ;teleport_destination::x_coord
    case 0xC46E12: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:22 ASL
    case 0xC46E14: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:23 ASL
    case 0xC46E15: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:24 ASL
    case 0xC46E16: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:25 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC46E17: {
        Instruction step(cpu, 0x8D, 0x009E2Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:26 LDY #teleport_destination::y_coord
    case 0xC46E1A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:26 LDY #teleport_destination::y_coord
    // Overlapping static entry reached from 0xC46E1A.
    case 0xC46E1C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:27 LDA [@VIRTUAL06],Y
    case 0xC46E1D: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:28 ASL
    case 0xC46E1F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:29 ASL
    case 0xC46E20: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:30 ASL
    case 0xC46E21: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:31 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC46E22: {
        Instruction step(cpu, 0x8D, 0x009E2Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC46E25: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:33 LDY #teleport_destination::direction
    case 0xC46E27: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:33 LDY #teleport_destination::direction
    // Overlapping static entry reached from 0xC46E27.
    case 0xC46E29: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:34 LDA [@VIRTUAL06],Y
    case 0xC46E2A: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC46E2C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:36 AND #$00FF
    case 0xC46E2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC46E2E.
    case 0xC46E30: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:37 DEC
    case 0xC46E31: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/prepare_new_entity_at_teleport_destination.asm:38 STA ENTITY_PREPARED_DIRECTION
    case 0xC46E32: {
        Instruction step(cpu, 0x8D, 0x009E31u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:39 END_C_FUNCTION
    case 0xC46E35: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/prepare_new_entity_at_teleport_destination.asm:39 END_C_FUNCTION
    case 0xC46E36: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
