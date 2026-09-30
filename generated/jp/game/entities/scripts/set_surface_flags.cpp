// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/set_surface_flags.asm
bool resume_overworld_actionscript_set_surface_flags(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/set_surface_flags.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A658: {
        Instruction step(cpu, 0x22, 0xC09D65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/set_surface_flags.asm:4 STY $94
    case 0xC0A65C: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/set_surface_flags.asm:5 LDX $88
    case 0xC0A65E: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/set_surface_flags.asm:6 STA ENTITY_SURFACE_FLAGS,X
    case 0xC0A660: {
        Instruction step(cpu, 0x9D, 0x002FA8u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/set_surface_flags.asm:7 RTL
    case 0xC0A663: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
