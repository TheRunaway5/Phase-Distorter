// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm
bool resume_text_ccs_delete_floating_sprite_at_sprite_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC175FD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC175FF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17600: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17601: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17602: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17602.
    case 0xC17604: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17605: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17606: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:10 TXA
    case 0xC17607: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:11 STA @LOCAL00
    case 0xC17608: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1760A: {
        Instruction step(cpu, 0xAD, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:13 BNE @UNKNOWN0
    case 0xC1760D: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:14 LDA @LOCAL00
    case 0xC1760F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC17611: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17613: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC17616: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC17619: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1761B: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:20 LDA #.LOWORD(CC_1F_F4)
    case 0xC1761E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x0075FDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:20 LDA #.LOWORD(CC_1F_F4)
    // Overlapping static entry reached from 0xC1761E.
    case 0xC17620: {
        Instruction step(cpu, 0x75, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:21 BRA @UNKNOWN1
    case 0xC17621: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:21 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC17620.
    case 0xC17622: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC17623: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:24 LDY #8
    case 0xC17625: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00A508u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:25 LDA @LOCAL00
    case 0xC17627: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC17625.
    case 0xC17628: {
        Instruction step(cpu, 0x0E, 0x002022u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:26 JSL ASL16_ENTRY2
    case 0xC17629: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC17628.
    case 0xC1762B: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:27 STA @VIRTUAL02
    case 0xC1762D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC1762F: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:29 AND #$00FF
    case 0xC17632: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC17632.
    case 0xC17634: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:30 ORA @VIRTUAL02
    case 0xC17635: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:31 JSL UNKNOWN_C4B565
    case 0xC17637: {
        Instruction step(cpu, 0x22, 0xC489D2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:32 LDA #NULL
    case 0xC1763B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC1763B.
    case 0xC1763D: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:34 END_C_FUNCTION
    case 0xC1763E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:34 END_C_FUNCTION
    case 0xC1763F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
