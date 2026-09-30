// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/show_character_inventory.asm
bool resume_text_ccs_show_character_inventory(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/show_character_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC15758: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC1575A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC1575B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC1575C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC1575D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC1575D.
    case 0xC1575F: {
        Instruction step(cpu, 0xFF, 0xA9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC15760: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/show_character_inventory.asm:12 END_STACK_VARS
    case 0xC15761: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:20 LDA #1
    case 0xC15762: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:20 LDA #1
    // Overlapping static entry reached from 0xC1575F.
    case 0xC15763: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:20 LDA #1
    // Overlapping static entry reached from 0xC15762.
    case 0xC15764: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:21 CLC
    case 0xC15765: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:22 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15766: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC15769: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC1576B: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC1576D: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/show_character_inventory.asm:23 BRANCHLTEQS @UNKNOWN2
    case 0xC1576F: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:24 TXA
    case 0xC15771: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC15772: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:26 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15774: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:27 STA CC_ARGUMENT_STORAGE,X
    case 0xC15777: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC1577A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:29 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1577C: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:30 LDA #.LOWORD(CC_1A_05)
    case 0xC1577F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000058u : 0x005758u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:30 LDA #.LOWORD(CC_1A_05)
    // Overlapping static entry reached from 0xC1577F.
    case 0xC15781: {
        Instruction step(cpu, 0x57, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:31 BRA @UNKNOWN6
    case 0xC15782: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:31 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC15781.
    case 0xC15783: {
        Instruction step(cpu, 0x1F, 0x9A6EADu, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC15784: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:34 AND #$00FF
    case 0xC15787: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC15787.
    case 0xC15789: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:36 TAY
    case 0xC1578A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:37 STY @LOCAL00
    case 0xC1578B: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:38 CPX #0
    case 0xC1578D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:38 CPX #0
    // Overlapping static entry reached from 0xC1578D.
    case 0xC1578F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:75 BEQ @UNKNOWN4
    case 0xC15790: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:79 TXA
    case 0xC15792: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:80 BRA @UNKNOWN5
    case 0xC15793: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:82 JSR GET_ARGUMENT_MEMORY
    case 0xC15795: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:83 LDA @VIRTUAL06
    case 0xC15798: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:86 LDY @LOCAL00
    case 0xC1579A: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:87 TYX
    case 0xC1579C: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:91 JSR INVENTORY_GET_ITEM_NAME
    case 0xC1579D: {
        Instruction step(cpu, 0x20, 0x009930u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:92 LDA #NULL
    case 0xC157A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/show_character_inventory.asm:92 LDA #NULL
    // Overlapping static entry reached from 0xC157A0.
    case 0xC157A2: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/show_character_inventory.asm:94 END_C_FUNCTION
    case 0xC157A3: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/show_character_inventory.asm:94 END_C_FUNCTION
    case 0xC157A4: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
