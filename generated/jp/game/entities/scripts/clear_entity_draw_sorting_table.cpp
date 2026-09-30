// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/clear_entity_draw_sorting_table.asm
bool resume_overworld_actionscript_clear_entity_draw_sorting_table(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:5 STZ ENTITY_DRAW_SORTING
    case 0xC00000: {
        Instruction step(cpu, 0x9C, 0x002C0Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:6 LDX #.LOWORD(ENTITY_DRAW_SORTING)
    case 0xC00003: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Cu : 0x002C0Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:6 LDX #.LOWORD(ENTITY_DRAW_SORTING)
    // Overlapping static entry reached from 0xC00003.
    case 0xC00005: {
        Instruction step(cpu, 0x2C, 0x000DA0u, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:7 LDY #.LOWORD(ENTITY_DRAW_SORTING)+1
    case 0xC00006: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Du : 0x002C0Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:7 LDY #.LOWORD(ENTITY_DRAW_SORTING)+1
    // Overlapping static entry reached from 0xC00006.
    case 0xC00008: {
        Instruction step(cpu, 0x2C, 0x003BA9u, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:8 LDA #$003B
    case 0xC00009: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Bu : 0x00003Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:8 LDA #$003B
    // Overlapping static entry reached from 0xC00009.
    case 0xC0000B: {
        Instruction step(cpu, 0x00, 0x000054u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:9 MVN #$7E,#$7E
    case 0xC0000C: {
        Instruction step(cpu, 0x54, 0x007E7Eu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:10 LDA #.LOWORD(ENTITY_DRAW_SORTING)
    case 0xC0000F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x002C0Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:10 LDA #.LOWORD(ENTITY_DRAW_SORTING)
    // Overlapping static entry reached from 0xC0000F.
    case 0xC00011: {
        Instruction step(cpu, 0x2C, 0x00C260u, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/actionscript/clear_entity_draw_sorting_table.asm:11 RTS
    case 0xC00012: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
