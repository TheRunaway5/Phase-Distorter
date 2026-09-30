// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/get_battle_action_type.asm
bool resume_battle_get_battle_action_type(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/get_battle_action_type.asm:3 BEGIN_C_FUNCTION
    case 0xC2698B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC2698D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC2698E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC2698F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC26990: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26990.
    case 0xC26992: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC26993: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/get_battle_action_type.asm:7 END_STACK_VARS
    case 0xC26994: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC26995: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    // Overlapping static entry reached from 0xC26992.
    case 0xC26996: {
        Instruction step(cpu, 0x04, 0x00000Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC26997: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC26998: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2699A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/get_battle_action_type.asm:8 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2699B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/get_battle_action_type.asm:9 TAX
    case 0xC2699C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/get_battle_action_type.asm:10 INX
    case 0xC2699D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_action_type.asm:11 INX
    case 0xC2699E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/get_battle_action_type.asm:12 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC2699F: {
        Instruction step(cpu, 0xBF, 0xD57B68u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_action_type.asm:13 AND #$00FF
    case 0xC269A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/get_battle_action_type.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC269A3.
    case 0xC269A5: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/get_battle_action_type.asm:14 END_C_FUNCTION
    case 0xC269A6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/get_battle_action_type.asm:14 END_C_FUNCTION
    case 0xC269A7: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
