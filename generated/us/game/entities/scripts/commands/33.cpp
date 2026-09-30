// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/33.asm
bool resume_overworld_actionscript_script_33(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/33.asm:3 LDA [$80],Y
    case 0xC09802: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:4 AND #$00FF
    case 0xC09804: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09804.
    case 0xC09806: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:5 ASL
    case 0xC09807: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:6 TAX
    case 0xC09808: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:7 INY
    case 0xC09809: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:8 LDA [$80],Y
    case 0xC0980A: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:9 STA $90
    case 0xC0980C: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:10 AND #$00FF
    case 0xC0980E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC0980E.
    case 0xC09810: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:11 XBA
    case 0xC09811: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:12 STA ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC09812: {
        Instruction step(cpu, 0x9D, 0x001A32u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:13 LDA $90
    case 0xC09815: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:14 AND #$FF00
    case 0xC09817: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC09817.
    case 0xC09819: {
        Instruction step(cpu, 0xFF, 0x090310u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:15 BPL @UNKNOWN0
    case 0xC0981A: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:16 ORA #$00FF
    case 0xC0981C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC09819.
    case 0xC0981D: {
        Instruction step(cpu, 0xFF, 0x9DEB00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC0981C.
    case 0xC0981E: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:18 XBA
    case 0xC0981F: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:19 STA ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC09820: {
        Instruction step(cpu, 0x9D, 0x001A22u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:19 STA ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    // Overlapping static entry reached from 0xC0981D.
    case 0xC09821: {
        Instruction step(cpu, 0x22, 0xC8C81Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:20 INY
    case 0xC09823: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:21 INY
    case 0xC09824: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/33.asm:22 RTS
    case 0xC09825: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
