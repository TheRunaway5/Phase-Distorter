// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/giygas_prayer_9.asm
bool resume_battle_actions_giygas_prayer_9(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C6AA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:10 END_STACK_VARS
    case 0xC2C6AC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:10 END_STACK_VARS
    case 0xC2C6AD: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:10 END_STACK_VARS
    case 0xC2C6AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C6AE.
    case 0xC2C6B0: {
        Instruction step(cpu, 0xFF, 0x2B225Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:10 END_STACK_VARS
    case 0xC2C6B1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:11 JSL RESET_HPPP_ROLLING
    case 0xC2C6B2: {
        Instruction step(cpu, 0x22, 0xC20E2Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:11 JSL RESET_HPPP_ROLLING
    // Overlapping static entry reached from 0xC2C6B0.
    case 0xC2C6B4: {
        Instruction step(cpu, 0x0E, 0x00A9C2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:12 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @LOCAL00
    case 0xC2C6B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F4u : 0x0044F4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:12 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @LOCAL00
    // Overlapping static entry reached from 0xC2C6B4.
    case 0xC2C6B7: {
        Instruction step(cpu, 0xF4, 0x008544u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:12 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @LOCAL00
    // Overlapping static entry reached from 0xC2C6B6.
    case 0xC2C6B8: {
        Instruction step(cpu, 0x44, 0x000E85u, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:12 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @LOCAL00
    case 0xC2C6B9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:12 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @LOCAL00
    // Overlapping static entry reached from 0xC2C6B7.
    case 0xC2C6BA: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:12 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @LOCAL00
    case 0xC2C6BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:12 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @LOCAL00
    // Overlapping static entry reached from 0xC2C6BB.
    case 0xC2C6BD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:12 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @LOCAL00
    case 0xC2C6BE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:13 LDA #MUSIC::GIYGAS_WEAKENED2
    case 0xC2C6C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x00004Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:13 LDA #MUSIC::GIYGAS_WEAKENED2
    // Overlapping static entry reached from 0xC2C6C0.
    case 0xC2C6C2: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:14 JSR UNKNOWN_C2C41F
    case 0xC2C6C3: {
        Instruction step(cpu, 0x20, 0x00C3D9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:15 LDA #GIYGAS_PRAYER_DAMAGE_7
    case 0xC2C6C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000C80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:15 LDA #GIYGAS_PRAYER_DAMAGE_7
    // Overlapping static entry reached from 0xC2C6C6.
    case 0xC2C6C8: {
        Instruction step(cpu, 0x0C, 0x009C20u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:16 JSR GIYGAS_HURT_PRAYER
    case 0xC2C6C9: {
        Instruction step(cpu, 0x20, 0x00C39Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:16 JSR GIYGAS_HURT_PRAYER
    // Overlapping static entry reached from 0xC2C6C8.
    case 0xC2C6CB: {
        Instruction step(cpu, 0xC3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:17 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_1, @LOCAL00
    case 0xC2C6CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Bu : 0x00459Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:17 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_1, @LOCAL00
    // Overlapping static entry reached from 0xC2C6CB.
    case 0xC2C6CD: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:17 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_1, @LOCAL00
    // Overlapping static entry reached from 0xC2C6CC.
    case 0xC2C6CE: {
        Instruction step(cpu, 0x45, 0x000085u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:17 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_1, @LOCAL00
    case 0xC2C6CF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:17 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_1, @LOCAL00
    // Overlapping static entry reached from 0xC2C6CE.
    case 0xC2C6D0: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:17 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_1, @LOCAL00
    case 0xC2C6D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:17 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_1, @LOCAL00
    // Overlapping static entry reached from 0xC2C6D1.
    case 0xC2C6D3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:17 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_1, @LOCAL00
    case 0xC2C6D4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:18 LDA #MUSIC::GIYGAS_WEAKENED2
    case 0xC2C6D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x00004Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:18 LDA #MUSIC::GIYGAS_WEAKENED2
    // Overlapping static entry reached from 0xC2C6D6.
    case 0xC2C6D8: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:19 JSR UNKNOWN_C2C41F
    case 0xC2C6D9: {
        Instruction step(cpu, 0x20, 0x00C3D9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:20 LDA #GIYGAS_PRAYER_DAMAGE_8
    case 0xC2C6DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x001900u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:20 LDA #GIYGAS_PRAYER_DAMAGE_8
    // Overlapping static entry reached from 0xC2C6DC.
    case 0xC2C6DE: {
        Instruction step(cpu, 0x19, 0x009C20u, 3u, AddressMode::AbsoluteIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:21 JSR GIYGAS_HURT_PRAYER
    case 0xC2C6DF: {
        Instruction step(cpu, 0x20, 0x00C39Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:21 JSR GIYGAS_HURT_PRAYER
    // Overlapping static entry reached from 0xC2C6DE.
    case 0xC2C6E1: {
        Instruction step(cpu, 0xC3, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:22 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_2, @LOCAL00
    case 0xC2C6E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0045E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:22 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_2, @LOCAL00
    // Overlapping static entry reached from 0xC2C6E1.
    case 0xC2C6E3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000045u : 0x008545u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:22 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_2, @LOCAL00
    // Overlapping static entry reached from 0xC2C6E2.
    case 0xC2C6E4: {
        Instruction step(cpu, 0x45, 0x000085u, 2u, AddressMode::DirectPage);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:22 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_2, @LOCAL00
    case 0xC2C6E5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:22 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_2, @LOCAL00
    // Overlapping static entry reached from 0xC2C6E4.
    case 0xC2C6E6: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:22 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_2, @LOCAL00
    case 0xC2C6E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:22 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_2, @LOCAL00
    // Overlapping static entry reached from 0xC2C6E7.
    case 0xC2C6E9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:22 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_2, @LOCAL00
    case 0xC2C6EA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:23 LDA #MUSIC::GIYGAS_WEAKENED2
    case 0xC2C6EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x00004Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:23 LDA #MUSIC::GIYGAS_WEAKENED2
    // Overlapping static entry reached from 0xC2C6EC.
    case 0xC2C6EE: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:24 JSR UNKNOWN_C2C41F
    case 0xC2C6EF: {
        Instruction step(cpu, 0x20, 0x00C3D9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:25 LDA #GIYGAS_PRAYER_DAMAGE_9
    case 0xC2C6F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x003200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:25 LDA #GIYGAS_PRAYER_DAMAGE_9
    // Overlapping static entry reached from 0xC2C6F2.
    case 0xC2C6F4: {
        Instruction step(cpu, 0x32, 0x000020u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:26 JSR GIYGAS_HURT_PRAYER
    case 0xC2C6F5: {
        Instruction step(cpu, 0x20, 0x00C39Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:26 JSR GIYGAS_HURT_PRAYER
    // Overlapping static entry reached from 0xC2C6F4.
    case 0xC2C6F6: {
        Instruction step(cpu, 0x9C, 0x00A9C3u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:27 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_3, @LOCAL00
    case 0xC2C6F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x004625u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:27 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_3, @LOCAL00
    // Overlapping static entry reached from 0xC2C6F6.
    case 0xC2C6F9: {
        Instruction step(cpu, 0x25, 0x000046u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:27 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_3, @LOCAL00
    // Overlapping static entry reached from 0xC2C6F8.
    case 0xC2C6FA: {
        Instruction step(cpu, 0x46, 0x000085u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:27 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_3, @LOCAL00
    case 0xC2C6FB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:27 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_3, @LOCAL00
    // Overlapping static entry reached from 0xC2C6FA.
    case 0xC2C6FC: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:27 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_3, @LOCAL00
    case 0xC2C6FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:27 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_3, @LOCAL00
    // Overlapping static entry reached from 0xC2C6FD.
    case 0xC2C6FF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:27 LOADPTR MSG_BTL_INORU_BACK_TO_PC_F_3, @LOCAL00
    case 0xC2C700: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:28 LDA #MUSIC::GIYGAS_WEAKENED2
    case 0xC2C702: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x00004Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:28 LDA #MUSIC::GIYGAS_WEAKENED2
    // Overlapping static entry reached from 0xC2C702.
    case 0xC2C704: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:29 JSR UNKNOWN_C2C41F
    case 0xC2C705: {
        Instruction step(cpu, 0x20, 0x00C3D9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:30 LDA #GIYGAS_PRAYER_DAMAGE_10
    case 0xC2C708: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x006400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:30 LDA #GIYGAS_PRAYER_DAMAGE_10
    // Overlapping static entry reached from 0xC2C708.
    case 0xC2C70A: {
        Instruction step(cpu, 0x64, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:31 JSR GIYGAS_HURT_PRAYER
    case 0xC2C70B: {
        Instruction step(cpu, 0x20, 0x00C39Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:31 JSR GIYGAS_HURT_PRAYER
    // Overlapping static entry reached from 0xC2C70A.
    case 0xC2C70C: {
        Instruction step(cpu, 0x9C, 0x0022C3u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:32 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    case 0xC2C70E: {
        Instruction step(cpu, 0x22, 0xC1DB36u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:32 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC2C70C.
    case 0xC2C70F: {
        Instruction step(cpu, 0x36, 0x0000DBu, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:32 JSL REDIRECT_CLOSE_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC2C70F.
    case 0xC2C711: {
        Instruction step(cpu, 0xC1, 0x00009Cu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:33 STZ BATTLE_MODE_FLAG
    case 0xC2C712: {
        Instruction step(cpu, 0x9C, 0x00993Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:33 STZ BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC2C711.
    case 0xC2C713: {
        Instruction step(cpu, 0x3B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:33 STZ BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC2C713.
    case 0xC2C714: {
        Instruction step(cpu, 0x99, 0x001E22u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:34 JSL REDIRECT_HIDE_HPPP_WINDOWS
    case 0xC2C715: {
        Instruction step(cpu, 0x22, 0xC1DB1Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:34 JSL REDIRECT_HIDE_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC2C714.
    case 0xC2C717: {
        Instruction step(cpu, 0xDB, 0x000000u, 1u, AddressMode::Implied);
        step.stop();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:35 LDA #1
    case 0xC2C719: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:35 LDA #1
    // Overlapping static entry reached from 0xC2C719.
    case 0xC2C71B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:36 STA BATTLE_MODE_FLAG
    case 0xC2C71C: {
        Instruction step(cpu, 0x8D, 0x00993Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:37 JSL WINDOW_TICK
    case 0xC2C71F: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:38 LDA #GIYGAS_PHASES::DEFEATED
    case 0xC2C723: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:38 LDA #GIYGAS_PHASES::DEFEATED
    // Overlapping static entry reached from 0xC2C723.
    case 0xC2C725: {
        Instruction step(cpu, 0xFF, 0xAB7C8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:39 STA GIYGAS_PHASE
    case 0xC2C726: {
        Instruction step(cpu, 0x8D, 0x00AB7Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:40 LDA #MUSIC::GIYGAS_DEATH
    case 0xC2C729: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BEu : 0x0000BEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:40 LDA #MUSIC::GIYGAS_DEATH
    // Overlapping static entry reached from 0xC2C729.
    case 0xC2C72B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:41 JSL CHANGE_MUSIC
    case 0xC2C72C: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:42 LDY #0
    case 0xC2C730: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:42 LDY #0
    // Overlapping static entry reached from 0xC2C730.
    case 0xC2C732: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:43 STY @LOCAL04
    case 0xC2C733: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:45 LOADPTR FINAL_GIYGAS_PRAYER_NOISE_TABLE, @VIRTUAL06
    case 0xC2C735: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x0077CAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:45 LOADPTR FINAL_GIYGAS_PRAYER_NOISE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C735.
    case 0xC2C737: {
        Instruction step(cpu, 0x77, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:45 LOADPTR FINAL_GIYGAS_PRAYER_NOISE_TABLE, @VIRTUAL06
    case 0xC2C738: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:45 LOADPTR FINAL_GIYGAS_PRAYER_NOISE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C737.
    case 0xC2C739: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:45 LOADPTR FINAL_GIYGAS_PRAYER_NOISE_TABLE, @VIRTUAL06
    case 0xC2C73A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:45 LOADPTR FINAL_GIYGAS_PRAYER_NOISE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C739.
    case 0xC2C73B: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:45 LOADPTR FINAL_GIYGAS_PRAYER_NOISE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C73A.
    case 0xC2C73C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:45 LOADPTR FINAL_GIYGAS_PRAYER_NOISE_TABLE, @VIRTUAL06
    case 0xC2C73D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:46 LDY @LOCAL04
    case 0xC2C73F: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:47 TYA
    case 0xC2C741: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C742: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C744: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C746: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:48 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2C748: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:49 CLC
    case 0xC2C74A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:50 ADC @VIRTUAL0A
    case 0xC2C74B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:51 STA @VIRTUAL0A
    case 0xC2C74D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:52 LDA [@VIRTUAL0A]
    case 0xC2C74F: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:53 AND #$00FF
    case 0xC2C751: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC2C751.
    case 0xC2C753: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:54 TAX
    case 0xC2C754: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:55 INY
    case 0xC2C755: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:56 STY @LOCAL04
    case 0xC2C756: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:57 TXA
    case 0xC2C758: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:58 JSL PLAY_SOUND
    case 0xC2C759: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:59 LDY @LOCAL04
    case 0xC2C75D: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:60 TYA
    case 0xC2C75F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:61 CLC
    case 0xC2C760: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:62 ADC @VIRTUAL06
    case 0xC2C761: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:63 STA @VIRTUAL06
    case 0xC2C763: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:64 LDA [@VIRTUAL06]
    case 0xC2C765: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:65 AND #$00FF
    case 0xC2C767: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC2C767.
    case 0xC2C769: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:66 TAX
    case 0xC2C76A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:67 BEQ @UNKNOWN1
    case 0xC2C76B: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:68 INY
    case 0xC2C76D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:69 STY @LOCAL04
    case 0xC2C76E: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:70 TXA
    case 0xC2C770: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:71 JSR WAIT
    case 0xC2C771: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:72 BRA @UNKNOWN0
    case 0xC2C774: {
        Instruction step(cpu, 0x80, 0x0000BFu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:74 LDA #MUSIC::GIYGAS_DEATH2
    case 0xC2C776: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Bu : 0x00004Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:74 LDA #MUSIC::GIYGAS_DEATH2
    // Overlapping static entry reached from 0xC2C776.
    case 0xC2C778: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:75 JSL CHANGE_MUSIC
    case 0xC2C779: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:76 STZ GIYGAS_PHASE
    case 0xC2C77D: {
        Instruction step(cpu, 0x9C, 0x00AB7Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:77 LDA #8*SECONDS
    case 0xC2C780: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:77 LDA #8*SECONDS
    // Overlapping static entry reached from 0xC2C780.
    case 0xC2C782: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:78 JSR WAIT
    case 0xC2C783: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:78 JSR WAIT
    // Overlapping static entry reached from 0xC2C782.
    case 0xC2C784: {
        Instruction step(cpu, 0xFD, 0x00A268u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:79 LDX #.LOWORD(BATTLERS_TABLE) + 9 * .SIZEOF(battler) + battler::consciousness
    case 0xC2C786: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000078u : 0x00A478u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:79 LDX #.LOWORD(BATTLERS_TABLE) + 9 * .SIZEOF(battler) + battler::consciousness
    // Overlapping static entry reached from 0xC2C784.
    case 0xC2C787: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:79 LDX #.LOWORD(BATTLERS_TABLE) + 9 * .SIZEOF(battler) + battler::consciousness
    // Overlapping static entry reached from 0xC2C786.
    case 0xC2C788: {
        Instruction step(cpu, 0xA4, 0x000086u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:80 STX @LOCAL03
    case 0xC2C789: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:80 STX @LOCAL03
    // Overlapping static entry reached from 0xC2C788.
    case 0xC2C78A: {
        Instruction step(cpu, 0x16, 0x0000E2u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C78B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:81 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2C78A.
    case 0xC2C78C: {
        Instruction step(cpu, 0x20, 0x0001A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:82 LDA #1
    case 0xC2C78D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:83 STA __BSS_START__,X
    case 0xC2C78F: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:83 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2C78D.
    case 0xC2C790: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:84 JSL UNKNOWN_C2F8F9
    case 0xC2C792: {
        Instruction step(cpu, 0x22, 0xC2F812u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:86 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POKEY_RUN_AWAY
    case 0xC2C796: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x003CC9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:86 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POKEY_RUN_AWAY
    // Overlapping static entry reached from 0xC2C796.
    case 0xC2C798: {
        Instruction step(cpu, 0x3C, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:86 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POKEY_RUN_AWAY
    case 0xC2C799: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:86 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POKEY_RUN_AWAY
    case 0xC2C79B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:86 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POKEY_RUN_AWAY
    // Overlapping static entry reached from 0xC2C79B.
    case 0xC2C79D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:86 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POKEY_RUN_AWAY
    case 0xC2C79E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:86 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_POKEY_RUN_AWAY
    case 0xC2C7A0: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C7A4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:88 LDA #0
    case 0xC2C7A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00A600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:89 LDX @LOCAL03
    case 0xC2C7A8: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:89 LDX @LOCAL03
    // Overlapping static entry reached from 0xC2C7A6.
    case 0xC2C7A9: {
        Instruction step(cpu, 0x16, 0x00009Du, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:90 STA __BSS_START__,X
    case 0xC2C7AA: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:90 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2C7A9.
    case 0xC2C7AB: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:91 JSL UNKNOWN_C2F8F9
    case 0xC2C7AD: {
        Instruction step(cpu, 0x22, 0xC2F812u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:93 LDA #1*SECOND
    case 0xC2C7B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:93 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C7B1.
    case 0xC2C7B3: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:94 JSR WAIT
    case 0xC2C7B4: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:96 LDY #2
    case 0xC2C7B7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:96 LDY #2
    // Overlapping static entry reached from 0xC2C7B7.
    case 0xC2C7B9: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:97 STY @LOCAL02
    case 0xC2C7BA: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:98 TYA
    case 0xC2C7BC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:99 STA @VIRTUAL04
    case 0xC2C7BD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:100 LDA #45
    case 0xC2C7BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:100 LDA #45
    // Overlapping static entry reached from 0xC2C7BF.
    case 0xC2C7C1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:101 STA @VIRTUAL02
    case 0xC2C7C2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:102 LDA #1*SECOND
    case 0xC2C7C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:102 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C7C4.
    case 0xC2C7C6: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:103 STA VERTICAL_SHAKE_DURATION
    case 0xC2C7C7: {
        Instruction step(cpu, 0x8D, 0x00AF61u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:104 LDX #0
    case 0xC2C7CA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:104 LDX #0
    // Overlapping static entry reached from 0xC2C7CA.
    case 0xC2C7CC: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:105 STX @LOCAL01
    case 0xC2C7CD: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:106 BRA @UNKNOWN8
    case 0xC2C7CF: {
        Instruction step(cpu, 0x80, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:109 LDA #0
    case 0xC2C7D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:109 LDA #0
    // Overlapping static entry reached from 0xC2C7D1.
    case 0xC2C7D3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:110 STA @LOCAL04
    case 0xC2C7D4: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:111 BRA @UNKNOWN5
    case 0xC2C7D6: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:113 JSL WINDOW_TICK
    case 0xC2C7D8: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:115 LDA @VIRTUAL04
    case 0xC2C7DC: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:116 BEQ @UNKNOWN4
    case 0xC2C7DE: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:117 LDA @VIRTUAL02
    case 0xC2C7E0: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:118 DEC
    case 0xC2C7E2: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:119 STA @VIRTUAL02
    case 0xC2C7E3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:120 BNE @UNKNOWN4
    case 0xC2C7E5: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:121 LDA @VIRTUAL04
    case 0xC2C7E7: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:122 DEC
    case 0xC2C7E9: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:123 STA @VIRTUAL04
    case 0xC2C7EA: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:124 LDA #45
    case 0xC2C7EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Du : 0x00002Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:124 LDA #45
    // Overlapping static entry reached from 0xC2C7EC.
    case 0xC2C7EE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:125 STA @VIRTUAL02
    case 0xC2C7EF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:126 LDA #1*SECOND
    case 0xC2C7F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:126 LDA #1*SECOND
    // Overlapping static entry reached from 0xC2C7F1.
    case 0xC2C7F3: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:127 STA VERTICAL_SHAKE_DURATION
    case 0xC2C7F4: {
        Instruction step(cpu, 0x8D, 0x00AF61u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:129 LDA @LOCAL04
    case 0xC2C7F7: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:130 INC
    case 0xC2C7F9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:131 STA @LOCAL04
    case 0xC2C7FA: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:133 LDX @LOCAL01
    case 0xC2C7FC: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:134 TXA
    case 0xC2C7FE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:135 ASL
    case 0xC2C7FF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:136 TAX
    case 0xC2C800: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:137 LDA @LOCAL04
    case 0xC2C801: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:138 CMP f:GIYGAS_DEATH_STATIC_TRANSITION_DELAYS,X
    case 0xC2C803: {
        Instruction step(cpu, 0xDF, 0xC4779Eu, 4u, AddressMode::LongIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:139 BCC @UNKNOWN3
    case 0xC2C807: {
        Instruction step(cpu, 0x90, 0x0000CFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:140 JSL UNKNOWN_C2DAE3
    case 0xC2C809: {
        Instruction step(cpu, 0x22, 0xC2DA58u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:141 LDY @LOCAL02
    case 0xC2C80D: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:142 TYA
    case 0xC2C80F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:143 JSL UNKNOWN_C0AC3A
    case 0xC2C810: {
        Instruction step(cpu, 0x22, 0xC0AC19u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:144 LDY @LOCAL02
    case 0xC2C814: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:145 CPY #2
    case 0xC2C816: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:145 CPY #2
    // Overlapping static entry reached from 0xC2C816.
    case 0xC2C818: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:146 BNE @UNKNOWN6
    case 0xC2C819: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:147 LDY #1
    case 0xC2C81B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:147 LDY #1
    // Overlapping static entry reached from 0xC2C81B.
    case 0xC2C81D: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:148 STY @LOCAL02
    case 0xC2C81E: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:149 BRA @UNKNOWN7
    case 0xC2C820: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:151 LDY #2
    case 0xC2C822: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:151 LDY #2
    // Overlapping static entry reached from 0xC2C822.
    case 0xC2C824: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:152 STY @LOCAL02
    case 0xC2C825: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:154 LDX @LOCAL01
    case 0xC2C827: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:155 INX
    case 0xC2C829: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:156 STX @LOCAL01
    case 0xC2C82A: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:158 TXA
    case 0xC2C82C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:159 ASL
    case 0xC2C82D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:160 TAX
    case 0xC2C82E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:161 LDA f:GIYGAS_DEATH_STATIC_TRANSITION_DELAYS,X
    case 0xC2C82F: {
        Instruction step(cpu, 0xBF, 0xC4779Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:162 BNE @UNKNOWN2
    case 0xC2C833: {
        Instruction step(cpu, 0xD0, 0x00009Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:163 LDA #MUSIC::GIYGAS_STATIC
    case 0xC2C835: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B6u : 0x0000B6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:163 LDA #MUSIC::GIYGAS_STATIC
    // Overlapping static entry reached from 0xC2C835.
    case 0xC2C837: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:164 JSL CHANGE_MUSIC
    case 0xC2C838: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:166 LDA #10*SECONDS
    case 0xC2C83C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000058u : 0x000258u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:166 LDA #10*SECONDS
    // Overlapping static entry reached from 0xC2C83C.
    case 0xC2C83E: {
        Instruction step(cpu, 0x02, 0x000020u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:167 JSR WAIT
    case 0xC2C83F: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:168 LDA #SFX::PSI_THUNDER_DAMAGE
    case 0xC2C842: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:168 LDA #SFX::PSI_THUNDER_DAMAGE
    // Overlapping static entry reached from 0xC2C842.
    case 0xC2C844: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:169 JSL PLAY_SOUND
    case 0xC2C845: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:169 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC2C8BF.
    case 0xC2C846: {
        Instruction step(cpu, 0xBF, 0x22C0ABu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:170 JSL STOP_MUSIC
    case 0xC2C849: {
        Instruction step(cpu, 0x22, 0xC0ABA5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:170 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC2C846.
    case 0xC2C84A: {
        Instruction step(cpu, 0xA5, 0x0000ABu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:170 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC2C84A.
    case 0xC2C84C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A0u : 0x0005A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:171 LDY #5
    case 0xC2C84D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:171 LDY #5
    // Overlapping static entry reached from 0xC2C84C.
    case 0xC2C84E: {
        Instruction step(cpu, 0x05, 0x000000u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:171 LDY #5
    // Overlapping static entry reached from 0xC2C84D.
    case 0xC2C84F: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:172 LDX #0
    case 0xC2C850: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:172 LDX #0
    // Overlapping static entry reached from 0xC2C850.
    case 0xC2C852: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:173 TYA
    case 0xC2C853: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:174 JSL UNKNOWN_C2E8C4
    case 0xC2C854: {
        Instruction step(cpu, 0x22, 0xC2E7DDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:175 BRA @UNKNOWN10
    case 0xC2C858: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:177 JSL WINDOW_TICK
    case 0xC2C85A: {
        Instruction step(cpu, 0x22, 0xC13502u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:179 JSL UNKNOWN_C2E9C8
    case 0xC2C85E: {
        Instruction step(cpu, 0x22, 0xC2E8E1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:180 CMP #0
    case 0xC2C862: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:180 CMP #0
    // Overlapping static entry reached from 0xC2C862.
    case 0xC2C864: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:181 BNE @UNKNOWN9
    case 0xC2C865: {
        Instruction step(cpu, 0xD0, 0x0000F3u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:182 JSL STOP_MUSIC
    case 0xC2C867: {
        Instruction step(cpu, 0x22, 0xC0ABA5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:183 LDX #MUSIC::NONE
    case 0xC2C86B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:183 LDX #MUSIC::NONE
    // Overlapping static entry reached from 0xC2C86B.
    case 0xC2C86D: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:184 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_FINAL
    case 0xC2C86E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E3u : 0x0001E3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:184 LDA #ENEMY_GROUP::BOSS_GIYGAS_PHASE_FINAL
    // Overlapping static entry reached from 0xC2C86E.
    case 0xC2C870: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:185 JSR UNKNOWN_C2C21F
    case 0xC2C871: {
        Instruction step(cpu, 0x20, 0x00C1CAu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:185 JSR UNKNOWN_C2C21F
    // Overlapping static entry reached from 0xC2C870.
    case 0xC2C872: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:185 JSR UNKNOWN_C2C21F
    // Overlapping static entry reached from 0xC2C872.
    case 0xC2C873: {
        Instruction step(cpu, 0xC1, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:186 LDA #8*SECONDS
    case 0xC2C874: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0001E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:186 LDA #8*SECONDS
    // Overlapping static entry reached from 0xC2C873.
    case 0xC2C875: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x002001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:186 LDA #8*SECONDS
    // Overlapping static entry reached from 0xC2C874.
    case 0xC2C876: {
        Instruction step(cpu, 0x01, 0x000020u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:187 JSR WAIT
    case 0xC2C877: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:187 JSR WAIT
    // Overlapping static entry reached from 0xC2C876.
    case 0xC2C878: {
        Instruction step(cpu, 0xFD, 0x00A968u, 3u, AddressMode::AbsoluteIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:188 LDA #3
    case 0xC2C87A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:188 LDA #3
    // Overlapping static entry reached from 0xC2C878.
    case 0xC2C87B: {
        Instruction step(cpu, 0x03, 0x000000u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:188 LDA #3
    // Overlapping static entry reached from 0xC2C87A.
    case 0xC2C87C: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/giygas_prayer_9.asm:189 STA SPECIAL_DEFEAT
    case 0xC2C87D: {
        Instruction step(cpu, 0x8D, 0x00ABE3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:190 END_C_FUNCTION
    case 0xC2C880: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/giygas_prayer_9.asm:190 END_C_FUNCTION
    case 0xC2C881: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
