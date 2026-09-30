// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/select_stealable_item.asm
bool resume_battle_select_stealable_item(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/select_stealable_item.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC241D3: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC241D5: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC241D6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC241D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC241D7.
    case 0xC241D9: {
        Instruction step(cpu, 0xFF, 0x90205Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/select_stealable_item.asm:7 END_STACK_VARS
    case 0xC241DA: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:8 JSR FIND_STEALABLE_ITEMS
    case 0xC241DB: {
        Instruction step(cpu, 0x20, 0x004090u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:8 JSR FIND_STEALABLE_ITEMS
    // Overlapping static entry reached from 0xC241D9.
    case 0xC241DD: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:9 TAX
    case 0xC241DE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:10 STX @LOCAL00
    case 0xC241DF: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:11 BNE @UNKNOWN0
    case 0xC241E1: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:12 LDA #0
    case 0xC241E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:12 LDA #0
    // Overlapping static entry reached from 0xC241E3.
    case 0xC241E5: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:13 BRA @UNKNOWN2
    case 0xC241E6: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:15 JSL RAND
    case 0xC241E8: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:16 AND #$0080
    case 0xC241EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:16 AND #$0080
    // Overlapping static entry reached from 0xC241EC.
    case 0xC241EE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:17 BEQ @UNKNOWN1
    case 0xC241EF: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:18 LDA #0
    case 0xC241F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:18 LDA #0
    // Overlapping static entry reached from 0xC241F1.
    case 0xC241F3: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:19 BRA @UNKNOWN2
    case 0xC241F4: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:21 LDX @LOCAL00
    case 0xC241F6: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:22 TXA
    case 0xC241F8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:23 JSR RAND_LIMIT
    case 0xC241F9: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:24 TAX
    case 0xC241FC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:25 LDA STEALABLE_ITEM_CANDIDATES,X
    case 0xC241FD: {
        Instruction step(cpu, 0xBD, 0x00ABA9u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:26 AND #$00FF
    case 0xC24200: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/select_stealable_item.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC24200.
    case 0xC24202: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/select_stealable_item.asm:28 END_C_FUNCTION
    case 0xC24203: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/select_stealable_item.asm:28 END_C_FUNCTION
    case 0xC24204: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
