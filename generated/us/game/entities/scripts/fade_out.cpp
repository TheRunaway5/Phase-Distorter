// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/fade_out.asm
bool resume_overworld_actionscript_fade_out(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/fade_out.asm:3 LDA [$80],Y
    case 0xC09FBB: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out.asm:4 INY
    case 0xC09FBD: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out.asm:5 INY
    case 0xC09FBE: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out.asm:6 STY $94
    case 0xC09FBF: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out.asm:7 XBA
    case 0xC09FC1: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out.asm:8 TAX
    case 0xC09FC2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out.asm:9 XBA
    case 0xC09FC3: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out.asm:10 JMP f:FADE_OUT
    case 0xC09FC4: {
        Instruction step(cpu, 0x5C, 0xC0887Au, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    default: return false;
    }
}
}
