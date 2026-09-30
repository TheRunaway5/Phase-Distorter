// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/2F.asm
bool resume_overworld_actionscript_script_2f(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2F.asm:3 LDX $88
    case 0xC09792: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:4 LDA [$80],Y
    case 0xC09794: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:5 INY
    case 0xC09796: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:6 INY
    case 0xC09797: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:7 STA $90
    case 0xC09798: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:8 AND #$00FF
    case 0xC0979A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC0979A.
    case 0xC0979C: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:9 XBA
    case 0xC0979D: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:10 CLC
    case 0xC0979E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:11 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0979F: {
        Instruction step(cpu, 0x7D, 0x000DE6u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:12 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC097A2: {
        Instruction step(cpu, 0x9D, 0x000DE6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:13 LDA $90
    case 0xC097A5: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:14 AND #$FF00
    case 0xC097A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC097A7.
    case 0xC097A9: {
        Instruction step(cpu, 0xFF, 0x090310u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:15 BPL @UNKNOWN0
    case 0xC097AA: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    case 0xC097AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097A9.
    case 0xC097AD: {
        Instruction step(cpu, 0xFF, 0x7DEB00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097AC.
    case 0xC097AE: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:18 XBA
    case 0xC097AF: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:19 ADC ENTITY_DELTA_Y_TABLE,X
    case 0xC097B0: {
        Instruction step(cpu, 0x7D, 0x000D32u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:19 ADC ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC097AD.
    case 0xC097B1: {
        Instruction step(cpu, 0x32, 0x00000Du, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:20 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC097B3: {
        Instruction step(cpu, 0x9D, 0x000D32u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:21 RTS
    case 0xC097B6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
