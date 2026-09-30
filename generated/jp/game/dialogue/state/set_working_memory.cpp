// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/set_working_memory.asm
bool resume_text_set_working_memory(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_working_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC10660: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC10662: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC10663: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC10664: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10664.
    case 0xC10666: {
        Instruction step(cpu, 0xFF, 0x1CA55Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC10667: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10668: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1066A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1066C: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1066E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/set_working_memory.asm:9 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10670: {
        Instruction step(cpu, 0x20, 0x000504u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/set_working_memory.asm:10 CLC
    case 0xC10673: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/set_working_memory.asm:11 ADC #window_stats::working_memory
    case 0xC10674: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/set_working_memory.asm:11 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10674.
    case 0xC10676: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/set_working_memory.asm:12 TAY
    case 0xC10677: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10678: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1067A: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1067D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1067F: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10682: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10684: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC1BF2F.
    case 0xC10685: {
        Instruction step(cpu, 0x14, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10686: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC10685.
    case 0xC10687: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10688: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_working_memory.asm:15 END_C_FUNCTION
    case 0xC1068A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_working_memory.asm:15 END_C_FUNCTION
    case 0xC1068B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
