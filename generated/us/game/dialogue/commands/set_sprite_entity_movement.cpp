// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/set_sprite_entity_movement.asm
bool resume_text_ccs_set_sprite_entity_movement(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:3 BEGIN_C_FUNCTION
    case 0xC16F2F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F31: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F32: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F33: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16F11.
    case 0xC16F35: {
        Instruction step(cpu, 0xEE, 0x005BFFu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16F34.
    case 0xC16F36: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F37: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:10 END_STACK_VARS
    case 0xC16F38: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:11 TXA
    case 0xC16F39: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:12 STA @LOCAL01
    case 0xC16F3A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:13 LDA #3
    case 0xC16F3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:13 LDA #3
    // Overlapping static entry reached from 0xC16F3C.
    case 0xC16F3E: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:14 CLC
    case 0xC16F3F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F40: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16F43: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16F45: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16F47: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16F49: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:17 LDA @LOCAL01
    case 0xC16F4B: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16F4D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F4F: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16F52: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16F55: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F57: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:23 LDA #.LOWORD(CC_1F_F2)
    case 0xC16F5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Fu : 0x006F2Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:23 LDA #.LOWORD(CC_1F_F2)
    // Overlapping static entry reached from 0xC16F5A.
    case 0xC16F5C: {
        Instruction step(cpu, 0x6F, 0xE23E80u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:24 BRA @UNKNOWN3
    case 0xC16F5D: {
        Instruction step(cpu, 0x80, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC16F5F: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16F5C.
    case 0xC16F60: {
        Instruction step(cpu, 0x10, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:27 LDY #8
    case 0xC16F61: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00AD08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:27 LDY #8
    // Overlapping static entry reached from 0xC16F60.
    case 0xC16F62: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16F63: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16F61.
    case 0xC16F64: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16F64.
    case 0xC16F65: {
        Instruction step(cpu, 0x97, 0x000029u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:29 AND #$00FF
    case 0xC16F66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16F65.
    case 0xC16F67: {
        Instruction step(cpu, 0xFF, 0x3E2200u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC16F66.
    case 0xC16F68: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:30 JSL ASL16_ENTRY2
    case 0xC16F69: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:30 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16F67.
    case 0xC16F6B: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:31 STA @VIRTUAL02
    case 0xC16F6D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:32 LDA CC_ARGUMENT_STORAGE
    case 0xC16F6F: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:33 AND #$00FF
    case 0xC16F72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC16F72.
    case 0xC16F74: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:34 ORA @VIRTUAL02
    case 0xC16F75: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:35 REP #PROC_FLAGS::INDEX8
    case 0xC16F77: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:36 TAY
    case 0xC16F79: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:37 STY @LOCAL00
    case 0xC16F7A: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:38 SEP #PROC_FLAGS::INDEX8
    case 0xC16F7C: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:39 LDY #8
    case 0xC16F7E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00A508u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:40 LDA @LOCAL01
    case 0xC16F80: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:40 LDA @LOCAL01
    // Overlapping static entry reached from 0xC16F7E.
    case 0xC16F81: {
        Instruction step(cpu, 0x10, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:41 JSL ASL16_ENTRY2
    case 0xC16F82: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:41 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16F81.
    case 0xC16F83: {
        Instruction step(cpu, 0x3E, 0x00C092u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:42 STA @VIRTUAL02
    case 0xC16F86: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:43 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16F88: {
        Instruction step(cpu, 0xAD, 0x0097BCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:44 AND #$00FF
    case 0xC16F8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC16F8B.
    case 0xC16F8D: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:45 ORA @VIRTUAL02
    case 0xC16F8E: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:46 REP #PROC_FLAGS::INDEX8
    case 0xC16F90: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:47 TAX
    case 0xC16F92: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:48 LDY @LOCAL00
    case 0xC16F93: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:49 TYA
    case 0xC16F95: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:50 JSL UNKNOWN_C461CC
    case 0xC16F96: {
        Instruction step(cpu, 0x22, 0xC461CCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:51 LDA #NULL
    case 0xC16F9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_sprite_entity_movement.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC16F9A.
    case 0xC16F9C: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:53 END_C_FUNCTION
    case 0xC16F9D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_sprite_entity_movement.asm:53 END_C_FUNCTION
    case 0xC16F9E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
