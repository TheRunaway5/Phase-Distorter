// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/load_your_sanctuary_location.asm
bool resume_overworld_load_your_sanctuary_location(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E281: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E283: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E284: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E285: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E286: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4E286.
    case 0xC4E288: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E289: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:8 END_STACK_VARS
    case 0xC4E28A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:9 TAX
    case 0xC4E28B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:10 STX @LOCAL01
    case 0xC4E28C: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:11 TXA
    case 0xC4E28E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:12 ASL
    case 0xC4E28F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:13 CLC
    case 0xC4E290: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:14 ADC #.LOWORD(LOADED_YOUR_SANCTUARY_LOCATIONS)
    case 0xC4E291: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000BEu : 0x00B4BEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:14 ADC #.LOWORD(LOADED_YOUR_SANCTUARY_LOCATIONS)
    // Overlapping static entry reached from 0xC4E291.
    case 0xC4E293: {
        Instruction step(cpu, 0xB4, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:15 STA @VIRTUAL02
    case 0xC4E294: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:15 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4E293.
    case 0xC4E295: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:16 LDX @VIRTUAL02
    case 0xC4E296: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:17 LDA __BSS_START__,X
    case 0xC4E298: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:18 BNE @UNKNOWN0
    case 0xC4E29B: {
        Instruction step(cpu, 0xD0, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4E29D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x00DE78u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E29D.
    case 0xC4E29F: {
        Instruction step(cpu, 0xDE, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4E2A0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4E2A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    // Overlapping static entry reached from 0xC4E2A2.
    case 0xC4E2A4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:19 LOADPTR UNKNOWN_C4DE78, @VIRTUAL06
    case 0xC4E2A5: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:20 LDX @LOCAL01
    case 0xC4E2A7: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:21 TXA
    case 0xC4E2A9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:22 ASL
    case 0xC4E2AA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:23 ASL
    case 0xC4E2AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:24 STA @LOCAL00
    case 0xC4E2AC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:25 TXY
    case 0xC4E2AE: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:26 INC
    case 0xC4E2AF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:27 INC
    case 0xC4E2B0: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E2B1: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E2B3: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E2B5: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4E2B7: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:29 CLC
    case 0xC4E2B9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:30 ADC @VIRTUAL0A
    case 0xC4E2BA: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:30 ADC @VIRTUAL0A
    // Overlapping static entry reached from 0xC4F182.
    case 0xC4E2BB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:31 STA @VIRTUAL0A
    case 0xC4E2BC: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:32 LDA [@VIRTUAL0A]
    case 0xC4E2BE: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:33 TAX
    case 0xC4E2C0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:34 LDA @LOCAL00
    case 0xC4E2C1: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:35 CLC
    case 0xC4E2C3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:36 ADC @VIRTUAL06
    case 0xC4E2C4: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:37 STA @VIRTUAL06
    case 0xC4E2C6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:38 LDA [@VIRTUAL06]
    case 0xC4E2C8: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:39 JSR LOAD_YOUR_SANCTUARY_LOCATION_DATA
    case 0xC4E2CA: {
        Instruction step(cpu, 0x20, 0x00E13Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:40 LDA #1
    case 0xC4E2CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:40 LDA #1
    // Overlapping static entry reached from 0xC4E2CD.
    case 0xC4E2CF: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:41 LDX @VIRTUAL02
    case 0xC4E2D0: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_your_sanctuary_location.asm:42 STA __BSS_START__,X
    case 0xC4E2D2: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:44 END_C_FUNCTION
    case 0xC4E2D5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_your_sanctuary_location.asm:44 END_C_FUNCTION
    case 0xC4E2D6: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
