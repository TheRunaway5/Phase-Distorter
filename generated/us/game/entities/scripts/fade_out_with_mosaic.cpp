// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/fade_out_with_mosaic.asm
bool resume_overworld_actionscript_fade_out_with_mosaic(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/fade_out_with_mosaic.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0AA07: {
        Instruction step(cpu, 0x22, 0xC09D94u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:4 PHA
    case 0xC0AA0B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:5 STY $94
    case 0xC0AA0C: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0AA0E: {
        Instruction step(cpu, 0x22, 0xC09D94u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:7 PHA
    case 0xC0AA12: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:8 STY $94
    case 0xC0AA13: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:9 JSL MOVEMENT_DATA_READ16
    case 0xC0AA15: {
        Instruction step(cpu, 0x22, 0xC09D94u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:10 STY $94
    case 0xC0AA19: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:11 TAY
    case 0xC0AA1B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:12 PLX
    case 0xC0AA1C: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:13 PLA
    case 0xC0AA1D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:14 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0AA1E: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/fade_out_with_mosaic.asm:15 RTL
    case 0xC0AA22: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
