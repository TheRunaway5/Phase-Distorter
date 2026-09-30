// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C09C99.asm
bool resume_unresolved_c0_c09c99(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C99.asm:3 LDA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09C78: {
        Instruction step(cpu, 0xBD, 0x000AD0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:4 BMI @UNKNOWN1
    case 0xC09C7B: {
        Instruction step(cpu, 0x30, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:5 PHX
    case 0xC09C7D: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:6 LDA LAST_ALLOCATED_SCRIPT
    case 0xC09C7E: {
        Instruction step(cpu, 0xAD, 0x000A4Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:7 PHA
    case 0xC09C81: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:8 LDA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09C82: {
        Instruction step(cpu, 0xBD, 0x000AD0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:9 STA LAST_ALLOCATED_SCRIPT
    case 0xC09C85: {
        Instruction step(cpu, 0x8D, 0x000A4Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:11 TAX
    case 0xC09C88: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:12 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC09C89: {
        Instruction step(cpu, 0xBD, 0x001250u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:13 BPL @UNKNOWN0
    case 0xC09C8C: {
        Instruction step(cpu, 0x10, 0x0000FAu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:14 PLA
    case 0xC09C8E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:15 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC09C8F: {
        Instruction step(cpu, 0x9D, 0x001250u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:16 PLX
    case 0xC09C92: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/unknown/C0/C09C99.asm:18 RTS
    case 0xC09C93: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
