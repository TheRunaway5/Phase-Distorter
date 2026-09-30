// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/create_number_selector.asm
bool resume_text_ccs_create_number_selector(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_number_selector.asm:3 BEGIN_C_FUNCTION
    case 0xC148C5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148C7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148C8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148C9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC148CA.
    case 0xC148CC: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148CD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148CE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_number_selector.asm:11 TXA
    case 0xC148CF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_number_selector.asm:12 JSR NUM_SELECT_PROMPT
    case 0xC148D0: {
        Instruction step(cpu, 0x20, 0x0015D6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC148D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC148D3.
    case 0xC148D5: {
        Instruction step(cpu, 0xFF, 0xA90A85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC148D6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC148D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC148D5.
    case 0xC148D9: {
        Instruction step(cpu, 0xFF, 0x0C85FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC148D8.
    case 0xC148DA: {
        Instruction step(cpu, 0xFF, 0xA50C85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC148DB: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC148DD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC148DA.
    case 0xC148DE: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC148DF: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC148E1: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC148E3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC148E5: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_number_selector.asm:15 BNE @UNKNOWN1
    case 0xC148E7: {
        Instruction step(cpu, 0xD0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC148E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC148E9.
    case 0xC148EB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC148EC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC148EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC148EE.
    case 0xC148F0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC148F1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC148F3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC148F5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC148F7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC148F9: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148FB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148FD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148FF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14901: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_number_selector.asm:19 JSR SET_WORKING_MEMORY
    case 0xC14903: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC14906: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC14908: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1490A: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1490C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1490E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14910: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14912: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14914: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_number_selector.asm:22 JSR SET_ARGUMENT_MEMORY
    case 0xC14916: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/create_number_selector.asm:23 BRA @UNKNOWN2
    case 0xC14919: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1491B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1491D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1491F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14921: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_number_selector.asm:26 JSR SET_WORKING_MEMORY
    case 0xC14923: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/create_number_selector.asm:28 LDA #NULL
    case 0xC14926: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_number_selector.asm:28 LDA #NULL
    // Overlapping static entry reached from 0xC14926.
    case 0xC14928: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_number_selector.asm:29 END_C_FUNCTION
    case 0xC14929: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_number_selector.asm:29 END_C_FUNCTION
    case 0xC1492A: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
