// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/wallet_decrease.asm
bool resume_text_ccs_wallet_decrease(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/wallet_decrease.asm:3 BEGIN_C_FUNCTION
    case 0xC1494A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC1494C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC1494D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC1494E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC1494F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1494F.
    case 0xC14951: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14952: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/wallet_decrease.asm:10 END_STACK_VARS
    case 0xC14953: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:11 TXA
    case 0xC14954: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:12 STA @LOCAL01
    case 0xC14955: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14957: {
        Instruction step(cpu, 0xAD, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:14 BNE @UNKNOWN0
    case 0xC1495A: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:15 LDA @LOCAL01
    case 0xC1495C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC1495E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14960: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC14963: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC14966: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14968: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:21 LDA #.LOWORD(CC_1D_09)
    case 0xC1496B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x00494Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:21 LDA #.LOWORD(CC_1D_09)
    // Overlapping static entry reached from 0xC1496B.
    case 0xC1496D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x004480u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:22 BRA @UNKNOWN4
    case 0xC1496E: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:22 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC1496D.
    case 0xC1496F: {
        Instruction step(cpu, 0x44, 0x0010E2u, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC14970: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:25 LDY #8
    case 0xC14972: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00A508u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:26 LDA @LOCAL01
    case 0xC14974: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC14972.
    case 0xC14975: {
        Instruction step(cpu, 0x12, 0x000022u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:27 JSL ASL16_ENTRY2
    case 0xC14976: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC14975.
    case 0xC14977: {
        Instruction step(cpu, 0x3E, 0x00C092u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:28 STA @VIRTUAL02
    case 0xC1497A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC1497C: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:30 AND #$00FF
    case 0xC1497F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1497F.
    case 0xC14981: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:31 ORA @VIRTUAL02
    case 0xC14982: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:32 BEQ @UNKNOWN1
    case 0xC14984: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14986: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14988: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:34 BRA @UNKNOWN2
    case 0xC1498A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:36 JSR GET_ARGUMENT_MEMORY
    case 0xC1498C: {
        Instruction step(cpu, 0x20, 0x0003DCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1498F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14991: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14993: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14995: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:39 JSL DECREASE_WALLET_BALANCE
    case 0xC14997: {
        Instruction step(cpu, 0x22, 0xC22272u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1499B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC1499B.
    case 0xC1499D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1499E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC149A0: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC149A2: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:40 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC149A4: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149A6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149A8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149AA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_decrease.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149AC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:42 JSR SET_WORKING_MEMORY
    case 0xC149AE: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:43 LDA #NULL
    case 0xC149B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/wallet_decrease.asm:43 LDA #NULL
    // Overlapping static entry reached from 0xC149B1.
    case 0xC149B3: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/wallet_decrease.asm:45 END_C_FUNCTION
    case 0xC149B4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/wallet_decrease.asm:45 END_C_FUNCTION
    case 0xC149B5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
