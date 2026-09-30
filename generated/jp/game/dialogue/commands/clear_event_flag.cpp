// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/clear_event_flag.asm
bool resume_text_ccs_clear_event_flag(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/clear_event_flag.asm:3 BEGIN_C_FUNCTION
    case 0xC146CF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC146D4.
    case 0xC146D6: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:10 TXA
    case 0xC146D9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:11 STA @LOCAL00
    case 0xC146DA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC146DC: {
        Instruction step(cpu, 0xAD, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:13 BNE @UNKNOWN0
    case 0xC146DF: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:14 LDA @LOCAL00
    case 0xC146E1: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC146E3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC146E5: {
        Instruction step(cpu, 0xAE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC146E8: {
        Instruction step(cpu, 0x9D, 0x009A6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC146EB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC146ED: {
        Instruction step(cpu, 0xEE, 0x009A7Eu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:20 LDA #.LOWORD(CC_05)
    case 0xC146F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0046CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:20 LDA #.LOWORD(CC_05)
    // Overlapping static entry reached from 0xC146F0.
    case 0xC146F2: {
        Instruction step(cpu, 0x46, 0x000080u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:21 BRA @UNKNOWN1
    case 0xC146F3: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:21 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC146F2.
    case 0xC146F4: {
        Instruction step(cpu, 0x20, 0x0010E2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC146F5: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:24 LDY #8
    case 0xC146F7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x00A508u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:25 LDA @LOCAL00
    case 0xC146F9: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC146F7.
    case 0xC146FA: {
        Instruction step(cpu, 0x0E, 0x002022u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:26 JSL ASL16_ENTRY2
    case 0xC146FB: {
        Instruction step(cpu, 0x22, 0xC09220u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC146FA.
    case 0xC146FD: {
        Instruction step(cpu, 0x92, 0x0000C0u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:27 STA @VIRTUAL02
    case 0xC146FF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC14701: {
        Instruction step(cpu, 0xAD, 0x009A6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:29 AND #$00FF
    case 0xC14704: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC14704.
    case 0xC14706: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:30 ORA @VIRTUAL02
    case 0xC14707: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:31 REP #PROC_FLAGS::INDEX8
    case 0xC14709: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:32 LDX #0
    case 0xC1470B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:32 LDX #0
    // Overlapping static entry reached from 0xC1470B.
    case 0xC1470D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:33 JSL SET_EVENT_FLAG
    case 0xC1470E: {
        Instruction step(cpu, 0x22, 0xC21506u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:34 LDA #NULL
    case 0xC14712: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/clear_event_flag.asm:34 LDA #NULL
    // Overlapping static entry reached from 0xC14712.
    case 0xC14714: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/clear_event_flag.asm:36 END_C_FUNCTION
    case 0xC14715: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/clear_event_flag.asm:36 END_C_FUNCTION
    case 0xC14716: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
