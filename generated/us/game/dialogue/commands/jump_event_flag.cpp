// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/jump_event_flag.asm
bool resume_text_ccs_jump_event_flag(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump_event_flag.asm:3 BEGIN_C_FUNCTION
    case 0xC142F5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142F7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142F8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142F9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC142FA.
    case 0xC142FC: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142FD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142FE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:10 TAY
    case 0xC142FF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:11 STY @LOCAL00
    case 0xC14300: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14302: {
        Instruction step(cpu, 0xAD, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:13 BNE @UNKNOWN0
    case 0xC14305: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:14 TXA
    case 0xC14307: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14308: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1430A: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC1430D: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14310: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14312: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:20 LDA #.LOWORD(CC_06)
    case 0xC14315: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F5u : 0x0042F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:20 LDA #.LOWORD(CC_06)
    // Overlapping static entry reached from 0xC14315.
    case 0xC14317: {
        Instruction step(cpu, 0x42, 0x000080u, 2u, AddressMode::SignatureByte);
        step.reserved_no_operation();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:21 BRA @UNKNOWN2
    case 0xC14318: {
        Instruction step(cpu, 0x80, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:21 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC14317.
    case 0xC14319: {
        Instruction step(cpu, 0x43, 0x00008Au, 2u, AddressMode::StackRelative);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:23 TXA
    case 0xC1431A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC1431B: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:25 LDY #8
    case 0xC1431D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x002208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:26 JSL ASL16_ENTRY2
    case 0xC1431F: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1431D.
    case 0xC14320: {
        Instruction step(cpu, 0x3E, 0x00C092u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:27 STA @VIRTUAL02
    case 0xC14323: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC14325: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:29 AND #$00FF
    case 0xC14328: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC14328.
    case 0xC1432A: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:30 ORA @VIRTUAL02
    case 0xC1432B: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:31 JSL GET_EVENT_FLAG
    case 0xC1432D: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:32 CMP #0
    case 0xC14331: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:32 CMP #0
    // Overlapping static entry reached from 0xC14331.
    case 0xC14333: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:33 BEQ @UNKNOWN1
    case 0xC14334: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:34 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14336: {
        Instruction step(cpu, 0x9C, 0x0097CAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:35 LDA #.LOWORD(CC_0A)
    case 0xC14339: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x004103u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:35 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC14339.
    case 0xC1433B: {
        Instruction step(cpu, 0x41, 0x000080u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:36 BRA @UNKNOWN2
    case 0xC1433C: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:36 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC1433B.
    case 0xC1433D: {
        Instruction step(cpu, 0x1F, 0xB90EA4u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:38 LDY @LOCAL00
    case 0xC1433E: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14340: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC1433D.
    case 0xC14341: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14343: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14345: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14348: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:40 LDA #4
    case 0xC1434A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:40 LDA #4
    // Overlapping static entry reached from 0xC1434A.
    case 0xC1434C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:41 CLC
    case 0xC1434D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:42 ADC @VIRTUAL06
    case 0xC1434E: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:43 STA @VIRTUAL06
    case 0xC14350: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:44 STA __BSS_START__,Y
    case 0xC14352: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:45 LDA @VIRTUAL06+2
    case 0xC14355: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:46 STA __BSS_START__+2,Y
    case 0xC14357: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:47 LDA #NULL
    case 0xC1435A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/jump_event_flag.asm:47 LDA #NULL
    // Overlapping static entry reached from 0xC1435A.
    case 0xC1435C: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump_event_flag.asm:49 END_C_FUNCTION
    case 0xC1435D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump_event_flag.asm:49 END_C_FUNCTION
    case 0xC1435E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
