// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/0D.asm
bool resume_overworld_actionscript_script_0d(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/0D.asm:3 LDA [$80],Y
    case 0xC09A9F: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:4 INY
    case 0xC09AA1: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:6 INY
    case 0xC09AA2: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:8 STA $8C
    case 0xC09AA3: {
        Instruction step(cpu, 0x85, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:9 LDA [$80],Y
    case 0xC09AA5: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:10 AND #$00FF
    case 0xC09AA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC09AA7.
    case 0xC09AA9: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:11 ASL
    case 0xC09AAA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:12 TAX
    case 0xC09AAB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:13 INY
    case 0xC09AAC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:14 LDA [$80],Y
    case 0xC09AAD: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:15 STA $90
    case 0xC09AAF: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:16 INY
    case 0xC09AB1: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:17 INY
    case 0xC09AB2: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:18 LDA f:UNKNOWN_C09ABD,X
    case 0xC09AB3: {
        Instruction step(cpu, 0xBF, 0xC09ABDu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:19 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC09AB7: {
        Instruction step(cpu, 0x8D, 0x000A5Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/0D.asm:20 JMP (.LOWORD(CURRENT_ENTITY_TICK_CALLBACK))
    case 0xC09ABA: {
        Instruction step(cpu, 0x6C, 0x000A5Au, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    default: return false;
    }
}
}
