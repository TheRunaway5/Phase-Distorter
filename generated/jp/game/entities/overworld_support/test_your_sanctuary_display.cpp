// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/test_your_sanctuary_display.asm
bool resume_overworld_test_your_sanctuary_display(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B573: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:7 END_STACK_VARS
    case 0xC4B575: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:7 END_STACK_VARS
    case 0xC4B576: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:7 END_STACK_VARS
    case 0xC4B577: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B577.
    case 0xC4B579: {
        Instruction step(cpu, 0xFF, 0xA9225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:7 END_STACK_VARS
    case 0xC4B57A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:8 JSL INITIALIZE_YOUR_SANCTUARY_DISPLAY
    case 0xC4B57B: {
        Instruction step(cpu, 0x22, 0xC4B0A9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:8 JSL INITIALIZE_YOUR_SANCTUARY_DISPLAY
    // Overlapping static entry reached from 0xC4B579.
    case 0xC4B57D: {
        Instruction step(cpu, 0xB0, 0x0000C4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:9 LDX #0
    case 0xC4B57F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:9 LDX #0
    // Overlapping static entry reached from 0xC4B57F.
    case 0xC4B581: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:10 STX @LOCATION
    case 0xC4B582: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:12 STZ BG1_Y_POS
    case 0xC4B584: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:13 STZ BG1_X_POS
    case 0xC4B587: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:14 JSL UPDATE_SCREEN
    case 0xC4B58A: {
        Instruction step(cpu, 0x22, 0xC08B17u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:15 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4B58E: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:16 LDA PAD_STATE
    case 0xC4B592: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:17 AND #PAD::R_BUTTON
    case 0xC4B595: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:17 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC4B5F7.
    case 0xC4B596: {
        Instruction step(cpu, 0x10, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:17 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC4B595.
    case 0xC4B597: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:18 BNE @UNKNOWN0
    case 0xC4B598: {
        Instruction step(cpu, 0xD0, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:19 LDX @LOCATION
    case 0xC4B59A: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:20 TXA
    case 0xC4B59C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:21 JSL DISPLAY_YOUR_SANCTUARY_LOCATION
    case 0xC4B59D: {
        Instruction step(cpu, 0x22, 0xC4B4E8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:22 JSL ENABLE_YOUR_SANCTUARY_DISPLAY
    case 0xC4B5A1: {
        Instruction step(cpu, 0x22, 0xC4B0E1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:23 LDX @LOCATION
    case 0xC4B5A5: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:24 INX
    case 0xC4B5A7: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:25 STX @LOCATION
    case 0xC4B5A8: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:26 CPX #8
    case 0xC4B5AA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:26 CPX #8
    // Overlapping static entry reached from 0xC4B5AA.
    case 0xC4B5AC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:27 BNE @UNKNOWN0
    case 0xC4B5AD: {
        Instruction step(cpu, 0xD0, 0x0000D5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:28 LDX #0
    case 0xC4B5AF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:28 LDX #0
    // Overlapping static entry reached from 0xC4B5AF.
    case 0xC4B5B1: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:29 STX @LOCATION
    case 0xC4B5B2: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/test_your_sanctuary_display.asm:30 BRA @UNKNOWN0
    case 0xC4B5B4: {
        Instruction step(cpu, 0x80, 0x0000CEu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    default: return false;
    }
}
}
