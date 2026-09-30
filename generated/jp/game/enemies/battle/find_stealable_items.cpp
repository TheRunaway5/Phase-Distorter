// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/find_stealable_items.asm
bool resume_battle_find_stealable_items(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/find_stealable_items.asm:3 BEGIN_C_FUNCTION
    case 0xC24090: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC24092: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC24093: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC24094: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC24094.
    case 0xC24096: {
        Instruction step(cpu, 0xFF, 0x1A645Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/find_stealable_items.asm:15 END_STACK_VARS
    case 0xC24097: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:16 STZ @LOCAL05
    case 0xC24098: {
        Instruction step(cpu, 0x64, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:17 STZ @LOCAL04
    case 0xC2409A: {
        Instruction step(cpu, 0x64, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:18 JMP @UNKNOWN12
    case 0xC2409C: {
        Instruction step(cpu, 0x4C, 0x0041C3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:21 LDA @LOCAL04
    case 0xC2409F: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:22 CLC
    case 0xC240A1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:23 ADC #.LOWORD(GAME_STATE)
    case 0xC240A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:23 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC240A2.
    case 0xC240A4: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:24 TAX
    case 0xC240A5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:25 LDA a:game_state::party_members,X
    case 0xC240A6: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:30 AND #$00FF
    case 0xC240A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC240A9.
    case 0xC240AB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:31 STA @LOCAL03
    case 0xC240AC: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:32 CMP #$0001
    case 0xC240AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:32 CMP #$0001
    // Overlapping static entry reached from 0xC240AE.
    case 0xC240B0: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC240B1: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC240B3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:33 BCCL @UNKNOWN11
    case 0xC240B5: {
        Instruction step(cpu, 0x4C, 0x0041C1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:34 LDA @LOCAL03
    case 0xC240B8: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:35 CMP #$0004
    case 0xC240BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:35 CMP #$0004
    // Overlapping static entry reached from 0xC240BA.
    case 0xC240BC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC240BD: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC240BF: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:36 BGTL @UNKNOWN11
    case 0xC240C1: {
        Instruction step(cpu, 0x4C, 0x0041C1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:37 LDA #$0000
    case 0xC240C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:37 LDA #$0000
    // Overlapping static entry reached from 0xC240C4.
    case 0xC240C6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:38 STA @LOCAL02
    case 0xC240C7: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:39 BRA @UNKNOWN5
    case 0xC240C9: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:41 LDY #.SIZEOF(battler)
    case 0xC240CB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:41 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC240CB.
    case 0xC240CD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:42 JSL MULT168
    case 0xC240CE: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:43 TAX
    case 0xC240D2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:44 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC240D3: {
        Instruction step(cpu, 0xBD, 0x00A1BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:45 AND #$00FF
    case 0xC240D6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC240D6.
    case 0xC240D8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:46 BEQ @UNKNOWN4
    case 0xC240D9: {
        Instruction step(cpu, 0xF0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:47 LDA BATTLERS_TABLE,X
    case 0xC240DB: {
        Instruction step(cpu, 0xBD, 0x00A1AEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:48 CMP @LOCAL03
    case 0xC240DE: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:49 BNE @UNKNOWN4
    case 0xC240E0: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:50 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC240E2: {
        Instruction step(cpu, 0xBD, 0x00A1BDu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:51 AND #$00FF
    case 0xC240E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC240E5.
    case 0xC240E7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:52 BNE @UNKNOWN4
    case 0xC240E8: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:53 LDA BATTLERS_TABLE+battler::action_item_slot,X
    case 0xC240EA: {
        Instruction step(cpu, 0xBD, 0x00A1B5u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:54 AND #$00FF
    case 0xC240ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC240ED.
    case 0xC240EF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:55 STA @LOCAL01
    case 0xC240F0: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:57 LDA @LOCAL02
    case 0xC240F2: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:58 INC
    case 0xC240F4: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:59 STA @LOCAL02
    case 0xC240F5: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:61 CMP #TOTAL_PARTY_COUNT
    case 0xC240F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:61 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC240F7.
    case 0xC240F9: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:62 BCC @UNKNOWN3
    case 0xC240FA: {
        Instruction step(cpu, 0x90, 0x0000CFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:63 STZ @LOCAL00
    case 0xC240FC: {
        Instruction step(cpu, 0x64, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:64 JMP @UNKNOWN10
    case 0xC240FE: {
        Instruction step(cpu, 0x4C, 0x0041B5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:66 LDA @LOCAL00
    case 0xC24101: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:67 STA @VIRTUAL02
    case 0xC24103: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:68 INC @VIRTUAL02
    case 0xC24105: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:69 LDA @VIRTUAL02
    case 0xC24107: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:70 CMP @LOCAL01
    case 0xC24109: {
        Instruction step(cpu, 0xC5, 0x000012u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/find_stealable_items.asm:71 BEQL @UNKNOWN9
    case 0xC2410B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:71 BEQL @UNKNOWN9
    case 0xC2410D: {
        Instruction step(cpu, 0x4C, 0x0041B3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:72 LDA @LOCAL03
    case 0xC24110: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:73 DEC
    case 0xC24112: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:74 LDY #.SIZEOF(char_struct)
    case 0xC24113: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:74 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC24113.
    case 0xC24115: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:75 JSL MULT168
    case 0xC24116: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:76 TAY
    case 0xC2411A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:78 CLC
    case 0xC2411B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:79 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC2411C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:79 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC2411C.
    case 0xC2411E: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:80 CLC
    case 0xC2411F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:81 ADC @LOCAL00
    case 0xC24120: {
        Instruction step(cpu, 0x65, 0x000010u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:81 ADC @LOCAL00
    // Overlapping static entry reached from 0xC2411E.
    case 0xC24121: {
        Instruction step(cpu, 0x10, 0x0000AAu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:82 TAX
    case 0xC24122: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:83 LDA __BSS_START__,X
    case 0xC24123: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:84 AND #$00FF
    case 0xC24126: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC24126.
    case 0xC24128: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:85 STA @VIRTUAL04
    case 0xC24129: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:86 STA @LOCALM2
    case 0xC2412B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:87 LDA @VIRTUAL04
    case 0xC2412D: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/find_stealable_items.asm:100 BEQL @UNKNOWN9
    case 0xC2412F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:100 BEQL @UNKNOWN9
    case 0xC24131: {
        Instruction step(cpu, 0x4C, 0x0041B3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24134: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x007000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24134.
    case 0xC24136: {
        Instruction step(cpu, 0x70, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24137: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24136.
    case 0xC24138: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC24139: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24138.
    case 0xC2413A: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC24139.
    case 0xC2413B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/find_stealable_items.asm:101 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2413C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:102 LDA @VIRTUAL04
    case 0xC2413E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24140: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24142: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24143: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24145: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24146: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/find_stealable_items.asm:104 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC24147: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:105 TAX
    case 0xC24148: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:106 CLC
    case 0xC24149: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:107 ADC #item::cost
    case 0xC2414A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:107 ADC #item::cost
    // Overlapping static entry reached from 0xC2414A.
    case 0xC2414C: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:108 PHA
    case 0xC2414D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/find_stealable_items.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2414E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/find_stealable_items.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC24150: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/find_stealable_items.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC24152: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/find_stealable_items.asm:109 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC24154: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:110 PLA
    case 0xC24156: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:119 CLC
    case 0xC24157: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:120 ADC @VIRTUAL0A
    case 0xC24158: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:121 STA @VIRTUAL0A
    case 0xC2415A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:122 LDA [@VIRTUAL0A]
    case 0xC2415C: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:123 BEQ @UNKNOWN9
    case 0xC2415E: {
        Instruction step(cpu, 0xF0, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:124 CMP #290
    case 0xC24160: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000022u : 0x000122u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:124 CMP #290
    // Overlapping static entry reached from 0xC24160.
    case 0xC24162: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:125 BCS @UNKNOWN9
    case 0xC24163: {
        Instruction step(cpu, 0xB0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:125 BCS @UNKNOWN9
    // Overlapping static entry reached from 0xC24162.
    case 0xC24164: {
        Instruction step(cpu, 0x4E, 0x00188Au, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:126 TXA
    case 0xC24165: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:127 CLC
    case 0xC24166: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:128 ADC #item::type
    case 0xC24167: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:128 ADC #item::type
    // Overlapping static entry reached from 0xC24167.
    case 0xC24169: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:129 CLC
    case 0xC2416A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:130 ADC @VIRTUAL06
    case 0xC2416B: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:131 STA @VIRTUAL06
    case 0xC2416D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:132 LDA [@VIRTUAL06]
    case 0xC2416F: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:133 AND #$00FF
    case 0xC24171: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:133 AND #$00FF
    // Overlapping static entry reached from 0xC24171.
    case 0xC24173: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:134 AND #$0030
    case 0xC24174: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:134 AND #$0030
    // Overlapping static entry reached from 0xC24174.
    case 0xC24176: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:135 CMP #$0020
    case 0xC24177: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:135 CMP #$0020
    // Overlapping static entry reached from 0xC24177.
    case 0xC24179: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:136 BNE @UNKNOWN9
    case 0xC2417A: {
        Instruction step(cpu, 0xD0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:140 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,Y
    case 0xC2417C: {
        Instruction step(cpu, 0xB9, 0x009CAFu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:141 AND #$00FF
    case 0xC2417F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC2417F.
    case 0xC24181: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:142 CMP @VIRTUAL02
    case 0xC24182: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:143 BEQ @UNKNOWN9
    case 0xC24184: {
        Instruction step(cpu, 0xF0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:144 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,Y
    case 0xC24186: {
        Instruction step(cpu, 0xB9, 0x009CB0u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:145 AND #$00FF
    case 0xC24189: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC24189.
    case 0xC2418B: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:146 CMP @VIRTUAL02
    case 0xC2418C: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:147 BEQ @UNKNOWN9
    case 0xC2418E: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:148 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,Y
    case 0xC24190: {
        Instruction step(cpu, 0xB9, 0x009CB1u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:149 AND #$00FF
    case 0xC24193: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC24193.
    case 0xC24195: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:150 CMP @VIRTUAL02
    case 0xC24196: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:151 BEQ @UNKNOWN9
    case 0xC24198: {
        Instruction step(cpu, 0xF0, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:152 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,Y
    case 0xC2419A: {
        Instruction step(cpu, 0xB9, 0x009CB2u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:153 AND #$00FF
    case 0xC2419D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:153 AND #$00FF
    // Overlapping static entry reached from 0xC2419D.
    case 0xC2419F: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:154 CMP @VIRTUAL02
    case 0xC241A0: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:155 BEQ @UNKNOWN9
    case 0xC241A2: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:157 LDA @LOCALM2
    case 0xC241A4: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:158 STA @VIRTUAL04
    case 0xC241A6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:162 SEP #PROC_FLAGS::ACCUM8
    case 0xC241A8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:163 LDY #.LOWORD(STEALABLE_ITEM_CANDIDATES)
    case 0xC241AA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000A9u : 0x00ABA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:163 LDY #.LOWORD(STEALABLE_ITEM_CANDIDATES)
    // Overlapping static entry reached from 0xC241AA.
    case 0xC241AC: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:164 STA (@LOCAL05),Y
    case 0xC241AD: {
        Instruction step(cpu, 0x91, 0x00001Au, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:165 REP #PROC_FLAGS::ACCUM8
    case 0xC241AF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:166 INC @LOCAL05
    case 0xC241B1: {
        Instruction step(cpu, 0xE6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:168 INC @LOCAL00
    case 0xC241B3: {
        Instruction step(cpu, 0xE6, 0x000010u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:170 LDA @LOCAL00
    case 0xC241B5: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:171 CMP #.SIZEOF(char_struct::items)
    case 0xC241B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:171 CMP #.SIZEOF(char_struct::items)
    // Overlapping static entry reached from 0xC241B7.
    case 0xC241B9: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC241BA: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC241BC: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:172 BCCL @UNKNOWN6
    case 0xC241BE: {
        Instruction step(cpu, 0x4C, 0x004101u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:174 INC @LOCAL04
    case 0xC241C1: {
        Instruction step(cpu, 0xE6, 0x000018u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:176 LDA @LOCAL04
    case 0xC241C3: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:177 CMP #TOTAL_PARTY_COUNT
    case 0xC241C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:177 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC241C5.
    case 0xC241C7: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC241C8: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC241CA: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/find_stealable_items.asm:178 BCCL @UNKNOWN0
    case 0xC241CC: {
        Instruction step(cpu, 0x4C, 0x00409Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/find_stealable_items.asm:179 LDA @LOCAL05
    case 0xC241CF: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/find_stealable_items.asm:180 END_C_FUNCTION
    case 0xC241D1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/find_stealable_items.asm:180 END_C_FUNCTION
    case 0xC241D2: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
