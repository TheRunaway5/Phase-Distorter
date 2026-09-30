// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/success_255.asm
bool resume_battle_success_255(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/success_255.asm:3 BEGIN_C_FUNCTION
    case 0xC26AF7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26AF9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26AFA: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26AFB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26AFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26AFC.
    case 0xC26AFE: {
        Instruction step(cpu, 0xFF, 0xE2685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26AFF: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/success_255.asm:7 END_STACK_VARS
    case 0xC26B00: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/success_255.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC26B01: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/success_255.asm:8 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC26AFE.
    case 0xC26B02: {
        Instruction step(cpu, 0x20, 0x000085u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/success_255.asm:9 STA @VIRTUAL00
    case 0xC26B03: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/success_255.asm:10 JSR RAND_LONG
    case 0xC26B05: {
        Instruction step(cpu, 0x20, 0x00692Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/success_255.asm:11 CMP @VIRTUAL00
    case 0xC26B08: {
        Instruction step(cpu, 0xC5, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/success_255.asm:12 BCS @UNKNOWN0
    case 0xC26B0A: {
        Instruction step(cpu, 0xB0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/success_255.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC26B0C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/success_255.asm:14 LDA #1
    case 0xC26B0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/success_255.asm:14 LDA #1
    // Overlapping static entry reached from 0xC26B0E.
    case 0xC26B10: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/success_255.asm:15 BRA @RETURN
    case 0xC26B11: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/success_255.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC26B13: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/success_255.asm:18 LDA #0
    case 0xC26B15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/success_255.asm:18 LDA #0
    // Overlapping static entry reached from 0xC26B15.
    case 0xC26B17: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/success_255.asm:20 END_C_FUNCTION
    case 0xC26B18: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/success_255.asm:20 END_C_FUNCTION
    case 0xC26B19: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
