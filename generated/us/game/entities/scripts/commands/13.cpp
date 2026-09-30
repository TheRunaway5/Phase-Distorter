// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/13.asm
bool resume_overworld_actionscript_script_13(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/13.asm:3 STY $94
    case 0xC09A0E: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/13.asm:4 LDX $8A
    case 0xC09A10: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/13.asm:5 LDY ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC09A12: {
        Instruction step(cpu, 0xBC, 0x00125Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/13.asm:6 BPL MOVEMENT_CODE_0C_UNK1
    case 0xC09A15: {
        Instruction step(cpu, 0x10, 0x0000B0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/13.asm:7 LDY $94
    case 0xC09A17: {
        Instruction step(cpu, 0xA4, 0x000094u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/13.asm:8 RTS
    case 0xC09A19: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
