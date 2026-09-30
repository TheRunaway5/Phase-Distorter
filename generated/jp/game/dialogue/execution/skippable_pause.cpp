// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/skippable_pause.asm
bool resume_text_skippable_pause(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/skippable_pause.asm:3 BEGIN_C_FUNCTION
    case 0xC4983F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49841: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49842: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49843: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49844: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC49844.
    case 0xC49846: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49847: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC49848: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:9 STA @LOCAL00
    case 0xC49849: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC49846.
    case 0xC4984A: {
        Instruction step(cpu, 0x0E, 0x001380u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/skippable_pause.asm:10 BRA @UNKNOWN2
    case 0xC4984B: {
        Instruction step(cpu, 0x80, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/skippable_pause.asm:12 LDA PAD_PRESS
    case 0xC4984D: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:13 BEQ @UNKNOWN1
    case 0xC49850: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/skippable_pause.asm:14 LDA #.LOWORD(-1)
    case 0xC49852: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:14 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC49852.
    case 0xC49854: {
        Instruction step(cpu, 0xFF, 0x220E80u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/skippable_pause.asm:15 BRA @UNKNOWN3
    case 0xC49855: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/skippable_pause.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC49857: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/skippable_pause.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC49854.
    case 0xC49858: {
        Instruction step(cpu, 0x4C, 0x00C087u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/skippable_pause.asm:18 LDA @LOCAL00
    case 0xC4985B: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:19 DEC
    case 0xC4985D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/skippable_pause.asm:20 STA @LOCAL00
    case 0xC4985E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:22 BNE @UNKNOWN0
    case 0xC49860: {
        Instruction step(cpu, 0xD0, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/skippable_pause.asm:23 LDA #0
    case 0xC49862: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/skippable_pause.asm:23 LDA #0
    // Overlapping static entry reached from 0xC49862.
    case 0xC49864: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/skippable_pause.asm:25 END_C_FUNCTION
    case 0xC49865: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/skippable_pause.asm:25 END_C_FUNCTION
    case 0xC49866: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
