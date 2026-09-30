// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/create_entity_sprite.asm
bool resume_text_ccs_create_entity_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_entity_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC169C3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169C5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169C6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169C7: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC169C8.
    case 0xC169CA: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169CB: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169CC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:11 STX @VIRTUAL02
    case 0xC169CD: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC169CA.
    case 0xC169CE: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:12 LDA #4
    case 0xC169CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:12 LDA #4
    // Overlapping static entry reached from 0xC169CF.
    case 0xC169D1: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:13 CLC
    case 0xC169D2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC169D3: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC169D6: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC169D8: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC169DA: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC169DC: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:16 LDA @VIRTUAL02
    case 0xC169DE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC169E0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC169E2: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC169E5: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC169E8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC169EA: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:22 LDA #.LOWORD(CC_1F_15)
    case 0xC169ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0069C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:22 LDA #.LOWORD(CC_1F_15)
    // Overlapping static entry reached from 0xC169ED.
    case 0xC169EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x006180u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:23 BRA @UNKNOWN5
    case 0xC169F0: {
        Instruction step(cpu, 0x80, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:23 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC169EF.
    case 0xC169F1: {
        Instruction step(cpu, 0x61, 0x0000E2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:25 SEP #PROC_FLAGS::INDEX8
    case 0xC169F2: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:25 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC169F1.
    case 0xC169F3: {
        Instruction step(cpu, 0x10, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:26 LDY #8
    case 0xC169F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00AD08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:26 LDY #8
    // Overlapping static entry reached from 0xC169F3.
    case 0xC169F5: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:27 LDA CC_ARGUMENT_STORAGE+1
    case 0xC169F6: {
        Instruction step(cpu, 0xAD, 0x009A6Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:27 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC169F4.
    case 0xC169F7: {
        Instruction step(cpu, 0x6F, 0xFF299Au, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:28 AND #$00FF
    case 0xC169F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC169F9.
    case 0xC169FB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:29 JSL ASL16_ENTRY2
    case 0xC169FC: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:30 STA @VIRTUAL04
    case 0xC16A00: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:31 LDA CC_ARGUMENT_STORAGE
    case 0xC16A02: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:32 AND #$00FF
    case 0xC16A05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16A05.
    case 0xC16A07: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:33 ORA @VIRTUAL04
    case 0xC16A08: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:34 REP #PROC_FLAGS::INDEX8
    case 0xC16A0A: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:35 TAY
    case 0xC16A0C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:36 STY @LOCAL01
    case 0xC16A0D: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:37 SEP #PROC_FLAGS::INDEX8
    case 0xC16A0F: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:38 LDY #8
    case 0xC16A11: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00AD08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:39 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16A13: {
        Instruction step(cpu, 0xAD, 0x009A71u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:39 LDA CC_ARGUMENT_STORAGE+3
    // Overlapping static entry reached from 0xC16A11.
    case 0xC16A14: {
        Instruction step(cpu, 0x71, 0x00009Au, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:40 AND #$00FF
    case 0xC16A16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC16A16.
    case 0xC16A18: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:41 JSL ASL16_ENTRY2
    case 0xC16A19: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:42 STA @VIRTUAL04
    case 0xC16A1D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:43 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16A1F: {
        Instruction step(cpu, 0xAD, 0x009A70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:44 AND #$00FF
    case 0xC16A22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC16A22.
    case 0xC16A24: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:45 ORA @VIRTUAL04
    case 0xC16A25: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:46 STA @LOCAL00
    case 0xC16A27: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:47 LDA @VIRTUAL02
    case 0xC16A29: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:48 CMP #$00FF
    case 0xC16A2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:48 CMP #$00FF
    // Overlapping static entry reached from 0xC16A2B.
    case 0xC16A2D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:49 BNE @UNKNOWN3
    case 0xC16A2E: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:50 LDA @LOCAL00
    case 0xC16A30: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:51 REP #PROC_FLAGS::INDEX8
    case 0xC16A32: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:52 TAX
    case 0xC16A34: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:53 LDY @LOCAL01
    case 0xC16A35: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:54 TYA
    case 0xC16A37: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:55 JSL UNKNOWN_C06578
    case 0xC16A38: {
        Instruction step(cpu, 0x22, 0xC067A6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:56 BRA @UNKNOWN4
    case 0xC16A3C: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:58 LDA @LOCAL00
    case 0xC16A3E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:59 REP #PROC_FLAGS::INDEX8
    case 0xC16A40: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:60 TAX
    case 0xC16A42: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:61 LDY @LOCAL01
    case 0xC16A43: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:62 TYA
    case 0xC16A45: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:63 JSL CREATE_PREPARED_ENTITY_SPRITE
    case 0xC16A46: {
        Instruction step(cpu, 0x22, 0xC44275u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:64 LDX @VIRTUAL02
    case 0xC16A4A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:65 JSL UNKNOWN_C4C91A
    case 0xC16A4C: {
        Instruction step(cpu, 0x22, 0xC49BEAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:67 LDA #NULL
    case 0xC16A50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:67 LDA #NULL
    // Overlapping static entry reached from 0xC16A50.
    case 0xC16A52: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:69 END_C_FUNCTION
    case 0xC16A53: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_entity_sprite.asm:69 END_C_FUNCTION
    case 0xC16A54: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
