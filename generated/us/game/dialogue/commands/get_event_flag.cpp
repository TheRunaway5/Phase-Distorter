// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/get_event_flag.asm
bool resume_text_ccs_get_event_flag(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_event_flag.asm:3 BEGIN_C_FUNCTION
    case 0xC1435F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14361: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14362: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14363: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14364: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14364.
    case 0xC14366: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14367: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14368: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:11 TXA
    case 0xC14369: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:12 STA @LOCAL01
    case 0xC1436A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1436C: {
        Instruction step(cpu, 0xAD, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:14 BNE @UNKNOWN0
    case 0xC1436F: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:15 LDA @LOCAL01
    case 0xC14371: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC14373: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14375: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC14378: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1437B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1437D: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:21 LDA #.LOWORD(CC_07)
    case 0xC14380: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Fu : 0x00435Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:21 LDA #.LOWORD(CC_07)
    // Overlapping static entry reached from 0xC14380.
    case 0xC14382: {
        Instruction step(cpu, 0x43, 0x000080u, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:22 BRA @UNKNOWN2
    case 0xC14383: {
        Instruction step(cpu, 0x80, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:22 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC14382.
    case 0xC14384: {
        Instruction step(cpu, 0x31, 0x0000E2u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC14385: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:24 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC14384.
    case 0xC14386: {
        Instruction step(cpu, 0x10, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:25 LDY #8
    case 0xC14387: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00A508u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:25 LDY #8
    // Overlapping static entry reached from 0xC14386.
    case 0xC14388: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:26 LDA @LOCAL01
    case 0xC14389: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC14387.
    case 0xC1438A: {
        Instruction step(cpu, 0x12, 0x000022u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:27 JSL ASL16_ENTRY2
    case 0xC1438B: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1438A.
    case 0xC1438C: {
        Instruction step(cpu, 0x3E, 0x00C092u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:28 STA @VIRTUAL02
    case 0xC1438F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC14391: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:30 AND #$00FF
    case 0xC14394: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC14394.
    case 0xC14396: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:31 ORA @VIRTUAL02
    case 0xC14397: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:32 JSL GET_EVENT_FLAG
    case 0xC14399: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1439D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC1439D.
    case 0xC1439F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC143A0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC143A2: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC143A4: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC143A6: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143A8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143AA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143AC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143AE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:35 JSR SET_WORKING_MEMORY
    case 0xC143B0: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:36 LDA #NULL
    case 0xC143B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_event_flag.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC143B3.
    case 0xC143B5: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_event_flag.asm:38 END_C_FUNCTION
    case 0xC143B6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_event_flag.asm:38 END_C_FUNCTION
    case 0xC143B7: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
