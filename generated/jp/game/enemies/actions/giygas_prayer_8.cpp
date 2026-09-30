// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/giygas_prayer_8.asm
bool resume_battle_actions_giygas_prayer_8(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C68A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:6 END_STACK_VARS
    case 0xC2C68C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:6 END_STACK_VARS
    case 0xC2C68D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:6 END_STACK_VARS
    case 0xC2C68E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C68E.
    case 0xC2C690: {
        Instruction step(cpu, 0xFF, 0xC8A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:6 END_STACK_VARS
    case 0xC2C691: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    case 0xC2C692: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x0044C8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    // Overlapping static entry reached from 0xC2C692.
    case 0xC2C694: {
        Instruction step(cpu, 0x44, 0x000E85u, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    case 0xC2C695: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    case 0xC2C697: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    // Overlapping static entry reached from 0xC2C697.
    case 0xC2C699: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:7 LOADPTR MSG_BTL_INORU_BACK_TO_PC_8, @LOCAL00
    case 0xC2C69A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:8 LDA #MUSIC::GIYGAS_WEAKENED2
    case 0xC2C69C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x00004Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:8 LDA #MUSIC::GIYGAS_WEAKENED2
    // Overlapping static entry reached from 0xC2C69C.
    case 0xC2C69E: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:9 JSR UNKNOWN_C2C41F
    case 0xC2C69F: {
        Instruction step(cpu, 0x20, 0x00C3D9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:10 LDA #GIYGAS_PHASES::PRAYER_8_USED
    case 0xC2C6A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:10 LDA #GIYGAS_PHASES::PRAYER_8_USED
    // Overlapping static entry reached from 0xC2C6A2.
    case 0xC2C6A4: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_8.asm:11 STA GIYGAS_PHASE
    case 0xC2C6A5: {
        Instruction step(cpu, 0x8D, 0x00AB7Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:12 END_C_FUNCTION
    case 0xC2C6A8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/giygas_prayer_8.asm:12 END_C_FUNCTION
    case 0xC2C6A9: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
