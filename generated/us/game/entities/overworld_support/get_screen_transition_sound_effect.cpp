// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/get_screen_transition_sound_effect.asm
bool resume_overworld_get_screen_transition_sound_effect(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC068AF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC068B4.
    case 0xC068B6: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:9 END_STACK_VARS
    case 0xC068B8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:10 STA @LOCAL00
    case 0xC068B9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:10 STA @LOCAL00
    // Overlapping static entry reached from 0xC068B6.
    case 0xC068BA: {
        Instruction step(cpu, 0x0E, 0x0000A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x001400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068BB.
    case 0xC068BD: {
        Instruction step(cpu, 0x14, 0x000085u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068BE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068BD.
    case 0xC068BF: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068BF.
    case 0xC068C1: {
        Instruction step(cpu, 0xD0, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068C0.
    case 0xC068C2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:11 LOADPTR SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068C3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:12 LDA @LOCAL00
    case 0xC068C5: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068C7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068C9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068CA: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068CC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:13 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068CD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:14 CLC
    case 0xC068CE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:15 ADC @VIRTUAL06
    case 0xC068CF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:16 STA @VIRTUAL06
    case 0xC068D1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:17 CPX #0
    case 0xC068D3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:17 CPX #0
    // Overlapping static entry reached from 0xC068D3.
    case 0xC068D5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:18 BNE @UNKNOWN0
    case 0xC068D6: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC068D8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:20 LDY #screen_transition_config::ending_sound_effect
    case 0xC068DA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:20 LDY #screen_transition_config::ending_sound_effect
    // Overlapping static entry reached from 0xC068DA.
    case 0xC068DC: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:21 LDA [@VIRTUAL06],Y
    case 0xC068DD: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xC068DF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:23 AND #$00FF
    case 0xC068E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC068E1.
    case 0xC068E3: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:24 BRA @UNKNOWN1
    case 0xC068E4: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC068E6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:27 LDY #screen_transition_config::start_sound_effect
    case 0xC068E8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:27 LDY #screen_transition_config::start_sound_effect
    // Overlapping static entry reached from 0xC068E8.
    case 0xC068EA: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:28 LDA [@VIRTUAL06],Y
    case 0xC068EB: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC068ED: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:30 AND #$00FF
    case 0xC068EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_screen_transition_sound_effect.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC068EF.
    case 0xC068F1: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:32 END_C_FUNCTION
    case 0xC068F2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_screen_transition_sound_effect.asm:32 END_C_FUNCTION
    case 0xC068F3: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
