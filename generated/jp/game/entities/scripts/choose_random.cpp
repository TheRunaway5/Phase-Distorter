// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/choose_random.asm
bool resume_overworld_actionscript_choose_random(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/actionscript/choose_random.asm:3 LDA [$80],Y
    case 0xC09F61: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:4 AND #$00FF
    case 0xC09F63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:4 AND #$00FF
    // Overlapping static entry reached from 0xC09F63.
    case 0xC09F65: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:5 STA $90
    case 0xC09F66: {
        Instruction step(cpu, 0x85, 0x000090u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:6 INY
    case 0xC09F68: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:7 STY $94
    case 0xC09F69: {
        Instruction step(cpu, 0x84, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:8 TAY
    case 0xC09F6B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:9 JSL RAND
    case 0xC09F6C: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC09F70: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:11 JSL DIVISION8S_DIVISOR_POSITIVE
    case 0xC09F72: {
        Instruction step(cpu, 0x22, 0xC0910Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC09F76: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:13 TYA
    case 0xC09F78: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:14 ASL
    case 0xC09F79: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:15 ADC $94
    case 0xC09F7A: {
        Instruction step(cpu, 0x65, 0x000094u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:16 TAY
    case 0xC09F7C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:17 LDA $90
    case 0xC09F7D: {
        Instruction step(cpu, 0xA5, 0x000090u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:18 ASL
    case 0xC09F7F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:19 ADC $94
    case 0xC09F80: {
        Instruction step(cpu, 0x65, 0x000094u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:20 STA $94
    case 0xC09F82: {
        Instruction step(cpu, 0x85, 0x000094u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:21 LDA [$80],Y
    case 0xC09F84: {
        Instruction step(cpu, 0xB7, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/choose_random.asm:22 RTL
    case 0xC09F86: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
