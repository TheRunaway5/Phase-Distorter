// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/init_enemy_stats.asm
bool resume_battle_init_enemy_stats(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_enemy_stats.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B6EB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6ED: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6EE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6EF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EFu : 0x00FFEFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B6F0.
    case 0xC2B6F2: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6F3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/init_enemy_stats.asm:9 END_STACK_VARS
    case 0xC2B6F4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:10 STX @VIRTUAL02
    case 0xC2B6F5: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B6F2.
    case 0xC2B6F6: {
        Instruction step(cpu, 0x02, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:11 TAY
    case 0xC2B6F7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:12 STY @LOCAL01
    case 0xC2B6F8: {
        Instruction step(cpu, 0x84, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B6FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6FA.
    case 0xC2B6FC: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B6FD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6FC.
    case 0xC2B6FE: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B6FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6FE.
    case 0xC2B700: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2B6FF.
    case 0xC2B701: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/init_enemy_stats.asm:13 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2B702: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:14 TYA
    case 0xC2B704: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:15 LDY #.SIZEOF(enemy_data)
    case 0xC2B705: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:15 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2B705.
    case 0xC2B707: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:16 JSL MULT168
    case 0xC2B708: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:17 CLC
    case 0xC2B70C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:18 ADC @VIRTUAL06
    case 0xC2B70D: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:19 STA @VIRTUAL06
    case 0xC2B70F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B711: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/battle/init_enemy_stats.asm:21 STZ_BADOPT @LOCAL00
    case 0xC2B713: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:22 LDX #.SIZEOF(battler)
    case 0xC2B715: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:22 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B715.
    case 0xC2B717: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC2B718: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:24 LDA @VIRTUAL02
    case 0xC2B71A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:25 JSL MEMSET16
    case 0xC2B71C: {
        Instruction step(cpu, 0x22, 0xC08EFCu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B720: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:27 LDY #enemy_data::level
    case 0xC2B722: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000036u : 0x000036u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:27 LDY #enemy_data::level
    // Overlapping static entry reached from 0xC2B722.
    case 0xC2B724: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:28 LDA [@VIRTUAL06],Y
    case 0xC2B725: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC2B727: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:30 AND #$00FF
    case 0xC2B729: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2B729.
    case 0xC2B72B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:31 TAX
    case 0xC2B72C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:32 CPX HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC2B72D: {
        Instruction step(cpu, 0xEC, 0x00AA0Cu, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/init_enemy_stats.asm:33 BLTEQ @UNKNOWN0
    case 0xC2B730: {
        Instruction step(cpu, 0x90, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/init_enemy_stats.asm:33 BLTEQ @UNKNOWN0
    case 0xC2B732: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:34 STX HIGHEST_ENEMY_LEVEL_IN_BATTLE
    case 0xC2B734: {
        Instruction step(cpu, 0x8E, 0x00AA0Cu, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:36 LDY @LOCAL01
    case 0xC2B737: {
        Instruction step(cpu, 0xA4, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:37 TYA
    case 0xC2B739: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:38 LDX @VIRTUAL02
    case 0xC2B73A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:39 STA a:battler::id,X
    case 0xC2B73C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:40 TYA
    case 0xC2B73F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:41 LDX @VIRTUAL02
    case 0xC2B740: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:42 STA a:battler::unknown76,X
    case 0xC2B742: {
        Instruction step(cpu, 0x9D, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:43 LDY #enemy_data::battle_sprite
    case 0xC2B745: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:43 LDY #enemy_data::battle_sprite
    // Overlapping static entry reached from 0xC2B745.
    case 0xC2B747: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:44 LDA [@VIRTUAL06],Y
    case 0xC2B748: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:45 LDX @VIRTUAL02
    case 0xC2B74A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:46 STA a:battler::sprite,X
    case 0xC2B74C: {
        Instruction step(cpu, 0x9D, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:47 LDY @LOCAL01
    case 0xC2B74F: {
        Instruction step(cpu, 0xA4, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:48 TYA
    case 0xC2B751: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:49 JSL UNKNOWN_C2B66A
    case 0xC2B752: {
        Instruction step(cpu, 0x22, 0xC2B66Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:51 LDX @VIRTUAL02
    case 0xC2B756: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:52 STA a:battler::the_flag,X
    case 0xC2B758: {
        Instruction step(cpu, 0x9D, 0x00000Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:53 LDA #1
    case 0xC2B75B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:54 LDX @VIRTUAL02
    case 0xC2B75D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:54 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B75B.
    case 0xC2B75E: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:55 STA a:battler::consciousness,X
    case 0xC2B75F: {
        Instruction step(cpu, 0x9D, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:56 LDX @VIRTUAL02
    case 0xC2B762: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:57 STA a:battler::ally_or_enemy,X
    case 0xC2B764: {
        Instruction step(cpu, 0x9D, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:58 LDX @VIRTUAL02
    case 0xC2B767: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:59 STZ a:battler::npc_id,X
    case 0xC2B769: {
        Instruction step(cpu, 0x9E, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:60 LDY #enemy_data::row
    case 0xC2B76C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Bu : 0x00005Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:60 LDY #enemy_data::row
    // Overlapping static entry reached from 0xC2B76C.
    case 0xC2B76E: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:61 LDA [@VIRTUAL06],Y
    case 0xC2B76F: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:62 LDX @VIRTUAL02
    case 0xC2B771: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:63 STA a:battler::row,X
    case 0xC2B773: {
        Instruction step(cpu, 0x9D, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC2B776: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:65 LDY #enemy_data::hp
    case 0xC2B778: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:65 LDY #enemy_data::hp
    // Overlapping static entry reached from 0xC2B778.
    case 0xC2B77A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:66 LDA [@VIRTUAL06],Y
    case 0xC2B77B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:67 LDX @VIRTUAL02
    case 0xC2B77D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:68 STA a:battler::hp_max,X
    case 0xC2B77F: {
        Instruction step(cpu, 0x9D, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:69 LDX @VIRTUAL02
    case 0xC2B782: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:70 STA a:battler::hp_target,X
    case 0xC2B784: {
        Instruction step(cpu, 0x9D, 0x000013u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:71 LDX @VIRTUAL02
    case 0xC2B787: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:72 STA a:battler::hp,X
    case 0xC2B789: {
        Instruction step(cpu, 0x9D, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:73 LDY #enemy_data::pp
    case 0xC2B78C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:73 LDY #enemy_data::pp
    // Overlapping static entry reached from 0xC2B78C.
    case 0xC2B78E: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:74 LDA [@VIRTUAL06],Y
    case 0xC2B78F: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:75 LDX @VIRTUAL02
    case 0xC2B791: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:76 STA a:battler::pp_max,X
    case 0xC2B793: {
        Instruction step(cpu, 0x9D, 0x00001Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:77 LDX @VIRTUAL02
    case 0xC2B796: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:78 STA a:battler::pp_target,X
    case 0xC2B798: {
        Instruction step(cpu, 0x9D, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:79 LDX @VIRTUAL02
    case 0xC2B79B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:80 STA a:battler::pp,X
    case 0xC2B79D: {
        Instruction step(cpu, 0x9D, 0x000017u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7A0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:82 LDY #enemy_data::offense
    case 0xC2B7A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000038u : 0x000038u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:82 LDY #enemy_data::offense
    // Overlapping static entry reached from 0xC2B7A2.
    case 0xC2B7A4: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:83 LDA [@VIRTUAL06],Y
    case 0xC2B7A5: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:84 LDX @VIRTUAL02
    case 0xC2B7A7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:85 STA a:battler::base_offense,X
    case 0xC2B7A9: {
        Instruction step(cpu, 0x9D, 0x000032u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC2B7AC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:87 AND #$00FF
    case 0xC2B7AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC2B7AE.
    case 0xC2B7B0: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:88 LDX @VIRTUAL02
    case 0xC2B7B1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:89 STA a:battler::offense,X
    case 0xC2B7B3: {
        Instruction step(cpu, 0x9D, 0x000026u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7B6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:91 LDY #enemy_data::defense
    case 0xC2B7B8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Au : 0x00003Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:91 LDY #enemy_data::defense
    // Overlapping static entry reached from 0xC2B7B8.
    case 0xC2B7BA: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:92 LDA [@VIRTUAL06],Y
    case 0xC2B7BB: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:93 LDX @VIRTUAL02
    case 0xC2B7BD: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:94 STA a:battler::base_defense,X
    case 0xC2B7BF: {
        Instruction step(cpu, 0x9D, 0x000033u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC2B7C2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:96 AND #$00FF
    case 0xC2B7C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC2B7C4.
    case 0xC2B7C6: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:97 LDX @VIRTUAL02
    case 0xC2B7C7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:98 STA a:battler::defense,X
    case 0xC2B7C9: {
        Instruction step(cpu, 0x9D, 0x000028u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7CC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:100 LDY #enemy_data::speed
    case 0xC2B7CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:100 LDY #enemy_data::speed
    // Overlapping static entry reached from 0xC2B7CE.
    case 0xC2B7D0: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:101 LDA [@VIRTUAL06],Y
    case 0xC2B7D1: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:102 LDX @VIRTUAL02
    case 0xC2B7D3: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:103 STA a:battler::base_speed,X
    case 0xC2B7D5: {
        Instruction step(cpu, 0x9D, 0x000034u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:104 REP #PROC_FLAGS::ACCUM8
    case 0xC2B7D8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:105 AND #$00FF
    case 0xC2B7DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC2B7DA.
    case 0xC2B7DC: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:106 LDX @VIRTUAL02
    case 0xC2B7DD: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:107 STA a:battler::speed,X
    case 0xC2B7DF: {
        Instruction step(cpu, 0x9D, 0x00002Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:108 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7E2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:109 LDY #enemy_data::guts
    case 0xC2B7E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Du : 0x00003Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:109 LDY #enemy_data::guts
    // Overlapping static entry reached from 0xC2B7E4.
    case 0xC2B7E6: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:110 LDA [@VIRTUAL06],Y
    case 0xC2B7E7: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:111 LDX @VIRTUAL02
    case 0xC2B7E9: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:112 STA a:battler::base_guts,X
    case 0xC2B7EB: {
        Instruction step(cpu, 0x9D, 0x000035u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:113 REP #PROC_FLAGS::ACCUM8
    case 0xC2B7EE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:114 AND #$00FF
    case 0xC2B7F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:114 AND #$00FF
    // Overlapping static entry reached from 0xC2B7F0.
    case 0xC2B7F2: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:115 LDX @VIRTUAL02
    case 0xC2B7F3: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:116 STA a:battler::guts,X
    case 0xC2B7F5: {
        Instruction step(cpu, 0x9D, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B7F8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:118 LDY #enemy_data::luck
    case 0xC2B7FA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Eu : 0x00003Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:118 LDY #enemy_data::luck
    // Overlapping static entry reached from 0xC2B7FA.
    case 0xC2B7FC: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:119 LDA [@VIRTUAL06],Y
    case 0xC2B7FD: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:120 LDX @VIRTUAL02
    case 0xC2B7FF: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:121 STA a:battler::base_luck,X
    case 0xC2B801: {
        Instruction step(cpu, 0x9D, 0x000036u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:122 REP #PROC_FLAGS::ACCUM8
    case 0xC2B804: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:123 AND #$00FF
    case 0xC2B806: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:123 AND #$00FF
    // Overlapping static entry reached from 0xC2B806.
    case 0xC2B808: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:124 LDX @VIRTUAL02
    case 0xC2B809: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:125 STA a:battler::luck,X
    case 0xC2B80B: {
        Instruction step(cpu, 0x9D, 0x00002Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:126 LDX @VIRTUAL02
    case 0xC2B80E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:127 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B810: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:128 STZ a:battler::vitality,X
    case 0xC2B812: {
        Instruction step(cpu, 0x9E, 0x000030u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:129 LDY #enemy_data::iq
    case 0xC2B815: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000055u : 0x000055u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:129 LDY #enemy_data::iq
    // Overlapping static entry reached from 0xC2B815.
    case 0xC2B817: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:130 LDA [@VIRTUAL06],Y
    case 0xC2B818: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:131 LDX @VIRTUAL02
    case 0xC2B81A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:132 STA a:battler::iq,X
    case 0xC2B81C: {
        Instruction step(cpu, 0x9D, 0x000031u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:133 LDY #enemy_data::fire_vulnerability
    case 0xC2B81F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:133 LDY #enemy_data::fire_vulnerability
    // Overlapping static entry reached from 0xC2B81F.
    case 0xC2B821: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:134 LDA [@VIRTUAL06],Y
    case 0xC2B822: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:135 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2B824: {
        Instruction step(cpu, 0x22, 0xC2B608u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:136 LDX @VIRTUAL02
    case 0xC2B828: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:137 STA a:battler::fire_resist,X
    case 0xC2B82A: {
        Instruction step(cpu, 0x9D, 0x00003Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:138 LDY #enemy_data::freeze_vulnerability
    case 0xC2B82D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:138 LDY #enemy_data::freeze_vulnerability
    // Overlapping static entry reached from 0xC2B82D.
    case 0xC2B82F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:139 LDA [@VIRTUAL06],Y
    case 0xC2B830: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:140 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2B832: {
        Instruction step(cpu, 0x22, 0xC2B608u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:141 LDX @VIRTUAL02
    case 0xC2B836: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:142 STA a:battler::freeze_resist,X
    case 0xC2B838: {
        Instruction step(cpu, 0x9D, 0x000038u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:143 LDY #enemy_data::flash_vulnerability
    case 0xC2B83B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000041u : 0x000041u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:143 LDY #enemy_data::flash_vulnerability
    // Overlapping static entry reached from 0xC2B83B.
    case 0xC2B83D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:144 LDA [@VIRTUAL06],Y
    case 0xC2B83E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:145 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B840: {
        Instruction step(cpu, 0x22, 0xC2B639u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:146 LDX @VIRTUAL02
    case 0xC2B844: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:147 STA a:battler::flash_resist,X
    case 0xC2B846: {
        Instruction step(cpu, 0x9D, 0x000039u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:148 LDY #enemy_data::paralysis_vulnerability
    case 0xC2B849: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000042u : 0x000042u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:148 LDY #enemy_data::paralysis_vulnerability
    // Overlapping static entry reached from 0xC2B849.
    case 0xC2B84B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:149 LDA [@VIRTUAL06],Y
    case 0xC2B84C: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:150 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B84E: {
        Instruction step(cpu, 0x22, 0xC2B639u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:151 LDX @VIRTUAL02
    case 0xC2B852: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:152 STA a:battler::paralysis_resist,X
    case 0xC2B854: {
        Instruction step(cpu, 0x9D, 0x000037u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:153 REP #PROC_FLAGS::ACCUM8
    case 0xC2B857: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:154 LDA #enemy_data::hypnosis_brainshock_vulnerability
    case 0xC2B859: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000043u : 0x000043u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:154 LDA #enemy_data::hypnosis_brainshock_vulnerability
    // Overlapping static entry reached from 0xC2B859.
    case 0xC2B85B: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B85C: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B85E: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B860: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/init_enemy_stats.asm:155 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B862: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:156 CLC
    case 0xC2B864: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:157 ADC @VIRTUAL0A
    case 0xC2B865: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:158 STA @VIRTUAL0A
    case 0xC2B867: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B869: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:160 LDA [@VIRTUAL0A]
    case 0xC2B86B: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:161 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B86D: {
        Instruction step(cpu, 0x22, 0xC2B639u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:162 LDX @VIRTUAL02
    case 0xC2B871: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:163 STA a:battler::hypnosis_resist,X
    case 0xC2B873: {
        Instruction step(cpu, 0x9D, 0x00003Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:164 LDA [@VIRTUAL0A]
    case 0xC2B876: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:165 STA @VIRTUAL00
    case 0xC2B878: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:166 LDA #3
    case 0xC2B87A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x003803u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:167 SEC
    case 0xC2B87C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:168 SBC @VIRTUAL00
    case 0xC2B87D: {
        Instruction step(cpu, 0xE5, 0x000000u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:169 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2B87F: {
        Instruction step(cpu, 0x22, 0xC2B639u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:170 LDX @VIRTUAL02
    case 0xC2B883: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:171 STA a:battler::brainshock_resist,X
    case 0xC2B885: {
        Instruction step(cpu, 0x9D, 0x00003Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:172 REP #PROC_FLAGS::ACCUM8
    case 0xC2B888: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:173 LDY #enemy_data::money
    case 0xC2B88A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000029u : 0x000029u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:173 LDY #enemy_data::money
    // Overlapping static entry reached from 0xC2B88A.
    case 0xC2B88C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:174 LDA [@VIRTUAL06],Y
    case 0xC2B88D: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:175 LDX @VIRTUAL02
    case 0xC2B88F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:176 STA a:battler::money,X
    case 0xC2B891: {
        Instruction step(cpu, 0x9D, 0x00003Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:177 LDY #enemy_data::exp
    case 0xC2B894: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:177 LDY #enemy_data::exp
    // Overlapping static entry reached from 0xC2B894.
    case 0xC2B896: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:178 LDA [@VIRTUAL06],Y
    case 0xC2B897: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:179 PHA
    case 0xC2B899: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:180 INY
    case 0xC2B89A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:181 INY
    case 0xC2B89B: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:182 LDA [@VIRTUAL06],Y
    case 0xC2B89C: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:183 STA @VIRTUAL0A+2
    case 0xC2B89E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:184 PLA
    case 0xC2B8A0: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:185 STA @VIRTUAL0A
    case 0xC2B8A1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:186 LDA @VIRTUAL02
    case 0xC2B8A3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:187 CLC
    case 0xC2B8A5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:188 ADC #battler::exp
    case 0xC2B8A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Fu : 0x00003Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:188 ADC #battler::exp
    // Overlapping static entry reached from 0xC2B8A6.
    case 0xC2B8A8: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:189 TAY
    case 0xC2B8A9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B8AA: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B8AC: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B8AF: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/battle/init_enemy_stats.asm:190 MOVE_INT_YPTRDEST @VIRTUAL0A, NULL
    case 0xC2B8B1: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:191 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B8B4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:192 LDY #enemy_data::initial_status
    case 0xC2B8B6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000059u : 0x000059u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:192 LDY #enemy_data::initial_status
    // Overlapping static entry reached from 0xC2B8B6.
    case 0xC2B8B8: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:193 LDA [@VIRTUAL06],Y
    case 0xC2B8B9: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:194 REP #PROC_FLAGS::ACCUM8
    case 0xC2B8BB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:195 AND #$00FF
    case 0xC2B8BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:195 AND #$00FF
    // Overlapping static entry reached from 0xC2B8BD.
    case 0xC2B8BF: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:196 CMP #INITIAL_STATUS::PSI_SHIELD
    case 0xC2B8C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:196 CMP #INITIAL_STATUS::PSI_SHIELD
    // Overlapping static entry reached from 0xC2B8C0.
    case 0xC2B8C2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:197 BEQ @UNKNOWN1
    case 0xC2B8C3: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:198 CMP #INITIAL_STATUS::PSI_SHIELD_POWER
    case 0xC2B8C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:198 CMP #INITIAL_STATUS::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC2B8C5.
    case 0xC2B8C7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:199 BEQ @UNKNOWN2
    case 0xC2B8C8: {
        Instruction step(cpu, 0xF0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:200 CMP #INITIAL_STATUS::SHIELD
    case 0xC2B8CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:200 CMP #INITIAL_STATUS::SHIELD
    // Overlapping static entry reached from 0xC2B8CA.
    case 0xC2B8CC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:201 BEQ @UNKNOWN3
    case 0xC2B8CD: {
        Instruction step(cpu, 0xF0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:202 CMP #INITIAL_STATUS::SHIELD_POWER
    case 0xC2B8CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:202 CMP #INITIAL_STATUS::SHIELD_POWER
    // Overlapping static entry reached from 0xC2B8CF.
    case 0xC2B8D1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:203 BEQ @UNKNOWN4
    case 0xC2B8D2: {
        Instruction step(cpu, 0xF0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:204 CMP #INITIAL_STATUS::ASLEEP
    case 0xC2B8D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:204 CMP #INITIAL_STATUS::ASLEEP
    // Overlapping static entry reached from 0xC2B8D4.
    case 0xC2B8D6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:205 BEQ @UNKNOWN5
    case 0xC2B8D7: {
        Instruction step(cpu, 0xF0, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:206 CMP #INITIAL_STATUS::CANT_CONCENTRATE
    case 0xC2B8D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:206 CMP #INITIAL_STATUS::CANT_CONCENTRATE
    // Overlapping static entry reached from 0xC2B8D9.
    case 0xC2B8DB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:207 BEQ @UNKNOWN6
    case 0xC2B8DC: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:208 CMP #INITIAL_STATUS::STRANGE
    case 0xC2B8DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:208 CMP #INITIAL_STATUS::STRANGE
    // Overlapping static entry reached from 0xC2B8DE.
    case 0xC2B8E0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:209 BEQ @UNKNOWN7
    case 0xC2B8E1: {
        Instruction step(cpu, 0xF0, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:210 BRA @UNKNOWN8
    case 0xC2B8E3: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:212 LDX #STATUS_6::PSI_SHIELD
    case 0xC2B8E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:212 LDX #STATUS_6::PSI_SHIELD
    // Overlapping static entry reached from 0xC2B8E5.
    case 0xC2B8E7: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:213 LDA @VIRTUAL02
    case 0xC2B8E8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:214 JSR SHIELDS_COMMON
    case 0xC2B8EA: {
        Instruction step(cpu, 0x20, 0x009CDCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:215 BRA @UNKNOWN8
    case 0xC2B8ED: {
        Instruction step(cpu, 0x80, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:217 LDX #STATUS_6::PSI_SHIELD_POWER
    case 0xC2B8EF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:217 LDX #STATUS_6::PSI_SHIELD_POWER
    // Overlapping static entry reached from 0xC2B8EF.
    case 0xC2B8F1: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:218 LDA @VIRTUAL02
    case 0xC2B8F2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:219 JSR SHIELDS_COMMON
    case 0xC2B8F4: {
        Instruction step(cpu, 0x20, 0x009CDCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:220 BRA @UNKNOWN8
    case 0xC2B8F7: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:222 LDX #STATUS_6::SHIELD
    case 0xC2B8F9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:222 LDX #STATUS_6::SHIELD
    // Overlapping static entry reached from 0xC2B8F9.
    case 0xC2B8FB: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:223 LDA @VIRTUAL02
    case 0xC2B8FC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:224 JSR SHIELDS_COMMON
    case 0xC2B8FE: {
        Instruction step(cpu, 0x20, 0x009CDCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:225 BRA @UNKNOWN8
    case 0xC2B901: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:227 LDX #STATUS_6::SHIELD_POWER
    case 0xC2B903: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:227 LDX #STATUS_6::SHIELD_POWER
    // Overlapping static entry reached from 0xC2B903.
    case 0xC2B905: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:228 LDA @VIRTUAL02
    case 0xC2B906: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:229 JSR SHIELDS_COMMON
    case 0xC2B908: {
        Instruction step(cpu, 0x20, 0x009CDCu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:230 BRA @UNKNOWN8
    case 0xC2B90B: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:232 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B90D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:233 LDA #STATUS_2::ASLEEP
    case 0xC2B90F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:234 LDX @VIRTUAL02
    case 0xC2B911: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:234 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B90F.
    case 0xC2B912: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:235 STA a:battler::afflictions+STATUS_GROUP::TEMPORARY,X
    case 0xC2B913: {
        Instruction step(cpu, 0x9D, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:236 BRA @UNKNOWN8
    case 0xC2B916: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:238 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B918: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:239 LDA #STATUS_4::CANT_CONCENTRATE4
    case 0xC2B91A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x00A604u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:240 LDX @VIRTUAL02
    case 0xC2B91C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:240 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B91A.
    case 0xC2B91D: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:241 STA a:battler::afflictions+STATUS_GROUP::CONCENTRATION,X
    case 0xC2B91E: {
        Instruction step(cpu, 0x9D, 0x000021u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:242 BRA @UNKNOWN8
    case 0xC2B921: {
        Instruction step(cpu, 0x80, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:244 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B923: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:245 LDA #STATUS_3::STRANGE
    case 0xC2B925: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:246 LDX @VIRTUAL02
    case 0xC2B927: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:246 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2B925.
    case 0xC2B928: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:247 STA a:battler::afflictions+STATUS_GROUP::STRANGENESS,X
    case 0xC2B929: {
        Instruction step(cpu, 0x9D, 0x000020u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_enemy_stats.asm:249 REP #PROC_FLAGS::ACCUM8
    case 0xC2B92C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_enemy_stats.asm:250 END_C_FUNCTION
    case 0xC2B92E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_enemy_stats.asm:250 END_C_FUNCTION
    case 0xC2B92F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
