// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/04.asm
bool resume_overworld_actionscript_script_04(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/04.asm:3 LDA [$80],Y
    case 0xC09685: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:4 STA $8C
    case 0xC09687: {
        Instruction step(cpu, 0x85, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:5 INY
    case 0xC09689: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:6 INY
    case 0xC0968A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:7 LDA [$80],Y
    case 0xC0968B: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:8 STA $8E
    case 0xC0968D: {
        Instruction step(cpu, 0x85, 0x00008Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:9 INY
    case 0xC0968F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:10 TYA
    case 0xC09690: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:11 LDX $8A
    case 0xC09691: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:12 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09693: {
        Instruction step(cpu, 0xBC, 0x0012E6u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:13 STA ($84),Y
    case 0xC09696: {
        Instruction step(cpu, 0x91, 0x000084u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:14 INY
    case 0xC09698: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:15 INY
    case 0xC09699: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:16 LDA $82
    case 0xC0969A: {
        Instruction step(cpu, 0xA5, 0x000082u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:17 STA ($84),Y
    case 0xC0969C: {
        Instruction step(cpu, 0x91, 0x000084u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:17 STA ($84),Y
    // Overlapping static entry reached from 0xC096FE.
    case 0xC0969D: {
        Instruction step(cpu, 0x84, 0x0000C8u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:18 INY
    case 0xC0969E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:19 TYA
    case 0xC0969F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:20 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC096A0: {
        Instruction step(cpu, 0x9D, 0x0012E6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:21 LDA $8E
    case 0xC096A3: {
        Instruction step(cpu, 0xA5, 0x00008Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:22 STA $82
    case 0xC096A5: {
        Instruction step(cpu, 0x85, 0x000082u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:23 LDY $8C
    case 0xC096A7: {
        Instruction step(cpu, 0xA4, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/04.asm:24 RTS
    case 0xC096A9: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
