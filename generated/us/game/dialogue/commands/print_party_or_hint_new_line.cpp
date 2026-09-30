// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/print_party_or_hint_new_line.asm
bool resume_text_ccs_print_party_or_hint_new_line(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_party_or_hint_new_line.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC140CF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC140D4.
    case 0xC140D6: {
        Instruction step(cpu, 0xFF, 0xE0685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:9 CPX #$0000
    case 0xC140D9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC140D6.
    case 0xC140DA: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC140D9.
    case 0xC140DB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:10 BEQ @UNKNOWN0
    case 0xC140DC: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:11 TXA
    case 0xC140DE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:12 BRA @UNKNOWN1
    case 0xC140DF: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC140E1: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:15 LDA @VIRTUAL06
    case 0xC140E4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:17 JSL UNKNOWN_EF01D2
    case 0xC140E6: {
        Instruction step(cpu, 0x22, 0xEF01D2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:18 LDA #NULL
    case 0xC140EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC140EA.
    case 0xC140EC: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:19 PLD
    case 0xC140ED: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/ccs/print_party_or_hint_new_line.asm:20 RTS
    case 0xC140EE: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
