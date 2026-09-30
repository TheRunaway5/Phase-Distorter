// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/script/2F.asm
bool resume_overworld_actionscript_script_2f(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/2F.asm:3 LDX $88
    case 0xC09771: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:4 LDA [$80],Y
    case 0xC09773: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:5 INY
    case 0xC09775: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:6 INY
    case 0xC09776: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:7 STA $90
    case 0xC09777: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:8 AND #$00FF
    case 0xC09779: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09779.
    case 0xC0977B: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:9 XBA
    case 0xC0977C: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:10 CLC
    case 0xC0977D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:11 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0977E: {
        Instruction step(cpu, 0x7D, 0x000DDCu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:12 STA ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC09781: {
        Instruction step(cpu, 0x9D, 0x000DDCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:13 LDA $90
    case 0xC09784: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:14 AND #$FF00
    case 0xC09786: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:14 AND #$FF00
    // Overlapping static entry reached from 0xC09786.
    case 0xC09788: {
        Instruction step(cpu, 0xFF, 0x090310u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:15 BPL @UNKNOWN0
    case 0xC09789: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    case 0xC0978B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC09788.
    case 0xC0978C: {
        Instruction step(cpu, 0xFF, 0x7DEB00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:16 ORA #$00FF
    // Overlapping static entry reached from 0xC0978B.
    case 0xC0978D: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:18 XBA
    case 0xC0978E: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:19 ADC ENTITY_DELTA_Y_TABLE,X
    case 0xC0978F: {
        Instruction step(cpu, 0x7D, 0x000D28u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:19 ADC ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC0978C.
    case 0xC09790: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:19 ADC ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC09790.
    case 0xC09791: {
        Instruction step(cpu, 0x0D, 0x00289Du, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:20 STA ENTITY_DELTA_Y_TABLE,X
    case 0xC09792: {
        Instruction step(cpu, 0x9D, 0x000D28u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:20 STA ENTITY_DELTA_Y_TABLE,X
    // Overlapping static entry reached from 0xC09791.
    case 0xC09794: {
        Instruction step(cpu, 0x0D, 0x00A660u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/2F.asm:21 RTS
    case 0xC09795: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
