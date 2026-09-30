// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/battle_swirl_sequence.asm
bool resume_overworld_battle_swirl_sequence(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/battle_swirl_sequence.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2E8E0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E8E2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E8E3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E8E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC2E8E4.
    case 0xC2E8E6: {
        Instruction step(cpu, 0xFF, 0x01A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:10 END_STACK_VARS
    case 0xC2E8E7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:12 LDA #$0001
    case 0xC2E8E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:12 LDA #$0001
    // Overlapping static entry reached from 0xC2E8E8.
    case 0xC2E8EA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:13 STA $16
    case 0xC2E8EB: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:14 LDA #$0004
    case 0xC2E8ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:14 LDA #$0004
    // Overlapping static entry reached from 0xC2E8ED.
    case 0xC2E8EF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:15 STA @SWIRL_RED
    case 0xC2E8F0: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:16 STA @SWIRL_GREEN
    case 0xC2E8F2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:17 LDY #$0000
    case 0xC2E8F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC2E8F4.
    case 0xC2E8F6: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:18 STY @SWIRL_BLUE
    case 0xC2E8F7: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:19 LDA BATTLE_INITIATIVE
    case 0xC2E8F9: {
        Instruction step(cpu, 0xAD, 0x004DBCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:20 BEQ @UNKNOWN0
    case 0xC2E8FC: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:21 CMP #INITIATIVE::PARTY_FIRST
    case 0xC2E8FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:21 CMP #INITIATIVE::PARTY_FIRST
    // Overlapping static entry reached from 0xC2E8FE.
    case 0xC2E900: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:22 BEQ @UNKNOWN1
    case 0xC2E901: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:23 CMP #INITIATIVE::ENEMIES_FIRST
    case 0xC2E903: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:23 CMP #INITIATIVE::ENEMIES_FIRST
    // Overlapping static entry reached from 0xC2E903.
    case 0xC2E905: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:24 BEQ @UNKNOWN2
    case 0xC2E906: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:25 BRA @UNKNOWN3
    case 0xC2E908: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:27 LDX #MUSIC::BATTLE_SWIRL4
    case 0xC2E90A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B0u : 0x0000B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:27 LDX #MUSIC::BATTLE_SWIRL4
    // Overlapping static entry reached from 0xC2E90A.
    case 0xC2E90C: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:28 STX @SWIRL_MUSIC
    case 0xC2E90D: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:29 LDA #$000E
    case 0xC2E90F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:29 LDA #$000E
    // Overlapping static entry reached from 0xC2E90F.
    case 0xC2E911: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:30 STA $02
    case 0xC2E912: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:31 STA $0E
    case 0xC2E914: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:32 BRA @UNKNOWN3
    case 0xC2E916: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:34 LDX #MUSIC::BATTLE_SWIRL4
    case 0xC2E918: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000B0u : 0x0000B0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:34 LDX #MUSIC::BATTLE_SWIRL4
    // Overlapping static entry reached from 0xC2E918.
    case 0xC2E91A: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:35 STX @SWIRL_MUSIC
    case 0xC2E91B: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:36 LDA #$001C
    case 0xC2E91D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:36 LDA #$001C
    // Overlapping static entry reached from 0xC2E91D.
    case 0xC2E91F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:37 STA @SWIRL_RED
    case 0xC2E920: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:38 LDA #$0005
    case 0xC2E922: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:38 LDA #$0005
    // Overlapping static entry reached from 0xC2E922.
    case 0xC2E924: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:39 STA @SWIRL_GREEN
    case 0xC2E925: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:40 LDY #$000C
    case 0xC2E927: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:40 LDY #$000C
    // Overlapping static entry reached from 0xC2E927.
    case 0xC2E929: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:41 STY @SWIRL_BLUE
    case 0xC2E92A: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:42 LDA #$0006
    case 0xC2E92C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:42 LDA #$0006
    // Overlapping static entry reached from 0xC2E92C.
    case 0xC2E92E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:43 STA $02
    case 0xC2E92F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:44 STA $0E
    case 0xC2E931: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:45 BRA @UNKNOWN3
    case 0xC2E933: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:47 LDX #MUSIC::BATTLE_SWIRL2
    case 0xC2E935: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:47 LDX #MUSIC::BATTLE_SWIRL2
    // Overlapping static entry reached from 0xC2E935.
    case 0xC2E937: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:48 STX @SWIRL_MUSIC
    case 0xC2E938: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:49 STZ @SWIRL_RED
    case 0xC2E93A: {
        Instruction step(cpu, 0x64, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:50 LDA #$001F
    case 0xC2E93C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:50 LDA #$001F
    // Overlapping static entry reached from 0xC2E93C.
    case 0xC2E93E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:51 STA @SWIRL_GREEN
    case 0xC2E93F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:52 TAY
    case 0xC2E941: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:53 STY @SWIRL_BLUE
    case 0xC2E942: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:54 LDA #$0006
    case 0xC2E944: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:54 LDA #$0006
    // Overlapping static entry reached from 0xC2E944.
    case 0xC2E946: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:55 STA $02
    case 0xC2E947: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:56 STA $0E
    case 0xC2E949: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:58 LDA CURRENT_BATTLE_GROUP
    case 0xC2E94B: {
        Instruction step(cpu, 0xAD, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:59 CMP #ENEMY_GROUP::BOSS_FRANK
    case 0xC2E94E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C0u : 0x0001C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:59 CMP #ENEMY_GROUP::BOSS_FRANK
    // Overlapping static entry reached from 0xC2E94E.
    case 0xC2E950: {
        Instruction step(cpu, 0x01, 0x000090u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:60 BCC @UNKNOWN4
    case 0xC2E951: {
        Instruction step(cpu, 0x90, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:60 BCC @UNKNOWN4
    // Overlapping static entry reached from 0xC2E950.
    case 0xC2E952: {
        Instruction step(cpu, 0x11, 0x0000A9u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    case 0xC2E953: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    // Overlapping static entry reached from 0xC2E952.
    case 0xC2E954: {
        Instruction step(cpu, 0x03, 0x000000u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:61 LDA #$0003
    // Overlapping static entry reached from 0xC2E953.
    case 0xC2E955: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:62 STA $16
    case 0xC2E956: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:63 LDA #$000E
    case 0xC2E958: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:63 LDA #$000E
    // Overlapping static entry reached from 0xC2E958.
    case 0xC2E95A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:64 STA $02
    case 0xC2E95B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:65 STA $0E
    case 0xC2E95D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:66 LDX #MUSIC::BATTLE_SWIRL1
    case 0xC2E95F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:66 LDX #MUSIC::BATTLE_SWIRL1
    // Overlapping static entry reached from 0xC2E95F.
    case 0xC2E961: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:67 STX @SWIRL_MUSIC
    case 0xC2E962: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:69 LDX @SWIRL_MUSIC
    case 0xC2E964: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:70 TXA
    case 0xC2E966: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:71 JSL CHANGE_MUSIC
    case 0xC2E967: {
        Instruction step(cpu, 0x22, 0xC4FBBDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:72 JSL UNKNOWN_C04F47
    case 0xC2E96B: {
        Instruction step(cpu, 0x22, 0xC04F47u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:73 LDA $0E
    case 0xC2E96F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:74 STA $02
    case 0xC2E971: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:75 AND #$0004
    case 0xC2E973: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:75 AND #$0004
    // Overlapping static entry reached from 0xC2E973.
    case 0xC2E975: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:76 BEQ @UNKNOWN6
    case 0xC2E976: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:77 LDY @SWIRL_BLUE
    case 0xC2E978: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:78 LDX @SWIRL_GREEN
    case 0xC2E97A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:79 LDA @SWIRL_RED
    case 0xC2E97C: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:80 JSL SET_COLDATA
    case 0xC2E97E: {
        Instruction step(cpu, 0x22, 0xC0B01Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:81 LDA $02
    case 0xC2E982: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:82 AND #$0008
    case 0xC2E984: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:82 AND #$0008
    // Overlapping static entry reached from 0xC2E984.
    case 0xC2E986: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:83 BEQ @UNKNOWN5
    case 0xC2E987: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:84 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_DIV2 | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    case 0xC2E989: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:84 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_DIV2 | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    // Overlapping static entry reached from 0xC2E989.
    case 0xC2E98B: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:85 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    case 0xC2E98C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:85 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    // Overlapping static entry reached from 0xC2E98C.
    case 0xC2E98E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:86 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2E98F: {
        Instruction step(cpu, 0x22, 0xC0B039u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:87 BRA @UNKNOWN6
    case 0xC2E993: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:89 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    case 0xC2E995: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000BFu : 0x0000BFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:89 LDX #CGADSUB_BITS::COLOUR_MATH_ADDSUB | CGADSUB_BITS::COLOUR_MATH_MAINISBACKDROP | CGADSUB_BITS::COLOUR_MATH_MAINISOBJ47 | CGADSUB_BITS::COLOUR_MATH_MAINISBG4 | CGADSUB_BITS::COLOUR_MATH_MAINISBG3 | CGADSUB_BITS::COLOUR_MATH_MAINISBG2 | CGADSUB_BITS::COLOUR_MATH_MAINISBG1
    // Overlapping static entry reached from 0xC2E995.
    case 0xC2E997: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:90 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    case 0xC2E998: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:90 LDA #CGWSEL_BITS::COLOUR_MATH_ENABLE_MATHWIN | CGWSEL_BITS::MAIN_SCREEN_BLACK_NEVER | CGWSEL_BITS::SUBSCREEN_BGOBJ_DISABLE | CGWSEL_BITS::USE_PALETTE
    // Overlapping static entry reached from 0xC2E998.
    case 0xC2E99A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:91 JSL SET_COLOUR_ADDSUB_MODE
    case 0xC2E99B: {
        Instruction step(cpu, 0x22, 0xC0B039u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:93 LDY #$001E
    case 0xC2E99F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:93 LDY #$001E
    // Overlapping static entry reached from 0xC2E99F.
    case 0xC2E9A1: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:94 LDX $02
    case 0xC2E9A2: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:95 LDA $16
    case 0xC2E9A4: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:96 JSL UNKNOWN_C2E8C4
    case 0xC2E9A6: {
        Instruction step(cpu, 0x22, 0xC2E8C4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:97 LDA $02
    case 0xC2E9AA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:98 AND #$0004
    case 0xC2E9AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:98 AND #$0004
    // Overlapping static entry reached from 0xC2E9AC.
    case 0xC2E9AE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:99 BEQ @UNKNOWN7
    case 0xC2E9AF: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:100 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E9B1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:101 LDA #$0020
    case 0xC2E9B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x008D20u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:102 STA SWIRL_MASK_SETTINGS
    case 0xC2E9B5: {
        Instruction step(cpu, 0x8D, 0x00AEC8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:102 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E9B3.
    case 0xC2E9B6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:102 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E9B6.
    case 0xC2E9B7: {
        Instruction step(cpu, 0xAE, 0x000780u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:103 BRA @UNKNOWN8
    case 0xC2E9B8: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC2E9BA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:106 LDA #$000F
    case 0xC2E9BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x008D0Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:107 STA SWIRL_MASK_SETTINGS
    case 0xC2E9BE: {
        Instruction step(cpu, 0x8D, 0x00AEC8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:107 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E9BC.
    case 0xC2E9BF: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:107 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC2E9BF.
    case 0xC2E9C0: {
        Instruction step(cpu, 0xAE, 0x00CB9Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:109 STZ SWIRL_AUTO_RESTORE
    case 0xC2E9C1: {
        Instruction step(cpu, 0x9C, 0x00AECBu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:109 STZ SWIRL_AUTO_RESTORE
    // Overlapping static entry reached from 0xC2E9C0.
    case 0xC2E9C3: {
        Instruction step(cpu, 0xAE, 0x0020C2u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/battle_swirl_sequence.asm:110 REP #PROC_FLAGS::ACCUM8
    case 0xC2E9C4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/battle_swirl_sequence.asm:111 END_C_FUNCTION
    case 0xC2E9C6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/battle_swirl_sequence.asm:111 END_C_FUNCTION
    case 0xC2E9C7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
