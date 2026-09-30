// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/print_teleport_destination_name.asm
bool resume_text_ccs_print_teleport_destination_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:3 BEGIN_C_FUNCTION
    case 0xC14AE2: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AE4: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AE5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AE6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14AE7.
    case 0xC14AE9: {
        Instruction step(cpu, 0xFF, 0xE0685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AEA: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AEB: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    case 0xC14AEC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    // Overlapping static entry reached from 0xC14AE9.
    case 0xC14AED: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    // Overlapping static entry reached from 0xC14AEC.
    case 0xC14AEE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:12 BEQ @UNKNOWN0
    case 0xC14AEF: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:13 TXA
    case 0xC14AF1: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:14 STA @LOCAL01
    case 0xC14AF2: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:15 BRA @UNKNOWN1
    case 0xC14AF4: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:17 JSR GET_ARGUMENT_MEMORY
    case 0xC14AF6: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:18 LDA @VIRTUAL06
    case 0xC14AF9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:19 STA @LOCAL01
    case 0xC14AFB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC14AFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00899Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14AFD.
    case 0xC14AFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC14B00: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14AFF.
    case 0xC14B01: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC14B02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14B01.
    case 0xC14B03: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14B02.
    case 0xC14B04: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC14B05: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:22 LDA @LOCAL01
    case 0xC14B07: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:589 ASL
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14B09: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:590 ASL
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14B0A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:591 ASL
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14B0B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:592 ASL
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14B0C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:24 CLC
    case 0xC14B0D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:25 ADC @VIRTUAL06
    case 0xC14B0E: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:26 STA @VIRTUAL06
    case 0xC14B10: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:27 STA @LOCAL00
    case 0xC14B12: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:28 LDA @VIRTUAL06+2
    case 0xC14B14: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:29 STA @LOCAL00+2
    case 0xC14B16: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:30 LDA #.SIZEOF(psi_teleport_destination::name)
    case 0xC14B18: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:30 LDA #.SIZEOF(psi_teleport_destination::name)
    // Overlapping static entry reached from 0xC14B18.
    case 0xC14B1A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:32 JSR PRINT_STRING
    case 0xC14B1B: {
        Instruction step(cpu, 0x20, 0x0014DDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:36 LDA #NULL
    case 0xC14B1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14B1E.
    case 0xC14B20: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:37 END_C_FUNCTION
    case 0xC14B21: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:37 END_C_FUNCTION
    case 0xC14B22: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
