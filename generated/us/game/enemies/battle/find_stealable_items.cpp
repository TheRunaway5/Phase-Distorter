// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/find_stealable_items.asm
bool resume_battle_find_stealable_items(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/find_stealable_items.asm:3 BEGIN_C_FUNCTION
    case 0xC241DC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC241DE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC241DF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC241E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC241E0.
    case 0xC241E2: {
        Instruction step(cpu, 0xFF, 0x18645Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC241E3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:16 STZ @LOCAL05
    case 0xC241E4: {
        Instruction step(cpu, 0x64, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:17 STZ @LOCAL04
    case 0xC241E6: {
        Instruction step(cpu, 0x64, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:18 JMP @UNKNOWN12
    case 0xC241E8: {
        Instruction step(cpu, 0x4C, 0x004306u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:27 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC241EB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:27 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC241EB.
    case 0xC241ED: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:28 LDA (@LOCAL04),Y
    case 0xC241EE: {
        Instruction step(cpu, 0xB1, 0x000016u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:30 AND #$00FF
    case 0xC241F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC241F0.
    case 0xC241F2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:31 STA @LOCAL03
    case 0xC241F3: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:32 CMP #$0001
    case 0xC241F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:32 CMP #$0001
    // Overlapping static entry reached from 0xC241F5.
    case 0xC241F7: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC241F8: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC241FA: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC241FC: {
        Instruction step(cpu, 0x4C, 0x004304u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:34 LDA @LOCAL03
    case 0xC241FF: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:35 CMP #$0004
    case 0xC24201: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:35 CMP #$0004
    // Overlapping static entry reached from 0xC24201.
    case 0xC24203: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC24204: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC24206: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC24208: {
        Instruction step(cpu, 0x4C, 0x004304u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:37 LDA #$0000
    case 0xC2420B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:37 LDA #$0000
    // Overlapping static entry reached from 0xC2420B.
    case 0xC2420D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:38 STA @LOCAL02
    case 0xC2420E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:39 BRA @UNKNOWN5
    case 0xC24210: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:41 LDY #.SIZEOF(battler)
    case 0xC24212: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:41 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24212.
    case 0xC24214: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:42 JSL MULT168
    case 0xC24215: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:43 TAX
    case 0xC24219: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:44 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2421A: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:45 AND #$00FF
    case 0xC2421D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC2421D.
    case 0xC2421F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:46 BEQ @UNKNOWN4
    case 0xC24220: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:47 LDA BATTLERS_TABLE,X
    case 0xC24222: {
        Instruction step(cpu, 0xBD, 0x009FACu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:48 CMP @LOCAL03
    case 0xC24225: {
        Instruction step(cpu, 0xC5, 0x000014u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:49 BNE @UNKNOWN4
    case 0xC24227: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:50 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC24229: {
        Instruction step(cpu, 0xBD, 0x009FBBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:51 AND #$00FF
    case 0xC2422C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC2422C.
    case 0xC2422E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:52 BNE @UNKNOWN4
    case 0xC2422F: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:53 LDA BATTLERS_TABLE+battler::action_item_slot,X
    case 0xC24231: {
        Instruction step(cpu, 0xBD, 0x009FB3u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:54 AND #$00FF
    case 0xC24234: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC24234.
    case 0xC24236: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:55 STA @LOCAL01
    case 0xC24237: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:57 LDA @LOCAL02
    case 0xC24239: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:58 INC
    case 0xC2423B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:59 STA @LOCAL02
    case 0xC2423C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:61 CMP #TOTAL_PARTY_COUNT
    case 0xC2423E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:61 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC2423E.
    case 0xC24240: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:62 BCC @UNKNOWN3
    case 0xC24241: {
        Instruction step(cpu, 0x90, 0x0000CFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:63 STZ @LOCAL00
    case 0xC24243: {
        Instruction step(cpu, 0x64, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:64 JMP @UNKNOWN10
    case 0xC24245: {
        Instruction step(cpu, 0x4C, 0x0042F8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:66 LDA @LOCAL00
    case 0xC24248: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:67 STA @VIRTUAL02
    case 0xC2424A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:68 INC @VIRTUAL02
    case 0xC2424C: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:69 LDA @VIRTUAL02
    case 0xC2424E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:70 CMP @LOCAL01
    case 0xC24250: {
        Instruction step(cpu, 0xC5, 0x000010u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/find_stealable_items.asm:71 BEQL @UNKNOWN9
    case 0xC24252: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:71 BEQL @UNKNOWN9
    case 0xC24254: {
        Instruction step(cpu, 0x4C, 0x0042F6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:72 LDA @LOCAL03
    case 0xC24257: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:73 DEC
    case 0xC24259: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:74 LDY #.SIZEOF(char_struct)
    case 0xC2425A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:74 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2425A.
    case 0xC2425C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:75 JSL MULT168
    case 0xC2425D: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:76 TAY
    case 0xC24261: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:89 STY @LOCAL02
    case 0xC24262: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:90 TYA
    case 0xC24264: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:91 CLC
    case 0xC24265: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:92 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC24266: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F1u : 0x0099F1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:92 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC24266.
    case 0xC24268: {
        Instruction step(cpu, 0x99, 0x006518u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:93 CLC
    case 0xC24269: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:94 ADC @LOCAL00
    case 0xC2426A: {
        Instruction step(cpu, 0x65, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:94 ADC @LOCAL00
    // Overlapping static entry reached from 0xC24268.
    case 0xC2426B: {
        Instruction step(cpu, 0x0E, 0x00BDAAu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:95 TAX
    case 0xC2426C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:96 LDA __BSS_START__,X
    case 0xC2426D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:96 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2426B.
    case 0xC2426E: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:97 AND #$00FF
    case 0xC24270: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC24270.
    case 0xC24272: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:98 STA @VIRTUAL04
    case 0xC24273: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/find_stealable_items.asm:100 BEQL @UNKNOWN9
    case 0xC24275: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:100 BEQL @UNKNOWN9
    case 0xC24277: {
        Instruction step(cpu, 0x4C, 0x0042F6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2427A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x005000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2427A.
    case 0xC2427C: {
        Instruction step(cpu, 0x50, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2427D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2427C.
    case 0xC2427E: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2427F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2427E.
    case 0xC24280: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2427F.
    case 0xC24281: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24282: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:102 LDA @VIRTUAL04
    case 0xC24284: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:112 LDY #.SIZEOF(item)
    case 0xC24286: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:112 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC24286.
    case 0xC24288: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:113 JSL MULT168
    case 0xC24289: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:114 TAX
    case 0xC2428D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:115 CLC
    case 0xC2428E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:116 ADC #item::cost
    case 0xC2428F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:116 ADC #item::cost
    // Overlapping static entry reached from 0xC2428F.
    case 0xC24291: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/battle/find_stealable_items.asm:117 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24292: {
        Instruction step(cpu, 0xA4, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/battle/find_stealable_items.asm:117 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24294: {
        Instruction step(cpu, 0x84, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/battle/find_stealable_items.asm:117 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24296: {
        Instruction step(cpu, 0xA4, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/battle/find_stealable_items.asm:117 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC24298: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:119 CLC
    case 0xC2429A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:120 ADC @VIRTUAL0A
    case 0xC2429B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:121 STA @VIRTUAL0A
    case 0xC2429D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:122 LDA [@VIRTUAL0A]
    case 0xC2429F: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:123 BEQ @UNKNOWN9
    case 0xC242A1: {
        Instruction step(cpu, 0xF0, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:124 CMP #290
    case 0xC242A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000022u : 0x000122u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:124 CMP #290
    // Overlapping static entry reached from 0xC242A3.
    case 0xC242A5: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:125 BCS @UNKNOWN9
    case 0xC242A6: {
        Instruction step(cpu, 0xB0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:125 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC242A5.
    case 0xC242A7: {
        Instruction step(cpu, 0x4E, 0x00188Au, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:126 TXA
    case 0xC242A8: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:127 CLC
    case 0xC242A9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:128 ADC #item::type
    case 0xC242AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:128 ADC #item::type
    // Overlapping static entry reached from 0xC242AA.
    case 0xC242AC: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:129 CLC
    case 0xC242AD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:130 ADC @VIRTUAL06
    case 0xC242AE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:131 STA @VIRTUAL06
    case 0xC242B0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:132 LDA [@VIRTUAL06]
    case 0xC242B2: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:133 AND #$00FF
    case 0xC242B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:133 AND #$00FF
    // Overlapping static entry reached from 0xC242B4.
    case 0xC242B6: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:134 AND #$0030
    case 0xC242B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:134 AND #$0030
    // Overlapping static entry reached from 0xC242B7.
    case 0xC242B9: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:135 CMP #$0020
    case 0xC242BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:135 CMP #$0020
    // Overlapping static entry reached from 0xC242BA.
    case 0xC242BC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:136 BNE @UNKNOWN9
    case 0xC242BD: {
        Instruction step(cpu, 0xD0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:138 LDY @LOCAL02
    case 0xC242BF: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:140 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,Y
    case 0xC242C1: {
        Instruction step(cpu, 0xB9, 0x0099FFu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:141 AND #$00FF
    case 0xC242C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC242C4.
    case 0xC242C6: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:142 CMP @VIRTUAL02
    case 0xC242C7: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:143 BEQ @UNKNOWN9
    case 0xC242C9: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:144 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,Y
    case 0xC242CB: {
        Instruction step(cpu, 0xB9, 0x009A00u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:145 AND #$00FF
    case 0xC242CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC242CE.
    case 0xC242D0: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:146 CMP @VIRTUAL02
    case 0xC242D1: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:147 BEQ @UNKNOWN9
    case 0xC242D3: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:148 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,Y
    case 0xC242D5: {
        Instruction step(cpu, 0xB9, 0x009A01u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:149 AND #$00FF
    case 0xC242D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC242D8.
    case 0xC242DA: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:150 CMP @VIRTUAL02
    case 0xC242DB: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:151 BEQ @UNKNOWN9
    case 0xC242DD: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:152 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,Y
    case 0xC242DF: {
        Instruction step(cpu, 0xB9, 0x009A02u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:153 AND #$00FF
    case 0xC242E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC242E2.
    case 0xC242E4: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:154 CMP @VIRTUAL02
    case 0xC242E5: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:155 BEQ @UNKNOWN9
    case 0xC242E7: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:160 LDA @VIRTUAL04
    case 0xC242E9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:162 SEP #PROC_FLAGS::ACCUM8
    case 0xC242EB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:163 LDY #.LOWORD(STEALABLE_ITEM_CANDIDATES)
    case 0xC242ED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D4u : 0x00A9D4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:163 LDY #.LOWORD(STEALABLE_ITEM_CANDIDATES)
    // Overlapping static entry reached from 0xC242ED.
    case 0xC242EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000091u : 0x001891u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:164 STA (@LOCAL05),Y
    case 0xC242F0: {
        Instruction step(cpu, 0x91, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:164 STA (@LOCAL05),Y
    // Overlapping static entry reached from 0xC242EF.
    case 0xC242F1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:165 REP #PROC_FLAGS::ACCUM8
    case 0xC242F2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:166 INC @LOCAL05
    case 0xC242F4: {
        Instruction step(cpu, 0xE6, 0x000018u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:168 INC @LOCAL00
    case 0xC242F6: {
        Instruction step(cpu, 0xE6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:170 LDA @LOCAL00
    case 0xC242F8: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:171 CMP #.SIZEOF(char_struct::items)
    case 0xC242FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:171 CMP #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC242FA.
    case 0xC242FC: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC242FD: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC242FF: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC24301: {
        Instruction step(cpu, 0x4C, 0x004248u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:174 INC @LOCAL04
    case 0xC24304: {
        Instruction step(cpu, 0xE6, 0x000016u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:176 LDA @LOCAL04
    case 0xC24306: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:177 CMP #TOTAL_PARTY_COUNT
    case 0xC24308: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:177 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC24308.
    case 0xC2430A: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC2430B: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC2430D: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC2430F: {
        Instruction step(cpu, 0x4C, 0x0041EBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:179 LDA @LOCAL05
    case 0xC24312: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/find_stealable_items.asm:180 END_C_FUNCTION
    case 0xC24314: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/find_stealable_items.asm:180 END_C_FUNCTION
    case 0xC24315: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
