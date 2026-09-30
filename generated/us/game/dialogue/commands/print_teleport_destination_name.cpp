// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/print_teleport_destination_name.asm
bool resume_text_ccs_print_teleport_destination_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:3 BEGIN_C_FUNCTION
    case 0xC146DE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E1: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E2: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC146E3.
    case 0xC146E5: {
        Instruction step(cpu, 0xFF, 0xE0685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E6: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E7: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    case 0xC146E8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    // Overlapping static entry reached from 0xC146E5.
    case 0xC146E9: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    // Overlapping static entry reached from 0xC146E8.
    case 0xC146EA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:12 BEQ @UNKNOWN0
    case 0xC146EB: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:13 TXA
    case 0xC146ED: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:14 STA @LOCAL01
    case 0xC146EE: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:15 BRA @UNKNOWN1
    case 0xC146F0: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:17 JSR GET_ARGUMENT_MEMORY
    case 0xC146F2: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:18 LDA @VIRTUAL06
    case 0xC146F5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:19 STA @LOCAL01
    case 0xC146F7: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC146F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x007880u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC146F9.
    case 0xC146FB: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC146FC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC146FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC146FE.
    case 0xC14700: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC14701: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:22 LDA @LOCAL01
    case 0xC14703: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14705: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    // Overlapping static entry reached from 0xC14705.
    case 0xC14707: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14708: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:24 CLC
    case 0xC1470C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:25 ADC @VIRTUAL06
    case 0xC1470D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:26 STA @VIRTUAL06
    case 0xC1470F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:27 STA @LOCAL00
    case 0xC14711: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:28 LDA @VIRTUAL06+2
    case 0xC14713: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:29 STA @LOCAL00+2
    case 0xC14715: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:30 LDA #.SIZEOF(psi_teleport_destination::name)
    case 0xC14717: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:30 LDA #.SIZEOF(psi_teleport_destination::name)
    // Overlapping static entry reached from 0xC14717.
    case 0xC14719: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:34 JSL UNKNOWN_C447FB
    case 0xC1471A: {
        Instruction step(cpu, 0x22, 0xC447FBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:36 LDA #NULL
    case 0xC1471E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_teleport_destination_name.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC1471E.
    case 0xC14720: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:37 END_C_FUNCTION
    case 0xC14721: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:37 END_C_FUNCTION
    case 0xC14722: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
