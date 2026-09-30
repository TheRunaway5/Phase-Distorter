// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C1/C1866D.asm
bool resume_unresolved_c1_c1866d(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1866D.asm:3 BEGIN_C_FUNCTION
    case 0xC1866D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC1866F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC18670: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC18671: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC18672: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC18672.
    case 0xC18674: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC18675: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C1/C1866D.asm:9 END_STACK_VARS
    case 0xC18676: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1866D.asm:10 STA @LOCAL00
    case 0xC18677: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1866D.asm:10 STA @LOCAL00
    // Overlapping static entry reached from 0xC18674.
    case 0xC18678: {
        Instruction step(cpu, 0x0E, 0x001EA5u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC18679: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1867B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1867D: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C1/C1866D.asm:11 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1867F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1866D.asm:12 LDA @LOCAL00
    case 0xC18681: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1866D.asm:13 BNE @UNKNOWN0
    case 0xC18683: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C1866D.asm:14 LDA #0
    case 0xC18685: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1866D.asm:14 LDA #0
    // Overlapping static entry reached from 0xC18685.
    case 0xC18687: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1866D.asm:15 BRA @UNKNOWN1
    case 0xC18688: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1866D.asm:17 TAX
    case 0xC1868A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C1/C1866D.asm:18 STZ a:display_text_state::unknown4,X
    case 0xC1868B: {
        Instruction step(cpu, 0x9E, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C1/C1866D.asm:19 TAY
    case 0xC1868E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1868F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC18691: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC18694: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C1/C1866D.asm:20 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC18696: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1866D.asm:21 LDA @LOCAL00
    case 0xC18699: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C1/C1866D.asm:23 END_C_FUNCTION
    case 0xC1869B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C1/C1866D.asm:23 END_C_FUNCTION
    case 0xC1869C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
