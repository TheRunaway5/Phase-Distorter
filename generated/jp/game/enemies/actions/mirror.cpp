// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/mirror.asm
bool resume_battle_actions_mirror(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/mirror.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B055: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/mirror.asm:9 END_STACK_VARS
    case 0xC2B057: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/mirror.asm:9 END_STACK_VARS
    case 0xC2B058: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/mirror.asm:9 END_STACK_VARS
    case 0xC2B059: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/mirror.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B059.
    case 0xC2B05B: {
        Instruction step(cpu, 0xFF, 0x74AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/mirror.asm:9 END_STACK_VARS
    case 0xC2B05C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:10 LDX CURRENT_TARGET
    case 0xC2B05D: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:10 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B05B.
    case 0xC2B05F: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:11 LDA a:battler::id,X
    case 0xC2B060: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:12 TAX
    case 0xC2B063: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:13 STX @LOCAL03
    case 0xC2B064: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:14 LDX CURRENT_TARGET
    case 0xC2B066: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:15 LDA a:battler::ally_or_enemy,X
    case 0xC2B069: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:16 AND #$00FF
    case 0xC2B06C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC2B06C.
    case 0xC2B06E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/actions/mirror.asm:17 BEQL @UNKNOWN2
    case 0xC2B06F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/actions/mirror.asm:17 BEQL @UNKNOWN2
    case 0xC2B071: {
        Instruction step(cpu, 0x4C, 0x00B116u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:18 LDX CURRENT_TARGET
    case 0xC2B074: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:19 LDA a:battler::npc_id,X
    case 0xC2B077: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:20 AND #$00FF
    case 0xC2B07A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC2B07A.
    case 0xC2B07C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/mirror.asm:21 BNEL @UNKNOWN2
    case 0xC2B07D: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/mirror.asm:21 BNEL @UNKNOWN2
    case 0xC2B07F: {
        Instruction step(cpu, 0x4C, 0x00B116u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:22 LDA #100
    case 0xC2B082: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:22 LDA #100
    // Overlapping static entry reached from 0xC2B082.
    case 0xC2B084: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:23 JSR RAND_LIMIT
    case 0xC2B085: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:24 STA @LOCAL02
    case 0xC2B088: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:25 LDX @LOCAL03
    case 0xC2B08A: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:26 TXA
    case 0xC2B08C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:27 LDY #.SIZEOF(enemy_data)
    case 0xC2B08D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:27 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2B08D.
    case 0xC2B08F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:28 JSL MULT168
    case 0xC2B090: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:29 CLC
    case 0xC2B094: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:30 ADC #enemy_data::mirror_success
    case 0xC2B095: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Cu : 0x00004Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:30 ADC #enemy_data::mirror_success
    // Overlapping static entry reached from 0xC2B095.
    case 0xC2B097: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:31 TAX
    case 0xC2B098: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:32 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC2B099: {
        Instruction step(cpu, 0xBF, 0xD5A440u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:33 AND #$00FF
    case 0xC2B09D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC2B09D.
    case 0xC2B09F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:34 STA @VIRTUAL02
    case 0xC2B0A0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:35 LDA @LOCAL02
    case 0xC2B0A2: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:36 CMP @VIRTUAL02
    case 0xC2B0A4: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:37 BCS @UNKNOWN2
    case 0xC2B0A6: {
        Instruction step(cpu, 0xB0, 0x00006Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:38 LDX @LOCAL03
    case 0xC2B0A8: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:39 STX MIRROR_ENEMY
    case 0xC2B0AA: {
        Instruction step(cpu, 0x8E, 0x00ABE7u, 3u, AddressMode::Absolute);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:40 LDA #DEFAULT_MIRROR_TURN_COUNT
    case 0xC2B0AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:40 LDA #DEFAULT_MIRROR_TURN_COUNT
    // Overlapping static entry reached from 0xC2B0AD.
    case 0xC2B0AF: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:41 STA MIRROR_TURN_TIMER
    case 0xC2B0B0: {
        Instruction step(cpu, 0x8D, 0x00AC37u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:42 LDA CURRENT_ATTACKER
    case 0xC2B0B3: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/actions/mirror.asm:43 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0B6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/actions/mirror.asm:43 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0B8: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/actions/mirror.asm:43 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0B9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/actions/mirror.asm:43 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0BB: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/actions/mirror.asm:43 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0BC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/actions/mirror.asm:43 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0BE: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC2B0C0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/mirror.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B0C2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/mirror.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B0C4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/mirror.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B0C6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/mirror.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B0C8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:46 LDX #.SIZEOF(battler)
    case 0xC2B0CA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:46 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2B0CA.
    case 0xC2B0CC: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:47 LDA #.LOWORD(MIRROR_BATTLER_BACKUP)
    case 0xC2B0CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E9u : 0x00ABE9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:47 LDA #.LOWORD(MIRROR_BATTLER_BACKUP)
    // Overlapping static entry reached from 0xC2B0CD.
    case 0xC2B0CF: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:48 JSL MEMCPY16
    case 0xC2B0D0: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:49 LDA CURRENT_ATTACKER
    case 0xC2B0D4: {
        Instruction step(cpu, 0xAD, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/actions/mirror.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0D7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/actions/mirror.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0D9: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/actions/mirror.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0DA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/actions/mirror.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0DC: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/actions/mirror.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0DD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/actions/mirror.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0DF: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC2B0E1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/mirror.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B0E3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/mirror.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B0E5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/mirror.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B0E7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/mirror.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2B0E9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:53 LDA CURRENT_TARGET
    case 0xC2B0EB: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/actions/mirror.asm:54 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0EE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/actions/mirror.asm:54 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0F0: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/actions/mirror.asm:54 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0F1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/actions/mirror.asm:54 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0F3: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/actions/mirror.asm:54 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0F4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/actions/mirror.asm:54 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2B0F6: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC2B0F8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/mirror.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B0FA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/mirror.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B0FC: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/mirror.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B0FE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/mirror.asm:56 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2B100: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:57 JSL COPY_MIRROR_DATA
    case 0xC2B102: {
        Instruction step(cpu, 0x22, 0xC2AED3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/mirror.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_OK
    case 0xC2B106: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D6u : 0x002FD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/mirror.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_OK
    // Overlapping static entry reached from 0xC2B106.
    case 0xC2B108: {
        Instruction step(cpu, 0x2F, 0xA90E85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/mirror.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_OK
    case 0xC2B109: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/mirror.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_OK
    case 0xC2B10B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/mirror.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_OK
    // Overlapping static entry reached from 0xC2B108.
    case 0xC2B10C: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/mirror.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_OK
    // Overlapping static entry reached from 0xC2B10B.
    case 0xC2B10D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/mirror.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_OK
    case 0xC2B10E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/mirror.asm:58 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_OK
    case 0xC2B110: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/mirror.asm:59 BRA @UNKNOWN3
    case 0xC2B114: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/mirror.asm:61 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_NG
    case 0xC2B116: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F2u : 0x002FF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/mirror.asm:61 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_NG
    // Overlapping static entry reached from 0xC2B116.
    case 0xC2B118: {
        Instruction step(cpu, 0x2F, 0xA90E85u, 4u, AddressMode::Long);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/mirror.asm:61 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_NG
    case 0xC2B119: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/mirror.asm:61 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_NG
    case 0xC2B11B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/mirror.asm:61 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_NG
    // Overlapping static entry reached from 0xC2B118.
    case 0xC2B11C: {
        Instruction step(cpu, 0xC7, 0x000000u, 2u, AddressMode::DirectPageIndirectLong);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/mirror.asm:61 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_NG
    // Overlapping static entry reached from 0xC2B11B.
    case 0xC2B11D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/mirror.asm:61 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_NG
    case 0xC2B11E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/mirror.asm:61 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_METAMORPHOSE_NG
    case 0xC2B120: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/mirror.asm:63 END_C_FUNCTION
    case 0xC2B124: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/mirror.asm:63 END_C_FUNCTION
    case 0xC2B125: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
