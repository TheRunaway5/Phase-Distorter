// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/ending/print_cast_name.asm
bool resume_ending_print_cast_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4EBAD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBAF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBB0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBB1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EBB2.
    case 0xC4EBB4: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBB5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name.asm:10 END_STACK_VARS
    case 0xC4EBB6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:11 STY @VIRTUAL04
    case 0xC4EBB7: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:11 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4EBB4.
    case 0xC4EBB8: {
        Instruction step(cpu, 0x04, 0x000048u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:12 PHA
    case 0xC4EBB9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:13 LDA @VIRTUAL04
    case 0xC4EBBA: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:14 STA @LOCAL01
    case 0xC4EBBC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:15 PLA
    case 0xC4EBBE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:16 STX @VIRTUAL02
    case 0xC4EBBF: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:17 STA @LOCAL00
    case 0xC4EBC1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    case 0xC4EBC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x002EFAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EBC3.
    case 0xC4EBC5: {
        Instruction step(cpu, 0x2E, 0x000685u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    case 0xC4EBC6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    case 0xC4EBC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    // Overlapping static entry reached from 0xC4EBC8.
    case 0xC4EBCA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/print_cast_name.asm:18 LOADPTR CAST_SEQUENCE_FORMATTING, @VIRTUAL06
    case 0xC4EBCB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:19 LDA @LOCAL00
    case 0xC4EBCD: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:522 STA scratch
    // Macro caller: src/ending/print_cast_name.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4EBCF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:523 ASL
    // Macro caller: src/ending/print_cast_name.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4EBD1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/ending/print_cast_name.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4EBD2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:21 CLC
    case 0xC4EBD4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:22 ADC @VIRTUAL06
    case 0xC4EBD5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:23 STA @VIRTUAL06
    case 0xC4EBD7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:24 STA @VIRTUAL0A
    case 0xC4EBD9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:25 LDA @VIRTUAL06+2
    case 0xC4EBDB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:26 STA @VIRTUAL0A+2
    case 0xC4EBDD: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:27 INC @VIRTUAL0A
    case 0xC4EBDF: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:28 INC @VIRTUAL0A
    case 0xC4EBE1: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:29 LDY @VIRTUAL02
    case 0xC4EBE3: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:30 LDA [@VIRTUAL0A]
    case 0xC4EBE5: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:31 AND #$00FF
    case 0xC4EBE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC4EBE7.
    case 0xC4EBE9: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:32 TAX
    case 0xC4EBEA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:33 LDA [@VIRTUAL06]
    case 0xC4EBEB: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:34 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4EBED: {
        Instruction step(cpu, 0x22, 0xC4EA9Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:35 LDA [@VIRTUAL0A]
    case 0xC4EBF1: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:36 AND #$00FF
    case 0xC4EBF3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC4EBF3.
    case 0xC4EBF5: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:37 TAY
    case 0xC4EBF6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:38 LDA @LOCAL01
    case 0xC4EBF7: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:39 STA @VIRTUAL04
    case 0xC4EBF9: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:40 LDX @VIRTUAL04
    case 0xC4EBFB: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:41 LDA @VIRTUAL02
    case 0xC4EBFD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/ending/print_cast_name.asm:42 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4EBFF: {
        Instruction step(cpu, 0x22, 0xC4EB04u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/print_cast_name.asm:43 END_C_FUNCTION
    case 0xC4EC03: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/print_cast_name.asm:43 END_C_FUNCTION
    case 0xC4EC04: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
