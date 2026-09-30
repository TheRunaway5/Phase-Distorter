// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/clear_sprite_tick_callback.asm
bool resume_overworld_actionscript_clear_sprite_tick_callback(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:4 LDA #.LOWORD(MOVEMENT_NOP)
    case 0xC09DA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Bu : 0x00943Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:4 LDA #.LOWORD(MOVEMENT_NOP)
    // Overlapping static entry reached from 0xC09DA1.
    case 0xC09DA3: {
        Instruction step(cpu, 0x94, 0x00009Du, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC09DA4: {
        Instruction step(cpu, 0x9D, 0x00107Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    // Overlapping static entry reached from 0xC09DA3.
    case 0xC09DA5: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    // Overlapping static entry reached from 0xC09DA5.
    case 0xC09DA6: {
        Instruction step(cpu, 0x10, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:6 LDA #.HIWORD(MOVEMENT_NOP)
    case 0xC09DA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:6 LDA #.HIWORD(MOVEMENT_NOP)
    // Overlapping static entry reached from 0xC09DA6.
    case 0xC09DA8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x009D00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:6 LDA #.HIWORD(MOVEMENT_NOP)
    // Overlapping static entry reached from 0xC09DA7.
    case 0xC09DA9: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:7 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09DAA: {
        Instruction step(cpu, 0x9D, 0x0010B6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:7 STA ENTITY_TICK_CALLBACK_HIGH,X
    // Overlapping static entry reached from 0xC09DA8.
    case 0xC09DAB: {
        Instruction step(cpu, 0xB6, 0x000010u, 2u, AddressMode::DirectPageIndexedY);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:8 RTS
    case 0xC09DAD: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
