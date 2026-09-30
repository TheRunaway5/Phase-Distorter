// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/create_entity_tpt.asm
bool resume_text_ccs_create_entity_tpt(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_entity_tpt.asm:3 BEGIN_C_FUNCTION
    case 0xC16509: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1650B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1650C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1650D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1650E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1650E.
    case 0xC16510: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC16511: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC16512: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:11 TXY
    case 0xC16513: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:12 STY @LOCAL01
    case 0xC16514: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:13 LDA #4
    case 0xC16516: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16516.
    case 0xC16518: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:14 CLC
    case 0xC16519: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1651A: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1651D: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1651F: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16521: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    // Overlapping static entry reached from 0xC1E8AD.
    case 0xC16522: {
        Instruction step(cpu, 0x02, 0x000030u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16523: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:17 TYA
    case 0xC16525: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16526: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16528: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1652B: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1652E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16530: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:23 LDA #.LOWORD(CC_1F_17)
    case 0xC16533: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000009u : 0x006509u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:23 LDA #.LOWORD(CC_1F_17)
    // Overlapping static entry reached from 0xC16533.
    case 0xC16535: {
        Instruction step(cpu, 0x65, 0x000080u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:24 BRA @UNKNOWN3
    case 0xC16536: {
        Instruction step(cpu, 0x80, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:24 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC16535.
    case 0xC16537: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC16538: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:27 LDY #8
    case 0xC1653A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00AD08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:28 LDA CC_ARGUMENT_STORAGE+1
    case 0xC1653C: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC1653A.
    case 0xC1653D: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC1653D.
    case 0xC1653E: {
        Instruction step(cpu, 0x97, 0x000029u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:29 AND #$00FF
    case 0xC1653F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1653E.
    case 0xC16540: {
        Instruction step(cpu, 0xFF, 0x3E2200u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1653F.
    case 0xC16541: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:30 JSL ASL16_ENTRY2
    case 0xC16542: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:30 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16540.
    case 0xC16544: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:31 STA @VIRTUAL02
    case 0xC16546: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:32 LDA CC_ARGUMENT_STORAGE
    case 0xC16548: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:33 AND #$00FF
    case 0xC1654B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC1654B.
    case 0xC1654D: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:34 ORA @VIRTUAL02
    case 0xC1654E: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:35 STA @LOCAL00
    case 0xC16550: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC16552: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:37 LDA #8
    case 0xC16554: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00A808u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:38 TAY
    case 0xC16556: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC16557: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:40 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16559: {
        Instruction step(cpu, 0xAD, 0x0097BDu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:41 AND #$00FF
    case 0xC1655C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC1655C.
    case 0xC1655E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:42 JSL ASL16_ENTRY2
    case 0xC1655F: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:43 STA @VIRTUAL02
    case 0xC16563: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:44 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16565: {
        Instruction step(cpu, 0xAD, 0x0097BCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:45 AND #$00FF
    case 0xC16568: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC16568.
    case 0xC1656A: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:46 ORA @VIRTUAL02
    case 0xC1656B: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:47 REP #PROC_FLAGS::INDEX8
    case 0xC1656D: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:48 TAX
    case 0xC1656F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:49 LDA @LOCAL00
    case 0xC16570: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:50 JSL CREATE_PREPARED_ENTITY_NPC
    case 0xC16572: {
        Instruction step(cpu, 0x22, 0xC464B5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:51 LDY @LOCAL01
    case 0xC16576: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:52 TYX
    case 0xC16578: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:53 JSL UNKNOWN_C4C91A
    case 0xC16579: {
        Instruction step(cpu, 0x22, 0xC4C91Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:54 LDA #NULL
    case 0xC1657D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_entity_tpt.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC1657D.
    case 0xC1657F: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:56 END_C_FUNCTION
    case 0xC16580: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_entity_tpt.asm:56 END_C_FUNCTION
    case 0xC16581: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
