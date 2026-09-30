// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/get_letter_from_character_name.asm
bool resume_text_ccs_get_letter_from_character_name(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:3 BEGIN_C_FUNCTION
    case 0xC14BCC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BCE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BCF: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BD0: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14BD1.
    case 0xC14BD3: {
        Instruction step(cpu, 0xFF, 0xE0685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BD4: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BD5: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:10 CPX #0
    case 0xC14BD6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14BD3.
    case 0xC14BD7: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14BD6.
    case 0xC14BD8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:11 BEQ @UNKNOWN0
    case 0xC14BD9: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:12 TXA
    case 0xC14BDB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:13 BRA @UNKNOWN1
    case 0xC14BDC: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC14BDE: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:16 LDA @VIRTUAL06
    case 0xC14BE1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:18 JSL GET_PARTY_CHARACTER_NAME
    case 0xC14BE3: {
        Instruction step(cpu, 0x22, 0xC22172u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:19 JSR GET_SECONDARY_MEMORY
    case 0xC14BE7: {
        Instruction step(cpu, 0x20, 0x000603u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:20 STA @VIRTUAL02
    case 0xC14BEA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:21 LDA #1
    case 0xC14BEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:21 LDA #1
    // Overlapping static entry reached from 0xC14BEC.
    case 0xC14BEE: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:22 SEC
    case 0xC14BEF: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:23 SBC @VIRTUAL02
    case 0xC14BF0: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:24 EOR #$FFFF
    case 0xC14BF2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:24 EOR #$FFFF
    // Overlapping static entry reached from 0xC14BF2.
    case 0xC14BF4: {
        Instruction step(cpu, 0xFF, 0x65181Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:25 INC
    case 0xC14BF5: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:26 CLC
    case 0xC14BF6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:27 ADC @VIRTUAL06
    case 0xC14BF7: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:27 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC14BF4.
    case 0xC14BF8: {
        Instruction step(cpu, 0x06, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:28 STA @VIRTUAL06
    case 0xC14BF9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:28 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC14BF8.
    case 0xC14BFA: {
        Instruction step(cpu, 0x06, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC14BFB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:29 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC14BFA.
    case 0xC14BFC: {
        Instruction step(cpu, 0x20, 0x0006A7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:30 LDA [@VIRTUAL06]
    case 0xC14BFD: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC14BFF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC14C01: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC14C03: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC14C05: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC14C07: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C09: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C0B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C0D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C0F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:34 JSR SET_WORKING_MEMORY
    case 0xC14C11: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:35 LDA #NULL
    case 0xC14C14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/get_letter_from_character_name.asm:35 LDA #NULL
    // Overlapping static entry reached from 0xC14C14.
    case 0xC14C16: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:36 END_C_FUNCTION
    case 0xC14C17: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:36 END_C_FUNCTION
    case 0xC14C18: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
