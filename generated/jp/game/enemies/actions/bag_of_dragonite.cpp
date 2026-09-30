// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/bag_of_dragonite.asm
bool resume_battle_actions_bag_of_dragonite(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/bag_of_dragonite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A94F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/bag_of_dragonite.asm:6 END_STACK_VARS
    case 0xC2A951: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/bag_of_dragonite.asm:6 END_STACK_VARS
    case 0xC2A952: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/bag_of_dragonite.asm:6 END_STACK_VARS
    case 0xC2A953: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/bag_of_dragonite.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A953.
    case 0xC2A955: {
        Instruction step(cpu, 0xFF, 0x20A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/bag_of_dragonite.asm:6 END_STACK_VARS
    case 0xC2A956: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:7 LDA #800
    case 0xC2A957: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000320u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:7 LDA #800
    // Overlapping static entry reached from 0xC2A957.
    case 0xC2A959: {
        Instruction step(cpu, 0x03, 0x000020u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:8 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2A95A: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:8 JSR TWENTY_FIVE_PERCENT_VARIANCE
    // Overlapping static entry reached from 0xC2A959.
    case 0xC2A95B: {
        Instruction step(cpu, 0x3C, 0x00856Au, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:9 STA @LOCAL00
    case 0xC2A95D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC2A95B.
    case 0xC2A95E: {
        Instruction step(cpu, 0x0E, 0x0074AEu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:10 LDX CURRENT_TARGET
    case 0xC2A95F: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:10 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2A95E.
    case 0xC2A961: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:11 LDA a:battler::fire_resist,X
    case 0xC2A962: {
        Instruction step(cpu, 0xBD, 0x00003Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:12 AND #$00FF
    case 0xC2A965: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC2A965.
    case 0xC2A967: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:13 TAX
    case 0xC2A968: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:14 LDA @LOCAL00
    case 0xC2A969: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/bag_of_dragonite.asm:15 JSR CALC_RESIST_DAMAGE
    case 0xC2A96B: {
        Instruction step(cpu, 0x20, 0x0080CBu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/bag_of_dragonite.asm:16 END_C_FUNCTION
    case 0xC2A96E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/bag_of_dragonite.asm:16 END_C_FUNCTION
    case 0xC2A96F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
