// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/3F_49.asm
bool resume_overworld_actionscript_script_3f_49(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/3F_49.asm:3 LDX $88
    case 0xC09713: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:4 LDA [$80],Y
    case 0xC09715: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:5 INY
    case 0xC09717: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:6 INY
    case 0xC09718: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:7 STA $90
    case 0xC09719: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:8 AND #$00FF
    case 0xC0971B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC0971B.
    case 0xC0971D: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:9 XBA
    case 0xC0971E: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:10 STA ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC0971F: {
        Instruction step(cpu, 0x9D, 0x000DAAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:11 LDA $90
    case 0xC09722: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:12 AND #$FF00
    case 0xC09724: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:12 AND #$FF00
    // Overlapping static entry reached from 0xC09724.
    case 0xC09726: {
        Instruction step(cpu, 0xFF, 0x090310u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:13 BPL @UNKNOWN0
    case 0xC09727: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:14 ORA #$00FF
    case 0xC09729: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09726.
    case 0xC0972A: {
        Instruction step(cpu, 0xFF, 0x9DEB00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09729.
    case 0xC0972B: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:16 XBA
    case 0xC0972C: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:17 STA ENTITY_DELTA_X_TABLE,X
    case 0xC0972D: {
        Instruction step(cpu, 0x9D, 0x000CF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:17 STA ENTITY_DELTA_X_TABLE,X
    // Overlapping static entry reached from 0xC0972A.
    case 0xC0972E: {
        Instruction step(cpu, 0xF6, 0x00000Cu, 2u, AddressMode::DirectPageIndexedX);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/script/3F_49.asm:18 RTS
    case 0xC09730: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
