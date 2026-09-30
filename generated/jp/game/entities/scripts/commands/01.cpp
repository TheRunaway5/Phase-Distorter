// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/01.asm
bool resume_overworld_actionscript_script_01(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/01.asm:3 LDA [$80],Y
    case 0xC095E2: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:4 LDX $8A
    case 0xC095E4: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:5 INY
    case 0xC095E6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:7 STA $90
    case 0xC095E7: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:8 STY $94
    case 0xC095E9: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:9 TYA
    case 0xC095EB: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:10 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC095EC: {
        Instruction step(cpu, 0xBC, 0x0012DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:11 STA ($84),Y
    case 0xC095EF: {
        Instruction step(cpu, 0x91, 0x000084u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:12 INY
    case 0xC095F1: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:13 INY
    case 0xC095F2: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:14 LDA $90
    case 0xC095F3: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:15 STA ($84),Y
    case 0xC095F5: {
        Instruction step(cpu, 0x91, 0x000084u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:16 INY
    case 0xC095F7: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:17 TYA
    case 0xC095F8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:18 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC095F9: {
        Instruction step(cpu, 0x9D, 0x0012DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:19 LDY $94
    case 0xC095FC: {
        Instruction step(cpu, 0xA4, 0x000094u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/01.asm:20 RTS
    case 0xC095FE: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
