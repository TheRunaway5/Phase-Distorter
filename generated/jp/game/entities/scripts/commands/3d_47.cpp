// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/3D_47.asm
bool resume_overworld_actionscript_script_3d_47(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3D_47.asm:3 LDX $88
    case 0xC09A1D: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/3D_47.asm:4 DEC ENTITY_ANIMATION_FRAME,X
    case 0xC09A1F: {
        Instruction step(cpu, 0xDE, 0x0010E8u, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // src/overworld/actionscript/script/3D_47.asm:5 RTS
    case 0xC09A22: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
