// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/36.asm
bool resume_overworld_actionscript_script_36(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/36.asm:3 LDA [$80],Y
    case 0xC09875: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:4 AND #$00FF
    case 0xC09877: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09877.
    case 0xC09879: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:5 ASL
    case 0xC0987A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:6 TAX
    case 0xC0987B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:7 INY
    case 0xC0987C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:8 LDA [$80],Y
    case 0xC0987D: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:9 STA $90
    case 0xC0987F: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:10 AND #$00FF
    case 0xC09881: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC09881.
    case 0xC09883: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:11 XBA
    case 0xC09884: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:12 CLC
    case 0xC09885: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:13 ADC ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09886: {
        Instruction step(cpu, 0x7D, 0x001A3Au, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:14 STA ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC09889: {
        Instruction step(cpu, 0x9D, 0x001A3Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:15 LDA $90
    case 0xC0988C: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:16 AND #$FF00
    case 0xC0988E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:16 AND #$FF00
    // Overlapping static entry reached from 0xC0988E.
    case 0xC09890: {
        Instruction step(cpu, 0xFF, 0x090310u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:17 BPL @UNKNOWN0
    case 0xC09891: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    case 0xC09893: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC09890.
    case 0xC09894: {
        Instruction step(cpu, 0xFF, 0x7DEB00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:18 ORA #$00FF
    // Overlapping static entry reached from 0xC09893.
    case 0xC09895: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:20 XBA
    case 0xC09896: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:21 ADC ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC09897: {
        Instruction step(cpu, 0x7D, 0x001A2Au, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:21 ADC ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09894.
    case 0xC09898: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:21 ADC ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC09898.
    case 0xC09899: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:22 STA ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC0989A: {
        Instruction step(cpu, 0x9D, 0x001A2Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:23 INY
    case 0xC0989D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:24 INY
    case 0xC0989E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/36.asm:25 RTS
    case 0xC0989F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
