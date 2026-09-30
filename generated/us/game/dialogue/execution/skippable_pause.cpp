// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/skippable_pause.asm
bool resume_text_skippable_pause(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/skippable_pause.asm:3 BEGIN_C_FUNCTION
    case 0xC4C567: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C569: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C56A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C56B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C56C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C56C.
    case 0xC4C56E: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C56F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C570: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:9 STA @LOCAL00
    case 0xC4C571: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC4C56E.
    case 0xC4C572: {
        Instruction step(cpu, 0x0E, 0x001380u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/skippable_pause.asm:10 BRA @UNKNOWN2
    case 0xC4C573: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/skippable_pause.asm:12 LDA PAD_PRESS
    case 0xC4C575: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:13 BEQ @UNKNOWN1
    case 0xC4C578: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/skippable_pause.asm:14 LDA #.LOWORD(-1)
    case 0xC4C57A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:14 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C57A.
    case 0xC4C57C: {
        Instruction step(cpu, 0xFF, 0x220E80u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/skippable_pause.asm:15 BRA @UNKNOWN3
    case 0xC4C57D: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/skippable_pause.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4C57F: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/skippable_pause.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC4C57C.
    case 0xC4C580: {
        Instruction step(cpu, 0x56, 0x000087u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/skippable_pause.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC4C580.
    case 0xC4C582: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A5u : 0x000EA5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/skippable_pause.asm:18 LDA @LOCAL00
    case 0xC4C583: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:18 LDA @LOCAL00
    // Overlapping static entry reached from 0xC4C582.
    case 0xC4C584: {
        Instruction step(cpu, 0x0E, 0x00853Au, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/skippable_pause.asm:19 DEC
    case 0xC4C585: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/skippable_pause.asm:20 STA @LOCAL00
    case 0xC4C586: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:20 STA @LOCAL00
    // Overlapping static entry reached from 0xC4C584.
    case 0xC4C587: {
        Instruction step(cpu, 0x0E, 0x00EBD0u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/skippable_pause.asm:22 BNE @UNKNOWN0
    case 0xC4C588: {
        Instruction step(cpu, 0xD0, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/skippable_pause.asm:23 LDA #0
    case 0xC4C58A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:23 LDA #0
    // Overlapping static entry reached from 0xC4C58A.
    case 0xC4C58C: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/skippable_pause.asm:25 END_C_FUNCTION
    case 0xC4C58D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/skippable_pause.asm:25 END_C_FUNCTION
    case 0xC4C58E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
