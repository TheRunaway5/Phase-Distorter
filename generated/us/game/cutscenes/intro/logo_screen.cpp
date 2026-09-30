// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/intro/logo_screen.asm
bool resume_introduction_logo_screen(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/logo_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F009: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F00B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F00C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F00D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F00D.
    case 0xC0F00F: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F010: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/intro/logo_screen.asm:8 LDA #0
    case 0xC0F011: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:8 LDA #0
    // Overlapping static entry reached from 0xC0F011.
    case 0xC0F013: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:9 JSR LOGO_SCREEN_LOAD
    case 0xC0F014: {
        Instruction step(cpu, 0x20, 0x00EE68u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:10 LDY #0
    case 0xC0F017: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:10 LDY #0
    // Overlapping static entry reached from 0xC0F017.
    case 0xC0F019: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:11 LDX #2
    case 0xC0F01A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:11 LDX #2
    // Overlapping static entry reached from 0xC0F01A.
    case 0xC0F01C: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:12 LDA #1
    case 0xC0F01D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:12 LDA #1
    // Overlapping static entry reached from 0xC0F01D.
    case 0xC0F01F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:13 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F020: {
        Instruction step(cpu, 0x22, 0xC087CEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:14 LDA DEBUG
    case 0xC0F024: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:15 BEQ @UNKNOWN0
    case 0xC0F027: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/logo_screen.asm:16 LDA #180
    case 0xC0F029: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B4u : 0x0000B4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:16 LDA #180
    // Overlapping static entry reached from 0xC0F029.
    case 0xC0F02B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:17 JSR UNKNOWN_C0EFE1
    case 0xC0F02C: {
        Instruction step(cpu, 0x20, 0x00EFE1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:18 BRA @UNKNOWN3
    case 0xC0F02F: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/logo_screen.asm:20 LDX #0
    case 0xC0F031: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:20 LDX #0
    // Overlapping static entry reached from 0xC0F031.
    case 0xC0F033: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:21 STX @LOCAL00
    case 0xC0F034: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:22 BRA @UNKNOWN2
    case 0xC0F036: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/logo_screen.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F038: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:25 LDX @LOCAL00
    case 0xC0F03C: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:26 INX
    case 0xC0F03E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:27 STX @LOCAL00
    case 0xC0F03F: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:29 CPX #180
    case 0xC0F041: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x0000B4u : 0x0000B4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:29 CPX #180
    // Overlapping static entry reached from 0xC0F041.
    case 0xC0F043: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:30 BCC @UNKNOWN1
    case 0xC0F044: {
        Instruction step(cpu, 0x90, 0x0000F2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/intro/logo_screen.asm:32 LDY #0
    case 0xC0F046: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:32 LDY #0
    // Overlapping static entry reached from 0xC0F046.
    case 0xC0F048: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:33 LDX #2
    case 0xC0F049: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:33 LDX #2
    // Overlapping static entry reached from 0xC0F049.
    case 0xC0F04B: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:34 LDA #1
    case 0xC0F04C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:34 LDA #1
    // Overlapping static entry reached from 0xC0F04C.
    case 0xC0F04E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:35 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F04F: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:36 LDA #1
    case 0xC0F053: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:36 LDA #1
    // Overlapping static entry reached from 0xC0F053.
    case 0xC0F055: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:37 JSR LOGO_SCREEN_LOAD
    case 0xC0F056: {
        Instruction step(cpu, 0x20, 0x00EE68u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:38 LDY #0
    case 0xC0F059: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:38 LDY #0
    // Overlapping static entry reached from 0xC0F059.
    case 0xC0F05B: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:39 LDX #2
    case 0xC0F05C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:39 LDX #2
    // Overlapping static entry reached from 0xC0F05C.
    case 0xC0F05E: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:40 LDA #1
    case 0xC0F05F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:40 LDA #1
    // Overlapping static entry reached from 0xC0F05F.
    case 0xC0F061: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:41 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F062: {
        Instruction step(cpu, 0x22, 0xC087CEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:42 LDA #120
    case 0xC0F066: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:42 LDA #120
    // Overlapping static entry reached from 0xC0F066.
    case 0xC0F068: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:43 JSR UNKNOWN_C0EFE1
    case 0xC0F069: {
        Instruction step(cpu, 0x20, 0x00EFE1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:44 CMP #0
    case 0xC0F06C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:44 CMP #0
    // Overlapping static entry reached from 0xC0F06C.
    case 0xC0F06E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:45 BEQ @UNKNOWN4
    case 0xC0F06F: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/logo_screen.asm:46 LDY #0
    case 0xC0F071: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:46 LDY #0
    // Overlapping static entry reached from 0xC0F071.
    case 0xC0F073: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:47 LDX #1
    case 0xC0F074: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:47 LDX #1
    // Overlapping static entry reached from 0xC0F074.
    case 0xC0F076: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:48 LDA #2
    case 0xC0F077: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:48 LDA #2
    // Overlapping static entry reached from 0xC0F077.
    case 0xC0F079: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:49 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F07A: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:50 LDA #1
    case 0xC0F07E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:50 LDA #1
    // Overlapping static entry reached from 0xC0F07E.
    case 0xC0F080: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:51 BRA @UNKNOWN6
    case 0xC0F081: {
        Instruction step(cpu, 0x80, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/logo_screen.asm:53 LDY #0
    case 0xC0F083: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:53 LDY #0
    // Overlapping static entry reached from 0xC0F083.
    case 0xC0F085: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:54 LDX #2
    case 0xC0F086: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:54 LDX #2
    // Overlapping static entry reached from 0xC0F086.
    case 0xC0F088: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:55 LDA #1
    case 0xC0F089: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:55 LDA #1
    // Overlapping static entry reached from 0xC0F089.
    case 0xC0F08B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:56 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F08C: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:57 LDA #2
    case 0xC0F090: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:57 LDA #2
    // Overlapping static entry reached from 0xC0F090.
    case 0xC0F092: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:58 JSR LOGO_SCREEN_LOAD
    case 0xC0F093: {
        Instruction step(cpu, 0x20, 0x00EE68u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:59 LDY #0
    case 0xC0F096: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:59 LDY #0
    // Overlapping static entry reached from 0xC0F096.
    case 0xC0F098: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:60 LDX #2
    case 0xC0F099: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:60 LDX #2
    // Overlapping static entry reached from 0xC0F099.
    case 0xC0F09B: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:61 LDA #1
    case 0xC0F09C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:61 LDA #1
    // Overlapping static entry reached from 0xC0F09C.
    case 0xC0F09E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:62 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F09F: {
        Instruction step(cpu, 0x22, 0xC087CEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:63 LDA #120
    case 0xC0F0A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:63 LDA #120
    // Overlapping static entry reached from 0xC0F0A3.
    case 0xC0F0A5: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:64 JSR UNKNOWN_C0EFE1
    case 0xC0F0A6: {
        Instruction step(cpu, 0x20, 0x00EFE1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/intro/logo_screen.asm:65 CMP #0
    case 0xC0F0A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:65 CMP #0
    // Overlapping static entry reached from 0xC0F0A9.
    case 0xC0F0AB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:66 BEQ @UNKNOWN5
    case 0xC0F0AC: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/intro/logo_screen.asm:67 LDY #0
    case 0xC0F0AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:67 LDY #0
    // Overlapping static entry reached from 0xC0F0AE.
    case 0xC0F0B0: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:68 LDX #1
    case 0xC0F0B1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:68 LDX #1
    // Overlapping static entry reached from 0xC0F0B1.
    case 0xC0F0B3: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:69 LDA #2
    case 0xC0F0B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:69 LDA #2
    // Overlapping static entry reached from 0xC0F0B4.
    case 0xC0F0B6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:70 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F0B7: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:71 LDA #1
    case 0xC0F0BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:71 LDA #1
    // Overlapping static entry reached from 0xC0F0BB.
    case 0xC0F0BD: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:72 BRA @UNKNOWN6
    case 0xC0F0BE: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/intro/logo_screen.asm:74 LDY #0
    case 0xC0F0C0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/intro/logo_screen.asm:74 LDY #0
    // Overlapping static entry reached from 0xC0F0C0.
    case 0xC0F0C2: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:75 LDX #2
    case 0xC0F0C3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/intro/logo_screen.asm:75 LDX #2
    // Overlapping static entry reached from 0xC0F0C3.
    case 0xC0F0C5: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:76 LDA #1
    case 0xC0F0C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:76 LDA #1
    // Overlapping static entry reached from 0xC0F0C6.
    case 0xC0F0C8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/intro/logo_screen.asm:77 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F0C9: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/intro/logo_screen.asm:78 LDA #0
    case 0xC0F0CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/intro/logo_screen.asm:78 LDA #0
    // Overlapping static entry reached from 0xC0F0CD.
    case 0xC0F0CF: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/logo_screen.asm:80 END_C_FUNCTION
    case 0xC0F0D0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/logo_screen.asm:80 END_C_FUNCTION
    case 0xC0F0D1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
