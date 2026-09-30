// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/3E_48.asm
bool resume_overworld_actionscript_script_3e_48(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3E_48.asm:3 LDX $88
    case 0xC09A44: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:4 LDA [$80],Y
    case 0xC09A46: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:5 AND #$00FF
    case 0xC09A48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:5 AND #$00FF
    // Overlapping static entry reached from 0xC09A48.
    case 0xC09A4A: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:6 CMP #$0080
    case 0xC09A4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:6 CMP #$0080
    // Overlapping static entry reached from 0xC09A4B.
    case 0xC09A4D: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:7 BCC @UNKNOWN0
    case 0xC09A4E: {
        Instruction step(cpu, 0x90, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:8 ORA #$FF00
    case 0xC09A50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:8 ORA #$FF00
    // Overlapping static entry reached from 0xC09A50.
    case 0xC09A52: {
        Instruction step(cpu, 0xFF, 0xF27D18u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:9 CLC
    case 0xC09A53: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:11 ADC ENTITY_ANIMATION_FRAME,X
    case 0xC09A54: {
        Instruction step(cpu, 0x7D, 0x0010F2u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:11 ADC ENTITY_ANIMATION_FRAME,X
    // Overlapping static entry reached from 0xC09A52.
    case 0xC09A56: {
        Instruction step(cpu, 0x10, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:12 STA ENTITY_ANIMATION_FRAME,X
    case 0xC09A57: {
        Instruction step(cpu, 0x9D, 0x0010F2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:12 STA ENTITY_ANIMATION_FRAME,X
    // Overlapping static entry reached from 0xC09A56.
    case 0xC09A58: {
        Instruction step(cpu, 0xF2, 0x000010u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:13 INY
    case 0xC09A5A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/3E_48.asm:14 RTS
    case 0xC09A5B: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
