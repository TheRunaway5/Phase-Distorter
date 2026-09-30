// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/jump_to_loaded_movement_pointer.asm
bool resume_overworld_actionscript_jump_to_loaded_movement_pointer(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/jump_to_loaded_movement_pointer.asm:3 JML (.LOWORD(CURRENT_ENTITY_TICK_CALLBACK))
    case 0xC09D9E: {
        Instruction step(cpu, 0xDC, 0x000A5Au, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    default: return false;
    }
}
}
