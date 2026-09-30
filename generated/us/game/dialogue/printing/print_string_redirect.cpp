// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/print_string_redirect.asm
bool resume_text_print_string_redirect(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_string_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10C8C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C8E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C8F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C90: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC10C91.
    case 0xC10C93: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C94: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C95: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/print_string_redirect.asm:10 STA @LOCAL01
    case 0xC10C96: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_string_redirect.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC10C93.
    case 0xC10C97: {
        Instruction step(cpu, 0x12, 0x0000A5u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C98: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    // Overlapping static entry reached from 0xC10C97.
    case 0xC10C99: {
        Instruction step(cpu, 0x22, 0xA50685u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C9A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C9C: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    // Overlapping static entry reached from 0xC10C99.
    case 0xC10C9D: {
        Instruction step(cpu, 0x24, 0x000085u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C9E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    // Overlapping static entry reached from 0xC10C9D.
    case 0xC10C9F: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string_redirect.asm:12 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10CA0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_string_redirect.asm:12 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10CA2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string_redirect.asm:12 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10CA4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string_redirect.asm:12 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10CA6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/print_string_redirect.asm:13 LDA @LOCAL01
    case 0xC10CA8: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/print_string_redirect.asm:14 JSR PRINT_STRING
    case 0xC10CAA: {
        Instruction step(cpu, 0x20, 0x000EFCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_string_redirect.asm:15 END_C_FUNCTION
    case 0xC10CAD: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/print_string_redirect.asm:15 END_C_FUNCTION
    case 0xC10CAE: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
