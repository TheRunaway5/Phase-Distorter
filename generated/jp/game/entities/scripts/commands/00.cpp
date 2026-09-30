// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/00.asm
bool resume_overworld_actionscript_script_00(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/00.asm:3 LDX $88
    case 0xC095D1: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/00.asm:4 JSR UNKNOWN_C09C3B
    case 0xC095D3: {
        Instruction step(cpu, 0x20, 0x009C1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/script/00.asm:5 LDX $8A
    case 0xC095D6: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/00.asm:6 LDA #$FFFF
    case 0xC095D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/00.asm:6 LDA #$FFFF
    // Overlapping static entry reached from 0xC095D8.
    case 0xC095DA: {
        Instruction step(cpu, 0xFF, 0x13689Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/00.asm:7 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC095DB: {
        Instruction step(cpu, 0x9D, 0x001368u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/00.asm:8 STA ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC095DE: {
        Instruction step(cpu, 0x8D, 0x000A4Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/00.asm:9 RTS
    case 0xC095E1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
