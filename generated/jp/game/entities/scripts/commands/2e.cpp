// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/2E.asm
bool resume_overworld_actionscript_script_2e(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2E.asm:3 LDX $88
    case 0xC0974C: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:4 LDA [$80],Y
    case 0xC0974E: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:5 INY
    case 0xC09750: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:6 INY
    case 0xC09751: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:7 STA $90
    case 0xC09752: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:8 AND #$00FF
    case 0xC09754: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09754.
    case 0xC09756: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:9 XBA
    case 0xC09757: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:10 CLC
    case 0xC09758: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:11 ADC ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC09759: {
        Instruction step(cpu, 0x7D, 0x000DA0u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:12 STA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0975C: {
        Instruction step(cpu, 0x9D, 0x000DA0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:13 LDA $90
    case 0xC0975F: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:14 AND #$FF00
    case 0xC09761: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC09761.
    case 0xC09763: {
        Instruction step(cpu, 0xFF, 0x090310u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:15 BPL @UNKNOWN0
    case 0xC09764: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:16 ORA #$00FF
    case 0xC09766: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC09763.
    case 0xC09767: {
        Instruction step(cpu, 0xFF, 0x7DEB00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC09766.
    case 0xC09768: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:18 XBA
    case 0xC09769: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:19 ADC ENTITY_DELTA_X_TABLE,X
    case 0xC0976A: {
        Instruction step(cpu, 0x7D, 0x000CECu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:19 ADC ENTITY_DELTA_X_TABLE,X
    // Overlapping static entry reached from 0xC09767.
    case 0xC0976B: {
        Instruction step(cpu, 0xEC, 0x009D0Cu, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:20 STA ENTITY_DELTA_X_TABLE,X
    case 0xC0976D: {
        Instruction step(cpu, 0x9D, 0x000CECu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:20 STA ENTITY_DELTA_X_TABLE,X
    // Overlapping static entry reached from 0xC0976B.
    case 0xC0976E: {
        Instruction step(cpu, 0xEC, 0x00600Cu, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/2E.asm:21 RTS
    case 0xC09770: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
