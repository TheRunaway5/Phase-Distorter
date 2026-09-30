// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/17.asm
bool resume_overworld_actionscript_script_17(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/17.asm:3 LDX $8A
    case 0xC09B44: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/17.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B46: {
        Instruction step(cpu, 0xBD, 0x001516u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/17.asm:5 BEQ MOVEMENT_CODE_16_UNKNOWN0
    case 0xC09B49: {
        Instruction step(cpu, 0xF0, 0x0000F6u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/17.asm:6 BRA MOVEMENT_CODE_16_ENTRY2
    case 0xC09B4B: {
        Instruction step(cpu, 0x80, 0x0000E6u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    default: return false;
    }
}
}
