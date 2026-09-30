// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/process_credits_dma_queue.asm
bool resume_ending_process_credits_dma_queue(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/process_credits_dma_queue.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F01D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4F01F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4F020: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4F021: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F021.
    case 0xC4F023: {
        Instruction step(cpu, 0xFF, 0xF5AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4F024: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:9 LDA CREDITS_DMA_QUEUE_START
    case 0xC4F025: {
        Instruction step(cpu, 0xAD, 0x00B4F5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:9 LDA CREDITS_DMA_QUEUE_START
    // Overlapping static entry reached from 0xC4F023.
    case 0xC4F027: {
        Instruction step(cpu, 0xB4, 0x0000CDu, 2u, AddressMode::DirectPageIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:10 CMP CREDITS_DMA_QUEUE_END
    case 0xC4F028: {
        Instruction step(cpu, 0xCD, 0x00B4F3u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:10 CMP CREDITS_DMA_QUEUE_END
    // Overlapping static entry reached from 0xC4F027.
    case 0xC4F029: {
        Instruction step(cpu, 0xF3, 0x0000B4u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:11 BEQ @RETURN
    case 0xC4F02B: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:12 LDA CREDITS_DMA_QUEUE_END
    case 0xC4F02D: {
        Instruction step(cpu, 0xAD, 0x00B4F3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:549 STA scratch
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4F030: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:550 ASL
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4F032: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:551 ASL
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4F033: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:552 ASL
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4F034: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4F035: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:14 CLC
    case 0xC4F037: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:15 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC4F038: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000056u : 0x005156u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:15 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC4F038.
    case 0xC4F03A: {
        Instruction step(cpu, 0x51, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:16 STA @LOCAL02
    case 0xC4F03B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:16 STA @LOCAL02
    // Overlapping static entry reached from 0xC4F03A.
    case 0xC4F03C: {
        Instruction step(cpu, 0x14, 0x0000A8u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:17 TAY
    case 0xC4F03D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:18 INY
    case 0xC4F03E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:19 INY
    case 0xC4F03F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:20 INY
    case 0xC4F040: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4F041: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4F044: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4F046: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4F049: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F04B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F04D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F04F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4F051: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:23 LDA @LOCAL02
    case 0xC4F053: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:24 TAX
    case 0xC4F055: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:25 LDY __BSS_START__+7,X
    case 0xC4F056: {
        Instruction step(cpu, 0xBC, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:26 TAX
    case 0xC4F059: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:27 LDA __BSS_START__+1,X
    case 0xC4F05A: {
        Instruction step(cpu, 0xBD, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:28 TAX
    case 0xC4F05D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:29 STX @LOCAL01
    case 0xC4F05E: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:30 LDA @LOCAL02
    case 0xC4F060: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:31 TAX
    case 0xC4F062: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC4F063: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:33 LDA __BSS_START__,X
    case 0xC4F065: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:34 LDX @LOCAL01
    case 0xC4F068: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:35 JSL PREPARE_VRAM_COPY
    case 0xC4F06A: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:37 LDA CREDITS_DMA_QUEUE_END
    case 0xC4F06E: {
        Instruction step(cpu, 0xAD, 0x00B4F3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:38 INC
    case 0xC4F071: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:39 STA CREDITS_DMA_QUEUE_END
    case 0xC4F072: {
        Instruction step(cpu, 0x8D, 0x00B4F3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:40 AND #$007F
    case 0xC4F075: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:40 AND #$007F
    // Overlapping static entry reached from 0xC4F075.
    case 0xC4F077: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/process_credits_dma_queue.asm:41 STA CREDITS_DMA_QUEUE_END
    case 0xC4F078: {
        Instruction step(cpu, 0x8D, 0x00B4F3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/process_credits_dma_queue.asm:43 END_C_FUNCTION
    case 0xC4F07B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/process_credits_dma_queue.asm:43 END_C_FUNCTION
    case 0xC4F07C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
