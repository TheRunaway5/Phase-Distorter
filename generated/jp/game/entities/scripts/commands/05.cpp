// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/05.asm
bool resume_overworld_actionscript_script_05(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/05.asm:3 LDX $8A
    case 0xC09689: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:4 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0968B: {
        Instruction step(cpu, 0xBC, 0x0012DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:4 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    // Overlapping static entry reached from 0xC096ED.
    case 0xC0968C: {
        Instruction step(cpu, 0xDC, 0x00D012u, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:5 BNE @UNKNOWN0
    case 0xC0968E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:6 JMP .LOWORD(MOVEMENT_CODE_0C)
    case 0xC09690: {
        Instruction step(cpu, 0x4C, 0x0099A2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:8 DEY
    case 0xC09693: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:9 LDA ($84),Y
    case 0xC09694: {
        Instruction step(cpu, 0xB1, 0x000084u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:10 STA $82
    case 0xC09696: {
        Instruction step(cpu, 0x85, 0x000082u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:11 DEY
    case 0xC09698: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:12 DEY
    case 0xC09699: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:13 TYA
    case 0xC0969A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:14 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC0969B: {
        Instruction step(cpu, 0x9D, 0x0012DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:15 LDA ($84),Y
    case 0xC0969E: {
        Instruction step(cpu, 0xB1, 0x000084u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:16 TAY
    case 0xC096A0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/05.asm:17 RTS
    case 0xC096A1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
