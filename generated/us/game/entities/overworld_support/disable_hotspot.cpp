// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/disable_hotspot.asm
bool resume_overworld_disable_hotspot(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/disable_hotspot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC071E5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071E7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071E8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071E9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC071EA.
    case 0xC071EC: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071ED: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/disable_hotspot.asm:7 END_STACK_VARS
    case 0xC071EE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:8 TAX
    case 0xC071EF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:9 DEX
    case 0xC071F0: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:10 STX @LOCAL00
    case 0xC071F1: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:11 TXA
    case 0xC071F3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071F4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071F6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071F7: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071F9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071FA: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/disable_hotspot.asm:12 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC071FC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:13 CLC
    case 0xC071FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:14 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC071FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Cu : 0x005E3Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:14 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC071FE.
    case 0xC07200: {
        Instruction step(cpu, 0x5E, 0x00A9AAu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:15 TAX
    case 0xC07201: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:16 LDA #0
    case 0xC07202: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:16 LDA #0
    // Overlapping static entry reached from 0xC07200.
    case 0xC07203: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:16 LDA #0
    // Overlapping static entry reached from 0xC07202.
    case 0xC07204: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:17 STA a:active_hotspot::mode,X
    case 0xC07205: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:18 LDX @LOCAL00
    case 0xC07208: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC0720A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:28 STZ GAME_STATE + game_state::active_hotspot_modes,X
    case 0xC0720C: {
        Instruction step(cpu, 0x9E, 0x0098BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/disable_hotspot.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC0720F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/disable_hotspot.asm:31 END_C_FUNCTION
    case 0xC07211: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/disable_hotspot.asm:31 END_C_FUNCTION
    case 0xC07212: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
