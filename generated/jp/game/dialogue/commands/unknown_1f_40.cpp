// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/unknown_1F_40.asm
bool resume_text_ccs_unknown_1f_40(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/unknown_1F_40.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1753C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:4 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1753E: {
        Instruction step(cpu, 0xAD, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:5 BNE @UNKNOWN0
    case 0xC17541: {
        Instruction step(cpu, 0xD0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:6 TXA
    case 0xC17543: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC17544: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:8 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17546: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:9 STA CC_ARGUMENT_STORAGE,X
    case 0xC17549: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC1754C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:11 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1754E: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:12 LDA #.LOWORD(CC_1F_40)
    case 0xC17551: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00753Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:12 LDA #.LOWORD(CC_1F_40)
    // Overlapping static entry reached from 0xC17551.
    case 0xC17553: {
        Instruction step(cpu, 0x75, 0x000080u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:13 BRA @UNKNOWN1
    case 0xC17554: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:13 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC17553.
    case 0xC17555: {
        Instruction step(cpu, 0x03, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    case 0xC17556: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC17555.
    case 0xC17557: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC17556.
    case 0xC17558: {
        Instruction step(cpu, 0x00, 0x000060u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1F_40.asm:17 RTS
    case 0xC17559: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
