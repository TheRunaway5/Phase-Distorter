// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/get_argument_memory.asm
bool resume_text_get_argument_memory(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_argument_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC105DF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC105E1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC105E2: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC105E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC105E3.
    case 0xC105E5: {
        Instruction step(cpu, 0xFF, 0x04205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC105E6: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/get_argument_memory.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC105E7: {
        Instruction step(cpu, 0x20, 0x000504u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/get_argument_memory.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    // Overlapping static entry reached from 0xC105E5.
    case 0xC105E9: {
        Instruction step(cpu, 0x05, 0x000018u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/get_argument_memory.asm:8 CLC
    case 0xC105EA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/get_argument_memory.asm:9 ADC #window_stats::argument_memory
    case 0xC105EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/get_argument_memory.asm:9 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC105EB.
    case 0xC105ED: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_argument_memory.asm:10 TAY
    case 0xC105EE: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105EF: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105F2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105F4: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105F7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC105F9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC105FB: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC105FD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC105FF: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_argument_memory.asm:13 END_C_FUNCTION
    case 0xC10601: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_argument_memory.asm:13 END_C_FUNCTION
    case 0xC10602: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
