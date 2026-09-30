// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/battle_swirl_sequence.asm
bool resume_overworld_battle_swirl_sequence(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/battle_swirl_sequence.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E7F9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E7FB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E7FC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E7FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E7FD.
    case 0xC2E7FF: {
        Instruction step(cpu, 0xFF, 0x01A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E800: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:12 LDA #$0001
    case 0xC2E801: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:12 LDA #$0001
    // Overlapping static entry reached from 0xC2E801.
    case 0xC2E803: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:13 STA $16
    case 0xC2E804: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:14 LDA #$0004
    case 0xC2E806: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:14 LDA #$0004
    // Overlapping static entry reached from 0xC2E806.
    case 0xC2E808: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:15 STA @SWIRL_RED
    case 0xC2E809: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:16 STA @SWIRL_GREEN
    case 0xC2E80B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:17 LDY #$0000
    case 0xC2E80D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC2E80D.
    case 0xC2E80F: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:18 STY @SWIRL_BLUE
    case 0xC2E810: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:19 LDA BATTLE_INITIATIVE
    case 0xC2E812: {
        Instruction step(cpu, 0xAD, 0x005142u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:20 BEQ @UNKNOWN0
    case 0xC2E815: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:21 CMP #INITIATIVE::PARTY_FIRST
    case 0xC2E817: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:21 CMP #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC2E817.
    case 0xC2E819: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:22 BEQ @UNKNOWN1
    case 0xC2E81A: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:23 CMP #INITIATIVE::ENEMIES_FIRST
    case 0xC2E81C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:23 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC2E81C.
    case 0xC2E81E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:24 BEQ @UNKNOWN2
    case 0xC2E81F: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:25 BRA @UNKNOWN3
    case 0xC2E821: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:27 LDX #MUSIC::BATTLE_SWIRL4
    case 0xC2E823: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B0u : 0x0000B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:27 LDX #MUSIC::BATTLE_SWIRL4
    // Overlapping static entry reached from 0xC2E823.
    case 0xC2E825: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:28 STX @SWIRL_MUSIC
    case 0xC2E826: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:29 LDA #$000E
    case 0xC2E828: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:29 LDA #$000E
    // Overlapping static entry reached from 0xC2E828.
    case 0xC2E82A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:30 STA $02
    case 0xC2E82B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:31 STA $0E
    case 0xC2E82D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:32 BRA @UNKNOWN3
    case 0xC2E82F: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:34 LDX #MUSIC::BATTLE_SWIRL4
    case 0xC2E831: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B0u : 0x0000B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:34 LDX #MUSIC::BATTLE_SWIRL4
    // Overlapping static entry reached from 0xC2E831.
    case 0xC2E833: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:35 STX @SWIRL_MUSIC
    case 0xC2E834: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:36 LDA #$001C
    case 0xC2E836: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:36 LDA #$001C
    // Overlapping static entry reached from 0xC2E836.
    case 0xC2E838: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:37 STA @SWIRL_RED
    case 0xC2E839: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:38 LDA #$0005
    case 0xC2E83B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:38 LDA #$0005
    // Overlapping static entry reached from 0xC2E83B.
    case 0xC2E83D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:39 STA @SWIRL_GREEN
    case 0xC2E83E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:40 LDY #$000C
    case 0xC2E840: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:40 LDY #$000C
    // Overlapping static entry reached from 0xC2E840.
    case 0xC2E842: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:41 STY @SWIRL_BLUE
    case 0xC2E843: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:42 LDA #$0006
    case 0xC2E845: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:42 LDA #$0006
    // Overlapping static entry reached from 0xC2E845.
    case 0xC2E847: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:43 STA $02
    case 0xC2E848: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:44 STA $0E
    case 0xC2E84A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:45 BRA @UNKNOWN3
    case 0xC2E84C: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:47 LDX #MUSIC::BATTLE_SWIRL2
    case 0xC2E84E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:47 LDX #MUSIC::BATTLE_SWIRL2
    // Overlapping static entry reached from 0xC2E84E.
    case 0xC2E850: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:48 STX @SWIRL_MUSIC
    case 0xC2E851: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:49 STZ @SWIRL_RED
    case 0xC2E853: {
        Instruction step(cpu, 0x64, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:50 LDA #$001F
    case 0xC2E855: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:50 LDA #$001F
    // Overlapping static entry reached from 0xC2E855.
    case 0xC2E857: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:51 STA @SWIRL_GREEN
    case 0xC2E858: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:52 TAY
    case 0xC2E85A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:53 STY @SWIRL_BLUE
    case 0xC2E85B: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:54 LDA #$0006
    case 0xC2E85D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:54 LDA #$0006
    // Overlapping static entry reached from 0xC2E85D.
    case 0xC2E85F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:55 STA $02
    case 0xC2E860: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:56 STA $0E
    case 0xC2E862: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:58 LDA CURRENT_BATTLE_GROUP
    case 0xC2E864: {
        Instruction step(cpu, 0xAD, 0x004E12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:59 CMP #ENEMY_GROUP::BOSS_FRANK
    case 0xC2E867: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C0u : 0x0001C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:59 CMP #ENEMY_GROUP::BOSS_FRANK
    // Overlapping static entry reached from 0xC2E867.
    case 0xC2E869: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:60 BCC @UNKNOWN4
    case 0xC2E86A: {
        Instruction step(cpu, 0x90, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:60 BCC @UNKNOWN4
    // Overlapping static entry reached from 0xC2E869.
    case 0xC2E86B: {
        Instruction step(cpu, 0x11, 0x0000A9u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    case 0xC2E86C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    // Overlapping static entry reached from 0xC2E86B.
    case 0xC2E86D: {
        Instruction step(cpu, 0x03, 0x000000u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    // Overlapping static entry reached from 0xC2E86C.
    case 0xC2E86E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:62 STA $16
    case 0xC2E86F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:63 LDA #$000E
    case 0xC2E871: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:63 LDA #$000E
    // Overlapping static entry reached from 0xC2E871.
    case 0xC2E873: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:64 STA $02
    case 0xC2E874: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:65 STA $0E
    case 0xC2E876: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:66 LDX #MUSIC::BATTLE_SWIRL1
    case 0xC2E878: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:66 LDX #MUSIC::BATTLE_SWIRL1
    // Overlapping static entry reached from 0xC2E878.
    case 0xC2E87A: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:67 STX @SWIRL_MUSIC
    case 0xC2E87B: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:69 LDX @SWIRL_MUSIC
    case 0xC2E87D: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:70 TXA
    case 0xC2E87F: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:71 JSL CHANGE_MUSIC
    case 0xC2E880: {
        Instruction step(cpu, 0x22, 0xC4CF5Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:72 JSL UNKNOWN_C04F47
    case 0xC2E884: {
        Instruction step(cpu, 0x22, 0xC05166u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:73 LDA $0E
    case 0xC2E888: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:74 STA $02
    case 0xC2E88A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:75 AND #$0004
    case 0xC2E88C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:75 AND #$0004
    // Overlapping static entry reached from 0xC2E88C.
    case 0xC2E88E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:76 BEQ @UNKNOWN6
    case 0xC2E88F: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:77 LDY @SWIRL_BLUE
    case 0xC2E891: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:78 LDX @SWIRL_GREEN
    case 0xC2E893: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:79 LDA @SWIRL_RED
    case 0xC2E895: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:80 JSL SET_COLDATA
    case 0xC2E897: {
        Instruction step(cpu, 0x22, 0xC0AFF9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:81 LDA $02
    case 0xC2E89B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:82 AND #$0008
    case 0xC2E89D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:82 AND #$0008
    // Overlapping static entry reached from 0xC2E89D.
    case 0xC2E89F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:83 BEQ @UNKNOWN5
    case 0xC2E8A0: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:84 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_DIV2 | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    case 0xC2E8A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:84 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_DIV2 | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    // Overlapping static entry reached from 0xC2E8A2.
    case 0xC2E8A4: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:85 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    case 0xC2E8A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:85 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    // Overlapping static entry reached from 0xC2E8A5.
    case 0xC2E8A7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:86 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2E8A8: {
        Instruction step(cpu, 0x22, 0xC0B018u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:87 BRA @UNKNOWN6
    case 0xC2E8AC: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:89 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    case 0xC2E8AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000BFu : 0x0000BFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:89 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    // Overlapping static entry reached from 0xC2E8AE.
    case 0xC2E8B0: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:90 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    case 0xC2E8B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:90 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    // Overlapping static entry reached from 0xC2E8B1.
    case 0xC2E8B3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:91 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2E8B4: {
        Instruction step(cpu, 0x22, 0xC0B018u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:93 LDY #$001E
    case 0xC2E8B8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:93 LDY #$001E
    // Overlapping static entry reached from 0xC2E8B8.
    case 0xC2E8BA: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:94 LDX $02
    case 0xC2E8BB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:95 LDA $16
    case 0xC2E8BD: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:96 JSL UNKNOWN_C2E8C4
    case 0xC2E8BF: {
        Instruction step(cpu, 0x22, 0xC2E7DDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:97 LDA $02
    case 0xC2E8C3: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:98 AND #$0004
    case 0xC2E8C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:98 AND #$0004
    // Overlapping static entry reached from 0xC2E8C5.
    case 0xC2E8C7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:99 BEQ @UNKNOWN7
    case 0xC2E8C8: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:100 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E8CA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:101 LDA #$0020
    case 0xC2E8CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x008D20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:102 STA SWIRL_MASK_SETTINGS
    case 0xC2E8CE: {
        Instruction step(cpu, 0x8D, 0x00B09Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:102 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E8CC.
    case 0xC2E8CF: {
        Instruction step(cpu, 0x9D, 0x0080B0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:103 BRA @UNKNOWN8
    case 0xC2E8D1: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:103 BRA @UNKNOWN8
    // Overlapping static entry reached from 0xC2E8CF.
    case 0xC2E8D2: {
        Instruction step(cpu, 0x07, 0x0000E2u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E8D3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:105 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E8D2.
    case 0xC2E8D4: {
        Instruction step(cpu, 0x20, 0x000FA9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:106 LDA #$000F
    case 0xC2E8D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x008D0Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:107 STA SWIRL_MASK_SETTINGS
    case 0xC2E8D7: {
        Instruction step(cpu, 0x8D, 0x00B09Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:107 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E8D5.
    case 0xC2E8D8: {
        Instruction step(cpu, 0x9D, 0x009CB0u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:109 STZ SWIRL_AUTO_RESTORE
    case 0xC2E8DA: {
        Instruction step(cpu, 0x9C, 0x00B0A0u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:109 STZ SWIRL_AUTO_RESTORE
    // Overlapping static entry reached from 0xC2E8D8.
    case 0xC2E8DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000B0u : 0x00C2B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:110 REP #PROC_FLAGS::ACCUM8
    case 0xC2E8DD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:110 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2E8DB.
    case 0xC2E8DE: {
        Instruction step(cpu, 0x20, 0x006B2Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:111 END_C_FUNCTION
    case 0xC2E8DF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/battle_swirl_sequence.asm:111 END_C_FUNCTION
    case 0xC2E8E0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
