// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/ending/create_entity_at_v01_plus_bg3y.asm
bool resume_ending_create_entity_at_v01_plus_bg3y(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BF08: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF0A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF0B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF0C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF0D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BF0D.
    case 0xC4BF0F: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF10: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF11: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:12 STX @VIRTUAL02
    case 0xC4BF12: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4BF0F.
    case 0xC4BF13: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:13 STA @LOCAL02
    case 0xC4BF14: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:14 LDA INITIAL_CAST_ENTITY_SLEEP_FRAMES
    case 0xC4BF16: {
        Instruction step(cpu, 0xAD, 0x00B6A6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:15 AND #$0003
    case 0xC4BF19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:15 AND #$0003
    // Overlapping static entry reached from 0xC4BF19.
    case 0xC4BF1B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:16 STA NEW_ENTITY_VAR0
    case 0xC4BF1C: {
        Instruction step(cpu, 0x8D, 0x000A2Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:17 INC INITIAL_CAST_ENTITY_SLEEP_FRAMES
    case 0xC4BF1F: {
        Instruction step(cpu, 0xEE, 0x00B6A6u, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:18 LDA CURRENT_ENTITY_SLOT
    case 0xC4BF22: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:19 ASL
    case 0xC4BF25: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:20 TAX
    case 0xC4BF26: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:21 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4BF27: {
        Instruction step(cpu, 0xBD, 0x000E54u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:22 STA @LOCAL00
    case 0xC4BF2A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:23 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC4BF2C: {
        Instruction step(cpu, 0xBD, 0x000E90u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:24 CLC
    case 0xC4BF2F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:25 ADC BG3_Y_POS
    case 0xC4BF30: {
        Instruction step(cpu, 0x6D, 0x00003Bu, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:26 STA @LOCAL01
    case 0xC4BF33: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:27 LDY #.LOWORD(-1)
    case 0xC4BF35: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:27 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4BF35.
    case 0xC4BF37: {
        Instruction step(cpu, 0xFF, 0xA502A6u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:28 LDX @VIRTUAL02
    case 0xC4BF38: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:29 LDA @LOCAL02
    case 0xC4BF3A: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:29 LDA @LOCAL02
    // Overlapping static entry reached from 0xC4BF37.
    case 0xC4BF3B: {
        Instruction step(cpu, 0x12, 0x000022u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:30 JSL CREATE_ENTITY
    case 0xC4BF3C: {
        Instruction step(cpu, 0x22, 0xC01E5Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/create_entity_at_v01_plus_bg3y.asm:30 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4BF3B.
    case 0xC4BF3D: {
        Instruction step(cpu, 0x5F, 0x2BC01Eu, 4u, AddressMode::LongIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:31 END_C_FUNCTION
    case 0xC4BF40: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:31 END_C_FUNCTION
    case 0xC4BF41: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
