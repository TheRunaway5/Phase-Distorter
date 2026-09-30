// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/delete_floating_sprite_at_character.asm
bool resume_text_ccs_delete_floating_sprite_at_character(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/delete_floating_sprite_at_character.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC166DD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166DF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166E0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166E1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC166E2.
    case 0xC166E4: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166E5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166E6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_character.asm:9 TXA
    case 0xC166E7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_character.asm:10 BEQ @ARG_IS_ZERO
    case 0xC166E8: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC166EA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC166EC: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_character.asm:12 BRA @ARG_IS_NONZERO
    case 0xC166EE: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_character.asm:14 JSR GET_WORKING_MEMORY
    case 0xC166F0: {
        Instruction step(cpu, 0x20, 0x00040Au, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_character.asm:16 LDA @VIRTUAL06
    case 0xC166F3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_character.asm:17 JSL UNKNOWN_C4B519
    case 0xC166F5: {
        Instruction step(cpu, 0x22, 0xC4B519u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_character.asm:18 LDA #NULL
    case 0xC166F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_character.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC166F9.
    case 0xC166FB: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_character.asm:19 PLD
    case 0xC166FC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/text/ccs/delete_floating_sprite_at_character.asm:20 RTS
    case 0xC166FD: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
