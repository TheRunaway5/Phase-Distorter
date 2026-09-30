// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C042C2.asm
bool resume_unresolved_c0_c042c2(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C042C2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04549: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC0454B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC0454C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC0454D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC0454E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0454E.
    case 0xC04550: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC04551: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C042C2.asm:7 END_STACK_VARS
    case 0xC04552: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:8 TAX
    case 0xC04553: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:9 STX @LOCAL00
    case 0xC04554: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:10 TXA
    case 0xC04556: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:11 ASL
    case 0xC04557: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:12 PHA
    case 0xC04558: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:13 LDA GAME_STATE+game_state::leader_direction
    case 0xC04559: {
        Instruction step(cpu, 0xAD, 0x009B30u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:14 ASL
    case 0xC0455C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:15 TAX
    case 0xC0455D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:16 LDA f:UNKNOWN_C3E168,X
    case 0xC0455E: {
        Instruction step(cpu, 0xBF, 0xC3E152u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:17 PLX
    case 0xC04562: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:18 STA ENTITY_DIRECTIONS,X
    case 0xC04563: {
        Instruction step(cpu, 0x9D, 0x002EF4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:19 LDX @LOCAL00
    case 0xC04566: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:20 TXA
    case 0xC04568: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:21 JSL UNKNOWN_C09907
    case 0xC04569: {
        Instruction step(cpu, 0x22, 0xC098E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:22 LDX @LOCAL00
    case 0xC0456D: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:23 TXA
    case 0xC0456F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042C2.asm:24 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC04570: {
        Instruction step(cpu, 0x22, 0xC0A46Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C042C2.asm:25 END_C_FUNCTION
    case 0xC04574: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C042C2.asm:25 END_C_FUNCTION
    case 0xC04575: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
