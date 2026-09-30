// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/2B.asm
bool resume_overworld_actionscript_script_2b(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2B.asm:3 LDX $88
    case 0xC098A0: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/2B.asm:4 LDA [$80],Y
    case 0xC098A2: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2B.asm:5 CLC
    case 0xC098A4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/2B.asm:6 ADC ENTITY_ABS_X_TABLE,X
    case 0xC098A5: {
        Instruction step(cpu, 0x7D, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/2B.asm:7 STA ENTITY_ABS_X_TABLE,X
    case 0xC098A8: {
        Instruction step(cpu, 0x9D, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2B.asm:8 INY
    case 0xC098AB: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/2B.asm:9 INY
    case 0xC098AC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/2B.asm:10 RTS
    case 0xC098AD: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
