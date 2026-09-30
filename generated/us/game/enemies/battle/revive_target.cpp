// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/revive_target.asm
bool resume_battle_revive_target(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/revive_target.asm:3 BEGIN_C_FUNCTION
    case 0xC27397: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC27399: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC2739A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC2739B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC2739C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC2739C.
    case 0xC2739E: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC2739F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC273A0: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:21 TXY
    case 0xC273A1: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:22 STY @LOCAL05
    case 0xC273A2: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:23 STA @VIRTUAL04
    case 0xC273A4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC273A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Cu : 0x006F7Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC273A6.
    case 0xC273A8: {
        Instruction step(cpu, 0x6F, 0xA90E85u, 4u, AddressMode::Long);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC273A9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC273AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC273A8.
    case 0xC273AC: {
        Instruction step(cpu, 0xEF, 0x108500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC273AB.
    case 0xC273AD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC273AE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC273B0: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC273B4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:26 LDA #0
    case 0xC273B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00A600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:27 LDX @VIRTUAL04
    case 0xC273B8: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:27 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC273B6.
    case 0xC273B9: {
        Instruction step(cpu, 0x04, 0x00009Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:28 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC273BA: {
        Instruction step(cpu, 0x9D, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:28 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    // Overlapping static entry reached from 0xC273B9.
    case 0xC273BB: {
        Instruction step(cpu, 0x23, 0x000000u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:29 LDX @VIRTUAL04
    case 0xC273BD: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:30 STA a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC273BF: {
        Instruction step(cpu, 0x9D, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:31 LDX @VIRTUAL04
    case 0xC273C2: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:32 STA a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC273C4: {
        Instruction step(cpu, 0x9D, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:33 LDX @VIRTUAL04
    case 0xC273C7: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:34 STA a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC273C9: {
        Instruction step(cpu, 0x9D, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:35 LDX @VIRTUAL04
    case 0xC273CC: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:36 STA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC273CE: {
        Instruction step(cpu, 0x9D, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:37 LDX @VIRTUAL04
    case 0xC273D1: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:38 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC273D3: {
        Instruction step(cpu, 0x9D, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:39 LDX @VIRTUAL04
    case 0xC273D6: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:40 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC273D8: {
        Instruction step(cpu, 0x9D, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:41 LDX @VIRTUAL04
    case 0xC273DB: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC273DD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:43 STZ a:battler::current_action,X
    case 0xC273DF: {
        Instruction step(cpu, 0x9E, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/revive_target.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC273E2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:45 LDA #1
    case 0xC273E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:46 LDX @VIRTUAL04
    case 0xC273E6: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:46 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC273E4.
    case 0xC273E7: {
        Instruction step(cpu, 0x04, 0x00009Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:47 STA __BSS_START__+13,X
    case 0xC273E8: {
        Instruction step(cpu, 0x9D, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:47 STA __BSS_START__+13,X
    // Overlapping static entry reached from 0xC273E7.
    case 0xC273E9: {
        Instruction step(cpu, 0x0D, 0x00A400u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:48 LDY @LOCAL05
    case 0xC273EB: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:48 LDY @LOCAL05
    // Overlapping static entry reached from 0xC273E9.
    case 0xC273EC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:49 TYX
    case 0xC273ED: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC273EE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:51 LDA @VIRTUAL04
    case 0xC273F0: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:52 JSR SET_HP
    case 0xC273F2: {
        Instruction step(cpu, 0x20, 0x007126u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/revive_target.asm:53 LDX @VIRTUAL04
    case 0xC273F5: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:54 LDA a:battler::ally_or_enemy,X
    case 0xC273F7: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:55 AND #$00FF
    case 0xC273FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC273FA.
    case 0xC273FC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:56 BNE @UNKNOWN0
    case 0xC273FD: {
        Instruction step(cpu, 0xD0, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/revive_target.asm:57 LDX @VIRTUAL04
    case 0xC273FF: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:58 LDA a:battler::npc_id,X
    case 0xC27401: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:59 AND #$00FF
    case 0xC27404: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC27404.
    case 0xC27406: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:60 BNE @UNKNOWN0
    case 0xC27407: {
        Instruction step(cpu, 0xD0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/revive_target.asm:61 LDA @VIRTUAL04
    case 0xC27409: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:62 CLC
    case 0xC2740B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:63 ADC #16
    case 0xC2740C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:63 ADC #16
    // Overlapping static entry reached from 0xC2740C.
    case 0xC2740E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:64 TAX
    case 0xC2740F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:65 STX @LOCAL04
    case 0xC27410: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:66 LDA __BSS_START__,X
    case 0xC27412: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:67 AND #$00FF
    case 0xC27415: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC27415.
    case 0xC27417: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:68 LDY #.SIZEOF(char_struct)
    case 0xC27418: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:68 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27418.
    case 0xC2741A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:69 JSL MULT168
    case 0xC2741B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:70 TAX
    case 0xC2741F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:71 LDY @LOCAL05
    case 0xC27420: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:72 TYA
    case 0xC27422: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:73 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC27423: {
        Instruction step(cpu, 0x9D, 0x009A15u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:74 LDX @LOCAL04
    case 0xC27426: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:75 LDA __BSS_START__,X
    case 0xC27428: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:76 AND #$00FF
    case 0xC2742B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC2742B.
    case 0xC2742D: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:77 LDY #.SIZEOF(char_struct)
    case 0xC2742E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:77 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2742E.
    case 0xC27430: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:78 JSL MULT168
    case 0xC27431: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:79 TAX
    case 0xC27435: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:80 LDA #1
    case 0xC27436: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:80 LDA #1
    // Overlapping static entry reached from 0xC27436.
    case 0xC27438: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:81 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC27439: {
        Instruction step(cpu, 0x9D, 0x009A13u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:83 LDX @VIRTUAL04
    case 0xC2743C: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:84 LDA a:battler::ally_or_enemy,X
    case 0xC2743E: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:85 AND #$00FF
    case 0xC27441: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC27441.
    case 0xC27443: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:86 CMP #1
    case 0xC27444: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:86 CMP #1
    // Overlapping static entry reached from 0xC27444.
    case 0xC27446: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/revive_target.asm:87 BNEL @UNKNOWN11
    case 0xC27447: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/revive_target.asm:87 BNEL @UNKNOWN11
    case 0xC27449: {
        Instruction step(cpu, 0x4C, 0x00754Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/revive_target.asm:88 LDX @VIRTUAL04
    case 0xC2744C: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:89 LDA a:battler::npc_id,X
    case 0xC2744E: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:90 AND #$00FF
    case 0xC27451: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC27451.
    case 0xC27453: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/revive_target.asm:91 BNEL @UNKNOWN11
    case 0xC27454: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/revive_target.asm:91 BNEL @UNKNOWN11
    case 0xC27456: {
        Instruction step(cpu, 0x4C, 0x00754Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/revive_target.asm:92 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC27459: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:92 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC27459.
    case 0xC2745B: {
        Instruction step(cpu, 0x9F, 0x0000A2u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:93 LDX #0
    case 0xC2745C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:93 LDX #0
    // Overlapping static entry reached from 0xC2745C.
    case 0xC2745E: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:94 STX @LOCAL05
    case 0xC2745F: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:95 BRA @UNKNOWN4
    case 0xC27461: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/revive_target.asm:97 TAX
    case 0xC27463: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:98 SEP #PROC_FLAGS::ACCUM8
    case 0xC27464: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:99 STZ a:battler::use_alt_spritemap,X
    case 0xC27466: {
        Instruction step(cpu, 0x9E, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/revive_target.asm:100 CLC
    case 0xC27469: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:101 REP #PROC_FLAGS::ACCUM8
    case 0xC2746A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:102 ADC #.SIZEOF(battler)
    case 0xC2746C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:102 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2746C.
    case 0xC2746E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:103 LDX @LOCAL05
    case 0xC2746F: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:104 INX
    case 0xC27471: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:105 STX @LOCAL05
    case 0xC27472: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:107 CPX #BATTLER_COUNT
    case 0xC27474: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:107 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27474.
    case 0xC27476: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:108 BCC @UNKNOWN3
    case 0xC27477: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/revive_target.asm:109 SEP #PROC_FLAGS::ACCUM8
    case 0xC27479: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:110 LDA #1
    case 0xC2747B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:111 LDX @VIRTUAL04
    case 0xC2747D: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:111 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC2747B.
    case 0xC2747E: {
        Instruction step(cpu, 0x04, 0x00009Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    case 0xC2747F: {
        Instruction step(cpu, 0x9D, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC2747E.
    case 0xC27480: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC27480.
    case 0xC27481: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:116 LDX #1
    case 0xC27482: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:116 LDX #1
    // Overlapping static entry reached from 0xC27482.
    case 0xC27484: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:118 STX @LOCAL05
    case 0xC27485: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:119 BRA @UNKNOWN6
    case 0xC27487: {
        Instruction step(cpu, 0x80, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/revive_target.asm:121 STX @VIRTUAL02
    case 0xC27489: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:122 LDX @VIRTUAL04
    case 0xC2748B: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC2748D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:124 LDA a:battler::vram_sprite_index,X
    case 0xC2748F: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:125 AND #$00FF
    case 0xC27492: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC27492.
    case 0xC27494: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:126 ASL
    case 0xC27495: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:127 ASL
    case 0xC27496: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:128 ASL
    case 0xC27497: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:129 ASL
    case 0xC27498: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:130 CLC
    case 0xC27499: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:131 ADC @VIRTUAL02
    case 0xC2749A: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:132 ASL
    case 0xC2749C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:133 TAX
    case 0xC2749D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:134 STZ PALETTES + BPP4PALETTE_SIZE * 12,X
    case 0xC2749E: {
        Instruction step(cpu, 0x9E, 0x000380u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/revive_target.asm:135 LDX @LOCAL05
    case 0xC274A1: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:136 INX
    case 0xC274A3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:137 STX @LOCAL05
    case 0xC274A4: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:139 CPX #16
    case 0xC274A6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:139 CPX #16
    // Overlapping static entry reached from 0xC274A6.
    case 0xC274A8: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:140 BCC @UNKNOWN5
    case 0xC274A9: {
        Instruction step(cpu, 0x90, 0x0000DEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/revive_target.asm:141 REP #PROC_FLAGS::ACCUM8
    case 0xC274AB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:142 LDA #10
    case 0xC274AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:142 LDA #10
    // Overlapping static entry reached from 0xC274AD.
    case 0xC274AF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:143 JSL UNKNOWN_C2FAD8
    case 0xC274B0: {
        Instruction step(cpu, 0x22, 0xC2FAD8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:144 LDA #1
    case 0xC274B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:144 LDA #1
    // Overlapping static entry reached from 0xC274B4.
    case 0xC274B6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:145 STA @VIRTUAL02
    case 0xC274B7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:146 BRA @UNKNOWN8
    case 0xC274B9: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/revive_target.asm:148 LDA #31
    case 0xC274BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:148 LDA #31
    // Overlapping static entry reached from 0xC274BB.
    case 0xC274BD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:149 STA @LOCAL00
    case 0xC274BE: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:150 TAY
    case 0xC274C0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:151 TAX
    case 0xC274C1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:152 STX @LOCAL03
    case 0xC274C2: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:153 LDX @VIRTUAL04
    case 0xC274C4: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:154 LDA a:battler::vram_sprite_index,X
    case 0xC274C6: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:155 AND #$00FF
    case 0xC274C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:155 AND #$00FF
    // Overlapping static entry reached from 0xC274C9.
    case 0xC274CB: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:156 ASL
    case 0xC274CC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:157 ASL
    case 0xC274CD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:158 ASL
    case 0xC274CE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:159 ASL
    case 0xC274CF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:160 CLC
    case 0xC274D0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:161 ADC @VIRTUAL02
    case 0xC274D1: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:162 LDX @LOCAL03
    case 0xC274D3: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:163 JSL UNKNOWN_C2FB35
    case 0xC274D5: {
        Instruction step(cpu, 0x22, 0xC2FB35u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:164 INC @VIRTUAL02
    case 0xC274D9: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/revive_target.asm:166 LDA @VIRTUAL02
    case 0xC274DB: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:167 CMP #16
    case 0xC274DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:167 CMP #16
    // Overlapping static entry reached from 0xC274DD.
    case 0xC274DF: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:168 BCC @UNKNOWN7
    case 0xC274E0: {
        Instruction step(cpu, 0x90, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/revive_target.asm:169 LDA #1*SIXTH_OF_A_SECOND
    case 0xC274E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:169 LDA #1*SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC274E2.
    case 0xC274E4: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:170 JSR WAIT
    case 0xC274E5: {
        Instruction step(cpu, 0x20, 0x0069BEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/revive_target.asm:171 LDA #20
    case 0xC274E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:171 LDA #20
    // Overlapping static entry reached from 0xC274E8.
    case 0xC274EA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:172 JSL UNKNOWN_C2FAD8
    case 0xC274EB: {
        Instruction step(cpu, 0x22, 0xC2FAD8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:173 LDA #1
    case 0xC274EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:173 LDA #1
    // Overlapping static entry reached from 0xC274EF.
    case 0xC274F1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:174 STA @VIRTUAL02
    case 0xC274F2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:175 BRA @UNKNOWN10
    case 0xC274F4: {
        Instruction step(cpu, 0x80, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/revive_target.asm:177 LDX @VIRTUAL04
    case 0xC274F6: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:178 LDA a:battler::vram_sprite_index,X
    case 0xC274F8: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:179 AND #$00FF
    case 0xC274FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:179 AND #$00FF
    // Overlapping static entry reached from 0xC274FB.
    case 0xC274FD: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:180 ASL
    case 0xC274FE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:181 ASL
    case 0xC274FF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:182 ASL
    case 0xC27500: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:183 ASL
    case 0xC27501: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:184 CLC
    case 0xC27502: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:185 ADC @VIRTUAL02
    case 0xC27503: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:186 STA @LOCAL02ALT
    case 0xC27505: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:187 ASL
    case 0xC27507: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:188 TAX
    case 0xC27508: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:189 LDA PALETTES + BPP4PALETTE_SIZE * 8,X
    case 0xC27509: {
        Instruction step(cpu, 0xBD, 0x000300u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:190 TAX
    case 0xC2750C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:191 STX @LOCAL03ALT
    case 0xC2750D: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:192 SEP #PROC_FLAGS::ACCUM8
    case 0xC2750F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:193 LDA #10
    case 0xC27511: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00480Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:194 PHA
    case 0xC27513: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:195 REP #PROC_FLAGS::ACCUM8
    case 0xC27514: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:196 TXA
    case 0xC27516: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:197 SEP #PROC_FLAGS::INDEX8
    case 0xC27517: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:198 PLY
    case 0xC27519: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:199 JSL ASR8_UNKNOWN1
    case 0xC2751A: {
        Instruction step(cpu, 0x22, 0xC09251u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:200 AND #$001F
    case 0xC2751E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:200 AND #$001F
    // Overlapping static entry reached from 0xC2751E.
    case 0xC27520: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:201 STA @LOCAL00
    case 0xC27521: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:202 REP #PROC_FLAGS::INDEX8
    case 0xC27523: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:203 LDX @LOCAL03ALT
    case 0xC27525: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:204 TXA
    case 0xC27527: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:205 LSR
    case 0xC27528: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/revive_target.asm:206 LSR
    case 0xC27529: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/revive_target.asm:207 LSR
    case 0xC2752A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/revive_target.asm:208 LSR
    case 0xC2752B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/revive_target.asm:209 LSR
    case 0xC2752C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/revive_target.asm:210 AND #$001F
    case 0xC2752D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:210 AND #$001F
    // Overlapping static entry reached from 0xC2752D.
    case 0xC2752F: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:211 TAY
    case 0xC27530: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:212 TXA
    case 0xC27531: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:213 AND #$001F
    case 0xC27532: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:213 AND #$001F
    // Overlapping static entry reached from 0xC27532.
    case 0xC27534: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:214 TAX
    case 0xC27535: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:215 LDA @LOCAL02ALT
    case 0xC27536: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:216 JSL UNKNOWN_C2FB35
    case 0xC27538: {
        Instruction step(cpu, 0x22, 0xC2FB35u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:217 INC @VIRTUAL02
    case 0xC2753C: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/revive_target.asm:219 LDA @VIRTUAL02
    case 0xC2753E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:220 CMP #16
    case 0xC27540: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:220 CMP #16
    // Overlapping static entry reached from 0xC27540.
    case 0xC27542: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:221 BCC @UNKNOWN9
    case 0xC27543: {
        Instruction step(cpu, 0x90, 0x0000B1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/revive_target.asm:222 LDA #2*SIXTHS_OF_A_SECOND
    case 0xC27545: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:222 LDA #2*SIXTHS_OF_A_SECOND
    // Overlapping static entry reached from 0xC27545.
    case 0xC27547: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:223 JSR WAIT
    case 0xC27548: {
        Instruction step(cpu, 0x20, 0x0069BEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/revive_target.asm:225 LDA #1
    case 0xC2754B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:225 LDA #1
    // Overlapping static entry reached from 0xC2754B.
    case 0xC2754D: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/revive_target.asm:226 END_C_FUNCTION
    case 0xC2754E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/revive_target.asm:226 END_C_FUNCTION
    case 0xC2754F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
