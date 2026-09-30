// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/intro/logo_screen.asm
bool resume_introduction_logo_screen(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/logo_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F0D2: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F0D4: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F0D5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F0D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F0D6.
    case 0xC0F0D8: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F0D9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/intro/logo_screen.asm:8 LDA #0
    case 0xC0F0DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:8 LDA #0
    // Overlapping static entry reached from 0xC0F0DA.
    case 0xC0F0DC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:9 JSR LOGO_SCREEN_LOAD
    case 0xC0F0DD: {
        Instruction step(cpu, 0x20, 0x00EF31u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:10 LDY #0
    case 0xC0F0E0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:10 LDY #0
    // Overlapping static entry reached from 0xC0F0E0.
    case 0xC0F0E2: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:11 LDX #2
    case 0xC0F0E3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:11 LDX #2
    // Overlapping static entry reached from 0xC0F0E3.
    case 0xC0F0E5: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:12 LDA #1
    case 0xC0F0E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:12 LDA #1
    // Overlapping static entry reached from 0xC0F0E6.
    case 0xC0F0E8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:13 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F0E9: {
        Instruction step(cpu, 0x22, 0xC087C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:14 LDA DEBUG
    case 0xC0F0ED: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:15 BEQ @UNKNOWN0
    case 0xC0F0F0: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/logo_screen.asm:16 LDA #180
    case 0xC0F0F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B4u : 0x0000B4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:16 LDA #180
    // Overlapping static entry reached from 0xC0F0F2.
    case 0xC0F0F4: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:17 JSR UNKNOWN_C0EFE1
    case 0xC0F0F5: {
        Instruction step(cpu, 0x20, 0x00F0AAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:18 BRA @UNKNOWN3
    case 0xC0F0F8: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/logo_screen.asm:20 LDX #0
    case 0xC0F0FA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:20 LDX #0
    // Overlapping static entry reached from 0xC0F0FA.
    case 0xC0F0FC: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:21 STX @LOCAL00
    case 0xC0F0FD: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:22 BRA @UNKNOWN2
    case 0xC0F0FF: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/logo_screen.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F101: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:25 LDX @LOCAL00
    case 0xC0F105: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:26 INX
    case 0xC0F107: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:27 STX @LOCAL00
    case 0xC0F108: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:29 CPX #180
    case 0xC0F10A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000B4u : 0x0000B4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:29 CPX #180
    // Overlapping static entry reached from 0xC0F10A.
    case 0xC0F10C: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:30 BCC @UNKNOWN1
    case 0xC0F10D: {
        Instruction step(cpu, 0x90, 0x0000F2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/logo_screen.asm:32 LDY #0
    case 0xC0F10F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:32 LDY #0
    // Overlapping static entry reached from 0xC0F10F.
    case 0xC0F111: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:33 LDX #2
    case 0xC0F112: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:33 LDX #2
    // Overlapping static entry reached from 0xC0F112.
    case 0xC0F114: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:34 LDA #1
    case 0xC0F115: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:34 LDA #1
    // Overlapping static entry reached from 0xC0F115.
    case 0xC0F117: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:35 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F118: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:36 LDA #1
    case 0xC0F11C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:36 LDA #1
    // Overlapping static entry reached from 0xC0F11C.
    case 0xC0F11E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:37 JSR LOGO_SCREEN_LOAD
    case 0xC0F11F: {
        Instruction step(cpu, 0x20, 0x00EF31u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:38 LDY #0
    case 0xC0F122: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:38 LDY #0
    // Overlapping static entry reached from 0xC0F122.
    case 0xC0F124: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:39 LDX #2
    case 0xC0F125: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:39 LDX #2
    // Overlapping static entry reached from 0xC0F125.
    case 0xC0F127: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:40 LDA #1
    case 0xC0F128: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:40 LDA #1
    // Overlapping static entry reached from 0xC0F128.
    case 0xC0F12A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:41 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F12B: {
        Instruction step(cpu, 0x22, 0xC087C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:42 LDA #120
    case 0xC0F12F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:42 LDA #120
    // Overlapping static entry reached from 0xC0F12F.
    case 0xC0F131: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:43 JSR UNKNOWN_C0EFE1
    case 0xC0F132: {
        Instruction step(cpu, 0x20, 0x00F0AAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:44 CMP #0
    case 0xC0F135: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:44 CMP #0
    // Overlapping static entry reached from 0xC0F135.
    case 0xC0F137: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:45 BEQ @UNKNOWN4
    case 0xC0F138: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/logo_screen.asm:46 LDY #0
    case 0xC0F13A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:46 LDY #0
    // Overlapping static entry reached from 0xC0F13A.
    case 0xC0F13C: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:47 LDX #1
    case 0xC0F13D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:47 LDX #1
    // Overlapping static entry reached from 0xC0F13D.
    case 0xC0F13F: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:48 LDA #2
    case 0xC0F140: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:48 LDA #2
    // Overlapping static entry reached from 0xC0F140.
    case 0xC0F142: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:49 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F143: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:50 LDA #1
    case 0xC0F147: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:50 LDA #1
    // Overlapping static entry reached from 0xC0F147.
    case 0xC0F149: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:51 BRA @UNKNOWN6
    case 0xC0F14A: {
        Instruction step(cpu, 0x80, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/logo_screen.asm:53 LDY #0
    case 0xC0F14C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:53 LDY #0
    // Overlapping static entry reached from 0xC0F14C.
    case 0xC0F14E: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:54 LDX #2
    case 0xC0F14F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:54 LDX #2
    // Overlapping static entry reached from 0xC0F14F.
    case 0xC0F151: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:55 LDA #1
    case 0xC0F152: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:55 LDA #1
    // Overlapping static entry reached from 0xC0F152.
    case 0xC0F154: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:56 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F155: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:57 LDA #2
    case 0xC0F159: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:57 LDA #2
    // Overlapping static entry reached from 0xC0F159.
    case 0xC0F15B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:58 JSR LOGO_SCREEN_LOAD
    case 0xC0F15C: {
        Instruction step(cpu, 0x20, 0x00EF31u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:59 LDY #0
    case 0xC0F15F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:59 LDY #0
    // Overlapping static entry reached from 0xC0F15F.
    case 0xC0F161: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:60 LDX #2
    case 0xC0F162: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:60 LDX #2
    // Overlapping static entry reached from 0xC0F162.
    case 0xC0F164: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:61 LDA #1
    case 0xC0F165: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:61 LDA #1
    // Overlapping static entry reached from 0xC0F165.
    case 0xC0F167: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:62 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F168: {
        Instruction step(cpu, 0x22, 0xC087C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:63 LDA #120
    case 0xC0F16C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:63 LDA #120
    // Overlapping static entry reached from 0xC0F16C.
    case 0xC0F16E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:64 JSR UNKNOWN_C0EFE1
    case 0xC0F16F: {
        Instruction step(cpu, 0x20, 0x00F0AAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:65 CMP #0
    case 0xC0F172: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:65 CMP #0
    // Overlapping static entry reached from 0xC0F172.
    case 0xC0F174: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:66 BEQ @UNKNOWN5
    case 0xC0F175: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/logo_screen.asm:67 LDY #0
    case 0xC0F177: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:67 LDY #0
    // Overlapping static entry reached from 0xC0F177.
    case 0xC0F179: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:68 LDX #1
    case 0xC0F17A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:68 LDX #1
    // Overlapping static entry reached from 0xC0F17A.
    case 0xC0F17C: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:69 LDA #2
    case 0xC0F17D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:69 LDA #2
    // Overlapping static entry reached from 0xC0F17D.
    case 0xC0F17F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:70 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F180: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:71 LDA #1
    case 0xC0F184: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:71 LDA #1
    // Overlapping static entry reached from 0xC0F184.
    case 0xC0F186: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:72 BRA @UNKNOWN6
    case 0xC0F187: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/logo_screen.asm:74 LDY #0
    case 0xC0F189: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:74 LDY #0
    // Overlapping static entry reached from 0xC0F189.
    case 0xC0F18B: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:75 LDX #2
    case 0xC0F18C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:75 LDX #2
    // Overlapping static entry reached from 0xC0F18C.
    case 0xC0F18E: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:76 LDA #1
    case 0xC0F18F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:76 LDA #1
    // Overlapping static entry reached from 0xC0F18F.
    case 0xC0F191: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:77 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F192: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:78 LDA #0
    case 0xC0F196: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:78 LDA #0
    // Overlapping static entry reached from 0xC0F196.
    case 0xC0F198: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/logo_screen.asm:80 END_C_FUNCTION
    case 0xC0F199: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/logo_screen.asm:80 END_C_FUNCTION
    case 0xC0F19A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
