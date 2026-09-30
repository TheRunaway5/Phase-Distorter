// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/teleport_party_to_tpt_entity.asm
bool resume_text_ccs_teleport_party_to_tpt_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16FE1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FE3: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FE4: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FE5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16FE6.
    case 0xC16FE8: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FE9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16FEA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:10 TXA
    case 0xC16FEB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:11 STA @LOCAL00
    case 0xC16FEC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FEE: {
        Instruction step(cpu, 0xAD, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:13 BNE @UNKNOWN0
    case 0xC16FF1: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:14 LDA @LOCAL00
    case 0xC16FF3: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:14 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16FD0.
    case 0xC16FF4: {
        Instruction step(cpu, 0x0E, 0x0020E2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC16FF5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FF7: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16FFA: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16FFD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FFF: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:20 LDA #.LOWORD(CC_1F_EE)
    case 0xC17002: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x006FE1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:20 LDA #.LOWORD(CC_1F_EE)
    // Overlapping static entry reached from 0xC17002.
    case 0xC17004: {
        Instruction step(cpu, 0x6F, 0xE21B80u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:21 BRA @UNKNOWN1
    case 0xC17005: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC17007: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:23 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC17004.
    case 0xC17008: {
        Instruction step(cpu, 0x10, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:24 LDY #8
    case 0xC17009: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00A508u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:24 LDY #8
    // Overlapping static entry reached from 0xC17008.
    case 0xC1700A: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:25 LDA @LOCAL00
    case 0xC1700B: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC17009.
    case 0xC1700C: {
        Instruction step(cpu, 0x0E, 0x002022u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:26 JSL ASL16_ENTRY2
    case 0xC1700D: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1700C.
    case 0xC1700F: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:27 STA @VIRTUAL02
    case 0xC17011: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC17013: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:29 AND #$00FF
    case 0xC17016: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC17016.
    case 0xC17018: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:30 ORA @VIRTUAL02
    case 0xC17019: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:31 JSL UNKNOWN_C46698
    case 0xC1701B: {
        Instruction step(cpu, 0x22, 0xC4440Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:32 LDA #NULL
    case 0xC1701F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/teleport_party_to_tpt_entity.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC1701F.
    case 0xC17021: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:34 END_C_FUNCTION
    case 0xC17022: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/teleport_party_to_tpt_entity.asm:34 END_C_FUNCTION
    case 0xC17023: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
