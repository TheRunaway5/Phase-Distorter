// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/party_selection_menu.asm
bool resume_text_ccs_party_selection_menu(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/party_selection_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1467D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC1467F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14680: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14681: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14682: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14682.
    case 0xC14684: {
        Instruction step(cpu, 0xFF, 0xAD685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14685: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14686: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14687: {
        Instruction step(cpu, 0xAD, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC14684.
    case 0xC14688: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC14688.
    case 0xC14689: {
        Instruction step(cpu, 0x97, 0x0000C9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:11 CMP #16
    case 0xC1468A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:11 CMP #16
    // Overlapping static entry reached from 0xC14689.
    case 0xC1468B: {
        Instruction step(cpu, 0x10, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:11 CMP #16
    // Overlapping static entry reached from 0xC1468A.
    case 0xC1468C: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:12 BCS @UNKNOWN0
    case 0xC1468D: {
        Instruction step(cpu, 0xB0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:13 TXA
    case 0xC1468F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC14690: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:15 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14692: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:16 STA CC_ARGUMENT_STORAGE,X
    case 0xC14695: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC14698: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:18 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1469A: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:19 LDA #.LOWORD(CC_1A_01)
    case 0xC1469D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00467Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:19 LDA #.LOWORD(CC_1A_01)
    // Overlapping static entry reached from 0xC1469D.
    case 0xC1469F: {
        Instruction step(cpu, 0x46, 0x000080u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:20 BRA @UNKNOWN1
    case 0xC146A0: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:20 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC1469F.
    case 0xC146A1: {
        Instruction step(cpu, 0x1B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_stack();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:22 LDY #1
    case 0xC146A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:22 LDY #1
    // Overlapping static entry reached from 0xC146A2.
    case 0xC146A4: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:23 LDA #.LOWORD(CC_ARGUMENT_STORAGE)
    case 0xC146A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BAu : 0x0097BAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:23 LDA #.LOWORD(CC_ARGUMENT_STORAGE)
    // Overlapping static entry reached from 0xC146A5.
    case 0xC146A7: {
        Instruction step(cpu, 0x97, 0x000020u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:24 JSR UNKNOWN_C1244C
    case 0xC146A8: {
        Instruction step(cpu, 0x20, 0x00244Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:24 JSR UNKNOWN_C1244C
    // Overlapping static entry reached from 0xC146A7.
    case 0xC146A9: {
        Instruction step(cpu, 0x4C, 0x008524u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/party_selection_menu.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC146AB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/party_selection_menu.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC146AD: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC146AF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC146B1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC146B3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC146B5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:27 JSR SET_WORKING_MEMORY
    case 0xC146B7: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:28 LDA #NULL
    case 0xC146BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/party_selection_menu.asm:28 LDA #NULL
    // Overlapping static entry reached from 0xC146BA.
    case 0xC146BC: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/party_selection_menu.asm:30 END_C_FUNCTION
    case 0xC146BD: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/party_selection_menu.asm:30 END_C_FUNCTION
    case 0xC146BE: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
