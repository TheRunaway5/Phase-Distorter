// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/set_tpt_entity_delay.asm
bool resume_text_ccs_set_tpt_entity_delay(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:3 BEGIN_C_FUNCTION
    case 0xC16E2E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E30: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E31: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E32: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E33: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16E33.
    case 0xC16E35: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E36: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:9 END_STACK_VARS
    case 0xC16E37: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:10 TXA
    case 0xC16E38: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:11 STA @LOCAL00
    case 0xC16E39: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16E3B: {
        Instruction step(cpu, 0xAD, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:13 BNE @UNKNOWN0
    case 0xC16E3E: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:14 LDA @LOCAL00
    case 0xC16E40: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16E42: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16E44: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16E47: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16E4A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16E4C: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:20 LDA #.LOWORD(CC_1F_E6)
    case 0xC16E4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Eu : 0x006E2Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:20 LDA #.LOWORD(CC_1F_E6)
    // Overlapping static entry reached from 0xC16E4F.
    case 0xC16E51: {
        Instruction step(cpu, 0x6E, 0x001B80u, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:21 BRA @UNKNOWN1
    case 0xC16E52: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16E54: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:24 LDY #8
    case 0xC16E56: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00A508u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:25 LDA @LOCAL00
    case 0xC16E58: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16E56.
    case 0xC16E59: {
        Instruction step(cpu, 0x0E, 0x002022u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:26 JSL ASL16_ENTRY2
    case 0xC16E5A: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16E59.
    case 0xC16E5C: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:27 STA @VIRTUAL02
    case 0xC16E5E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC16E60: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:29 AND #$00FF
    case 0xC16E63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16E63.
    case 0xC16E65: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:30 ORA @VIRTUAL02
    case 0xC16E66: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:31 JSL UNKNOWN_C4655E
    case 0xC16E68: {
        Instruction step(cpu, 0x22, 0xC442CCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:32 LDA #NULL
    case 0xC16E6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_tpt_entity_delay.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16E6C.
    case 0xC16E6E: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:34 END_C_FUNCTION
    case 0xC16E6F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_tpt_entity_delay.asm:34 END_C_FUNCTION
    case 0xC16E70: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
