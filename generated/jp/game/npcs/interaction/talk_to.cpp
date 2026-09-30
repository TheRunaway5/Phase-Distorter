// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/talk_to.asm
bool resume_overworld_talk_to(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/talk_to.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13864: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC13866: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC13867: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC13868: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC13868.
    case 0xC1386A: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC1386B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1386C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1386C.
    case 0xC1386E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1386F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13871: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13871.
    case 0xC13873: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13874: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13876: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13876.
    case 0xC13878: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13879: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/talk_to.asm:10 JSL FIND_NEARBY_TALKABLE_TPT_ENTRY
    case 0xC1387C: {
        Instruction step(cpu, 0x22, 0xC046D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/talk_to.asm:11 LDA INTERACTING_NPC_ID
    case 0xC13880: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/talk_to.asm:12 BEQL @UNKNOWN4
    case 0xC13883: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:12 BEQL @UNKNOWN4
    case 0xC13885: {
        Instruction step(cpu, 0x4C, 0x00390Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/talk_to.asm:13 LDA INTERACTING_NPC_ID
    case 0xC13888: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:14 CMP #.LOWORD(-1)
    case 0xC1388B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1388B.
    case 0xC1388D: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    case 0xC1388E: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    case 0xC13890: {
        Instruction step(cpu, 0x4C, 0x00390Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC1388D.
    case 0xC13891: {
        Instruction step(cpu, 0x0E, 0x00AD39u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/talk_to.asm:16 LDA INTERACTING_NPC_ID
    case 0xC13893: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:16 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC13891.
    case 0xC13894: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/talk_to.asm:16 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC13894.
    case 0xC13895: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/talk_to.asm:17 CMP #.LOWORD(-2)
    case 0xC13896: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FEu : 0x00FFFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:17 CMP #.LOWORD(-2)
    // Overlapping static entry reached from 0xC13896.
    case 0xC13898: {
        Instruction step(cpu, 0xFF, 0xAD0CD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/talk_to.asm:18 BNE @UNKNOWN2
    case 0xC13899: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC1389B: {
        Instruction step(cpu, 0xAD, 0x006164u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13898.
    case 0xC1389C: {
        Instruction step(cpu, 0x64, 0x000061u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC1389E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC138A0: {
        Instruction step(cpu, 0xAD, 0x006166u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC138A3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:20 BRA @UNKNOWN4
    case 0xC138A5: {
        Instruction step(cpu, 0x80, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC138A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0089C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC138A7.
    case 0xC138A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC138AA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC138A9.
    case 0xC138AB: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC138AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC138AB.
    case 0xC138AD: {
        Instruction step(cpu, 0xCF, 0x088500u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC138AC.
    case 0xC138AE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC138AF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B7: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:24 LDA INTERACTING_NPC_ID
    case 0xC138B9: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138BC: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138BF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138C0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138C1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138C2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:26 CLC
    case 0xC138C4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:27 ADC @VIRTUAL06
    case 0xC138C5: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:28 STA @VIRTUAL06
    case 0xC138C7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:29 LDA [@VIRTUAL06]
    case 0xC138C9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:30 AND #$00FF
    case 0xC138CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC138CB.
    case 0xC138CD: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/talk_to.asm:31 CMP #NPC_TYPE::PERSON
    case 0xC138CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:31 CMP #NPC_TYPE::PERSON
    // Overlapping static entry reached from 0xC138CE.
    case 0xC138D0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/talk_to.asm:32 BEQ @UNKNOWN3
    case 0xC138D1: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/talk_to.asm:33 CMP #NPC_TYPE::ITEM_BOX
    case 0xC138D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:33 CMP #NPC_TYPE::ITEM_BOX
    // Overlapping static entry reached from 0xC138D3.
    case 0xC138D5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/talk_to.asm:34 BEQ @UNKNOWN4
    case 0xC138D6: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/talk_to.asm:35 CMP #NPC_TYPE::OBJECT
    case 0xC138D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:35 CMP #NPC_TYPE::OBJECT
    // Overlapping static entry reached from 0xC138D8.
    case 0xC138DA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/talk_to.asm:36 BEQ @UNKNOWN4
    case 0xC138DB: {
        Instruction step(cpu, 0xF0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/talk_to.asm:37 BRA @UNKNOWN4
    case 0xC138DD: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/talk_to.asm:39 LDA INTERACTING_NPC_ENTITY
    case 0xC138DF: {
        Instruction step(cpu, 0xAD, 0x0060EAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:40 JSL UNKNOWN_C042C2
    case 0xC138E2: {
        Instruction step(cpu, 0x22, 0xC04549u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/talk_to.asm:41 LDA INTERACTING_NPC_ID
    case 0xC138E6: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138E9: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138EB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138EC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138ED: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138EE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138EF: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:43 CLC
    case 0xC138F1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:44 ADC #npc_config::text_pointer
    case 0xC138F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:44 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC138F2.
    case 0xC138F4: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC138F5: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC138F7: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC138F9: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC138FB: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/talk_to.asm:46 CLC
    case 0xC138FD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:47 ADC @VIRTUAL06
    case 0xC138FE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:48 STA @VIRTUAL06
    case 0xC13900: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13902: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13902.
    case 0xC13904: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13905: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13907: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13908: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1390A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1390C: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC1390E: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13910: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13912: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13914: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/talk_to.asm:52 END_C_FUNCTION
    case 0xC13916: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/talk_to.asm:52 END_C_FUNCTION
    case 0xC13917: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
