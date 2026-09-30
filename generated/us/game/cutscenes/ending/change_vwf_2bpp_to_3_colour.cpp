// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/change_vwf_2bpp_to_3_colour.asm
bool resume_ending_change_vwf_2bpp_to_3_colour(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EEE1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEE3: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEE4: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEE5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EEE6.
    case 0xC4EEE8: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEE9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:9 END_STACK_VARS
    case 0xC4EEEA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:10 STA @VIRTUAL04
    case 0xC4EEEB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:10 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4EEE8.
    case 0xC4EEEC: {
        Instruction step(cpu, 0x04, 0x0000A2u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:11 LDX #.LOWORD(VWF_BUFFER)
    case 0xC4EEED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000092u : 0x003492u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:11 LDX #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC4EEEC.
    case 0xC4EEEE: {
        Instruction step(cpu, 0x92, 0x000034u, 2u, AddressMode::DirectPageIndirect);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:11 LDX #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC4EEED.
    case 0xC4EEEF: {
        Instruction step(cpu, 0x34, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:12 LDA #0
    case 0xC4EEF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4EEEF.
    case 0xC4EEF1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4EEF0.
    case 0xC4EEF2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:13 STA @VIRTUAL02
    case 0xC4EEF3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:14 STA @LOCAL02
    case 0xC4EEF5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:15 JMP @UNKNOWN10
    case 0xC4EEF7: {
        Instruction step(cpu, 0x4C, 0x00EFADu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EEFA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:18 LDA #0
    case 0xC4EEFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:19 STA @LOCAL01
    case 0xC4EEFE: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:19 STA @LOCAL01
    // Overlapping static entry reached from 0xC4EEFC.
    case 0xC4EEFF: {
        Instruction step(cpu, 0x0F, 0xBD0085u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:20 STA @VIRTUAL00
    case 0xC4EF00: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:21 LDA __BSS_START__,X
    case 0xC4EF02: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:21 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4EEFF.
    case 0xC4EF03: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:22 STA @LOCAL00
    case 0xC4EF05: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:23 LDA __BSS_START__+1,X
    case 0xC4EF07: {
        Instruction step(cpu, 0xBD, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:24 STA @VIRTUAL01
    case 0xC4EF0A: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:25 LDY #0
    case 0xC4EF0C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:25 LDY #0
    // Overlapping static entry reached from 0xC4EF0C.
    case 0xC4EF0E: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:26 JMP @UNKNOWN8
    case 0xC4EF0F: {
        Instruction step(cpu, 0x4C, 0x00EF8Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:28 LDA @VIRTUAL00
    case 0xC4EF12: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:29 ASL
    case 0xC4EF14: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:30 STA @VIRTUAL00
    case 0xC4EF15: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:31 LDA @LOCAL01
    case 0xC4EF17: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:32 ASL
    case 0xC4EF19: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:33 STA @LOCAL01
    case 0xC4EF1A: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC4EF1C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:35 LDA @LOCAL00
    case 0xC4EF1E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:36 AND #$00FF
    case 0xC4EF20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC4EF20.
    case 0xC4EF22: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:37 AND #$0080
    case 0xC4EF23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:37 AND #$0080
    // Overlapping static entry reached from 0xC4EF23.
    case 0xC4EF25: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:38 BEQ @UNKNOWN2
    case 0xC4EF26: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:39 LDA @VIRTUAL01
    case 0xC4EF28: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:40 AND #$00FF
    case 0xC4EF2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC4EF2A.
    case 0xC4EF2C: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:41 AND #$0080
    case 0xC4EF2D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:41 AND #$0080
    // Overlapping static entry reached from 0xC4EF2D.
    case 0xC4EF2F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:42 BEQ @UNKNOWN2
    case 0xC4EF30: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EF32: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:44 LDA @VIRTUAL00
    case 0xC4EF34: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:45 AND #$00FE
    case 0xC4EF36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FEu : 0x0085FEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:46 STA @VIRTUAL00
    case 0xC4EF38: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:46 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC4EF36.
    case 0xC4EF39: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:47 LDA @LOCAL01
    case 0xC4EF3A: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:48 AND #$00FE
    case 0xC4EF3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FEu : 0x0085FEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:49 STA @LOCAL01
    case 0xC4EF3E: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:49 STA @LOCAL01
    // Overlapping static entry reached from 0xC4EF3C.
    case 0xC4EF3F: {
        Instruction step(cpu, 0x0F, 0xA53E80u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:50 BRA @UNKNOWN7
    case 0xC4EF40: {
        Instruction step(cpu, 0x80, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:53 LDA @LOCAL00
    case 0xC4EF42: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:53 LDA @LOCAL00
    // Overlapping static entry reached from 0xC4EF3F.
    case 0xC4EF43: {
        Instruction step(cpu, 0x0E, 0x00FF29u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:54 AND #$00FF
    case 0xC4EF44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC4EF44.
    case 0xC4EF46: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:55 AND #$0080
    case 0xC4EF47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:55 AND #$0080
    // Overlapping static entry reached from 0xC4EF47.
    case 0xC4EF49: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:56 BEQ @UNKNOWN3
    case 0xC4EF4A: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:57 LDA #1
    case 0xC4EF4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:57 LDA #1
    // Overlapping static entry reached from 0xC4EF4C.
    case 0xC4EF4E: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:58 BRA @UNKNOWN4
    case 0xC4EF4F: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:60 LDA #0
    case 0xC4EF51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:60 LDA #0
    // Overlapping static entry reached from 0xC4EF51.
    case 0xC4EF53: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EF54: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:63 PHA
    case 0xC4EF56: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:64 LDA @VIRTUAL00
    case 0xC4EF57: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:65 STA TEMP_REGISTER
    case 0xC4EF59: {
        Instruction step(cpu, 0x8D, 0x0000C0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:66 PLA
    case 0xC4EF5C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:67 STA @VIRTUAL00
    case 0xC4EF5D: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:68 LDA TEMP_REGISTER
    case 0xC4EF5F: {
        Instruction step(cpu, 0xAD, 0x0000C0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:69 ORA @VIRTUAL00
    case 0xC4EF62: {
        Instruction step(cpu, 0x05, 0x000000u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:70 STA @VIRTUAL00
    case 0xC4EF64: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC4EF66: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:72 LDA @VIRTUAL01
    case 0xC4EF68: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:73 AND #$00FF
    case 0xC4EF6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC4EF6A.
    case 0xC4EF6C: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:74 AND #$0080
    case 0xC4EF6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:74 AND #$0080
    // Overlapping static entry reached from 0xC4EF6D.
    case 0xC4EF6F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:75 BEQ @UNKNOWN5
    case 0xC4EF70: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:76 LDA #1
    case 0xC4EF72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:76 LDA #1
    // Overlapping static entry reached from 0xC4EF72.
    case 0xC4EF74: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:77 BRA @UNKNOWN6
    case 0xC4EF75: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:79 LDA #0
    case 0xC4EF77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:79 LDA #0
    // Overlapping static entry reached from 0xC4EF77.
    case 0xC4EF79: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC4EF7A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:82 ORA @LOCAL01
    case 0xC4EF7C: {
        Instruction step(cpu, 0x05, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:83 STA @LOCAL01
    case 0xC4EF7E: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:85 LDA @LOCAL00
    case 0xC4EF80: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:86 ASL
    case 0xC4EF82: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:87 STA @LOCAL00
    case 0xC4EF83: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:88 LDA @VIRTUAL01
    case 0xC4EF85: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:89 ASL
    case 0xC4EF87: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:90 STA @VIRTUAL01
    case 0xC4EF88: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:91 INY
    case 0xC4EF8A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:93 CPY #8
    case 0xC4EF8B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:93 CPY #8
    // Overlapping static entry reached from 0xC4EF8B.
    case 0xC4EF8D: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:94 BCCL @UNKNOWN1
    case 0xC4EF8E: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:94 BCCL @UNKNOWN1
    case 0xC4EF90: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:94 BCCL @UNKNOWN1
    case 0xC4EF92: {
        Instruction step(cpu, 0x4C, 0x00EF12u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:95 LDA @LOCAL01
    case 0xC4EF95: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:96 STA __BSS_START__+1,X
    case 0xC4EF97: {
        Instruction step(cpu, 0x9D, 0x000001u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:97 LDA @VIRTUAL00
    case 0xC4EF9A: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:98 STA __BSS_START__,X
    case 0xC4EF9C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:99 INX
    case 0xC4EF9F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:100 INX
    case 0xC4EFA0: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:101 REP #PROC_FLAGS::ACCUM8
    case 0xC4EFA1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:102 LDA @LOCAL02
    case 0xC4EFA3: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:103 STA @VIRTUAL02
    case 0xC4EFA5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:104 INC @VIRTUAL02
    case 0xC4EFA7: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:105 LDA @VIRTUAL02
    case 0xC4EFA9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:106 STA @LOCAL02
    case 0xC4EFAB: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:108 LDA @VIRTUAL04
    case 0xC4EFAD: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:109 ASL
    case 0xC4EFAF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:110 ASL
    case 0xC4EFB0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:111 ASL
    case 0xC4EFB1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:112 ASL
    case 0xC4EFB2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:113 PHA
    case 0xC4EFB3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:114 LDA @VIRTUAL02
    case 0xC4EFB4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:115 PLY
    case 0xC4EFB6: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:116 STY @VIRTUAL02
    case 0xC4EFB7: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:117 CMP @VIRTUAL02
    case 0xC4EFB9: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:118 BCCL @UNKNOWN0
    case 0xC4EFBB: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:118 BCCL @UNKNOWN0
    case 0xC4EFBD: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/change_vwf_2bpp_to_3_colour.asm:118 BCCL @UNKNOWN0
    case 0xC4EFBF: {
        Instruction step(cpu, 0x4C, 0x00EEFAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:119 PLD
    case 0xC4EFC2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/ending/change_vwf_2bpp_to_3_colour.asm:120 RTL
    case 0xC4EFC3: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
