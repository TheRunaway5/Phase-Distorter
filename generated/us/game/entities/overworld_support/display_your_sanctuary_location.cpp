// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/display_your_sanctuary_location.asm
bool resume_overworld_display_your_sanctuary_location(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E2D7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2D9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2DA: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2DB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E2DC.
    case 0xC4E2DE: {
        Instruction step(cpu, 0xFF, 0x29685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2DF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:7 END_STACK_VARS
    case 0xC4E2E0: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:8 AND #$0007
    case 0xC4E2E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:8 AND #$0007
    // Overlapping static entry reached from 0xC4E2DE.
    case 0xC4E2E2: {
        Instruction step(cpu, 0x07, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:8 AND #$0007
    // Overlapping static entry reached from 0xC4E2E1.
    case 0xC4E2E3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:9 STA @VIRTUAL02
    case 0xC4E2E4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:10 ASL
    case 0xC4E2E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:11 TAX
    case 0xC4E2E7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:12 LDA LOADED_YOUR_SANCTUARY_LOCATIONS,X
    case 0xC4E2E8: {
        Instruction step(cpu, 0xBD, 0x00B4BEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:13 BNE @UNKNOWN0
    case 0xC4E2EB: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:14 LDA @VIRTUAL02
    case 0xC4E2ED: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:15 JSL LOAD_YOUR_SANCTUARY_LOCATION
    case 0xC4E2EF: {
        Instruction step(cpu, 0x22, 0xC4E281u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:16 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4E2F3: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:19 JSL WAIT_DMA_FINISHED
    case 0xC4E2F7: {
        Instruction step(cpu, 0x22, 0xC08F8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E2FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E2FB.
    case 0xC4E2FD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E2FE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E300: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E300.
    case 0xC4E302: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4E303: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:22 LDY #$0800
    case 0xC4E305: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:22 LDY #$0800
    // Overlapping static entry reached from 0xC4E305.
    case 0xC4E307: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:23 LDA @VIRTUAL02
    case 0xC4E308: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:24 JSL MULT16
    case 0xC4E30A: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:25 CLC
    case 0xC4E30E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:26 ADC @VIRTUAL06
    case 0xC4E30F: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:27 STA @VIRTUAL06
    case 0xC4E311: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:28 STA @LOCAL00
    case 0xC4E313: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:29 LDA @VIRTUAL06+2
    case 0xC4E315: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:30 STA @LOCAL00+2
    case 0xC4E317: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:31 LDY #$3800
    case 0xC4E319: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:31 LDY #$3800
    // Overlapping static entry reached from 0xC4E319.
    case 0xC4E31B: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:32 LDX #$0780
    case 0xC4E31C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000080u : 0x000780u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:32 LDX #$0780
    // Overlapping static entry reached from 0xC4E31C.
    case 0xC4E31E: {
        Instruction step(cpu, 0x07, 0x0000E2u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E31F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:33 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E31E.
    case 0xC4E320: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:34 LDA #0
    case 0xC4E321: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:35 JSL PREPARE_VRAM_COPY
    case 0xC4E323: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:35 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E321.
    case 0xC4E324: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:35 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4E324.
    case 0xC4E326: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0000A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4E327: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E326.
    case 0xC4E328: {
        Instruction step(cpu, 0x00, 0x000040u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E327.
    case 0xC4E329: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4E32A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4E32C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E32C.
    case 0xC4E32E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:37 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4E32F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:38 LDY #$0200
    case 0xC4E331: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:38 LDY #$0200
    // Overlapping static entry reached from 0xC4E331.
    case 0xC4E333: {
        Instruction step(cpu, 0x02, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:39 LDA @VIRTUAL02
    case 0xC4E334: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:40 JSL MULT16
    case 0xC4E336: {
        Instruction step(cpu, 0x22, 0xC09032u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:41 CLC
    case 0xC4E33A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:42 ADC @VIRTUAL06
    case 0xC4E33B: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:43 STA @VIRTUAL06
    case 0xC4E33D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:44 STA @LOCAL00
    case 0xC4E33F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:45 LDA @VIRTUAL06+2
    case 0xC4E341: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:46 STA @LOCAL00+2
    case 0xC4E343: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:47 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4E345: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:47 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4E345.
    case 0xC4E347: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:48 LDA #.LOWORD(PALETTES)
    case 0xC4E348: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:48 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4E347.
    case 0xC4E349: {
        Instruction step(cpu, 0x00, 0x000002u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:48 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4E348.
    case 0xC4E34A: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:49 JSL MEMCPY16
    case 0xC4E34B: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:49 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4E3AD.
    case 0xC4E34C: {
        Instruction step(cpu, 0xD2, 0x00008Eu, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:49 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4E34C.
    case 0xC4E34E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000E2u : 0x0020E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC4E34F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:50 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4E34E.
    case 0xC4E350: {
        Instruction step(cpu, 0x20, 0x0008A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:51 LDA #PALETTE_UPLOAD::BG_ONLY
    case 0xC4E351: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x008D08u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:52 STA PALETTE_UPLOAD_MODE
    case 0xC4E353: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:52 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4E351.
    case 0xC4E354: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4E356: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:54 STZ SCREEN_TOP_Y
    case 0xC4E358: {
        Instruction step(cpu, 0x9C, 0x004376u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:55 STZ SCREEN_LEFT_X
    case 0xC4E35B: {
        Instruction step(cpu, 0x9C, 0x004374u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:56 STZ BG1_Y_POS
    case 0xC4E35E: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/display_your_sanctuary_location.asm:57 STZ BG1_X_POS
    case 0xC4E361: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:58 END_C_FUNCTION
    case 0xC4E364: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/display_your_sanctuary_location.asm:58 END_C_FUNCTION
    case 0xC4E365: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
