// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/3C_46.asm
bool resume_overworld_actionscript_script_3c_46(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3C_46.asm:3 LDX $88
    case 0xC09A17: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/3C_46.asm:4 INC ENTITY_ANIMATION_FRAME,X
    case 0xC09A19: {
        Instruction step(cpu, 0xFE, 0x0010E8u, 3u, AddressMode::AbsoluteIndexedX);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/script/3C_46.asm:5 RTS
    case 0xC09A1C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
