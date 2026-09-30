// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/get_screen_transition_sound_effect.asm
bool resume_overworld_get_screen_transition_sound_effect(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06ADD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06ADF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06AE0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06AE1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06AE2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC06AE2.
    case 0xC06AE4: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06AE5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC06AE6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:10 STA @LOCAL00
    case 0xC06AE7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:10 STA @LOCAL00
    // Overlapping static entry reached from 0xC06AE4.
    case 0xC06AE8: {
        Instruction step(cpu, 0x0E, 0x0000A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06AE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x001400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06AE9.
    case 0xC06AEB: {
        Instruction step(cpu, 0x14, 0x000085u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06AEC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06AEB.
    case 0xC06AED: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06AEE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06AED.
    case 0xC06AEF: {
        Instruction step(cpu, 0xD0, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06AEE.
    case 0xC06AF0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06AF1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:12 LDA @LOCAL00
    case 0xC06AF3: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06AF5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06AF7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06AF8: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06AFA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06AFB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:14 CLC
    case 0xC06AFC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:15 ADC @VIRTUAL06
    case 0xC06AFD: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:16 STA @VIRTUAL06
    case 0xC06AFF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:16 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC08526.
    case 0xC06B00: {
        Instruction step(cpu, 0x06, 0x0000E0u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:17 CPX #0
    case 0xC06B01: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:17 CPX #0
    // Overlapping static entry reached from 0xC06B00.
    case 0xC06B02: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:17 CPX #0
    // Overlapping static entry reached from 0xC06B01.
    case 0xC06B03: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:18 BNE @UNKNOWN0
    case 0xC06B04: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC06B06: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:20 LDY #screen_transition_config::ending_sound_effect
    case 0xC06B08: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:20 LDY #screen_transition_config::ending_sound_effect
    // Overlapping static entry reached from 0xC06B08.
    case 0xC06B0A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:21 LDA [@VIRTUAL06],Y
    case 0xC06B0B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC06B0D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:23 AND #$00FF
    case 0xC06B0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC06B0F.
    case 0xC06B11: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:24 BRA @UNKNOWN1
    case 0xC06B12: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC06B14: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:27 LDY #screen_transition_config::start_sound_effect
    case 0xC06B16: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:27 LDY #screen_transition_config::start_sound_effect
    // Overlapping static entry reached from 0xC06B16.
    case 0xC06B18: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:28 LDA [@VIRTUAL06],Y
    case 0xC06B19: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC06B1B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:30 AND #$00FF
    case 0xC06B1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC06B1D.
    case 0xC06B1F: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:32 END_C_FUNCTION
    case 0xC06B20: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:32 END_C_FUNCTION
    case 0xC06B21: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
