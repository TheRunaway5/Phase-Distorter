// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/36.asm
bool resume_overworld_actionscript_script_36(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/36.asm:3 LDA [$80],Y
    case 0xC09854: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:4 AND #$00FF
    case 0xC09856: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09856.
    case 0xC09858: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:5 ASL
    case 0xC09859: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:6 TAX
    case 0xC0985A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:7 INY
    case 0xC0985B: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:8 LDA [$80],Y
    case 0xC0985C: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:9 STA $90
    case 0xC0985E: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:10 AND #$00FF
    case 0xC09860: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC09860.
    case 0xC09862: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:11 XBA
    case 0xC09863: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:12 CLC
    case 0xC09864: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:13 ADC ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09865: {
        Instruction step(cpu, 0x7D, 0x001A30u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:14 STA ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09868: {
        Instruction step(cpu, 0x9D, 0x001A30u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:15 LDA $90
    case 0xC0986B: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:16 AND #$FF00
    case 0xC0986D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:16 AND #$FF00
    // Overlapping static entry reached from 0xC0986D.
    case 0xC0986F: {
        Instruction step(cpu, 0xFF, 0x090310u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:17 BPL @UNKNOWN0
    case 0xC09870: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    case 0xC09872: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC0986F.
    case 0xC09873: {
        Instruction step(cpu, 0xFF, 0x7DEB00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC09872.
    case 0xC09874: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:20 XBA
    case 0xC09875: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:21 ADC ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC09876: {
        Instruction step(cpu, 0x7D, 0x001A20u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:21 ADC ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09873.
    case 0xC09877: {
        Instruction step(cpu, 0x20, 0x009D1Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:22 STA ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC09879: {
        Instruction step(cpu, 0x9D, 0x001A20u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:22 STA ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09877.
    case 0xC0987A: {
        Instruction step(cpu, 0x20, 0x00C81Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:23 INY
    case 0xC0987C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:24 INY
    case 0xC0987D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:25 RTS
    case 0xC0987E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
