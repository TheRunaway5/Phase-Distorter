// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/16.asm
bool resume_overworld_actionscript_script_16(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/16.asm:3 LDX $8A
    case 0xC09B0B: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC09B0D: {
        Instruction step(cpu, 0xBD, 0x00150Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:5 BNE MOVEMENT_CODE_16_UNKNOWN0
    case 0xC09B10: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:7 LDA [$80],Y
    case 0xC09B12: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:8 TAY
    case 0xC09B14: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:9 LDA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09B15: {
        Instruction step(cpu, 0xBD, 0x0012DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:10 SEC
    case 0xC09B18: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:11 SBC #$0003
    case 0xC09B19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:11 SBC #$0003
    // Overlapping static entry reached from 0xC09B19.
    case 0xC09B1B: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:12 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09B1C: {
        Instruction step(cpu, 0x9D, 0x0012DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:13 RTS
    case 0xC09B1F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:15 INY
    case 0xC09B20: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:16 INY
    case 0xC09B21: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/16.asm:17 RTS
    case 0xC09B22: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
