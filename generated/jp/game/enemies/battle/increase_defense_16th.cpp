// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/increase_defense_16th.asm
bool resume_battle_increase_defense_16th(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/increase_defense_16th.asm:3 BEGIN_C_FUNCTION
    case 0xC27D19: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D1B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D1C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D1D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC27D1E.
    case 0xC27D20: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D21: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/increase_defense_16th.asm:8 END_STACK_VARS
    case 0xC27D22: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:9 STA @VIRTUAL02
    case 0xC27D23: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27D20.
    case 0xC27D24: {
        Instruction step(cpu, 0x02, 0x000018u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:10 CLC
    case 0xC27D25: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:11 ADC #battler::defense
    case 0xC27D26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:11 ADC #battler::defense
    // Overlapping static entry reached from 0xC27D26.
    case 0xC27D28: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:12 TAY
    case 0xC27D29: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:13 LDA __BSS_START__,Y
    case 0xC27D2A: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:14 LSR
    case 0xC27D2D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:15 LSR
    case 0xC27D2E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:16 LSR
    case 0xC27D2F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:17 LSR
    case 0xC27D30: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:18 BEQ @UNKNOWN0
    case 0xC27D31: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:19 TAX
    case 0xC27D33: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:20 BRA @UNKNOWN1
    case 0xC27D34: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:22 LDX #$0001
    case 0xC27D36: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:22 LDX #$0001
    // Overlapping static entry reached from 0xC27D36.
    case 0xC27D38: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:24 STX @VIRTUAL04
    case 0xC27D39: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:25 LDA __BSS_START__,Y
    case 0xC27D3B: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:26 CLC
    case 0xC27D3E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:27 ADC @VIRTUAL04
    case 0xC27D3F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:28 STA __BSS_START__,Y
    case 0xC27D41: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:29 LDA @VIRTUAL02
    case 0xC27D44: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:30 CLC
    case 0xC27D46: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:31 ADC #battler::defense
    case 0xC27D47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:31 ADC #battler::defense
    // Overlapping static entry reached from 0xC27D47.
    case 0xC27D49: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:32 TAX
    case 0xC27D4A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:33 STX @LOCAL01
    case 0xC27D4B: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:34 LDX @VIRTUAL02
    case 0xC27D4D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:35 LDA a:battler::base_defense,X
    case 0xC27D4F: {
        Instruction step(cpu, 0xBD, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:36 AND #$00FF
    case 0xC27D52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC27D52.
    case 0xC27D54: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D55: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D57: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D58: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/increase_defense_16th.asm:37 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC27D59: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:38 LSR
    case 0xC27D5B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:39 LSR
    case 0xC27D5C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:40 STA @LOCAL00
    case 0xC27D5D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:41 STA @VIRTUAL02
    case 0xC27D5F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:42 LDX @LOCAL01
    case 0xC27D61: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:43 LDA __BSS_START__,X
    case 0xC27D63: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:44 CMP @VIRTUAL02
    case 0xC27D66: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/increase_defense_16th.asm:45 BLTEQ @UNKNOWN2
    case 0xC27D68: {
        Instruction step(cpu, 0x90, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/increase_defense_16th.asm:45 BLTEQ @UNKNOWN2
    case 0xC27D6A: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:46 LDA @LOCAL00
    case 0xC27D6C: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/increase_defense_16th.asm:47 STA __BSS_START__,X
    case 0xC27D6E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/increase_defense_16th.asm:49 END_C_FUNCTION
    case 0xC27D71: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/increase_defense_16th.asm:49 END_C_FUNCTION
    case 0xC27D72: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
