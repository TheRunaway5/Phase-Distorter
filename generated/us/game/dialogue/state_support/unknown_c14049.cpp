// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C1/C14049.asm
bool resume_unresolved_c1_c14049(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C14049.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14049: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC1404B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC1404C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC1404D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC1404D.
    case 0xC1404F: {
        Instruction step(cpu, 0xFF, 0xB8AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C14049.asm:5 END_STACK_VARS
    case 0xC14050: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:6 LDX NEXT_TEXT_STACK_FRAME
    case 0xC14051: {
        Instruction step(cpu, 0xAE, 0x0097B8u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:6 LDX NEXT_TEXT_STACK_FRAME
    // Overlapping static entry reached from 0xC1404F.
    case 0xC14053: {
        Instruction step(cpu, 0x97, 0x0000CAu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:7 DEX
    case 0xC14054: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:8 STX NEXT_TEXT_STACK_FRAME
    case 0xC14055: {
        Instruction step(cpu, 0x8E, 0x0097B8u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:9 STX @VIRTUAL02
    case 0xC14058: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:10 LDA #$000A
    case 0xC1405A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:10 LDA #$000A
    // Overlapping static entry reached from 0xC1405A.
    case 0xC1405C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:11 CLC
    case 0xC1405D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:12 SBC @VIRTUAL02
    case 0xC1405E: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC14060: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC14062: {
        Instruction step(cpu, 0x10, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC14064: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C14049.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC14066: {
        Instruction step(cpu, 0x30, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:14 LDA #$0009
    case 0xC14068: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:14 LDA #$0009
    // Overlapping static entry reached from 0xC14068.
    case 0xC1406A: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:15 STA NEXT_TEXT_STACK_FRAME
    case 0xC1406B: {
        Instruction step(cpu, 0x8D, 0x0097B8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:17 PLD
    case 0xC1406E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/unknown/C1/C14049.asm:18 RTS
    case 0xC1406F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
