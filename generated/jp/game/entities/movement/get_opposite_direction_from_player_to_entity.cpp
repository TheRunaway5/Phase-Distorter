// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/get_opposite_direction_from_player_to_entity.asm
bool resume_overworld_get_opposite_direction_from_player_to_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_opposite_direction_from_player_to_entity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C5EA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:5 JSL GET_DIRECTION_FROM_PLAYER_TO_ENTITY
    case 0xC0C5EC: {
        Instruction step(cpu, 0x22, 0xC0C4D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:6 ASL
    case 0xC0C5F0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:7 TAX
    case 0xC0C5F1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_opposite_direction_from_player_to_entity.asm:8 LDA f:OPPOSITE_DIRECTIONS,X
    case 0xC0C5F2: {
        Instruction step(cpu, 0xBF, 0xC0C4C9u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_opposite_direction_from_player_to_entity.asm:9 END_C_FUNCTION
    case 0xC0C5F6: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
