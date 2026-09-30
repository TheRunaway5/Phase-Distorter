// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/count_photo_flags.asm
bool resume_ending_count_photo_flags(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/count_photo_flags.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4F433: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4F435: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4F436: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4F437: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4F437.
    case 0xC4F439: {
        Instruction step(cpu, 0xFF, 0x00A05Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4F43A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:9 LDY #0
    case 0xC4F43B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:9 LDY #0
    // Overlapping static entry reached from 0xC4F43B.
    case 0xC4F43D: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:10 STY @LOCAL01
    case 0xC4F43E: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:11 TYX
    case 0xC4F440: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:12 STX @LOCAL00
    case 0xC4F441: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:13 BRA @LOOP_ENTRY
    case 0xC4F443: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:15 TXA
    case 0xC4F445: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:16 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4F446: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Eu : 0x00003Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:16 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4F446.
    case 0xC4F448: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:17 JSL MULT168
    case 0xC4F449: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:18 TAX
    case 0xC4F44D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:19 LDA f:PHOTOGRAPHER_CFG_TABLE,X
    case 0xC4F44E: {
        Instruction step(cpu, 0xBF, 0xE12F8Au, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:20 JSL GET_EVENT_FLAG
    case 0xC4F452: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:21 CMP #0
    case 0xC4F456: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:21 CMP #0
    // Overlapping static entry reached from 0xC4F456.
    case 0xC4F458: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:22 BEQ @EVENT_FLAG_UNSET
    case 0xC4F459: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:23 LDY @LOCAL01
    case 0xC4F45B: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:24 INY
    case 0xC4F45D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:25 STY @LOCAL01
    case 0xC4F45E: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:27 LDX @LOCAL00
    case 0xC4F460: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:28 INX
    case 0xC4F462: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:29 STX @LOCAL00
    case 0xC4F463: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:31 CPX #NUM_PHOTOS
    case 0xC4F465: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:31 CPX #NUM_PHOTOS
    // Overlapping static entry reached from 0xC4F465.
    case 0xC4F467: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:32 BCC @LOOP_BEGIN
    case 0xC4F468: {
        Instruction step(cpu, 0x90, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:33 LDY @LOCAL01
    case 0xC4F46A: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/count_photo_flags.asm:34 TYA
    case 0xC4F46C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/count_photo_flags.asm:35 END_C_FUNCTION
    case 0xC4F46D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/count_photo_flags.asm:35 END_C_FUNCTION
    case 0xC4F46E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
