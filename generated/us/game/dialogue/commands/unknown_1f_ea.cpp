// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/unknown_1F_EA.asm
bool resume_text_ccs_unknown_1f_ea(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:3 BEGIN_C_FUNCTION
    case 0xC16C83: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C85: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C86: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C87: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16C88.
    case 0xC16C8A: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C8B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:9 END_STACK_VARS
    case 0xC16C8C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:10 TXA
    case 0xC16C8D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:11 STA @LOCAL00
    case 0xC16C8E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C90: {
        Instruction step(cpu, 0xAD, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:13 BNE @UNKNOWN0
    case 0xC16C93: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:14 LDA @LOCAL00
    case 0xC16C95: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16C97: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C99: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16C9C: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16C9F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16CA1: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:20 LDA #.LOWORD(CC_1F_EA)
    case 0xC16CA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000083u : 0x006C83u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:20 LDA #.LOWORD(CC_1F_EA)
    // Overlapping static entry reached from 0xC16CA4.
    case 0xC16CA6: {
        Instruction step(cpu, 0x6C, 0x001B80u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:21 BRA @UNKNOWN1
    case 0xC16CA7: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16CA9: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:24 LDY #8
    case 0xC16CAB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00A508u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:25 LDA @LOCAL00
    case 0xC16CAD: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16CAB.
    case 0xC16CAE: {
        Instruction step(cpu, 0x0E, 0x003E22u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:26 JSL ASL16_ENTRY2
    case 0xC16CAF: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16CAE.
    case 0xC16CB1: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:27 STA @VIRTUAL02
    case 0xC16CB3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16CB5: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:29 AND #$00FF
    case 0xC16CB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16CB8.
    case 0xC16CBA: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:30 ORA @VIRTUAL02
    case 0xC16CBB: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:31 JSL UNKNOWN_C46616
    case 0xC16CBD: {
        Instruction step(cpu, 0x22, 0xC46616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:32 LDA #NULL
    case 0xC16CC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_EA.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16CC1.
    case 0xC16CC3: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:34 END_C_FUNCTION
    case 0xC16CC4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1F_EA.asm:34 END_C_FUNCTION
    case 0xC16CC5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
