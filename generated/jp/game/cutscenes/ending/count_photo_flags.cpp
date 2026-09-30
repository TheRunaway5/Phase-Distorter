// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/count_photo_flags.asm
bool resume_ending_count_photo_flags(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/count_photo_flags.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C473: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4C475: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4C476: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4C477: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C477.
    case 0xC4C479: {
        Instruction step(cpu, 0xFF, 0x00A05Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4C47A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:9 LDY #0
    case 0xC4C47B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:9 LDY #0
    // Overlapping static entry reached from 0xC4C47B.
    case 0xC4C47D: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:10 STY @LOCAL01
    case 0xC4C47E: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:11 TYX
    case 0xC4C480: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:12 STX @LOCAL00
    case 0xC4C481: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:13 BRA @LOOP_ENTRY
    case 0xC4C483: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:15 TXA
    case 0xC4C485: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:16 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4C486: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Eu : 0x00003Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:16 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4C486.
    case 0xC4C488: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:17 JSL MULT168
    case 0xC4C489: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:18 TAX
    case 0xC4C48D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:19 LDA f:PHOTOGRAPHER_CFG_TABLE,X
    case 0xC4C48E: {
        Instruction step(cpu, 0xBF, 0xE123E1u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:20 JSL GET_EVENT_FLAG
    case 0xC4C492: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:21 CMP #0
    case 0xC4C496: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:21 CMP #0
    // Overlapping static entry reached from 0xC4C496.
    case 0xC4C498: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:22 BEQ @EVENT_FLAG_UNSET
    case 0xC4C499: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:23 LDY @LOCAL01
    case 0xC4C49B: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:24 INY
    case 0xC4C49D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:25 STY @LOCAL01
    case 0xC4C49E: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:27 LDX @LOCAL00
    case 0xC4C4A0: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:28 INX
    case 0xC4C4A2: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:29 STX @LOCAL00
    case 0xC4C4A3: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:31 CPX #NUM_PHOTOS
    case 0xC4C4A5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:31 CPX #NUM_PHOTOS
    // Overlapping static entry reached from 0xC4C4A5.
    case 0xC4C4A7: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:32 BCC @LOOP_BEGIN
    case 0xC4C4A8: {
        Instruction step(cpu, 0x90, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:33 LDY @LOCAL01
    case 0xC4C4AA: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:34 TYA
    case 0xC4C4AC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/count_photo_flags.asm:35 END_C_FUNCTION
    case 0xC4C4AD: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/count_photo_flags.asm:35 END_C_FUNCTION
    case 0xC4C4AE: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
