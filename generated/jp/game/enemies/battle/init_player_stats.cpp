// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/init_player_stats.asm
bool resume_battle_init_player_stats(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_player_stats.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B8D9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8DB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8DC: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8DD: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B8DE.
    case 0xC2B8E0: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8E1: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/init_player_stats.asm:11 END_STACK_VARS
    case 0xC2B8E2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:12 TXY
    case 0xC2B8E3: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:13 STY @LOCAL03
    case 0xC2B8E4: {
        Instruction step(cpu, 0x84, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:14 STA @VIRTUAL04
    case 0xC2B8E6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:15 DEC
    case 0xC2B8E8: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:16 LDY #.SIZEOF(char_struct)
    case 0xC2B8E9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:16 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B8E9.
    case 0xC2B8EB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:17 JSL MULT168
    case 0xC2B8EC: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:18 CLC
    case 0xC2B8F0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:19 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2B8F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:19 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2B8F1.
    case 0xC2B8F3: {
        Instruction step(cpu, 0x9C, 0x000285u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:20 STA @VIRTUAL02
    case 0xC2B8F4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B8F6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/init_player_stats.asm:22 STZ_BADOPT @LOCAL00
    case 0xC2B8F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/init_player_stats.asm:22 STZ_BADOPT @LOCAL00
    case 0xC2B8FA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/init_player_stats.asm:22 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC2B8F8.
    case 0xC2B8FB: {
        Instruction step(cpu, 0x0E, 0x004EA2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:23 LDX #.SIZEOF(battler)
    case 0xC2B8FC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:23 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B8FC.
    case 0xC2B8FE: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:24 LDY @LOCAL03
    case 0xC2B8FF: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC2B901: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:26 TYA
    case 0xC2B903: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:27 JSL MEMSET16
    case 0xC2B904: {
        Instruction step(cpu, 0x22, 0xC08EEDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:28 LDA @VIRTUAL04
    case 0xC2B908: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:29 LDY @LOCAL03
    case 0xC2B90A: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:30 STA a:battler::id,Y
    case 0xC2B90C: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:31 TYX
    case 0xC2B90F: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:32 STZ a:battler::sprite,X
    case 0xC2B910: {
        Instruction step(cpu, 0x9E, 0x000002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B913: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:34 LDA #1
    case 0xC2B915: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009901u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:35 STA a:battler::consciousness,Y
    case 0xC2B917: {
        Instruction step(cpu, 0x99, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:35 STA a:battler::consciousness,Y
    // Overlapping static entry reached from 0xC2B915.
    case 0xC2B918: {
        Instruction step(cpu, 0x0C, 0x00BB00u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:36 TYX
    case 0xC2B91A: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:37 STZ a:battler::ally_or_enemy,X
    case 0xC2B91B: {
        Instruction step(cpu, 0x9E, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:38 TYX
    case 0xC2B91E: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:39 STZ a:battler::npc_id,X
    case 0xC2B91F: {
        Instruction step(cpu, 0x9E, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:40 LDX @VIRTUAL02
    case 0xC2B922: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC2B924: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:42 LDA a:char_struct::current_hp,X
    case 0xC2B926: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:43 STA a:battler::hp,Y
    case 0xC2B929: {
        Instruction step(cpu, 0x99, 0x000011u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:44 LDX @VIRTUAL02
    case 0xC2B92C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:45 LDA a:char_struct::current_hp_target,X
    case 0xC2B92E: {
        Instruction step(cpu, 0xBD, 0x000046u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:46 STA a:battler::hp_target,Y
    case 0xC2B931: {
        Instruction step(cpu, 0x99, 0x000013u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:47 LDX @VIRTUAL02
    case 0xC2B934: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:48 LDA a:char_struct::max_hp,X
    case 0xC2B936: {
        Instruction step(cpu, 0xBD, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:49 STA a:battler::hp_max,Y
    case 0xC2B939: {
        Instruction step(cpu, 0x99, 0x000015u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:50 LDX @VIRTUAL02
    case 0xC2B93C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:51 LDA a:char_struct::current_pp,X
    case 0xC2B93E: {
        Instruction step(cpu, 0xBD, 0x00004Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:52 STA a:battler::pp,Y
    case 0xC2B941: {
        Instruction step(cpu, 0x99, 0x000017u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:53 LDX @VIRTUAL02
    case 0xC2B944: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:54 LDA a:char_struct::current_pp_target,X
    case 0xC2B946: {
        Instruction step(cpu, 0xBD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:55 STA a:battler::pp_target,Y
    case 0xC2B949: {
        Instruction step(cpu, 0x99, 0x000019u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:56 LDX @VIRTUAL02
    case 0xC2B94C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:57 LDA a:char_struct::max_pp,X
    case 0xC2B94E: {
        Instruction step(cpu, 0xBD, 0x00000Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:58 STA a:battler::pp_max,Y
    case 0xC2B951: {
        Instruction step(cpu, 0x99, 0x00001Bu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:59 TYA
    case 0xC2B954: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:60 CLC
    case 0xC2B955: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:61 ADC #battler::afflictions
    case 0xC2B956: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:61 ADC #battler::afflictions
    // Overlapping static entry reached from 0xC2B956.
    case 0xC2B958: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B959: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B95B: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B95C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B95E: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B95F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/init_player_stats.asm:62 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B961: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC2B963: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B965: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B967: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B969: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/init_player_stats.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B96B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:65 LDA @VIRTUAL02
    case 0xC2B96D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:66 CLC
    case 0xC2B96F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:67 ADC #char_struct::afflictions
    case 0xC2B970: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:67 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC2B970.
    case 0xC2B972: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B973: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B975: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B976: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B978: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B979: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/init_player_stats.asm:68 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B97B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC2B97D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B97F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B981: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B983: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/init_player_stats.asm:70 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B985: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:71 LDA #AFFLICTION_GROUP_COUNT
    case 0xC2B987: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:71 LDA #AFFLICTION_GROUP_COUNT
    // Overlapping static entry reached from 0xC2B987.
    case 0xC2B989: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:72 JSL MEMCPY24
    case 0xC2B98A: {
        Instruction step(cpu, 0x22, 0xC08EDEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:73 LDX @VIRTUAL02
    case 0xC2B98E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B990: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:75 LDA a:char_struct::offense,X
    case 0xC2B992: {
        Instruction step(cpu, 0xBD, 0x000014u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:76 LDY @LOCAL03
    case 0xC2B995: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:77 STA a:battler::base_offense,Y
    case 0xC2B997: {
        Instruction step(cpu, 0x99, 0x000032u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC2B99A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:79 AND #$00FF
    case 0xC2B99C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC2B99C.
    case 0xC2B99E: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:80 STA a:battler::offense,Y
    case 0xC2B99F: {
        Instruction step(cpu, 0x99, 0x000026u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:81 LDX @VIRTUAL02
    case 0xC2B9A2: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9A4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:83 LDA a:char_struct::defense,X
    case 0xC2B9A6: {
        Instruction step(cpu, 0xBD, 0x000015u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:84 STA a:battler::base_defense,Y
    case 0xC2B9A9: {
        Instruction step(cpu, 0x99, 0x000033u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:85 REP #PROC_FLAGS::ACCUM8
    case 0xC2B9AC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:86 AND #$00FF
    case 0xC2B9AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC2B9AE.
    case 0xC2B9B0: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:87 STA a:battler::defense,Y
    case 0xC2B9B1: {
        Instruction step(cpu, 0x99, 0x000028u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:88 LDX @VIRTUAL02
    case 0xC2B9B4: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9B6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:90 LDA a:char_struct::speed,X
    case 0xC2B9B8: {
        Instruction step(cpu, 0xBD, 0x000016u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:91 STA a:battler::base_speed,Y
    case 0xC2B9BB: {
        Instruction step(cpu, 0x99, 0x000034u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC2B9BE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:93 AND #$00FF
    case 0xC2B9C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:93 AND #$00FF
    // Overlapping static entry reached from 0xC2B9C0.
    case 0xC2B9C2: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:94 STA a:battler::speed,Y
    case 0xC2B9C3: {
        Instruction step(cpu, 0x99, 0x00002Au, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:95 LDX @VIRTUAL02
    case 0xC2B9C6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:96 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9C8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:97 LDA a:char_struct::guts,X
    case 0xC2B9CA: {
        Instruction step(cpu, 0xBD, 0x000017u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:98 STA a:battler::base_guts,Y
    case 0xC2B9CD: {
        Instruction step(cpu, 0x99, 0x000035u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC2B9D0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:100 AND #$00FF
    case 0xC2B9D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC2B9D2.
    case 0xC2B9D4: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:101 STA a:battler::guts,Y
    case 0xC2B9D5: {
        Instruction step(cpu, 0x99, 0x00002Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:102 LDX @VIRTUAL02
    case 0xC2B9D8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9DA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:104 LDA a:char_struct::luck,X
    case 0xC2B9DC: {
        Instruction step(cpu, 0xBD, 0x000018u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:105 STA a:battler::base_luck,Y
    case 0xC2B9DF: {
        Instruction step(cpu, 0x99, 0x000036u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC2B9E2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:107 AND #$00FF
    case 0xC2B9E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC2B9E4.
    case 0xC2B9E6: {
        Instruction step(cpu, 0x00, 0x000099u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:108 STA a:battler::luck,Y
    case 0xC2B9E7: {
        Instruction step(cpu, 0x99, 0x00002Eu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:109 LDX @VIRTUAL02
    case 0xC2B9EA: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:110 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B9EC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:111 LDA a:char_struct::vitality,X
    case 0xC2B9EE: {
        Instruction step(cpu, 0xBD, 0x000019u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:112 STA a:battler::vitality,Y
    case 0xC2B9F1: {
        Instruction step(cpu, 0x99, 0x000030u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:113 LDX @VIRTUAL02
    case 0xC2B9F4: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:114 LDA a:char_struct::iq,X
    case 0xC2B9F6: {
        Instruction step(cpu, 0xBD, 0x00001Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:115 STA a:battler::iq,Y
    case 0xC2B9F9: {
        Instruction step(cpu, 0x99, 0x000031u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:116 LDX @VIRTUAL02
    case 0xC2B9FC: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:117 LDA a:char_struct::fire_resist,X
    case 0xC2B9FE: {
        Instruction step(cpu, 0xBD, 0x000051u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:118 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2BA01: {
        Instruction step(cpu, 0x22, 0xC2B5ADu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:119 LDY @LOCAL03
    case 0xC2BA05: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:120 STA a:battler::fire_resist,Y
    case 0xC2BA07: {
        Instruction step(cpu, 0x99, 0x00003Au, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:121 LDX @VIRTUAL02
    case 0xC2BA0A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:122 LDA a:char_struct::freeze_resist,X
    case 0xC2BA0C: {
        Instruction step(cpu, 0xBD, 0x000052u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:123 JSL CALC_PSI_DMG_MODIFIERS
    case 0xC2BA0F: {
        Instruction step(cpu, 0x22, 0xC2B5ADu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:124 LDY @LOCAL03
    case 0xC2BA13: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:125 STA a:battler::freeze_resist,Y
    case 0xC2BA15: {
        Instruction step(cpu, 0x99, 0x000038u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:126 LDX @VIRTUAL02
    case 0xC2BA18: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:127 LDA a:char_struct::flash_resist,X
    case 0xC2BA1A: {
        Instruction step(cpu, 0xBD, 0x000053u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:128 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BA1D: {
        Instruction step(cpu, 0x22, 0xC2B5DEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:129 LDY @LOCAL03
    case 0xC2BA21: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:130 STA a:battler::flash_resist,Y
    case 0xC2BA23: {
        Instruction step(cpu, 0x99, 0x000039u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:131 LDX @VIRTUAL02
    case 0xC2BA26: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:132 LDA a:char_struct::paralysis_resist,X
    case 0xC2BA28: {
        Instruction step(cpu, 0xBD, 0x000054u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:133 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BA2B: {
        Instruction step(cpu, 0x22, 0xC2B5DEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:134 LDY @LOCAL03
    case 0xC2BA2F: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:135 STA a:battler::paralysis_resist,Y
    case 0xC2BA31: {
        Instruction step(cpu, 0x99, 0x000037u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:136 REP #PROC_FLAGS::ACCUM8
    case 0xC2BA34: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:137 LDA @VIRTUAL02
    case 0xC2BA36: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:138 CLC
    case 0xC2BA38: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:139 ADC #char_struct::hypnosis_brainshock_resist
    case 0xC2BA39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000055u : 0x000055u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:139 ADC #char_struct::hypnosis_brainshock_resist
    // Overlapping static entry reached from 0xC2BA39.
    case 0xC2BA3B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:140 TAX
    case 0xC2BA3C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:141 STX @LOCAL02
    case 0xC2BA3D: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:142 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BA3F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:143 LDA __BSS_START__,X
    case 0xC2BA41: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:144 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BA44: {
        Instruction step(cpu, 0x22, 0xC2B5DEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:145 LDY @LOCAL03
    case 0xC2BA48: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:146 STA a:battler::hypnosis_resist,Y
    case 0xC2BA4A: {
        Instruction step(cpu, 0x99, 0x00003Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:147 LDX @LOCAL02
    case 0xC2BA4D: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:148 LDA __BSS_START__,X
    case 0xC2BA4F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:149 STA @VIRTUAL00
    case 0xC2BA52: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:150 LDA #3
    case 0xC2BA54: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x003803u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:151 SEC
    case 0xC2BA56: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:152 SBC @VIRTUAL00
    case 0xC2BA57: {
        Instruction step(cpu, 0xE5, 0x000000u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:153 JSL CALC_PSI_RES_MODIFIERS
    case 0xC2BA59: {
        Instruction step(cpu, 0x22, 0xC2B5DEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:154 LDY @LOCAL03
    case 0xC2BA5D: {
        Instruction step(cpu, 0xA4, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:155 STA a:battler::brainshock_resist,Y
    case 0xC2BA5F: {
        Instruction step(cpu, 0x99, 0x00003Bu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:156 REP #PROC_FLAGS::ACCUM8
    case 0xC2BA62: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:157 LDA @VIRTUAL04
    case 0xC2BA64: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC2BA66: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:159 DEC
    case 0xC2BA68: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:160 STA a:battler::row,Y
    case 0xC2BA69: {
        Instruction step(cpu, 0x99, 0x000010u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_player_stats.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC2BA6C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_player_stats.asm:162 END_C_FUNCTION
    case 0xC2BA6E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_player_stats.asm:162 END_C_FUNCTION
    case 0xC2BA6F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
