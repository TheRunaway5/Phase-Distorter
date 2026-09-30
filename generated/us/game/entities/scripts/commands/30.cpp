// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/30.asm
bool resume_overworld_actionscript_script_30(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/30.asm:3 LDX $88
    case 0xC097B7: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:4 LDA [$80],Y
    case 0xC097B9: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:5 INY
    case 0xC097BB: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:6 INY
    case 0xC097BC: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:7 STA $90
    case 0xC097BD: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:8 AND #$00FF
    case 0xC097BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC097BF.
    case 0xC097C1: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:9 XBA
    case 0xC097C2: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:10 CLC
    case 0xC097C3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:11 ADC ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC097C4: {
        Instruction step(cpu, 0x7D, 0x000E22u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:12 STA ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC097C7: {
        Instruction step(cpu, 0x9D, 0x000E22u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:13 LDA $90
    case 0xC097CA: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:14 AND #$FF00
    case 0xC097CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC097CC.
    case 0xC097CE: {
        Instruction step(cpu, 0xFF, 0x090310u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:15 BPL @UNKNOWN0
    case 0xC097CF: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:16 ORA #$00FF
    case 0xC097D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097CE.
    case 0xC097D2: {
        Instruction step(cpu, 0xFF, 0x7DEB00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC097D1.
    case 0xC097D3: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:18 XBA
    case 0xC097D4: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:19 ADC ENTITY_DELTA_Z_TABLE,X
    case 0xC097D5: {
        Instruction step(cpu, 0x7D, 0x000D6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:19 ADC ENTITY_DELTA_Z_TABLE,X
    // Overlapping static entry reached from 0xC097D2.
    case 0xC097D6: {
        Instruction step(cpu, 0x6E, 0x009D0Du, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:20 STA ENTITY_DELTA_Z_TABLE,X
    case 0xC097D8: {
        Instruction step(cpu, 0x9D, 0x000D6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:20 STA ENTITY_DELTA_Z_TABLE,X
    // Overlapping static entry reached from 0xC097D6.
    case 0xC097D9: {
        Instruction step(cpu, 0x6E, 0x00600Du, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/overworld/actionscript/script/30.asm:21 RTS
    case 0xC097DB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
