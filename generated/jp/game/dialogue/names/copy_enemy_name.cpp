// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/copy_enemy_name.asm
bool resume_text_copy_enemy_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/copy_enemy_name.asm:3 BEGIN_C_FUNCTION
    case 0xC23A50: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A52: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A53: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A54: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x00FFF1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC23A55.
    case 0xC23A57: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A58: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A59: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:11 STX @VIRTUAL02
    case 0xC23A5A: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC23A57.
    case 0xC23A5B: {
        Instruction step(cpu, 0x02, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:12 TAY
    case 0xC23A5C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23A5D: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23A5F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23A61: {
        Instruction step(cpu, 0xA5, 0x00001Fu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23A63: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:14 BRA @UNKNOWN5
    case 0xC23A65: {
        Instruction step(cpu, 0x80, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:16 LDA [@VIRTUAL06]
    case 0xC23A67: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:17 AND #$00FF
    case 0xC23A69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC23A69.
    case 0xC23A6B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:18 TAX
    case 0xC23A6C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:19 BEQ @UNKNOWN6
    case 0xC23A6D: {
        Instruction step(cpu, 0xF0, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:20 CPX #CHAR::NESS_PLACEHOLDER
    case 0xC23A6F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x00003Eu : 0x00003Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:20 CPX #CHAR::NESS_PLACEHOLDER
    // Overlapping static entry reached from 0xC23A6F.
    case 0xC23A71: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:21 BNE @UNKNOWN3
    case 0xC23A72: {
        Instruction step(cpu, 0xD0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:22 LDX #0
    case 0xC23A74: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:22 LDX #0
    // Overlapping static entry reached from 0xC23A74.
    case 0xC23A76: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:23 BRA @UNKNOWN2
    case 0xC23A77: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A79: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:26 LDA PARTY_CHARACTERS+char_struct::name,X
    case 0xC23A7B: {
        Instruction step(cpu, 0xBD, 0x009C7Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:27 STA @LOCAL00
    case 0xC23A7E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC23A80: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:29 AND #$00FF
    case 0xC23A82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC23A82.
    case 0xC23A84: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:30 BEQ @UNKNOWN4
    case 0xC23A85: {
        Instruction step(cpu, 0xF0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A87: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:32 LDA @LOCAL00
    case 0xC23A89: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:33 STA __BSS_START__,Y
    case 0xC23A8B: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:34 INY
    case 0xC23A8E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:35 INX
    case 0xC23A8F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:37 CPX #.SIZEOF(char_struct::name)
    case 0xC23A90: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:37 CPX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC23A90.
    case 0xC23A92: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:38 BCC @UNKNOWN1
    case 0xC23A93: {
        Instruction step(cpu, 0x90, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:39 BRA @UNKNOWN4
    case 0xC23A95: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A97: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:42 STA __BSS_START__,Y
    case 0xC23A99: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:43 INY
    case 0xC23A9C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC23A9D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:46 INC @VIRTUAL06
    case 0xC23A9F: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:48 LDX @VIRTUAL02
    case 0xC23AA1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:49 LDA @VIRTUAL02
    case 0xC23AA3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:50 DEC
    case 0xC23AA5: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:51 STA @VIRTUAL02
    case 0xC23AA6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:52 CPX #0
    case 0xC23AA8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:52 CPX #0
    // Overlapping static entry reached from 0xC23AA8.
    case 0xC23AAA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:53 BNE @UNKNOWN0
    case 0xC23AAB: {
        Instruction step(cpu, 0xD0, 0x0000BAu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC23AAD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:56 LDA #0
    case 0xC23AAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x009900u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:57 STA __BSS_START__,Y
    case 0xC23AB1: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:57 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC23AAF.
    case 0xC23AB2: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC23AB4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/copy_enemy_name.asm:59 TYA
    case 0xC23AB6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/copy_enemy_name.asm:60 END_C_FUNCTION
    case 0xC23AB7: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/copy_enemy_name.asm:60 END_C_FUNCTION
    case 0xC23AB8: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
