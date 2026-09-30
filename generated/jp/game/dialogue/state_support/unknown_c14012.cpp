// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C1/C14012.asm
bool resume_unresolved_c1_c14012(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C1/C14012.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14454: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC14456: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC14457: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC14458: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC14458.
    case 0xC1445A: {
        Instruction step(cpu, 0xFF, 0x6CAE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C14012.asm:5 END_STACK_VARS
    case 0xC1445B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:6 LDX NEXT_TEXT_STACK_FRAME
    case 0xC1445C: {
        Instruction step(cpu, 0xAE, 0x009A6Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:6 LDX NEXT_TEXT_STACK_FRAME
    // Overlapping static entry reached from 0xC1445A.
    case 0xC1445E: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:7 INX
    case 0xC1445F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:8 STX NEXT_TEXT_STACK_FRAME
    case 0xC14460: {
        Instruction step(cpu, 0x8E, 0x009A6Cu, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:9 STX @VIRTUAL02
    case 0xC14463: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:10 LDA #$000A
    case 0xC14465: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:10 LDA #$000A
    // Overlapping static entry reached from 0xC14465.
    case 0xC14467: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:11 CLC
    case 0xC14468: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:12 SBC @VIRTUAL02
    case 0xC14469: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC1446B: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC1446D: {
        Instruction step(cpu, 0x10, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC1446F: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C1/C14012.asm:13 BRANCHGTS @UNKNOWN2
    case 0xC14471: {
        Instruction step(cpu, 0x30, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:14 STZ NEXT_TEXT_STACK_FRAME
    case 0xC14473: {
        Instruction step(cpu, 0x9C, 0x009A6Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:16 LDA NEXT_TEXT_STACK_FRAME
    case 0xC14476: {
        Instruction step(cpu, 0xAD, 0x009A6Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:638 STA scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14479: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:639 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1447B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:640 ADC scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1447C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:641 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1447E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:642 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC1447F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:643 ADC scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14480: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:644 ASL
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14482: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:645 ADC scratch
    // Macro caller: src/unknown/C1/C14012.asm:17 OPTIMIZED_MULT @VIRTUAL04, 27
    case 0xC14483: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:18 CLC
    case 0xC14485: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:19 ADC #.LOWORD(DISPLAY_TEXT_STATES)
    case 0xC14486: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Eu : 0x00995Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:19 ADC #.LOWORD(DISPLAY_TEXT_STATES)
    // Overlapping static entry reached from 0xC14486.
    case 0xC14488: {
        Instruction step(cpu, 0x99, 0x00602Bu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:20 PLD
    case 0xC14489: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/unknown/C1/C14012.asm:21 RTS
    case 0xC1448A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
