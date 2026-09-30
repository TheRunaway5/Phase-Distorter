// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/11.asm
bool resume_overworld_actionscript_script_11(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/11.asm:3 LDX $8A
    case 0xC0999E: {
        Instruction step(cpu, 0xA6, 0x00008Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:4 LDA ENTITY_SCRIPT_TEMPVARS,X
    case 0xC099A0: {
        Instruction step(cpu, 0xBD, 0x001516u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:5 STA $90
    case 0xC099A3: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:6 LDA [$80],Y
    case 0xC099A5: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:7 AND #$00FF
    case 0xC099A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC099A7.
    case 0xC099A9: {
        Instruction step(cpu, 0x00, 0x0000C8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:8 INY
    case 0xC099AA: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:9 STY $94
    case 0xC099AB: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:10 CMP $90
    case 0xC099AD: {
        Instruction step(cpu, 0xC5, 0x000090u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/actionscript/script/11.asm:11 BLTEQ MOVEMENT_CODE_10_UNKNOWN0
    case 0xC099AF: {
        Instruction step(cpu, 0x90, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/actionscript/script/11.asm:11 BLTEQ MOVEMENT_CODE_10_UNKNOWN0
    case 0xC099B1: {
        Instruction step(cpu, 0xF0, 0x0000DBu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:12 LDY ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC099B3: {
        Instruction step(cpu, 0xBC, 0x0012E6u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:13 ASL
    case 0xC099B6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:14 ADC $94
    case 0xC099B7: {
        Instruction step(cpu, 0x65, 0x000094u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:15 STA ($84),Y
    case 0xC099B9: {
        Instruction step(cpu, 0x91, 0x000084u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:16 INY
    case 0xC099BB: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:17 INY
    case 0xC099BC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:18 TYA
    case 0xC099BD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:19 STA ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC099BE: {
        Instruction step(cpu, 0x9D, 0x0012E6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/11.asm:20 BRA MOVEMENT_CODE_10_UNKNOWN1
    case 0xC099C1: {
        Instruction step(cpu, 0x80, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    default: return false;
    }
}
}
