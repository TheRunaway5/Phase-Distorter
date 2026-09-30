// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/giygas_prayer_8.asm
bool resume_battle_actions_giygas_prayer_8(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C6D0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:6 END_STACK_VARS
    case 0xC2C6D2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:6 END_STACK_VARS
    case 0xC2C6D3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:6 END_STACK_VARS
    case 0xC2C6D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C6D4.
    case 0xC2C6D6: {
        Instruction step(cpu, 0xFF, 0xDEA95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:6 END_STACK_VARS
    case 0xC2C6D7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    case 0xC2C6D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DEu : 0x00F6DEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    // Overlapping static entry reached from 0xC2C6D8.
    case 0xC2C6DA: {
        Instruction step(cpu, 0xF6, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    case 0xC2C6DB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    // Overlapping static entry reached from 0xC2C6DA.
    case 0xC2C6DC: {
        Instruction step(cpu, 0x0E, 0x00C9A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    case 0xC2C6DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    // Overlapping static entry reached from 0xC2C6DD.
    case 0xC2C6DF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    case 0xC2C6E0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:8 LDA #MUSIC::GIYGAS_WEAKENED2
    case 0xC2C6E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x00004Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:8 LDA #MUSIC::GIYGAS_WEAKENED2
    // Overlapping static entry reached from 0xC2C6E2.
    case 0xC2C6E4: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:9 JSR UNKNOWN_C2C41F
    case 0xC2C6E5: {
        Instruction step(cpu, 0x20, 0x00C41Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:10 LDA #GIYGAS_PHASES::PRAYER_8_USED
    case 0xC2C6E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:10 LDA #GIYGAS_PHASES::PRAYER_8_USED
    // Overlapping static entry reached from 0xC2C6E8.
    case 0xC2C6EA: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:11 STA GIYGAS_PHASE
    case 0xC2C6EB: {
        Instruction step(cpu, 0x8D, 0x00A97Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:12 END_C_FUNCTION
    case 0xC2C6EE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:12 END_C_FUNCTION
    case 0xC2C6EF: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
