// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/14.asm
bool resume_overworld_actionscript_script_14(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/14.asm:3 LDA [$80],Y
    case 0xC09A87: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/14.asm:4 AND #$00FF
    case 0xC09A89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/14.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09A89.
    case 0xC09A8B: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/14.asm:5 ASL
    case 0xC09A8C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/script/14.asm:6 TAX
    case 0xC09A8D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/14.asm:7 LDA f:ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09A8E: {
        Instruction step(cpu, 0xBF, 0xC09AF9u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/14.asm:8 CLC
    case 0xC09A92: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/14.asm:9 ADC $88
    case 0xC09A93: {
        Instruction step(cpu, 0x65, 0x000088u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/14.asm:10 BRA MOVEMENT_CODE_0D_UNK1
    case 0xC09A95: {
        Instruction step(cpu, 0x80, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    default: return false;
    }
}
}
