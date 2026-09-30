// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/create_entity_sprite.asm
bool resume_text_ccs_create_entity_sprite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_entity_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC16744: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC16746: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC16747: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC16748: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC16749: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16749.
    case 0xC1674B: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC1674C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC1674D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:11 STX @VIRTUAL02
    case 0xC1674E: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1674B.
    case 0xC1674F: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:12 LDA #4
    case 0xC16750: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:12 LDA #4
    // Overlapping static entry reached from 0xC16750.
    case 0xC16752: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:13 CLC
    case 0xC16753: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16754: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16757: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16759: {
        Instruction step(cpu, 0x10, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1675B: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1675D: {
        Instruction step(cpu, 0x30, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:16 LDA @VIRTUAL02
    case 0xC1675F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16761: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16763: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16766: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16769: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1676B: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:22 LDA #.LOWORD(CC_1F_15)
    case 0xC1676E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000044u : 0x006744u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:22 LDA #.LOWORD(CC_1F_15)
    // Overlapping static entry reached from 0xC1676E.
    case 0xC16770: {
        Instruction step(cpu, 0x67, 0x000080u, 2u, AddressMode::DirectPageIndirectLong);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:23 BRA @UNKNOWN5
    case 0xC16771: {
        Instruction step(cpu, 0x80, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:23 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC16770.
    case 0xC16772: {
        Instruction step(cpu, 0x61, 0x0000E2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:25 SEP #PROC_FLAGS::INDEX8
    case 0xC16773: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:25 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16772.
    case 0xC16774: {
        Instruction step(cpu, 0x10, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:26 LDY #8
    case 0xC16775: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00AD08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:26 LDY #8
    // Overlapping static entry reached from 0xC16774.
    case 0xC16776: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:27 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16777: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:27 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16775.
    case 0xC16778: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:27 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16778.
    case 0xC16779: {
        Instruction step(cpu, 0x97, 0x000029u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:28 AND #$00FF
    case 0xC1677A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC16779.
    case 0xC1677B: {
        Instruction step(cpu, 0xFF, 0x3E2200u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC1677A.
    case 0xC1677C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:29 JSL ASL16_ENTRY2
    case 0xC1677D: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:29 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1677B.
    case 0xC1677F: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:30 STA @VIRTUAL04
    case 0xC16781: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:31 LDA CC_ARGUMENT_STORAGE
    case 0xC16783: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:32 AND #$00FF
    case 0xC16786: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16786.
    case 0xC16788: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:33 ORA @VIRTUAL04
    case 0xC16789: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:34 REP #PROC_FLAGS::INDEX8
    case 0xC1678B: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:35 TAY
    case 0xC1678D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:36 STY @LOCAL01
    case 0xC1678E: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:37 SEP #PROC_FLAGS::INDEX8
    case 0xC16790: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:38 LDY #8
    case 0xC16792: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00AD08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:39 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16794: {
        Instruction step(cpu, 0xAD, 0x0097BDu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:39 LDA CC_ARGUMENT_STORAGE+3
    // Overlapping static entry reached from 0xC16792.
    case 0xC16795: {
        Instruction step(cpu, 0xBD, 0x002997u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:40 AND #$00FF
    case 0xC16797: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC16795.
    case 0xC16798: {
        Instruction step(cpu, 0xFF, 0x3E2200u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC16797.
    case 0xC16799: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:41 JSL ASL16_ENTRY2
    case 0xC1679A: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:41 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16798.
    case 0xC1679C: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:42 STA @VIRTUAL04
    case 0xC1679E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:43 LDA CC_ARGUMENT_STORAGE+2
    case 0xC167A0: {
        Instruction step(cpu, 0xAD, 0x0097BCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:44 AND #$00FF
    case 0xC167A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC167A3.
    case 0xC167A5: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:45 ORA @VIRTUAL04
    case 0xC167A6: {
        Instruction step(cpu, 0x05, 0x000004u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:46 STA @LOCAL00
    case 0xC167A8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:47 LDA @VIRTUAL02
    case 0xC167AA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:48 CMP #$00FF
    case 0xC167AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:48 CMP #$00FF
    // Overlapping static entry reached from 0xC167AC.
    case 0xC167AE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:49 BNE @UNKNOWN3
    case 0xC167AF: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:50 LDA @LOCAL00
    case 0xC167B1: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:51 REP #PROC_FLAGS::INDEX8
    case 0xC167B3: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:52 TAX
    case 0xC167B5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:53 LDY @LOCAL01
    case 0xC167B6: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:54 TYA
    case 0xC167B8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:55 JSL UNKNOWN_C06578
    case 0xC167B9: {
        Instruction step(cpu, 0x22, 0xC06578u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:56 BRA @UNKNOWN4
    case 0xC167BD: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:58 LDA @LOCAL00
    case 0xC167BF: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:59 REP #PROC_FLAGS::INDEX8
    case 0xC167C1: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:60 TAX
    case 0xC167C3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:61 LDY @LOCAL01
    case 0xC167C4: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:62 TYA
    case 0xC167C6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:63 JSL CREATE_PREPARED_ENTITY_SPRITE
    case 0xC167C7: {
        Instruction step(cpu, 0x22, 0xC46507u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:64 LDX @VIRTUAL02
    case 0xC167CB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:65 JSL UNKNOWN_C4C91A
    case 0xC167CD: {
        Instruction step(cpu, 0x22, 0xC4C91Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:67 LDA #NULL
    case 0xC167D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_sprite.asm:67 LDA #NULL
    // Overlapping static entry reached from 0xC167D1.
    case 0xC167D3: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:69 END_C_FUNCTION
    case 0xC167D4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_entity_sprite.asm:69 END_C_FUNCTION
    case 0xC167D5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
