// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/1B.asm
bool resume_overworld_actionscript_script_1b(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/1B.asm:3 STY $94
    case 0xC0964E: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/1B.asm:4 LDX $8A
    case 0xC09650: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/1B.asm:5 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09652: {
        Instruction step(cpu, 0xBC, 0x0012DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/1B.asm:6 BNE @UNKNOWN0
    case 0xC09655: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/1B.asm:7 JMP .LOWORD(MOVEMENT_CODE_0C)
    case 0xC09657: {
        Instruction step(cpu, 0x4C, 0x0099A2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/actionscript/script/1B.asm:9 DEY
    case 0xC0965A: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/1B.asm:10 DEY
    case 0xC0965B: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/1B.asm:11 TYA
    case 0xC0965C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/1B.asm:12 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0965D: {
        Instruction step(cpu, 0x9D, 0x0012DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/1B.asm:13 LDA ($84),Y
    case 0xC09660: {
        Instruction step(cpu, 0xB1, 0x000084u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/1B.asm:14 TAY
    case 0xC09662: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/1B.asm:15 RTS
    case 0xC09663: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
