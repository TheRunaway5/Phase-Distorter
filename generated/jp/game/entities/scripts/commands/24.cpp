// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/24.asm
bool resume_overworld_actionscript_script_24(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/24.asm:3 LDX $8A
    case 0xC095FF: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/24.asm:5 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09601: {
        Instruction step(cpu, 0xBD, 0x00150Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/24.asm:6 BRA MOVEMENT_CODE_01_ENTRY2
    case 0xC09604: {
        Instruction step(cpu, 0x80, 0x0000E1u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    default: return false;
    }
}
}
