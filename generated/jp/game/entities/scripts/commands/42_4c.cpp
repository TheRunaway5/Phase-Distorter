// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/42_4C.asm
bool resume_overworld_actionscript_script_42_4c(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/42_4C.asm:3 LDA [$80],Y
    case 0xC0991C: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:4 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC0991E: {
        Instruction step(cpu, 0x8D, 0x000A50u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:5 INY
    case 0xC09921: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:6 INY
    case 0xC09922: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:7 LDA [$80],Y
    case 0xC09923: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:8 INY
    case 0xC09925: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:9 STA CURRENT_ENTITY_TICK_CALLBACK+2
    case 0xC09926: {
        Instruction step(cpu, 0x8D, 0x000A52u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:10 STY $94
    case 0xC09929: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:11 LDX $8A
    case 0xC0992B: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:12 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC0992D: {
        Instruction step(cpu, 0xBD, 0x00150Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:13 JSL JUMP_TO_LOADED_MOVEMENT_PTR
    case 0xC09930: {
        Instruction step(cpu, 0x22, 0xC09D7Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:14 LDX $8A
    case 0xC09934: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:15 STA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09936: {
        Instruction step(cpu, 0x9D, 0x00150Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:16 LDY $94
    case 0xC09939: {
        Instruction step(cpu, 0xA4, 0x000094u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/42_4C.asm:17 RTS
    case 0xC0993B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
