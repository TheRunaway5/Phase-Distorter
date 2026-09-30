// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/delete_entity_sprite.asm
bool resume_text_ccs_delete_entity_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC16ABA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16ABC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16ABD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16ABE: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16ABF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16ABF.
    case 0xC16AC1: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16AC2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16AC3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:10 STX @VIRTUAL02
    case 0xC16AC4: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC16AC1.
    case 0xC16AC5: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:11 LDA #2
    case 0xC16AC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:11 LDA #2
    // Overlapping static entry reached from 0xC16AC6.
    case 0xC16AC8: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:12 CLC
    case 0xC16AC9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16ACA: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16ACD: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16ACF: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16AD1: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16AD3: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:15 LDA @VIRTUAL02
    case 0xC16AD5: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC16AD7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16AD9: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC16ADC: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC16ADF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16AE1: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:21 LDA #.LOWORD(CC_1F_1F)
    case 0xC16AE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BAu : 0x006ABAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:21 LDA #.LOWORD(CC_1F_1F)
    // Overlapping static entry reached from 0xC16AE4.
    case 0xC16AE6: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:22 BRA @UNKNOWN3
    case 0xC16AE7: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC16AE9: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:25 LDY #8
    case 0xC16AEB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00AD08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:26 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16AED: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:26 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16AEB.
    case 0xC16AEE: {
        Instruction step(cpu, 0x6F, 0xFF299Au, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:27 AND #$00FF
    case 0xC16AF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC16AF0.
    case 0xC16AF2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:28 JSL ASL16_ENTRY2
    case 0xC16AF3: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:29 STA @VIRTUAL04
    case 0xC16AF7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:30 LDA CC_ARGUMENT_STORAGE
    case 0xC16AF9: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:31 AND #$00FF
    case 0xC16AFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC16AFC.
    case 0xC16AFE: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:32 ORA @VIRTUAL04
    case 0xC16AFF: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:33 REP #PROC_FLAGS::INDEX8
    case 0xC16B01: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:34 TAY
    case 0xC16B03: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:35 STY @LOCAL00
    case 0xC16B04: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:36 TYA
    case 0xC16B06: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:37 JSL UNKNOWN_C46028
    case 0xC16B07: {
        Instruction step(cpu, 0x22, 0xC43D76u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:38 LDX @VIRTUAL02
    case 0xC16B0B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:39 JSL UNKNOWN_C4C91A
    case 0xC16B0D: {
        Instruction step(cpu, 0x22, 0xC49BEAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:40 LDX @VIRTUAL02
    case 0xC16B11: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:41 LDY @LOCAL00
    case 0xC16B13: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:42 TYA
    case 0xC16B15: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:43 JSL UNKNOWN_C46125
    case 0xC16B16: {
        Instruction step(cpu, 0x22, 0xC43E85u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:44 LDA #NULL
    case 0xC16B1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_entity_sprite.asm:44 LDA #NULL
    // Overlapping static entry reached from 0xC16B1A.
    case 0xC16B1C: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:46 END_C_FUNCTION
    case 0xC16B1D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:46 END_C_FUNCTION
    case 0xC16B1E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
