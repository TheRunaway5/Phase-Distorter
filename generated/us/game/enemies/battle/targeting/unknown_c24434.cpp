// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C2/C24434.asm
bool resume_unresolved_c2_c24434(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C24434.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC24434: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24436: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24437: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24438: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC24439: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC24439.
    case 0xC2443B: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC2443C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C2/C24434.asm:7 END_STACK_VARS
    case 0xC2443D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:8 TAX
    case 0xC2443E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:9 STX @LOCAL00
    case 0xC2443F: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:10 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24441: {
        Instruction step(cpu, 0xAD, 0x00AD56u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:11 CLC
    case 0xC24444: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:12 ADC NUM_BATTLERS_IN_BACK_ROW
    case 0xC24445: {
        Instruction step(cpu, 0x6D, 0x00AD58u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:13 JSR RAND_LIMIT
    case 0xC24448: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC2444B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:15 INC
    case 0xC2444D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:16 LDX @LOCAL00
    case 0xC2444E: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:17 STA a:battler::current_target,X
    case 0xC24450: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC24453: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:19 AND #$00FF
    case 0xC24455: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC24455.
    case 0xC24457: {
        Instruction step(cpu, 0x00, 0x0000CDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:20 CMP NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24458: {
        Instruction step(cpu, 0xCD, 0x00AD56u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C24434.asm:21 BLTEQ @UNKNOWN0
    case 0xC2445B: {
        Instruction step(cpu, 0x90, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C24434.asm:21 BLTEQ @UNKNOWN0
    case 0xC2445D: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:22 SEC
    case 0xC2445F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:23 SBC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24460: {
        Instruction step(cpu, 0xED, 0x00AD56u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:24 TAX
    case 0xC24463: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:25 DEX
    case 0xC24464: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:26 LDA BACK_ROW_BATTLERS,X
    case 0xC24465: {
        Instruction step(cpu, 0xBD, 0x00AD82u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:27 AND #$00FF
    case 0xC24468: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC24468.
    case 0xC2446A: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:28 BRA @UNKNOWN1
    case 0xC2446B: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:30 TAX
    case 0xC2446D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:31 DEX
    case 0xC2446E: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:32 LDA FRONT_ROW_BATTLERS,X
    case 0xC2446F: {
        Instruction step(cpu, 0xBD, 0x00AD7Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:33 AND #$00FF
    case 0xC24472: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C24434.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC24472.
    case 0xC24474: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C24434.asm:35 END_C_FUNCTION
    case 0xC24475: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C24434.asm:35 END_C_FUNCTION
    case 0xC24476: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
