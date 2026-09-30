// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/script/41_4B.asm
bool resume_overworld_actionscript_script_41_4b(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/script/41_4B.asm:3 LDX $88
    case 0xC0974F: {
        Instruction step(cpu, 0xA6, 0x000088u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:4 LDA [$80],Y
    case 0xC09751: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:5 INY
    case 0xC09753: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:6 INY
    case 0xC09754: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:7 STA $90
    case 0xC09755: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:8 AND #$00FF
    case 0xC09757: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC09757.
    case 0xC09759: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:9 XBA
    case 0xC0975A: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:10 STA ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC0975B: {
        Instruction step(cpu, 0x9D, 0x000E22u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:11 LDA $90
    case 0xC0975E: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:12 AND #$FF00
    case 0xC09760: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00FF00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:12 AND #$FF00
    // Overlapping static entry reached from 0xC09760.
    case 0xC09762: {
        Instruction step(cpu, 0xFF, 0x090310u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:13 BPL @UNKNOWN0
    case 0xC09763: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:14 ORA #$00FF
    case 0xC09765: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09762.
    case 0xC09766: {
        Instruction step(cpu, 0xFF, 0x9DEB00u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:14 ORA #$00FF
    // Overlapping static entry reached from 0xC09765.
    case 0xC09767: {
        Instruction step(cpu, 0x00, 0x0000EBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:16 XBA
    case 0xC09768: {
        Instruction step(cpu, 0xEB, 0x000000u, 1u, AddressMode::Implied);
        step.exchange_accumulator_bytes();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:17 STA ENTITY_DELTA_Z_TABLE,X
    case 0xC09769: {
        Instruction step(cpu, 0x9D, 0x000D6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:17 STA ENTITY_DELTA_Z_TABLE,X
    // Overlapping static entry reached from 0xC09766.
    case 0xC0976A: {
        Instruction step(cpu, 0x6E, 0x00600Du, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // src/overworld/actionscript/script/41_4B.asm:18 RTS
    case 0xC0976C: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
