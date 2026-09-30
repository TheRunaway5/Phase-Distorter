// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/18.asm
bool resume_overworld_actionscript_script_18(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/18.asm:3 LDA [$80],Y
    case 0xC09A5C: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:4 STA $8C
    case 0xC09A5E: {
        Instruction step(cpu, 0x85, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:5 INY
    case 0xC09A60: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:6 INY
    case 0xC09A61: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:7 LDA [$80],Y
    case 0xC09A62: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:8 AND #$00FF
    case 0xC09A64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09A64.
    case 0xC09A66: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:9 ASL
    case 0xC09A67: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:10 TAX
    case 0xC09A68: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:11 INY
    case 0xC09A69: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:12 LDA [$80],Y
    case 0xC09A6A: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:13 STA $90
    case 0xC09A6C: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:14 INY
    case 0xC09A6E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:15 LDA f:UNKNOWN_C09ABD,X
    case 0xC09A6F: {
        Instruction step(cpu, 0xBF, 0xC09ABDu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:16 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC09A73: {
        Instruction step(cpu, 0x8D, 0x000A5Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:17 LDA #$0000
    case 0xC09A76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:17 LDA #$0000
    // Overlapping static entry reached from 0xC09A76.
    case 0xC09A78: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:18 STA CURRENT_ENTITY_TICK_CALLBACK+2
    case 0xC09A79: {
        Instruction step(cpu, 0x8D, 0x000A5Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:19 LDX #$0000
    case 0xC09A7C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:19 LDX #$0000
    // Overlapping static entry reached from 0xC09A7C.
    case 0xC09A7E: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC09A7F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:21 JSR JUMP_TO_LOADED_MOVEMENT_PTR
    case 0xC09A81: {
        Instruction step(cpu, 0x20, 0x009D9Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC09A84: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:23 RTS
    case 0xC09A86: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
