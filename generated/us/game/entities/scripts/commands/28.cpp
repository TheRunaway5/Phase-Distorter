// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/28.asm
bool resume_overworld_actionscript_script_28(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/28.asm:3 LDX $88
    case 0xC096E3: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/28.asm:4 LDA [$80],Y
    case 0xC096E5: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/28.asm:5 INY
    case 0xC096E7: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/28.asm:6 INY
    case 0xC096E8: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/28.asm:7 STA ENTITY_ABS_X_TABLE,X
    case 0xC096E9: {
        Instruction step(cpu, 0x9D, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/28.asm:8 LDA #$8000
    case 0xC096EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/28.asm:8 LDA #$8000
    // Overlapping static entry reached from 0xC096EC.
    case 0xC096EE: {
        Instruction step(cpu, 0x80, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/script/28.asm:9 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC096EF: {
        Instruction step(cpu, 0x9D, 0x000C42u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/28.asm:10 RTS
    case 0xC096F2: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
