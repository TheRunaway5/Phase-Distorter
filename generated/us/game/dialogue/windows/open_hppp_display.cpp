// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/open_hppp_display.asm
bool resume_text_open_hppp_display(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/open_hppp_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13CA1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:5 JSL UNKNOWN_C0943C
    case 0xC13CA3: {
        Instruction step(cpu, 0x22, 0xC0943Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:6 LDA #SFX::CURSOR1
    case 0xC13CA7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:6 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC13CA7.
    case 0xC13CA9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:7 JSL PLAY_SOUND
    case 0xC13CAA: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:8 JSR UNKNOWN_C1134B
    case 0xC13CAE: {
        Instruction step(cpu, 0x20, 0x00134Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:10 JSL WINDOW_TICK
    case 0xC13CB1: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:11 LDA PAD_PRESS
    case 0xC13CB5: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:12 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC13CB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:12 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC13CB8.
    case 0xC13CBA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:13 BEQ @UNKNOWN1
    case 0xC13CBB: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:14 JSL OPEN_MENU_BUTTON
    case 0xC13CBD: {
        Instruction step(cpu, 0x22, 0xC134A7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:15 BRA @UNKNOWN2
    case 0xC13CC1: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:17 LDA PAD_PRESS
    case 0xC13CC3: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:18 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC13CC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:18 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC13CC6.
    case 0xC13CC8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000F0u : 0x00E6F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:19 BEQ @UNKNOWN0
    case 0xC13CC9: {
        Instruction step(cpu, 0xF0, 0x0000E6u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:19 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC13CC8.
    case 0xC13CCA: {
        Instruction step(cpu, 0xE6, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:20 LDA #SFX::CURSOR2
    case 0xC13CCB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:20 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC13CCA.
    case 0xC13CCC: {
        Instruction step(cpu, 0x02, 0x000000u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:20 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC13CCB.
    case 0xC13CCD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:21 JSL PLAY_SOUND
    case 0xC13CCE: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:22 JSR CLEAR_INSTANT_PRINTING
    case 0xC13CD2: {
        Instruction step(cpu, 0x22, 0xC3E4CAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:23 JSR HIDE_HPPP_WINDOWS
    case 0xC13CD6: {
        Instruction step(cpu, 0x20, 0x000A1Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:24 JSR UNKNOWN_C1008E
    case 0xC13CD9: {
        Instruction step(cpu, 0x20, 0x00008Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:25 JSL WINDOW_TICK
    case 0xC13CDC: {
        Instruction step(cpu, 0x22, 0xC12DD5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/open_hppp_display.asm:26 JSL UNKNOWN_C09451
    case 0xC13CE0: {
        Instruction step(cpu, 0x22, 0xC09451u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/open_hppp_display.asm:28 END_C_FUNCTION
    case 0xC13CE4: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
