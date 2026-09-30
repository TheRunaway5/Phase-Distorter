// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/18.asm
bool resume_overworld_actionscript_script_18(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/18.asm:3 LDA [$80],Y
    case 0xC09A3B: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:4 STA $8C
    case 0xC09A3D: {
        Instruction step(cpu, 0x85, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:5 INY
    case 0xC09A3F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:6 INY
    case 0xC09A40: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:7 LDA [$80],Y
    case 0xC09A41: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:8 AND #$00FF
    case 0xC09A43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09A43.
    case 0xC09A45: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:9 ASL
    case 0xC09A46: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:10 TAX
    case 0xC09A47: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:11 INY
    case 0xC09A48: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:12 LDA [$80],Y
    case 0xC09A49: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:13 STA $90
    case 0xC09A4B: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:14 INY
    case 0xC09A4D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:15 LDA f:UNKNOWN_C09ABD,X
    case 0xC09A4E: {
        Instruction step(cpu, 0xBF, 0xC09A9Cu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:16 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC09A52: {
        Instruction step(cpu, 0x8D, 0x000A50u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:17 LDA #$0000
    case 0xC09A55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:17 LDA #$0000
    // Overlapping static entry reached from 0xC09A55.
    case 0xC09A57: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:18 STA CURRENT_ENTITY_TICK_CALLBACK+2
    case 0xC09A58: {
        Instruction step(cpu, 0x8D, 0x000A52u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:19 LDX #$0000
    case 0xC09A5B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:19 LDX #$0000
    // Overlapping static entry reached from 0xC09A5B.
    case 0xC09A5D: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC09A5E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:21 JSR JUMP_TO_LOADED_MOVEMENT_PTR
    case 0xC09A60: {
        Instruction step(cpu, 0x20, 0x009D7Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC09A63: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/script/18.asm:23 RTS
    case 0xC09A65: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
