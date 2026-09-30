// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/set_teleport_state.asm
bool resume_overworld_set_teleport_state(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/set_teleport_state.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DD53: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD55: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD56: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD57: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD58: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x00FFF1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DD58.
    case 0xC0DD5A: {
        Instruction step(cpu, 0xFF, 0xE2685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD5B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD5C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC0DD5D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:9 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0DD5A.
    case 0xC0DD5E: {
        Instruction step(cpu, 0x20, 0x000085u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:10 STA @VIRTUAL00
    case 0xC0DD5F: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:11 LDA @PARAM01
    case 0xC0DD61: {
        Instruction step(cpu, 0xA5, 0x00001Du, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:12 STA @LOCAL00
    case 0xC0DD63: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0DD65: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:14 LDA @VIRTUAL00
    case 0xC0DD67: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:15 AND #$00FF
    case 0xC0DD69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC0DD69.
    case 0xC0DD6B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:16 STA PSI_TELEPORT_DESTINATION
    case 0xC0DD6C: {
        Instruction step(cpu, 0x8D, 0x009F3Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:17 LDA @LOCAL00
    case 0xC0DD6F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:18 AND #$00FF
    case 0xC0DD71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC0DD71.
    case 0xC0DD73: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/set_teleport_state.asm:19 STA PSI_TELEPORT_STYLE
    case 0xC0DD74: {
        Instruction step(cpu, 0x8D, 0x009F41u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/set_teleport_state.asm:20 END_C_FUNCTION
    case 0xC0DD77: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/set_teleport_state.asm:20 END_C_FUNCTION
    case 0xC0DD78: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
