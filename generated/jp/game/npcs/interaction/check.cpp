// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/check.asm
bool resume_overworld_check(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13918: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1391A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1391B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1391C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1391C.
    case 0xC1391E: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1391F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13920: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13920.
    case 0xC13922: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13923: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13925: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13925.
    case 0xC13927: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13928: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1392A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1392A.
    case 0xC1392C: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1392D: {
        Instruction step(cpu, 0x20, 0x0006E4u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/check.asm:12 JSL FIND_NEARBY_CHECKABLE_TPT_ENTRY
    case 0xC13930: {
        Instruction step(cpu, 0x22, 0xC04500u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/check.asm:13 LDA INTERACTING_NPC_ID
    case 0xC13934: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:14 BEQL @UNKNOWN9
    case 0xC13937: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:14 BEQL @UNKNOWN9
    case 0xC13939: {
        Instruction step(cpu, 0x4C, 0x003A69u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/check.asm:15 LDA INTERACTING_NPC_ID
    case 0xC1393C: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:16 CMP #$FFFF
    case 0xC1393F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:16 CMP #$FFFF
    // Overlapping static entry reached from 0xC1393F.
    case 0xC13941: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    case 0xC13942: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    case 0xC13944: {
        Instruction step(cpu, 0x4C, 0x003A69u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC13941.
    case 0xC13945: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Au : 0x00AD3Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:18 LDA INTERACTING_NPC_ID
    case 0xC13947: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:18 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC13945.
    case 0xC13948: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/check.asm:18 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC13948.
    case 0xC13949: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/check.asm:19 CMP #$FFFE
    case 0xC1394A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FEu : 0x00FFFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:19 CMP #$FFFE
    // Overlapping static entry reached from 0xC1394A.
    case 0xC1394C: {
        Instruction step(cpu, 0xFF, 0xAD0DD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/check.asm:20 BNE @UNKNOWN2
    case 0xC1394D: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC1394F: {
        Instruction step(cpu, 0xAD, 0x006164u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1394C.
    case 0xC13950: {
        Instruction step(cpu, 0x64, 0x000061u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13952: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13954: {
        Instruction step(cpu, 0xAD, 0x006166u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13957: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:22 JMP @UNKNOWN9
    case 0xC13959: {
        Instruction step(cpu, 0x4C, 0x003A69u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC1395C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0089C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1395C.
    case 0xC1395E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC1395F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1395E.
    case 0xC13960: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13961: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13960.
    case 0xC13962: {
        Instruction step(cpu, 0xCF, 0x088500u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13961.
    case 0xC13963: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13964: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC13966: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC13968: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1396A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1396C: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:26 LDA INTERACTING_NPC_ID
    case 0xC1396E: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13971: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13973: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13974: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13975: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13976: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13977: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:28 STA @LOCAL01
    case 0xC13979: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:29 CLC
    case 0xC1397B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:30 ADC @VIRTUAL06
    case 0xC1397C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:31 STA @VIRTUAL06
    case 0xC1397E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:32 LDA [@VIRTUAL06]
    case 0xC13980: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:33 AND #$00FF
    case 0xC13982: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC13982.
    case 0xC13984: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/check.asm:34 CMP #NPC_TYPE::PERSON
    case 0xC13985: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:34 CMP #NPC_TYPE::PERSON
    // Overlapping static entry reached from 0xC13985.
    case 0xC13987: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:35 BEQL @UNKNOWN9
    case 0xC13988: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:35 BEQL @UNKNOWN9
    case 0xC1398A: {
        Instruction step(cpu, 0x4C, 0x003A69u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/check.asm:36 CMP #NPC_TYPE::ITEM_BOX
    case 0xC1398D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:36 CMP #NPC_TYPE::ITEM_BOX
    // Overlapping static entry reached from 0xC1398D.
    case 0xC1398F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/check.asm:37 BEQ @UNKNOWN5
    case 0xC13990: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/check.asm:38 CMP #NPC_TYPE::OBJECT
    case 0xC13992: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:38 CMP #NPC_TYPE::OBJECT
    // Overlapping static entry reached from 0xC13992.
    case 0xC13994: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:39 BEQL @UNKNOWN8
    case 0xC13995: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:39 BEQL @UNKNOWN8
    case 0xC13997: {
        Instruction step(cpu, 0x4C, 0x003A4Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/check.asm:40 JMP @UNKNOWN9
    case 0xC1399A: {
        Instruction step(cpu, 0x4C, 0x003A69u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/check.asm:42 LDA @LOCAL01
    case 0xC1399D: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:43 CLC
    case 0xC1399F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:44 ADC #npc_config::item
    case 0xC139A0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:44 ADC #npc_config::item
    // Overlapping static entry reached from 0xC139A0.
    case 0xC139A2: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139A3: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139A5: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139A7: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139A9: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/check.asm:46 CLC
    case 0xC139AB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:47 ADC @VIRTUAL06
    case 0xC139AC: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:48 STA @VIRTUAL06
    case 0xC139AE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:49 LDA [@VIRTUAL06]
    case 0xC139B0: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:50 CMP #$100
    case 0xC139B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:50 CMP #$100
    // Overlapping static entry reached from 0xC139B2.
    case 0xC139B4: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:51 BCS @GIFT_MONEY
    case 0xC139B5: {
        Instruction step(cpu, 0xB0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/check.asm:51 BCS @GIFT_MONEY
    // Overlapping static entry reached from 0xC139B4.
    case 0xC139B6: {
        Instruction step(cpu, 0x11, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    case 0xC139B7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC139B6.
    case 0xC139B8: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    case 0xC139B9: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC139B8.
    case 0xC139BA: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139BB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139BD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139BF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139C1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:54 JSR SET_WORKING_MEMORY
    case 0xC139C3: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/check.asm:55 BRA @GIFT_COMMON
    case 0xC139C6: {
        Instruction step(cpu, 0x80, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:58 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC139C8: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:58 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC139CA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:58 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC139CC: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:58 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC139CE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:63 JSR SET_WORKING_MEMORY
    case 0xC139D0: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/check.asm:64 LDA INTERACTING_NPC_ID
    case 0xC139D3: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139D6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139D8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139D9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139DA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139DB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC139DC: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:66 CLC
    case 0xC139DE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:67 ADC #npc_config::item
    case 0xC139DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:67 ADC #npc_config::item
    // Overlapping static entry reached from 0xC139DF.
    case 0xC139E1: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139E2: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139E4: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139E6: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC139E8: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/check.asm:69 CLC
    case 0xC139EA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:70 ADC @VIRTUAL06
    case 0xC139EB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:71 STA @VIRTUAL06
    case 0xC139ED: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:72 LDA [@VIRTUAL06]
    case 0xC139EF: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:73 SEC
    case 0xC139F1: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/check.asm:74 SBC #$100
    case 0xC139F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/check.asm:74 SBC #$100
    // Overlapping static entry reached from 0xC139F2.
    case 0xC139F4: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    case 0xC139F5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC139F4.
    case 0xC139F6: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    case 0xC139F7: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC139F6.
    case 0xC139F8: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139F9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139FB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139FD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC139FF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:77 JSR SET_ARGUMENT_MEMORY
    case 0xC13A01: {
        Instruction step(cpu, 0x20, 0x00068Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13A04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C1u : 0x0089C1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A04.
    case 0xC13A06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13A07: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A06.
    case 0xC13A08: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13A09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A08.
    case 0xC13A0A: {
        Instruction step(cpu, 0xCF, 0x088500u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13A09.
    case 0xC13A0B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13A0C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:80 LDA INTERACTING_NPC_ID
    case 0xC13A0E: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A11: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A13: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A14: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A15: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A16: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13A17: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:82 STA @LOCAL01
    case 0xC13A19: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:83 CLC
    case 0xC13A1B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:84 ADC #npc_config::event_flag
    case 0xC13A1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:84 ADC #npc_config::event_flag
    // Overlapping static entry reached from 0xC13A1C.
    case 0xC13A1E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC13A1F: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC13A21: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC13A23: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC13A25: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/check.asm:86 CLC
    case 0xC13A27: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:87 ADC @VIRTUAL0A
    case 0xC13A28: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:88 STA @VIRTUAL0A
    case 0xC13A2A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:89 LDA [@VIRTUAL0A]
    case 0xC13A2C: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:90 STA CURRENT_INTERACTING_EVENT_FLAG
    case 0xC13A2E: {
        Instruction step(cpu, 0x8D, 0x009F33u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:91 LDA @LOCAL01
    case 0xC13A31: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:92 CLC
    case 0xC13A33: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:93 ADC #npc_config::text_pointer
    case 0xC13A34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:93 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC13A34.
    case 0xC13A36: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/check.asm:94 CLC
    case 0xC13A37: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:95 ADC @VIRTUAL06
    case 0xC13A38: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:96 STA @VIRTUAL06
    case 0xC13A3A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A3C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13A3C.
    case 0xC13A3E: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A3F: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A41: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A42: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A44: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A46: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/check.asm:98 BRA @UNKNOWN9
    case 0xC13A48: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/check.asm:100 LDA @LOCAL01
    case 0xC13A4A: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:101 CLC
    case 0xC13A4C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:102 ADC #npc_config::text_pointer
    case 0xC13A4D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:102 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC13A4D.
    case 0xC13A4F: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13A50: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13A52: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13A54: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13A56: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/check.asm:104 CLC
    case 0xC13A58: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:105 ADC @VIRTUAL06
    case 0xC13A59: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:106 STA @VIRTUAL06
    case 0xC13A5B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A5D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13A5D.
    case 0xC13A5F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A60: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A62: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A63: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A65: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13A67: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13A69: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13A6B: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13A6D: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13A6F: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/check.asm:110 END_C_FUNCTION
    case 0xC13A71: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/check.asm:110 END_C_FUNCTION
    case 0xC13A72: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
