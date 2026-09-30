// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/show_hp_alert.asm
bool resume_overworld_show_hp_alert(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/show_hp_alert.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1D9B8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9BA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9BB: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9BC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1D9BD.
    case 0xC1D9BF: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9C0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9C1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:12 TAY
    case 0xC1D9C2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:13 STY @CHARID
    case 0xC1D9C3: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:26 JSL UNKNOWN_C0943C
    case 0xC1D9C5: {
        Instruction step(cpu, 0x22, 0xC0941Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1D9C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1D9C9.
    case 0xC1D9CB: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1D9CC: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:28 LDX #.SIZEOF(char_struct::name)
    case 0xC1D9CF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:28 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1D9CF.
    case 0xC1D9D1: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:29 LDY @CHARID
    case 0xC1D9D2: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:30 TYA
    case 0xC1D9D4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:31 DEC
    case 0xC1D9D5: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC1D9D6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D9D6.
    case 0xC1D9D8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:33 JSL MULT168
    case 0xC1D9D9: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:34 CLC
    case 0xC1D9DD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1D9DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1D9DE.
    case 0xC1D9E0: {
        Instruction step(cpu, 0x9C, 0x001220u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:36 JSR UNKNOWN_C1AC4A
    case 0xC1D9E1: {
        Instruction step(cpu, 0x20, 0x00AB12u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:36 JSR UNKNOWN_C1AC4A
    // Overlapping static entry reached from 0xC1D9E0.
    case 0xC1D9E3: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1D9E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EEu : 0x0027EEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1D9E4.
    case 0xC1D9E6: {
        Instruction step(cpu, 0x27, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1D9E7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1D9E6.
    case 0xC1D9E8: {
        Instruction step(cpu, 0x0E, 0x00C9A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1D9E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1D9E9.
    case 0xC1D9EB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1D9EC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1D9EE: {
        Instruction step(cpu, 0x22, 0xC18913u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:38 JSR CLOSE_FOCUS_WINDOW
    case 0xC1D9F2: {
        Instruction step(cpu, 0x20, 0x0002A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:39 JSL WINDOW_TICK
    case 0xC1D9F5: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:40 JSL UNKNOWN_C09451
    case 0xC1D9F9: {
        Instruction step(cpu, 0x22, 0xC09430u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:45 PLD
    case 0xC1D9FD: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // src/overworld/show_hp_alert.asm:46 RTL
    case 0xC1D9FE: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
