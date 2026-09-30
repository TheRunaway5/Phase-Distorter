// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/enqueue_credits_dma.asm
bool resume_ending_enqueue_credits_dma(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/enqueue_credits_dma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BFFE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C000: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C001: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C002: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C003: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x00FFF1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C003.
    case 0xC4C005: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C006: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C007: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:11 STY @VIRTUAL02
    case 0xC4C008: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:11 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC4C005.
    case 0xC4C009: {
        Instruction step(cpu, 0x02, 0x00009Bu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:12 TXY
    case 0xC4C00A: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C00B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:14 STA @LOCAL00
    case 0xC4C00D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC4C00F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4C011: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4C013: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4C015: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4C017: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:17 LDA CREDITS_DMA_QUEUE_START
    case 0xC4C019: {
        Instruction step(cpu, 0xAD, 0x00B6BEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:549 STA scratch
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C01C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:550 ASL
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C01E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:551 ASL
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C01F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:552 ASL
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C020: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C021: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:19 CLC
    case 0xC4C023: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:20 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC4C024: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DCu : 0x0054DCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:20 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC4C024.
    case 0xC4C026: {
        Instruction step(cpu, 0x54, 0x00E2AAu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:21 TAX
    case 0xC4C027: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C028: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:22 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C026.
    case 0xC4C029: {
        Instruction step(cpu, 0x20, 0x000EA5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:23 LDA @LOCAL00
    case 0xC4C02A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:24 STA __BSS_START__,X
    case 0xC4C02C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC4C02F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:26 TYA
    case 0xC4C031: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:27 STA __BSS_START__+1,X
    case 0xC4C032: {
        Instruction step(cpu, 0x9D, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:28 TXY
    case 0xC4C035: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:29 INY
    case 0xC4C036: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:30 INY
    case 0xC4C037: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:31 INY
    case 0xC4C038: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C039: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C03B: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C03E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C040: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:33 LDA @VIRTUAL02
    case 0xC4C043: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:34 STA __BSS_START__+7,X
    case 0xC4C045: {
        Instruction step(cpu, 0x9D, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:35 LDA CREDITS_DMA_QUEUE_START
    case 0xC4C048: {
        Instruction step(cpu, 0xAD, 0x00B6BEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:36 INC
    case 0xC4C04B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:37 STA CREDITS_DMA_QUEUE_START
    case 0xC4C04C: {
        Instruction step(cpu, 0x8D, 0x00B6BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:38 AND #$007F
    case 0xC4C04F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:38 AND #$007F
    // Overlapping static entry reached from 0xC4C04F.
    case 0xC4C051: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/enqueue_credits_dma.asm:39 STA CREDITS_DMA_QUEUE_START
    case 0xC4C052: {
        Instruction step(cpu, 0x8D, 0x00B6BEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/enqueue_credits_dma.asm:40 END_C_FUNCTION
    case 0xC4C055: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/enqueue_credits_dma.asm:40 END_C_FUNCTION
    case 0xC4C056: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
