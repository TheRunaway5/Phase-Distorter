// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/clear_sprite_tick_callback.asm
bool resume_overworld_actionscript_clear_sprite_tick_callback(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:4 LDA #.LOWORD(MOVEMENT_NOP)
    case 0xC09D80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x00941Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:4 LDA #.LOWORD(MOVEMENT_NOP)
    // Overlapping static entry reached from 0xC09D80.
    case 0xC09D82: {
        Instruction step(cpu, 0x94, 0x00009Du, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC09D83: {
        Instruction step(cpu, 0x9D, 0x001070u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:5 STA ENTITY_TICK_CALLBACK_LOW,X
    // Overlapping static entry reached from 0xC09D82.
    case 0xC09D84: {
        Instruction step(cpu, 0x70, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:6 LDA #.HIWORD(MOVEMENT_NOP)
    case 0xC09D86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:6 LDA #.HIWORD(MOVEMENT_NOP)
    // Overlapping static entry reached from 0xC09D86.
    case 0xC09D88: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:7 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09D89: {
        Instruction step(cpu, 0x9D, 0x0010ACu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_sprite_tick_callback.asm:8 RTS
    case 0xC09D8C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
