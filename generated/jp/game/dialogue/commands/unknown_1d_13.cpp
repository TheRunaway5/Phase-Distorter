// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/unknown_1D_13.asm
bool resume_text_ccs_unknown_1d_13(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_13.asm:3 BEGIN_C_FUNCTION
    case 0xC15B79: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B7B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B7C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B7D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC15B7E.
    case 0xC15B80: {
        Instruction step(cpu, 0xFF, 0xA9685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B81: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_13.asm:12 END_STACK_VARS
    case 0xC15B82: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:13 LDA #1
    case 0xC15B83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15B80.
    case 0xC15B84: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15B83.
    case 0xC15B85: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:14 CLC
    case 0xC15B86: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B87: {
        Instruction step(cpu, 0xED, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15B8A: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15B8C: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15B8E: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15B90: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:17 TXA
    case 0xC15B92: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15B93: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B95: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15B98: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15B9B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15B9D: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:23 LDA #.LOWORD(CC_1D_13)
    case 0xC15BA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000079u : 0x005B79u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:23 LDA #.LOWORD(CC_1D_13)
    // Overlapping static entry reached from 0xC15BA0.
    case 0xC15BA2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:24 BRA @UNKNOWN6
    case 0xC15BA3: {
        Instruction step(cpu, 0x80, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15BA5: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:27 AND #$00FF
    case 0xC15BA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15BA8.
    case 0xC15BAA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:28 STA @LOCAL03
    case 0xC15BAB: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:29 CPX #0
    case 0xC15BAD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:29 CPX #0
    // Overlapping static entry reached from 0xC15BAD.
    case 0xC15BAF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:30 BEQ @UNKNOWN3
    case 0xC15BB0: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:31 STX @LOCAL02
    case 0xC15BB2: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:32 BRA @UNKNOWN4
    case 0xC15BB4: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:34 JSR GET_ARGUMENT_MEMORY
    case 0xC15BB6: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:35 LDA @VIRTUAL06
    case 0xC15BB9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:36 TAX
    case 0xC15BBB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:37 STX @LOCAL02
    case 0xC15BBC: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:39 LDA @LOCAL03
    case 0xC15BBE: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:40 BNE @UNKNOWN5
    case 0xC15BC0: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:41 JSR GET_WORKING_MEMORY
    case 0xC15BC2: {
        Instruction step(cpu, 0x20, 0x00060Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:42 LDA @VIRTUAL06
    case 0xC15BC5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:44 LDX @LOCAL02
    case 0xC15BC7: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:45 JSR UNKNOWN_C191F8
    case 0xC15BC9: {
        Instruction step(cpu, 0x20, 0x0092EBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:46 TAX
    case 0xC15BCC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:47 STX @LOCAL01
    case 0xC15BCD: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:48 TXA
    case 0xC15BCF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:49 JSL UNKNOWN_C22351
    case 0xC15BD0: {
        Instruction step(cpu, 0x22, 0xC221EFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC15BD4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC15BD6: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BD8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BDA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BDC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BDE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:52 JSR SET_ARGUMENT_MEMORY
    case 0xC15BE0: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:53 LDX @LOCAL01
    case 0xC15BE3: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:54 TXA
    case 0xC15BE5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC15BE6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC15BE8: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BEA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BEC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BEE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_13.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15BF0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:57 JSR SET_WORKING_MEMORY
    case 0xC15BF2: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:58 LDA #NULL
    case 0xC15BF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_13.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC15BF5.
    case 0xC15BF7: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_13.asm:60 END_C_FUNCTION
    case 0xC15BF8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_13.asm:60 END_C_FUNCTION
    case 0xC15BF9: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
