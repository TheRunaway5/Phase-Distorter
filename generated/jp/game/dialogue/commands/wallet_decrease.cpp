// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/wallet_decrease.asm
bool resume_text_ccs_wallet_decrease(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/wallet_decrease.asm:3 BEGIN_C_FUNCTION
    case 0xC14D4A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D4C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D4D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D4E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D4F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14D4F.
    case 0xC14D51: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D52: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14D53: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:11 TXA
    case 0xC14D54: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:12 STA @LOCAL01
    case 0xC14D55: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D57: {
        Instruction step(cpu, 0xAD, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:14 BNE @UNKNOWN0
    case 0xC14D5A: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:15 LDA @LOCAL01
    case 0xC14D5C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC14D5E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D60: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC14D63: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC14D66: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14D68: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:21 LDA #.LOWORD(CC_1D_09)
    case 0xC14D6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x004D4Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:21 LDA #.LOWORD(CC_1D_09)
    // Overlapping static entry reached from 0xC14D6B.
    case 0xC14D6D: {
        Instruction step(cpu, 0x4D, 0x004480u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:22 BRA @UNKNOWN4
    case 0xC14D6E: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC14D70: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:25 LDY #8
    case 0xC14D72: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00A508u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:26 LDA @LOCAL01
    case 0xC14D74: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC14D72.
    case 0xC14D75: {
        Instruction step(cpu, 0x12, 0x000022u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:27 JSL ASL16_ENTRY2
    case 0xC14D76: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC14D75.
    case 0xC14D77: {
        Instruction step(cpu, 0x20, 0x00C092u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:28 STA @VIRTUAL02
    case 0xC14D7A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC14D7C: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:30 AND #$00FF
    case 0xC14D7F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC14D7F.
    case 0xC14D81: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:31 ORA @VIRTUAL02
    case 0xC14D82: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:32 BEQ @UNKNOWN1
    case 0xC14D84: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14D86: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14D88: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:34 BRA @UNKNOWN2
    case 0xC14D8A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:36 JSR GET_ARGUMENT_MEMORY
    case 0xC14D8C: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D8F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D91: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D93: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14D95: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:39 JSL DECREASE_WALLET_BALANCE
    case 0xC14D97: {
        Instruction step(cpu, 0x22, 0xC22111u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC14D9B.
    case 0xC14D9D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14D9E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14DA0: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14DA2: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC14DA4: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DA6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DA8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DAA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14DAC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:42 JSR SET_WORKING_MEMORY
    case 0xC14DAE: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:43 LDA #NULL
    case 0xC14DB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:43 LDA #NULL
    // Overlapping static entry reached from 0xC14DB1.
    case 0xC14DB3: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/wallet_decrease.asm:45 END_C_FUNCTION
    case 0xC14DB4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/wallet_decrease.asm:45 END_C_FUNCTION
    case 0xC14DB5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
