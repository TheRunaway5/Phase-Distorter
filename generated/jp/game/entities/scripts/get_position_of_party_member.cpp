// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/get_position_of_party_member.asm
bool resume_overworld_actionscript_get_position_of_party_member(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/get_position_of_party_member.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A922: {
        Instruction step(cpu, 0x22, 0xC09D65u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/get_position_of_party_member.asm:4 STY $94
    case 0xC0A926: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/get_position_of_party_member.asm:5 JSL GET_POSITION_OF_PARTY_MEMBER
    case 0xC0A928: {
        Instruction step(cpu, 0x22, 0xC44965u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/get_position_of_party_member.asm:6 RTL
    case 0xC0A92C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
