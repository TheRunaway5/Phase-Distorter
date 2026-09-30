// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C4/C43D75.asm
bool resume_unresolved_c4_c43d75(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43D75.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43D75: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D77: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D78: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D79: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D7A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC43D7A.
    case 0xC43D7C: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D7D: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43D75.asm:7 END_STACK_VARS
    case 0xC43D7E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:8 STA @LOCAL00
    case 0xC43D7F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC43D7C.
    case 0xC43D80: {
        Instruction step(cpu, 0x0E, 0x0020E2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC43D81: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:10 AND #$0007
    case 0xC43D83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x008D07u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:11 STA NEW_TEXT_PIXEL_OFFSET
    case 0xC43D85: {
        Instruction step(cpu, 0x8D, 0x005E72u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:11 STA NEW_TEXT_PIXEL_OFFSET
    // Overlapping static entry reached from 0xC43D83.
    case 0xC43D86: {
        Instruction step(cpu, 0x72, 0x00005Eu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC43D88: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:13 LDA @LOCAL00
    case 0xC43D8A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:14 LSR
    case 0xC43D8C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:15 LSR
    case 0xC43D8D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:16 LSR
    case 0xC43D8E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C4/C43D75.asm:17 JSL UNKNOWN_C43D24
    case 0xC43D8F: {
        Instruction step(cpu, 0x22, 0xC43D24u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43D75.asm:18 END_C_FUNCTION
    case 0xC43D93: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43D75.asm:18 END_C_FUNCTION
    case 0xC43D94: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
