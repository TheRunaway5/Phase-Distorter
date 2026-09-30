// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/decrease_offense_16th.asm
bool resume_battle_decrease_offense_16th(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/decrease_offense_16th.asm:3 BEGIN_C_FUNCTION
    case 0xC27D73: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D75: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D76: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D77: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27D78.
    case 0xC27D7A: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D7B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/decrease_offense_16th.asm:8 END_STACK_VARS
    case 0xC27D7C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:9 STA @VIRTUAL02
    case 0xC27D7D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27D7A.
    case 0xC27D7E: {
        Instruction step(cpu, 0x02, 0x000018u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:10 CLC
    case 0xC27D7F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:11 ADC #battler::offense
    case 0xC27D80: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:11 ADC #battler::offense
    // Overlapping static entry reached from 0xC27D80.
    case 0xC27D82: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:12 TAY
    case 0xC27D83: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:13 LDA __BSS_START__,Y
    case 0xC27D84: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:14 LSR
    case 0xC27D87: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:15 LSR
    case 0xC27D88: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:16 LSR
    case 0xC27D89: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:17 LSR
    case 0xC27D8A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:18 BEQ @UNKNOWN0
    case 0xC27D8B: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:19 TAX
    case 0xC27D8D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:20 BRA @UNKNOWN1
    case 0xC27D8E: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:22 LDX #1
    case 0xC27D90: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:22 LDX #1
    // Overlapping static entry reached from 0xC27D90.
    case 0xC27D92: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:24 STX @VIRTUAL04
    case 0xC27D93: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:25 LDA __BSS_START__,Y
    case 0xC27D95: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:26 SEC
    case 0xC27D98: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:27 SBC @VIRTUAL04
    case 0xC27D99: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:28 STA __BSS_START__,Y
    case 0xC27D9B: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:29 LDA @VIRTUAL02
    case 0xC27D9E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:30 CLC
    case 0xC27DA0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:31 ADC #battler::offense
    case 0xC27DA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:31 ADC #battler::offense
    // Overlapping static entry reached from 0xC27DA1.
    case 0xC27DA3: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:32 TAX
    case 0xC27DA4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:33 STX @LOCAL01
    case 0xC27DA5: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:34 LDX @VIRTUAL02
    case 0xC27DA7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:35 LDA a:battler::base_offense,X
    case 0xC27DA9: {
        Instruction step(cpu, 0xBD, 0x000032u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:36 AND #$00FF
    case 0xC27DAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC27DAC.
    case 0xC27DAE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:522 STA scratch
    // Macro caller: src/battle/decrease_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27DAF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:523 ASL
    // Macro caller: src/battle/decrease_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27DB1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/battle/decrease_offense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC27DB2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:38 LSR
    case 0xC27DB4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:39 LSR
    case 0xC27DB5: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:40 STA @LOCAL00
    case 0xC27DB6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:41 STA @VIRTUAL02
    case 0xC27DB8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:42 LDX @LOCAL01
    case 0xC27DBA: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:43 LDA __BSS_START__,X
    case 0xC27DBC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:44 CMP @VIRTUAL02
    case 0xC27DBF: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:45 BCS @UNKNOWN2
    case 0xC27DC1: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:46 LDA @LOCAL00
    case 0xC27DC3: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/decrease_offense_16th.asm:47 STA __BSS_START__,X
    case 0xC27DC5: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/decrease_offense_16th.asm:49 END_C_FUNCTION
    case 0xC27DC8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/decrease_offense_16th.asm:49 END_C_FUNCTION
    case 0xC27DC9: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
