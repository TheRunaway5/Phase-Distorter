// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/27.asm
bool resume_overworld_actionscript_script_27(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/27.asm:3 LDA #.LOWORD(ENTITY_SCRIPT_TEMPVARS)
    case 0xC09A76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00150Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/27.asm:3 LDA #.LOWORD(ENTITY_SCRIPT_TEMPVARS)
    // Overlapping static entry reached from 0xC09A76.
    case 0xC09A78: {
        Instruction step(cpu, 0x15, 0x000018u, 2u, AddressMode::DirectPageIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/27.asm:4 CLC
    case 0xC09A79: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/27.asm:5 ADC $8A
    case 0xC09A7A: {
        Instruction step(cpu, 0x65, 0x00008Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/27.asm:6 BRA MOVEMENT_CODE_0D_UNK2
    case 0xC09A7C: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    default: return false;
    }
}
}
