// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/3A.asm
bool resume_overworld_actionscript_script_3a(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3A.asm:3 LDA [$80],Y
    case 0xC098FB: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3A.asm:4 AND #$00FF
    case 0xC098FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3A.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC098FD.
    case 0xC098FF: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/3A.asm:5 ASL
    case 0xC09900: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/script/3A.asm:6 TAX
    case 0xC09901: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/3A.asm:7 STZ ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC09902: {
        Instruction step(cpu, 0x9E, 0x001A28u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/3A.asm:8 STZ ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC09905: {
        Instruction step(cpu, 0x9E, 0x001A18u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/3A.asm:9 STZ ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09908: {
        Instruction step(cpu, 0x9E, 0x001A30u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/3A.asm:10 STZ ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC0990B: {
        Instruction step(cpu, 0x9E, 0x001A20u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/3A.asm:11 INY
    case 0xC0990E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/3A.asm:12 RTS
    case 0xC0990F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
