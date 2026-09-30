// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/0A.asm
bool resume_overworld_actionscript_script_0a(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0A.asm:3 LDX $8A
    case 0xC0993C: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/0A.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0993E: {
        Instruction step(cpu, 0xBD, 0x00150Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0A.asm:5 BNE @RETURN
    case 0xC09941: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/0A.asm:6 LDA [$80],Y
    case 0xC09943: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0A.asm:7 TAY
    case 0xC09945: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0A.asm:8 RTS
    case 0xC09946: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/actionscript/script/0A.asm:10 INY
    case 0xC09947: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0A.asm:11 INY
    case 0xC09948: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0A.asm:12 RTS
    case 0xC09949: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
