// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm
bool resume_text_hp_pp_window_fill_character_hp_tile_buffer(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:3 BEGIN_C_FUNCTION
    case 0xC20D99: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20D9B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20D9C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20D9D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20D9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC20D9E.
    case 0xC20DA0: {
        Instruction step(cpu, 0xFF, 0x84685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20DA1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20DA2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:10 STY @LOCAL00
    case 0xC20DA3: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:10 STY @LOCAL00
    // Overlapping static entry reached from 0xC20DA0.
    case 0xC20DA4: {
        Instruction step(cpu, 0x0E, 0x000285u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:11 STA @VIRTUAL02
    case 0xC20DA5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:12 TXA
    case 0xC20DA7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:13 JSR SEPARATE_DECIMAL_DIGITS
    case 0xC20DA8: {
        Instruction step(cpu, 0x20, 0x000BD0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:13 JSR SEPARATE_DECIMAL_DIGITS
    // Overlapping static entry reached from 0xC2B5D8.
    case 0xC20DA9: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:14 LDY @LOCAL00
    case 0xC20DAB: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:15 LDX #0
    case 0xC20DAD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:15 LDX #0
    // Overlapping static entry reached from 0xC20DAD.
    case 0xC20DAF: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:16 LDA @VIRTUAL02
    case 0xC20DB0: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:17 JSR FILL_HP_PP_TILE_BUFFER
    case 0xC20DB2: {
        Instruction step(cpu, 0x20, 0x000C56u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:18 END_C_FUNCTION
    case 0xC20DB5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:18 END_C_FUNCTION
    case 0xC20DB6: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
