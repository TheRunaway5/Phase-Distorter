// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/get_direction_from_player_to_entity.asm
bool resume_overworld_get_direction_from_player_to_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C4D9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4DB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4DC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C4DD.
    case 0xC0C4DF: {
        Instruction step(cpu, 0xFF, 0x38AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:9 END_STACK_VARS
    case 0xC0C4E0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC0C4E1: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C4DF.
    case 0xC0C4E3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:11 ASL
    case 0xC0C4E4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:12 STA @LOCAL02
    case 0xC0C4E5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:13 LDA GAME_STATE + game_state::leader_y_coord
    case 0xC0C4E7: {
        Instruction step(cpu, 0xAD, 0x009B2Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:14 STA @LOCAL00
    case 0xC0C4EA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:15 LDY GAME_STATE + game_state::leader_x_coord
    case 0xC0C4EC: {
        Instruction step(cpu, 0xAC, 0x009B28u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:16 LDA @LOCAL02
    case 0xC0C4EF: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:17 TAX
    case 0xC0C4F1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:18 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C4F2: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:19 TAX
    case 0xC0C4F5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:20 STX @LOCAL01
    case 0xC0C4F6: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:21 LDA @LOCAL02
    case 0xC0C4F8: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:22 TAX
    case 0xC0C4FA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:23 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C4FB: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:24 LDX @LOCAL01
    case 0xC0C4FE: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_direction_from_player_to_entity.asm:25 JSL GET_DIRECTION_TO
    case 0xC0C500: {
        Instruction step(cpu, 0x22, 0xC43CF6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:26 END_C_FUNCTION
    case 0xC0C504: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_direction_from_player_to_entity.asm:26 END_C_FUNCTION
    case 0xC0C505: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
