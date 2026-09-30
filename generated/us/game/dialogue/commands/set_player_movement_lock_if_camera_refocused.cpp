// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/set_player_movement_lock_if_camera_refocused.asm
bool resume_text_ccs_set_player_movement_lock_if_camera_refocused(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16C35: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:4 TXA
    case 0xC16C37: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:5 JSL UNKNOWN_C46631
    case 0xC16C38: {
        Instruction step(cpu, 0x22, 0xC46631u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:6 LDA #NULL
    case 0xC16C3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC16C3C.
    case 0xC16C3E: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/set_player_movement_lock_if_camera_refocused.asm:7 RTS
    case 0xC16C3F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
