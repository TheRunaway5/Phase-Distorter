// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/print_cast_name_party.asm
bool resume_ending_print_cast_name_party(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name_party.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EC05: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC07: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC08: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC09: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EC0A.
    case 0xC4EC0C: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC0D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4EC0E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:47 STY @VIRTUAL04
    case 0xC4EC0F: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:47 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4EC0C.
    case 0xC4EC10: {
        Instruction step(cpu, 0x04, 0x000086u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:48 STX @VIRTUAL02
    case 0xC4EC11: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:48 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4EC10.
    case 0xC4EC12: {
        Instruction step(cpu, 0x02, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:49 CMP #7
    case 0xC4EC13: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:49 CMP #7
    // Overlapping static entry reached from 0xC4EC13.
    case 0xC4EC15: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:50 BEQ @UNKNOWN0
    case 0xC4EC16: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:51 LDY @VIRTUAL02
    case 0xC4EC18: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:52 LDX #UNK_SIZE
    case 0xC4EC1A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:52 LDX #UNK_SIZE
    // Overlapping static entry reached from 0xC4EC1A.
    case 0xC4EC1C: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:53 STX @LOCAL00
    case 0xC4EC1D: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:54 DEC
    case 0xC4EC1F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:55 ASL
    case 0xC4EC20: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:56 TAX
    case 0xC4EC21: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:57 LDA PARTY_MEMBER_CAST_TILE_IDS,X
    case 0xC4EC22: {
        Instruction step(cpu, 0xBF, 0xC3FDB5u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:58 LDX @LOCAL00
    case 0xC4EC26: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:59 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4EC28: {
        Instruction step(cpu, 0x22, 0xC4EA9Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:60 LDY #UNK_SIZE
    case 0xC4EC2C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:60 LDY #UNK_SIZE
    // Overlapping static entry reached from 0xC4EC2C.
    case 0xC4EC2E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:61 LDX @VIRTUAL04
    case 0xC4EC2F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:62 LDA @VIRTUAL02
    case 0xC4EC31: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:63 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4EC33: {
        Instruction step(cpu, 0x22, 0xC4EB04u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:64 BRA @UNKNOWN1
    case 0xC4EC37: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:66 LDY @VIRTUAL02
    case 0xC4EC39: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:67 LDX #6
    case 0xC4EC3B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:67 LDX #6
    // Overlapping static entry reached from 0xC4EC3B.
    case 0xC4EC3D: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:68 LDA #448
    case 0xC4EC3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0001C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:68 LDA #448
    // Overlapping static entry reached from 0xC4EC3E.
    case 0xC4EC40: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:69 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4EC41: {
        Instruction step(cpu, 0x22, 0xC4EA9Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:69 JSL PREPARE_CAST_NAME_TILEMAP
    // Overlapping static entry reached from 0xC4EC40.
    case 0xC4EC42: {
        Instruction step(cpu, 0x9C, 0x00C4EAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:70 LDY #6
    case 0xC4EC45: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:70 LDY #6
    // Overlapping static entry reached from 0xC4EC45.
    case 0xC4EC47: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:71 LDX @VIRTUAL04
    case 0xC4EC48: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:72 LDA @VIRTUAL02
    case 0xC4EC4A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name_party.asm:73 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4EC4C: {
        Instruction step(cpu, 0x22, 0xC4EB04u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/print_cast_name_party.asm:76 END_C_FUNCTION
    case 0xC4EC50: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/print_cast_name_party.asm:76 END_C_FUNCTION
    case 0xC4EC51: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
