// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/get_event_flag.asm
bool resume_text_get_event_flag(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_event_flag.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21628: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC2162A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC2162B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC2162C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC2162D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2162D.
    case 0xC2162F: {
        Instruction step(cpu, 0xFF, 0x3A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC21630: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC21631: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/get_event_flag.asm:10 DEC
    case 0xC21632: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/get_event_flag.asm:11 STA @LOCAL00
    case 0xC21633: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_event_flag.asm:12 LSR
    case 0xC21635: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/get_event_flag.asm:13 LSR
    case 0xC21636: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/get_event_flag.asm:14 LSR
    case 0xC21637: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/get_event_flag.asm:15 PHA
    case 0xC21638: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/get_event_flag.asm:16 LDY #8
    case 0xC21639: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/get_event_flag.asm:16 LDY #8
    // Overlapping static entry reached from 0xC21639.
    case 0xC2163B: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_event_flag.asm:17 LDA @LOCAL00
    case 0xC2163C: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_event_flag.asm:18 JSL MODULUS16
    case 0xC2163E: {
        Instruction step(cpu, 0x22, 0xC09231u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/get_event_flag.asm:19 TAX
    case 0xC21642: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/get_event_flag.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC21643: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/get_event_flag.asm:21 LDA f:POWERS_OF_TWO_8BIT,X
    case 0xC21645: {
        Instruction step(cpu, 0xBF, 0xC4562Fu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_event_flag.asm:22 PLX
    case 0xC21649: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/text/get_event_flag.asm:23 AND EVENT_FLAGS,X
    case 0xC2164A: {
        Instruction step(cpu, 0x3D, 0x009C08u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/get_event_flag.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC2164D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/get_event_flag.asm:25 AND #$00FF
    case 0xC2164F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/get_event_flag.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC2164F.
    case 0xC21651: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_event_flag.asm:26 BEQ @UNKNOWN0
    case 0xC21652: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/get_event_flag.asm:27 LDA #1
    case 0xC21654: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_event_flag.asm:27 LDA #1
    // Overlapping static entry reached from 0xC21654.
    case 0xC21656: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_event_flag.asm:28 BRA @UNKNOWN1
    case 0xC21657: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/get_event_flag.asm:30 LDA #0
    case 0xC21659: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_event_flag.asm:30 LDA #0
    // Overlapping static entry reached from 0xC21659.
    case 0xC2165B: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_event_flag.asm:32 END_C_FUNCTION
    case 0xC2165C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/get_event_flag.asm:32 END_C_FUNCTION
    case 0xC2165D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
