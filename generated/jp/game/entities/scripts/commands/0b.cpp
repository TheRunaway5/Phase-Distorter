// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/0B.asm
bool resume_overworld_actionscript_script_0b(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0B.asm:3 LDX $8A
    case 0xC0994A: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/0B.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0994C: {
        Instruction step(cpu, 0xBD, 0x00150Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0B.asm:5 BEQ @RETURN
    case 0xC0994F: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/0B.asm:6 LDA [$80],Y
    case 0xC09951: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0B.asm:7 TAY
    case 0xC09953: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0B.asm:8 RTS
    case 0xC09954: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/actionscript/script/0B.asm:10 INY
    case 0xC09955: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0B.asm:11 INY
    case 0xC09956: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0B.asm:12 RTS
    case 0xC09957: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
