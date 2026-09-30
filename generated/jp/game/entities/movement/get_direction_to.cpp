// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/get_direction_to.asm
bool resume_overworld_get_direction_to(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_direction_to.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43CF6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CF8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CF9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CFA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC43CFB.
    case 0xC43CFD: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CFE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_direction_to.asm:12 END_STACK_VARS
    case 0xC43CFF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:13 STX @VIRTUAL04
    case 0xC43D00: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:13 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC43CFD.
    case 0xC43D01: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:14 STA @VIRTUAL02
    case 0xC43D02: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC43D01.
    case 0xC43D03: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:15 LDX @PARAM03
    case 0xC43D04: {
        Instruction step(cpu, 0xA6, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:16 TXA
    case 0xC43D06: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:17 STA @LOCAL01
    case 0xC43D07: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:18 TYA
    case 0xC43D09: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:19 SEC
    case 0xC43D0A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:20 SBC @VIRTUAL02
    case 0xC43D0B: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:21 TAX
    case 0xC43D0D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:22 LDA @LOCAL01
    case 0xC43D0E: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:23 SEC
    case 0xC43D10: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:24 SBC @VIRTUAL04
    case 0xC43D11: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:25 STA @LOCAL00
    case 0xC43D13: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:26 STX @VIRTUAL02
    case 0xC43D15: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:27 LDA #0
    case 0xC43D17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:27 LDA #0
    // Overlapping static entry reached from 0xC43D17.
    case 0xC43D19: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:28 CLC
    case 0xC43D1A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:29 SBC @VIRTUAL02
    case 0xC43D1B: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC43D1D: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC43D1F: {
        Instruction step(cpu, 0x10, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC43D21: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_direction_to.asm:30 BRANCHLTEQS @UNKNOWN2
    case 0xC43D23: {
        Instruction step(cpu, 0x30, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:31 LDX #0
    case 0xC43D25: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:31 LDX #0
    // Overlapping static entry reached from 0xC43D25.
    case 0xC43D27: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:32 BRA @UNKNOWN4
    case 0xC43D28: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:34 CPX #0
    case 0xC43D2A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:34 CPX #0
    // Overlapping static entry reached from 0xC43D2A.
    case 0xC43D2C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:35 BNE @UNKNOWN3
    case 0xC43D2D: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:36 LDX #1
    case 0xC43D2F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:36 LDX #1
    // Overlapping static entry reached from 0xC43D2F.
    case 0xC43D31: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:37 BRA @UNKNOWN4
    case 0xC43D32: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:39 LDX #2
    case 0xC43D34: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:39 LDX #2
    // Overlapping static entry reached from 0xC43D34.
    case 0xC43D36: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:41 LDA @LOCAL00
    case 0xC43D37: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:42 STA @VIRTUAL02
    case 0xC43D39: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:43 LDA #0
    case 0xC43D3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:43 LDA #0
    // Overlapping static entry reached from 0xC43D3B.
    case 0xC43D3D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:44 CLC
    case 0xC43D3E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:45 SBC @VIRTUAL02
    case 0xC43D3F: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC43D41: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC43D43: {
        Instruction step(cpu, 0x10, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC43D45: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_direction_to.asm:46 BRANCHLTEQS @UNKNOWN7
    case 0xC43D47: {
        Instruction step(cpu, 0x30, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:47 LDA #0
    case 0xC43D49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:47 LDA #0
    // Overlapping static entry reached from 0xC43D49.
    case 0xC43D4B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:48 STA @LOCAL01
    case 0xC43D4C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:49 BRA @UNKNOWN9
    case 0xC43D4E: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:51 LDA @LOCAL00
    case 0xC43D50: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:52 BNE @UNKNOWN8
    case 0xC43D52: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:53 LDA #1
    case 0xC43D54: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:53 LDA #1
    // Overlapping static entry reached from 0xC43D54.
    case 0xC43D56: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:54 STA @LOCAL01
    case 0xC43D57: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:55 BRA @UNKNOWN9
    case 0xC43D59: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:57 LDA #2
    case 0xC43D5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:57 LDA #2
    // Overlapping static entry reached from 0xC43D5B.
    case 0xC43D5D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:58 STA @LOCAL01
    case 0xC43D5E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:60 TXA
    case 0xC43D60: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:61 ASL
    case 0xC43D61: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:62 STA @VIRTUAL02
    case 0xC43D62: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:63 LDA @LOCAL01
    case 0xC43D64: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC43D66: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC43D68: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC43D69: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/overworld/get_direction_to.asm:64 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC43D6B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:65 CLC
    case 0xC43D6C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:66 ADC @VIRTUAL02
    case 0xC43D6D: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:67 TAX
    case 0xC43D6F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_direction_to.asm:68 LDA f:DIRECTION_MATRIX,X
    case 0xC43D70: {
        Instruction step(cpu, 0xBF, 0xC43CE4u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_direction_to.asm:69 END_C_FUNCTION
    case 0xC43D74: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_direction_to.asm:69 END_C_FUNCTION
    case 0xC43D75: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
