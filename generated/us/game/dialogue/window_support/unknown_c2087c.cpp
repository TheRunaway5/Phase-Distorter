// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C2/C2087C.asm
bool resume_unresolved_c2_c2087c(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2087C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2087C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC2087E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC2087F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC20880: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC20880.
    case 0xC20882: {
        Instruction step(cpu, 0xFF, 0xC9AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2087C.asm:6 END_STACK_VARS
    case 0xC20883: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:7 LDA RENDER_HPPP_WINDOWS
    case 0xC20884: {
        Instruction step(cpu, 0xAD, 0x0089C9u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:7 LDA RENDER_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC20882.
    case 0xC20886: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000029u : 0x00FF29u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:8 AND #$00FF
    case 0xC20887: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC20886.
    case 0xC20888: {
        Instruction step(cpu, 0xFF, 0x03F000u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC20887.
    case 0xC20889: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:9 BEQ @UNKNOWN0
    case 0xC2088A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:10 JSR UNKNOWN_C2077D
    case 0xC2088C: {
        Instruction step(cpu, 0x20, 0x00077Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:12 LDA WINDOW_HEAD
    case 0xC2088F: {
        Instruction step(cpu, 0xAD, 0x0088E0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:13 CMP #$FFFF
    case 0xC20892: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC20892.
    case 0xC20894: {
        Instruction step(cpu, 0xFF, 0xAC1FF0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:14 BEQ @UNKNOWN2
    case 0xC20895: {
        Instruction step(cpu, 0xF0, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:15 LDY WINDOW_HEAD
    case 0xC20897: {
        Instruction step(cpu, 0xAC, 0x0088E0u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:15 LDY WINDOW_HEAD
    // Overlapping static entry reached from 0xC20894.
    case 0xC20898: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000088u : 0x008488u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:16 STY @LOCAL00
    case 0xC2089A: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:16 STY @LOCAL00
    // Overlapping static entry reached from 0xC20898.
    case 0xC2089B: {
        Instruction step(cpu, 0x0E, 0x002298u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:18 TYA
    case 0xC2089C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:19 JSL UNKNOWN_C107AF
    case 0xC2089D: {
        Instruction step(cpu, 0x22, 0xC107AFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:19 JSL UNKNOWN_C107AF
    // Overlapping static entry reached from 0xC2089B.
    case 0xC2089E: {
        Instruction step(cpu, 0xAF, 0xA4C107u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:20 LDY @LOCAL00
    case 0xC208A1: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:20 LDY @LOCAL00
    // Overlapping static entry reached from 0xC2089E.
    case 0xC208A2: {
        Instruction step(cpu, 0x0E, 0x00A098u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:21 TYA
    case 0xC208A3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:22 LDY #.SIZEOF(window_stats)
    case 0xC208A4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000052u : 0x000052u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:22 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC208A2.
    case 0xC208A5: {
        Instruction step(cpu, 0x52, 0x000000u, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:22 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC208A4.
    case 0xC208A6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:23 JSL MULT168
    case 0xC208A7: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:24 TAX
    case 0xC208AB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:25 LDY WINDOW_STATS+window_stats::next,X
    case 0xC208AC: {
        Instruction step(cpu, 0xBC, 0x008652u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:26 STY @LOCAL00
    case 0xC208AF: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:27 CPY #$FFFF
    case 0xC208B1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:27 CPY #$FFFF
    // Overlapping static entry reached from 0xC208B1.
    case 0xC208B3: {
        Instruction step(cpu, 0xFF, 0x2BE6D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C2/C2087C.asm:28 BNE @UNKNOWN1
    case 0xC208B4: {
        Instruction step(cpu, 0xD0, 0x0000E6u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2087C.asm:30 END_C_FUNCTION
    case 0xC208B6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2087C.asm:30 END_C_FUNCTION
    case 0xC208B7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
