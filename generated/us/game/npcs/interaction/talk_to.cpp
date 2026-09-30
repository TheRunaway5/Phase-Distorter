// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/talk_to.asm
bool resume_overworld_talk_to(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/talk_to.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13187: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC13189: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC1318A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC1318B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1318B.
    case 0xC1318D: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC1318E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1318F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1318F.
    case 0xC13191: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13192: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13194: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13194.
    case 0xC13196: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13197: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13199: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13199.
    case 0xC1319B: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1319C: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/talk_to.asm:10 JSL FIND_NEARBY_TALKABLE_TPT_ENTRY
    case 0xC1319F: {
        Instruction step(cpu, 0x22, 0xC04452u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/talk_to.asm:11 LDA INTERACTING_NPC_ID
    case 0xC131A3: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/talk_to.asm:12 BEQL @UNKNOWN4
    case 0xC131A6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:12 BEQL @UNKNOWN4
    case 0xC131A8: {
        Instruction step(cpu, 0x4C, 0x003231u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/talk_to.asm:13 LDA INTERACTING_NPC_ID
    case 0xC131AB: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:14 CMP #.LOWORD(-1)
    case 0xC131AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC131AE.
    case 0xC131B0: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    case 0xC131B1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    case 0xC131B3: {
        Instruction step(cpu, 0x4C, 0x003231u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC131B0.
    case 0xC131B4: {
        Instruction step(cpu, 0x31, 0x000032u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:16 LDA INTERACTING_NPC_ID
    case 0xC131B6: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:17 CMP #.LOWORD(-2)
    case 0xC131B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FEu : 0x00FFFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:17 CMP #.LOWORD(-2)
    // Overlapping static entry reached from 0xC131B9.
    case 0xC131BB: {
        Instruction step(cpu, 0xFF, 0xAD0CD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/talk_to.asm:18 BNE @UNKNOWN2
    case 0xC131BC: {
        Instruction step(cpu, 0xD0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC131BE: {
        Instruction step(cpu, 0xAD, 0x005DDEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC131BB.
    case 0xC131BF: {
        Instruction step(cpu, 0xDE, 0x00855Du, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC131C1: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC131BF.
    case 0xC131C2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC131C3: {
        Instruction step(cpu, 0xAD, 0x005DE0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC131C6: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:20 BRA @UNKNOWN4
    case 0xC131C8: {
        Instruction step(cpu, 0x80, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC131CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x008985u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC131CA.
    case 0xC131CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC131CD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC131CC.
    case 0xC131CE: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC131CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC131CE.
    case 0xC131D0: {
        Instruction step(cpu, 0xCF, 0x088500u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC131CF.
    case 0xC131D1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC131D2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC131D4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC131D6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC131D8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC131DA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:24 LDA INTERACTING_NPC_ID
    case 0xC131DC: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131DF: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131E1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131E2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131E3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131E4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131E5: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:26 CLC
    case 0xC131E7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:27 ADC @VIRTUAL06
    case 0xC131E8: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:28 STA @VIRTUAL06
    case 0xC131EA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:29 LDA [@VIRTUAL06]
    case 0xC131EC: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:30 AND #$00FF
    case 0xC131EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC131EE.
    case 0xC131F0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/talk_to.asm:31 CMP #NPC_TYPE::PERSON
    case 0xC131F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:31 CMP #NPC_TYPE::PERSON
    // Overlapping static entry reached from 0xC131F1.
    case 0xC131F3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/talk_to.asm:32 BEQ @UNKNOWN3
    case 0xC131F4: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/talk_to.asm:33 CMP #NPC_TYPE::ITEM_BOX
    case 0xC131F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:33 CMP #NPC_TYPE::ITEM_BOX
    // Overlapping static entry reached from 0xC131F6.
    case 0xC131F8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/talk_to.asm:34 BEQ @UNKNOWN4
    case 0xC131F9: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/talk_to.asm:35 CMP #NPC_TYPE::OBJECT
    case 0xC131FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:35 CMP #NPC_TYPE::OBJECT
    // Overlapping static entry reached from 0xC131FB.
    case 0xC131FD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/talk_to.asm:36 BEQ @UNKNOWN4
    case 0xC131FE: {
        Instruction step(cpu, 0xF0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/talk_to.asm:37 BRA @UNKNOWN4
    case 0xC13200: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/talk_to.asm:39 LDA INTERACTING_NPC_ENTITY
    case 0xC13202: {
        Instruction step(cpu, 0xAD, 0x005D64u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/talk_to.asm:40 JSL UNKNOWN_C042C2
    case 0xC13205: {
        Instruction step(cpu, 0x22, 0xC042C2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/talk_to.asm:41 LDA INTERACTING_NPC_ID
    case 0xC13209: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1320C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1320E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1320F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13210: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13211: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13212: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:43 CLC
    case 0xC13214: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:44 ADC #npc_config::text_pointer
    case 0xC13215: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:44 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC13215.
    case 0xC13217: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC13218: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC1321A: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC1321C: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC1321E: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/talk_to.asm:46 CLC
    case 0xC13220: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:47 ADC @VIRTUAL06
    case 0xC13221: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/talk_to.asm:48 STA @VIRTUAL06
    case 0xC13223: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13225: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13225.
    case 0xC13227: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13228: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1322A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1322B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1322D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1322F: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13231: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13233: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13235: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13237: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/talk_to.asm:52 END_C_FUNCTION
    case 0xC13239: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/talk_to.asm:52 END_C_FUNCTION
    case 0xC1323A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
