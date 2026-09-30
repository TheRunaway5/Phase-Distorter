// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/recover_hp.asm
bool resume_battle_recover_hp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/recover_hp.asm:3 BEGIN_C_FUNCTION
    case 0xC27294: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC27296: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC27297: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC27298: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC27299: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC27299.
    case 0xC2729B: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC2729C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/recover_hp.asm:10 END_STACK_VARS
    case 0xC2729D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:11 STX @LOCAL02
    case 0xC2729E: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/recover_hp.asm:11 STX @LOCAL02
    // Overlapping static entry reached from 0xC2729B.
    case 0xC2729F: {
        Instruction step(cpu, 0x16, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/recover_hp.asm:12 STA @VIRTUAL02
    case 0xC272A0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:12 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2729F.
    case 0xC272A1: {
        Instruction step(cpu, 0x02, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/recover_hp.asm:13 LDX @VIRTUAL02
    case 0xC272A2: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_hp.asm:14 LDA a:battler::consciousness,X
    case 0xC272A4: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:15 AND #$00FF
    case 0xC272A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC272A7.
    case 0xC272A9: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_hp.asm:16 CMP #1
    case 0xC272AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:16 CMP #1
    // Overlapping static entry reached from 0xC272AA.
    case 0xC272AC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_hp.asm:17 BNE @UNKNOWN2
    case 0xC272AD: {
        Instruction step(cpu, 0xD0, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/recover_hp.asm:18 LDX @VIRTUAL02
    case 0xC272AF: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_hp.asm:19 LDA a:battler::afflictions,X
    case 0xC272B1: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:20 AND #$00FF
    case 0xC272B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC272B4.
    case 0xC272B6: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_hp.asm:21 CMP #1
    case 0xC272B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:21 CMP #1
    // Overlapping static entry reached from 0xC272B7.
    case 0xC272B9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/recover_hp.asm:22 BEQ @UNKNOWN1
    case 0xC272BA: {
        Instruction step(cpu, 0xF0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/recover_hp.asm:23 LDX @LOCAL02
    case 0xC272BC: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_hp.asm:24 STX @VIRTUAL04
    case 0xC272BE: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/recover_hp.asm:25 TXA
    case 0xC272C0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:26 LDX @VIRTUAL02
    case 0xC272C1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_hp.asm:27 CLC
    case 0xC272C3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/recover_hp.asm:28 ADC a:battler::hp_target,X
    case 0xC272C4: {
        Instruction step(cpu, 0x7D, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/recover_hp.asm:29 TAY
    case 0xC272C7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/recover_hp.asm:30 STY @LOCAL02
    case 0xC272C8: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/recover_hp.asm:31 TYX
    case 0xC272CA: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/recover_hp.asm:32 LDA @VIRTUAL02
    case 0xC272CB: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:33 JSR SET_HP
    case 0xC272CD: {
        Instruction step(cpu, 0x20, 0x007126u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/recover_hp.asm:34 LDX @VIRTUAL02
    case 0xC272D0: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/recover_hp.asm:35 LDY @LOCAL02
    case 0xC272D2: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/recover_hp.asm:36 TYA
    case 0xC272D4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:37 CMP a:battler::hp_max,X
    case 0xC272D5: {
        Instruction step(cpu, 0xDD, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:38 BCC @UNKNOWN0
    case 0xC272D8: {
        Instruction step(cpu, 0x90, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC272DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x0069A1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    // Overlapping static entry reached from 0xC272DA.
    case 0xC272DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC272DD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    // Overlapping static entry reached from 0xC272DC.
    case 0xC272DE: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC272DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    // Overlapping static entry reached from 0xC272DF.
    case 0xC272E1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC272E2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/recover_hp.asm:39 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HPMAX_KAIFUKU
    case 0xC272E4: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/recover_hp.asm:40 BRA @UNKNOWN2
    case 0xC272E8: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC272EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BAu : 0x0069BAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272EA.
    case 0xC272EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC272ED: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272EC.
    case 0xC272EE: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC272EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    // Overlapping static entry reached from 0xC272EF.
    case 0xC272F1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_hp.asm:42 LOADPTR MSG_BTL_HP_KAIFUKU, @LOCAL00
    case 0xC272F2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/recover_hp.asm:43 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC272F4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/recover_hp.asm:43 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC272F6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/recover_hp.asm:43 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC272F8: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272FA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272FC: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC272FE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/recover_hp.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC27300: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/recover_hp.asm:45 JSL DISPLAY_TEXT_WAIT
    case 0xC27302: {
        Instruction step(cpu, 0x22, 0xC1DC66u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/recover_hp.asm:46 BRA @UNKNOWN2
    case 0xC27306: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC27308: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000096u : 0x007696u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC27308.
    case 0xC2730A: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC2730B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC2730A.
    case 0xC2730C: {
        Instruction step(cpu, 0x0E, 0x00EFA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC2730D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    // Overlapping static entry reached from 0xC2730D.
    case 0xC2730F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC27310: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/recover_hp.asm:48 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_HEAL_NG
    case 0xC27312: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/recover_hp.asm:50 END_C_FUNCTION
    case 0xC27316: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/recover_hp.asm:50 END_C_FUNCTION
    case 0xC27317: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
