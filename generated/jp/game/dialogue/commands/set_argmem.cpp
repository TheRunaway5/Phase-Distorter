// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/set_argmem.asm
bool resume_text_ccs_set_argmem(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_argmem.asm:3 BEGIN_C_FUNCTION
    case 0xC15E49: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E4B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E4C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E4D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC15E4E.
    case 0xC15E50: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E51: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E52: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:12 TXA
    case 0xC15E53: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:13 STA @LOCAL02
    case 0xC15E54: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:14 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15E56: {
        Instruction step(cpu, 0xAD, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:15 BNE @UNKNOWN0
    case 0xC15E59: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:16 LDA @LOCAL02
    case 0xC15E5B: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC15E5D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15E5F: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC15E62: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC15E65: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15E67: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:22 LDA #.LOWORD(CC_1D_15)
    case 0xC15E6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000049u : 0x005E49u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:22 LDA #.LOWORD(CC_1D_15)
    // Overlapping static entry reached from 0xC15E6A.
    case 0xC15E6C: {
        Instruction step(cpu, 0x5E, 0x004480u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:23 BRA @UNKNOWN2
    case 0xC15E6D: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC15E6F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:26 LDA #8
    case 0xC15E71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC15E73: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:27 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC15E71.
    case 0xC15E74: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:28 TAY
    case 0xC15E75: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC15E76: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:30 LDA @LOCAL02
    case 0xC15E78: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:31 JSL ASL16_ENTRY2
    case 0xC15E7A: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:32 STA @VIRTUAL02
    case 0xC15E7E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC15E80: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:34 AND #$00FF
    case 0xC15E83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC15E83.
    case 0xC15E85: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:35 ORA @VIRTUAL02
    case 0xC15E86: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:36 REP #PROC_FLAGS::INDEX8
    case 0xC15E88: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:37 TAX
    case 0xC15E8A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:38 STX @LOCAL01
    case 0xC15E8B: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:39 BNE @UNKNOWN1
    case 0xC15E8D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:40 JSR GET_ARGUMENT_MEMORY
    case 0xC15E8F: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:42 JSL UNKNOWN_C226F0
    case 0xC15E92: {
        Instruction step(cpu, 0x22, 0xC225ABu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_argmem.asm:43 STORE_INT1632 @VIRTUAL0A
    case 0xC15E96: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_argmem.asm:43 STORE_INT1632 @VIRTUAL0A
    case 0xC15E98: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:44 LDX @LOCAL01
    case 0xC15E9A: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:45 TXA
    case 0xC15E9C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_argmem.asm:46 STORE_INT1632 @VIRTUAL06
    case 0xC15E9D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_argmem.asm:46 STORE_INT1632 @VIRTUAL06
    case 0xC15E9F: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:47 JSL MULT32
    case 0xC15EA1: {
        Instruction step(cpu, 0x22, 0xC09068u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15EA5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15EA7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15EA9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15EAB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:49 JSR SET_WORKING_MEMORY
    case 0xC15EAD: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:50 LDA #NULL
    case 0xC15EB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_argmem.asm:50 LDA #NULL
    // Overlapping static entry reached from 0xC15EB0.
    case 0xC15EB2: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_argmem.asm:52 END_C_FUNCTION
    case 0xC15EB3: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_argmem.asm:52 END_C_FUNCTION
    case 0xC15EB4: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
