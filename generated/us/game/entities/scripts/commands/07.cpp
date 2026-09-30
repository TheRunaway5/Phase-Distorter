// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/07.asm
bool resume_overworld_actionscript_script_07(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/07.asm:3 STY $94
    case 0xC099DD: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:4 JSR UNKNOWN_C09D03
    case 0xC099DF: {
        Instruction step(cpu, 0x20, 0x009D03u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:5 BCS @UNKNOWN0
    case 0xC099E2: {
        Instruction step(cpu, 0xB0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:6 STY ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC099E4: {
        Instruction step(cpu, 0x8C, 0x000A58u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:7 LDX $8A
    case 0xC099E7: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:8 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC099E9: {
        Instruction step(cpu, 0xBD, 0x00125Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:9 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC099EC: {
        Instruction step(cpu, 0x99, 0x00125Au, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:10 TYA
    case 0xC099EF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:11 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC099F0: {
        Instruction step(cpu, 0x9D, 0x00125Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:12 TYX
    case 0xC099F3: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:13 STZ ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC099F4: {
        Instruction step(cpu, 0x9E, 0x0012E6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:13 STZ ENTITY_SCRIPT_STACK_OFFSETS,X
    // Overlapping static entry reached from 0xC09A56.
    case 0xC099F5: {
        Instruction step(cpu, 0xE6, 0x000012u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:14 STZ ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC099F7: {
        Instruction step(cpu, 0x9E, 0x001372u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:15 LDY $94
    case 0xC099FA: {
        Instruction step(cpu, 0xA4, 0x000094u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:16 LDA [$80],Y
    case 0xC099FC: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:17 STA ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC099FE: {
        Instruction step(cpu, 0x9D, 0x0013FEu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:18 LDA $82
    case 0xC09A01: {
        Instruction step(cpu, 0xA5, 0x000082u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:19 STA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC09A03: {
        Instruction step(cpu, 0x9D, 0x00148Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:20 INY
    case 0xC09A06: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:21 INY
    case 0xC09A07: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:22 RTS
    case 0xC09A08: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:24 LDY $94
    case 0xC09A09: {
        Instruction step(cpu, 0xA4, 0x000094u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:25 INY
    case 0xC09A0B: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:26 INY
    case 0xC09A0C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/07.asm:27 RTS
    case 0xC09A0D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
