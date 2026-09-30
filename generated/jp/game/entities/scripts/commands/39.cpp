// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/39.asm
bool resume_overworld_actionscript_script_39(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/39.asm:3 LDX $88
    case 0xC098D1: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/39.asm:4 STZ ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC098D3: {
        Instruction step(cpu, 0x9E, 0x000DA0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/39.asm:5 STZ ENTITY_DELTA_X_TABLE,X
    case 0xC098D6: {
        Instruction step(cpu, 0x9E, 0x000CECu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/39.asm:6 STZ ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC098D9: {
        Instruction step(cpu, 0x9E, 0x000DDCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/39.asm:7 STZ ENTITY_DELTA_Y_TABLE,X
    case 0xC098DC: {
        Instruction step(cpu, 0x9E, 0x000D28u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/39.asm:8 STZ ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC098DF: {
        Instruction step(cpu, 0x9E, 0x000E18u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/39.asm:9 STZ ENTITY_DELTA_Z_TABLE,X
    case 0xC098E2: {
        Instruction step(cpu, 0x9E, 0x000D64u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/39.asm:10 RTS
    case 0xC098E5: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
