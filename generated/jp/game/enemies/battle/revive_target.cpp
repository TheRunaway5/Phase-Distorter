// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/revive_target.asm
bool resume_battle_revive_target(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/revive_target.asm:3 BEGIN_C_FUNCTION
    case 0xC272DA: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272DC: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272DD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272DE: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC272DF.
    case 0xC272E1: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272E2: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/revive_target.asm:13 END_STACK_VARS
    case 0xC272E3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:21 TXY
    case 0xC272E4: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:22 STY @LOCAL05
    case 0xC272E5: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:23 STA @VIRTUAL04
    case 0xC272E7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC272E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000061u : 0x003461u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC272E9.
    case 0xC272EB: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC272EC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC272EB.
    case 0xC272ED: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC272EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    // Overlapping static entry reached from 0xC272EE.
    case 0xC272F0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC272F1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/revive_target.asm:24 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_IKIKAERI
    case 0xC272F3: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC272F7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:26 LDA #0
    case 0xC272F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00A600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:27 LDX @VIRTUAL04
    case 0xC272FB: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:27 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC272F9.
    case 0xC272FC: {
        Instruction step(cpu, 0x04, 0x00009Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:28 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC272FD: {
        Instruction step(cpu, 0x9D, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:28 STA a:battler::afflictions + STATUS_GROUP::SHIELD,X
    // Overlapping static entry reached from 0xC272FC.
    case 0xC272FE: {
        Instruction step(cpu, 0x23, 0x000000u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:29 LDX @VIRTUAL04
    case 0xC27300: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:30 STA a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC27302: {
        Instruction step(cpu, 0x9D, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:31 LDX @VIRTUAL04
    case 0xC27305: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:32 STA a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC27307: {
        Instruction step(cpu, 0x9D, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:33 LDX @VIRTUAL04
    case 0xC2730A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:34 STA a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC2730C: {
        Instruction step(cpu, 0x9D, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:35 LDX @VIRTUAL04
    case 0xC2730F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:36 STA a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC27311: {
        Instruction step(cpu, 0x9D, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:37 LDX @VIRTUAL04
    case 0xC27314: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:38 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC27316: {
        Instruction step(cpu, 0x9D, 0x00001Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:39 LDX @VIRTUAL04
    case 0xC27319: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:40 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2731B: {
        Instruction step(cpu, 0x9D, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:41 LDX @VIRTUAL04
    case 0xC2731E: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC27320: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:43 STZ a:battler::current_action,X
    case 0xC27322: {
        Instruction step(cpu, 0x9E, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/revive_target.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC27325: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:45 LDA #1
    case 0xC27327: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:46 LDX @VIRTUAL04
    case 0xC27329: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:46 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC27327.
    case 0xC2732A: {
        Instruction step(cpu, 0x04, 0x00009Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:47 STA __BSS_START__+13,X
    case 0xC2732B: {
        Instruction step(cpu, 0x9D, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:47 STA __BSS_START__+13,X
    // Overlapping static entry reached from 0xC2732A.
    case 0xC2732C: {
        Instruction step(cpu, 0x0D, 0x00A400u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:48 LDY @LOCAL05
    case 0xC2732E: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:48 LDY @LOCAL05
    // Overlapping static entry reached from 0xC2732C.
    case 0xC2732F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:49 TYX
    case 0xC27330: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC27331: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:51 LDA @VIRTUAL04
    case 0xC27333: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:52 JSR SET_HP
    case 0xC27335: {
        Instruction step(cpu, 0x20, 0x007065u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/revive_target.asm:53 LDX @VIRTUAL04
    case 0xC27338: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:54 LDA a:battler::ally_or_enemy,X
    case 0xC2733A: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:55 AND #$00FF
    case 0xC2733D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC2733D.
    case 0xC2733F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:56 BNE @UNKNOWN0
    case 0xC27340: {
        Instruction step(cpu, 0xD0, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/revive_target.asm:57 LDX @VIRTUAL04
    case 0xC27342: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:58 LDA a:battler::npc_id,X
    case 0xC27344: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:59 AND #$00FF
    case 0xC27347: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC27347.
    case 0xC27349: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:60 BNE @UNKNOWN0
    case 0xC2734A: {
        Instruction step(cpu, 0xD0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/revive_target.asm:61 LDA @VIRTUAL04
    case 0xC2734C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:62 CLC
    case 0xC2734E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:63 ADC #16
    case 0xC2734F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:63 ADC #16
    // Overlapping static entry reached from 0xC2734F.
    case 0xC27351: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:64 TAX
    case 0xC27352: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:65 STX @LOCAL04
    case 0xC27353: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:66 LDA __BSS_START__,X
    case 0xC27355: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:67 AND #$00FF
    case 0xC27358: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC27358.
    case 0xC2735A: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:68 LDY #.SIZEOF(char_struct)
    case 0xC2735B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:68 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2735B.
    case 0xC2735D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:69 JSL MULT168
    case 0xC2735E: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:70 TAX
    case 0xC27362: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:71 LDY @LOCAL05
    case 0xC27363: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:72 TYA
    case 0xC27365: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:73 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC27366: {
        Instruction step(cpu, 0x9D, 0x009CC5u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:74 LDX @LOCAL04
    case 0xC27369: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:75 LDA __BSS_START__,X
    case 0xC2736B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:76 AND #$00FF
    case 0xC2736E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC2736E.
    case 0xC27370: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:77 LDY #.SIZEOF(char_struct)
    case 0xC27371: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:77 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27371.
    case 0xC27373: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:78 JSL MULT168
    case 0xC27374: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:79 TAX
    case 0xC27378: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:80 LDA #1
    case 0xC27379: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:80 LDA #1
    // Overlapping static entry reached from 0xC27379.
    case 0xC2737B: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:81 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC2737C: {
        Instruction step(cpu, 0x9D, 0x009CC3u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:83 LDX @VIRTUAL04
    case 0xC2737F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:84 LDA a:battler::ally_or_enemy,X
    case 0xC27381: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:85 AND #$00FF
    case 0xC27384: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC27384.
    case 0xC27386: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:86 CMP #1
    case 0xC27387: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:86 CMP #1
    // Overlapping static entry reached from 0xC27387.
    case 0xC27389: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/revive_target.asm:87 BNEL @UNKNOWN11
    case 0xC2738A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/revive_target.asm:87 BNEL @UNKNOWN11
    case 0xC2738C: {
        Instruction step(cpu, 0x4C, 0x00748Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/revive_target.asm:88 LDX @VIRTUAL04
    case 0xC2738F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:89 LDA a:battler::npc_id,X
    case 0xC27391: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:90 AND #$00FF
    case 0xC27394: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC27394.
    case 0xC27396: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/revive_target.asm:91 BNEL @UNKNOWN11
    case 0xC27397: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/revive_target.asm:91 BNEL @UNKNOWN11
    case 0xC27399: {
        Instruction step(cpu, 0x4C, 0x00748Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/revive_target.asm:92 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC2739C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:92 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2739C.
    case 0xC2739E: {
        Instruction step(cpu, 0xA1, 0x0000A2u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:93 LDX #0
    case 0xC2739F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:93 LDX #0
    // Overlapping static entry reached from 0xC2739E.
    case 0xC273A0: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:93 LDX #0
    // Overlapping static entry reached from 0xC2739F.
    case 0xC273A1: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:94 STX @LOCAL05
    case 0xC273A2: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:95 BRA @UNKNOWN4
    case 0xC273A4: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/revive_target.asm:97 TAX
    case 0xC273A6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:98 SEP #PROC_FLAGS::ACCUM8
    case 0xC273A7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:99 STZ a:battler::use_alt_spritemap,X
    case 0xC273A9: {
        Instruction step(cpu, 0x9E, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/revive_target.asm:100 CLC
    case 0xC273AC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:101 REP #PROC_FLAGS::ACCUM8
    case 0xC273AD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:102 ADC #.SIZEOF(battler)
    case 0xC273AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:102 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC273AF.
    case 0xC273B1: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:103 LDX @LOCAL05
    case 0xC273B2: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:104 INX
    case 0xC273B4: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:105 STX @LOCAL05
    case 0xC273B5: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:107 CPX #BATTLER_COUNT
    case 0xC273B7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:107 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC273B7.
    case 0xC273B9: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:108 BCC @UNKNOWN3
    case 0xC273BA: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/revive_target.asm:109 SEP #PROC_FLAGS::ACCUM8
    case 0xC273BC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:110 LDA #1
    case 0xC273BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:111 LDX @VIRTUAL04
    case 0xC273C0: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:111 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC273BE.
    case 0xC273C1: {
        Instruction step(cpu, 0x04, 0x00009Du, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    case 0xC273C2: {
        Instruction step(cpu, 0x9D, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC273C1.
    case 0xC273C3: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/battle/revive_target.asm:112 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC273C3.
    case 0xC273C4: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:114 TAX
    case 0xC273C5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:118 STX @LOCAL05
    case 0xC273C6: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:119 BRA @UNKNOWN6
    case 0xC273C8: {
        Instruction step(cpu, 0x80, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/revive_target.asm:121 STX @VIRTUAL02
    case 0xC273CA: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:122 LDX @VIRTUAL04
    case 0xC273CC: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC273CE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:124 LDA a:battler::vram_sprite_index,X
    case 0xC273D0: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:125 AND #$00FF
    case 0xC273D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:125 AND #$00FF
    // Overlapping static entry reached from 0xC273D3.
    case 0xC273D5: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:126 ASL
    case 0xC273D6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:127 ASL
    case 0xC273D7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:128 ASL
    case 0xC273D8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:129 ASL
    case 0xC273D9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:130 CLC
    case 0xC273DA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:131 ADC @VIRTUAL02
    case 0xC273DB: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:132 ASL
    case 0xC273DD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:133 TAX
    case 0xC273DE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:134 STZ PALETTES + BPP4PALETTE_SIZE * 12,X
    case 0xC273DF: {
        Instruction step(cpu, 0x9E, 0x000380u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/revive_target.asm:135 LDX @LOCAL05
    case 0xC273E2: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:136 INX
    case 0xC273E4: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:137 STX @LOCAL05
    case 0xC273E5: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:139 CPX #16
    case 0xC273E7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:139 CPX #16
    // Overlapping static entry reached from 0xC273E7.
    case 0xC273E9: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:140 BCC @UNKNOWN5
    case 0xC273EA: {
        Instruction step(cpu, 0x90, 0x0000DEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/revive_target.asm:141 REP #PROC_FLAGS::ACCUM8
    case 0xC273EC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:142 LDA #10
    case 0xC273EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:142 LDA #10
    // Overlapping static entry reached from 0xC273EE.
    case 0xC273F0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:143 JSL UNKNOWN_C2FAD8
    case 0xC273F1: {
        Instruction step(cpu, 0x22, 0xC2F9F1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:144 LDA #1
    case 0xC273F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:144 LDA #1
    // Overlapping static entry reached from 0xC273F5.
    case 0xC273F7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:145 STA @VIRTUAL02
    case 0xC273F8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:146 BRA @UNKNOWN8
    case 0xC273FA: {
        Instruction step(cpu, 0x80, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/revive_target.asm:148 LDA #31
    case 0xC273FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:148 LDA #31
    // Overlapping static entry reached from 0xC273FC.
    case 0xC273FE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:149 STA @LOCAL00
    case 0xC273FF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:150 TAY
    case 0xC27401: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:151 TAX
    case 0xC27402: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:152 STX @LOCAL03
    case 0xC27403: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:153 LDX @VIRTUAL04
    case 0xC27405: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:154 LDA a:battler::vram_sprite_index,X
    case 0xC27407: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:155 AND #$00FF
    case 0xC2740A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:155 AND #$00FF
    // Overlapping static entry reached from 0xC2740A.
    case 0xC2740C: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:156 ASL
    case 0xC2740D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:157 ASL
    case 0xC2740E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:158 ASL
    case 0xC2740F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:159 ASL
    case 0xC27410: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:160 CLC
    case 0xC27411: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:161 ADC @VIRTUAL02
    case 0xC27412: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:162 LDX @LOCAL03
    case 0xC27414: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:163 JSL UNKNOWN_C2FB35
    case 0xC27416: {
        Instruction step(cpu, 0x22, 0xC2FA4Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:164 INC @VIRTUAL02
    case 0xC2741A: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/revive_target.asm:166 LDA @VIRTUAL02
    case 0xC2741C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:167 CMP #16
    case 0xC2741E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:167 CMP #16
    // Overlapping static entry reached from 0xC2741E.
    case 0xC27420: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:168 BCC @UNKNOWN7
    case 0xC27421: {
        Instruction step(cpu, 0x90, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/revive_target.asm:169 LDA #1*SIXTH_OF_A_SECOND
    case 0xC27423: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:169 LDA #1*SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC27423.
    case 0xC27425: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:170 JSR WAIT
    case 0xC27426: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/revive_target.asm:171 LDA #20
    case 0xC27429: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:171 LDA #20
    // Overlapping static entry reached from 0xC27429.
    case 0xC2742B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:172 JSL UNKNOWN_C2FAD8
    case 0xC2742C: {
        Instruction step(cpu, 0x22, 0xC2F9F1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:173 LDA #1
    case 0xC27430: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:173 LDA #1
    // Overlapping static entry reached from 0xC27430.
    case 0xC27432: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:174 STA @VIRTUAL02
    case 0xC27433: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:175 BRA @UNKNOWN10
    case 0xC27435: {
        Instruction step(cpu, 0x80, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/revive_target.asm:177 LDX @VIRTUAL04
    case 0xC27437: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:178 LDA a:battler::vram_sprite_index,X
    case 0xC27439: {
        Instruction step(cpu, 0xBD, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:179 AND #$00FF
    case 0xC2743C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:179 AND #$00FF
    // Overlapping static entry reached from 0xC2743C.
    case 0xC2743E: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:180 ASL
    case 0xC2743F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:181 ASL
    case 0xC27440: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:182 ASL
    case 0xC27441: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:183 ASL
    case 0xC27442: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:184 CLC
    case 0xC27443: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:185 ADC @VIRTUAL02
    case 0xC27444: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/revive_target.asm:186 STA @LOCAL02ALT
    case 0xC27446: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:187 ASL
    case 0xC27448: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/revive_target.asm:188 TAX
    case 0xC27449: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:189 LDA PALETTES + BPP4PALETTE_SIZE * 8,X
    case 0xC2744A: {
        Instruction step(cpu, 0xBD, 0x000300u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:190 TAX
    case 0xC2744D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:191 STX @LOCAL03ALT
    case 0xC2744E: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:192 SEP #PROC_FLAGS::ACCUM8
    case 0xC27450: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:193 LDA #10
    case 0xC27452: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00480Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:194 PHA
    case 0xC27454: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:195 REP #PROC_FLAGS::ACCUM8
    case 0xC27455: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:196 TXA
    case 0xC27457: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:197 SEP #PROC_FLAGS::INDEX8
    case 0xC27458: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:198 PLY
    case 0xC2745A: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:199 JSL ASR8_UNKNOWN1
    case 0xC2745B: {
        Instruction step(cpu, 0x22, 0xC09233u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:200 AND #$001F
    case 0xC2745F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:200 AND #$001F
    // Overlapping static entry reached from 0xC2745F.
    case 0xC27461: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:201 STA @LOCAL00
    case 0xC27462: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:202 REP #PROC_FLAGS::INDEX8
    case 0xC27464: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/revive_target.asm:203 LDX @LOCAL03ALT
    case 0xC27466: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:204 TXA
    case 0xC27468: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:205 LSR
    case 0xC27469: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/revive_target.asm:206 LSR
    case 0xC2746A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/revive_target.asm:207 LSR
    case 0xC2746B: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/revive_target.asm:208 LSR
    case 0xC2746C: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/revive_target.asm:209 LSR
    case 0xC2746D: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/revive_target.asm:210 AND #$001F
    case 0xC2746E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:210 AND #$001F
    // Overlapping static entry reached from 0xC2746E.
    case 0xC27470: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:211 TAY
    case 0xC27471: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/revive_target.asm:212 TXA
    case 0xC27472: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:213 AND #$001F
    case 0xC27473: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:213 AND #$001F
    // Overlapping static entry reached from 0xC27473.
    case 0xC27475: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:214 TAX
    case 0xC27476: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/revive_target.asm:215 LDA @LOCAL02ALT
    case 0xC27477: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:216 JSL UNKNOWN_C2FB35
    case 0xC27479: {
        Instruction step(cpu, 0x22, 0xC2FA4Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/revive_target.asm:217 INC @VIRTUAL02
    case 0xC2747D: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/revive_target.asm:219 LDA @VIRTUAL02
    case 0xC2747F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:220 CMP #16
    case 0xC27481: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:220 CMP #16
    // Overlapping static entry reached from 0xC27481.
    case 0xC27483: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:221 BCC @UNKNOWN9
    case 0xC27484: {
        Instruction step(cpu, 0x90, 0x0000B1u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/revive_target.asm:222 LDA #2*SIXTHS_OF_A_SECOND
    case 0xC27486: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:222 LDA #2*SIXTHS_OF_A_SECOND
    // Overlapping static entry reached from 0xC27486.
    case 0xC27488: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/revive_target.asm:223 JSR WAIT
    case 0xC27489: {
        Instruction step(cpu, 0x20, 0x0068FDu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/revive_target.asm:225 LDA #1
    case 0xC2748C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/revive_target.asm:225 LDA #1
    // Overlapping static entry reached from 0xC2748C.
    case 0xC2748E: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/revive_target.asm:226 END_C_FUNCTION
    case 0xC2748F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/revive_target.asm:226 END_C_FUNCTION
    case 0xC27490: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
