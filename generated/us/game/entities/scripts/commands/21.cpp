// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/21.asm
bool resume_overworld_actionscript_script_21(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/21.asm:3 LDA [$80],Y
    case 0xC09BB4: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:4 AND #$00FF
    case 0xC09BB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09BB6.
    case 0xC09BB8: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:5 ASL
    case 0xC09BB9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:6 TAX
    case 0xC09BBA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09BBB: {
        Instruction step(cpu, 0xBF, 0xC09AF9u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:8 ADC $88
    case 0xC09BBF: {
        Instruction step(cpu, 0x65, 0x000088u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:9 TAX
    case 0xC09BC1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:10 LDA __BSS_START__,X
    case 0xC09BC2: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:11 LDX $8A
    case 0xC09BC5: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:12 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09BC7: {
        Instruction step(cpu, 0x9D, 0x001372u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:13 INY
    case 0xC09BCA: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/21.asm:14 RTS
    case 0xC09BCB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
