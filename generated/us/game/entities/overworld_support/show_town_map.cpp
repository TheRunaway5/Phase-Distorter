// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/show_town_map.asm
bool resume_overworld_show_town_map(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/show_town_map.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC13CE5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:4 LDX #$00CA
    case 0xC13CE7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000CAu : 0x0000CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:4 LDX #$00CA
    // Overlapping static entry reached from 0xC13CE7.
    case 0xC13CE9: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:5 LDA #$00FF
    case 0xC13CEA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:5 LDA #$00FF
    // Overlapping static entry reached from 0xC13CEA.
    case 0xC13CEC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:6 JSL FIND_ITEM_IN_INVENTORY2
    case 0xC13CED: {
        Instruction step(cpu, 0x22, 0xC45683u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:7 CMP #$0000
    case 0xC13CF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:7 CMP #$0000
    // Overlapping static entry reached from 0xC13CF1.
    case 0xC13CF3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:8 BEQ @NO_TOWN_MAP
    case 0xC13CF4: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:9 JSL UNKNOWN_C0943C
    case 0xC13CF6: {
        Instruction step(cpu, 0x22, 0xC0943Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:10 JSL DISPLAY_TOWN_MAP
    case 0xC13CFA: {
        Instruction step(cpu, 0x22, 0xC4D681u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:11 JSL UNKNOWN_C09451
    case 0xC13CFE: {
        Instruction step(cpu, 0x22, 0xC09451u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_town_map.asm:13 RTL
    case 0xC13D02: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
