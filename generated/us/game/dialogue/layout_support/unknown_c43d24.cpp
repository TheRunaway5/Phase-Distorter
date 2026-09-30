// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C4/C43D24.asm
bool resume_unresolved_c4_c43d24(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43D24.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43D24: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D26: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D27: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D28: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EFu : 0x00FFEFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC43D29.
    case 0xC43D2B: {
        Instruction step(cpu, 0xFF, 0x22685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D2C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43D24.asm:8 END_STACK_VARS
    case 0xC43D2D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:9 JSL REDIRECT_C438A5
    case 0xC43D2E: {
        Instruction step(cpu, 0x22, 0xC10C72u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:9 JSL REDIRECT_C438A5
    // Overlapping static entry reached from 0xC43D2B.
    case 0xC43D2F: {
        Instruction step(cpu, 0x72, 0x00000Cu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:9 JSL REDIRECT_C438A5
    // Overlapping static entry reached from 0xC43D2F.
    case 0xC43D31: {
        Instruction step(cpu, 0xC1, 0x0000ADu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:10 LDA NEW_TEXT_PIXEL_OFFSET
    case 0xC43D32: {
        Instruction step(cpu, 0xAD, 0x005E72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:10 LDA NEW_TEXT_PIXEL_OFFSET
    // Overlapping static entry reached from 0xC43D31.
    case 0xC43D33: {
        Instruction step(cpu, 0x72, 0x00005Eu, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:11 AND #$00FF
    case 0xC43D35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC43D35.
    case 0xC43D37: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:12 BEQ @UNKNOWN0
    case 0xC43D38: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:13 LDA NEW_TEXT_PIXEL_OFFSET
    case 0xC43D3A: {
        Instruction step(cpu, 0xAD, 0x005E72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:14 AND #$00FF
    case 0xC43D3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC43D3D.
    case 0xC43D3F: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:15 CLC
    case 0xC43D40: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:16 ADC VWF_X
    case 0xC43D41: {
        Instruction step(cpu, 0x6D, 0x009E23u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:17 STA VWF_X
    case 0xC43D44: {
        Instruction step(cpu, 0x8D, 0x009E23u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:18 LDA VWF_TILE
    case 0xC43D47: {
        Instruction step(cpu, 0xAD, 0x009E25u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:19 ASL
    case 0xC43D4A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:20 ASL
    case 0xC43D4B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:21 ASL
    case 0xC43D4C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:22 ASL
    case 0xC43D4D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:23 ASL
    case 0xC43D4E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:24 CLC
    case 0xC43D4F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:25 ADC #.LOWORD(VWF_BUFFER)
    case 0xC43D50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000092u : 0x003492u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:25 ADC #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC43D50.
    case 0xC43D52: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:26 STA @LOCAL01
    case 0xC43D53: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:26 STA @LOCAL01
    // Overlapping static entry reached from 0xC43D52.
    case 0xC43D54: {
        Instruction step(cpu, 0x0F, 0xA920E2u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC43D55: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:28 LDA #<-1
    case 0xC43D57: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0085FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:28 LDA #<-1
    // Overlapping static entry reached from 0xC43D54.
    case 0xC43D58: {
        Instruction step(cpu, 0xFF, 0xA20E85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:29 STA @LOCAL00
    case 0xC43D59: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:29 STA @LOCAL00
    // Overlapping static entry reached from 0xC43D57.
    case 0xC43D5A: {
        Instruction step(cpu, 0x0E, 0x0020A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:30 LDX #32
    case 0xC43D5B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:30 LDX #32
    // Overlapping static entry reached from 0xC43D58.
    case 0xC43D5C: {
        Instruction step(cpu, 0x20, 0x00C200u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:30 LDX #32
    // Overlapping static entry reached from 0xC43D5B.
    case 0xC43D5D: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC43D5E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:31 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC43D5C.
    case 0xC43D5F: {
        Instruction step(cpu, 0x20, 0x000FA5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:32 LDA @LOCAL01
    case 0xC43D60: {
        Instruction step(cpu, 0xA5, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:33 JSL MEMSET16
    case 0xC43D62: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC43D66: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:35 LDA NEW_TEXT_PIXEL_OFFSET
    case 0xC43D68: {
        Instruction step(cpu, 0xAD, 0x005E72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:36 STA LAST_TEXT_PIXEL_OFFSET_SET
    case 0xC43D6B: {
        Instruction step(cpu, 0x8D, 0x005E73u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:37 STZ NEW_TEXT_PIXEL_OFFSET
    case 0xC43D6E: {
        Instruction step(cpu, 0x9C, 0x005E72u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C43D24.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC43D71: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43D24.asm:40 END_C_FUNCTION
    case 0xC43D73: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43D24.asm:40 END_C_FUNCTION
    case 0xC43D74: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
