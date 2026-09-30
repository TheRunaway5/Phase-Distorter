// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/check.asm
bool resume_overworld_check(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1323B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1323D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1323E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC1323F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1323F.
    case 0xC13241: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/check.asm:9 END_STACK_VARS
    case 0xC13242: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13243: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13243.
    case 0xC13245: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13246: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13248: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13248.
    case 0xC1324A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/check.asm:10 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1324B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1324D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1324D.
    case 0xC1324F: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/check.asm:11 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13250: {
        Instruction step(cpu, 0x20, 0x0004EEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/check.asm:12 JSL FIND_NEARBY_CHECKABLE_TPT_ENTRY
    case 0xC13253: {
        Instruction step(cpu, 0x22, 0xC04279u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/check.asm:13 LDA INTERACTING_NPC_ID
    case 0xC13257: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:14 BEQL @UNKNOWN9
    case 0xC1325A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:14 BEQL @UNKNOWN9
    case 0xC1325C: {
        Instruction step(cpu, 0x4C, 0x003394u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/check.asm:15 LDA INTERACTING_NPC_ID
    case 0xC1325F: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:16 CMP #$FFFF
    case 0xC13262: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:16 CMP #$FFFF
    // Overlapping static entry reached from 0xC13262.
    case 0xC13264: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    case 0xC13265: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    case 0xC13267: {
        Instruction step(cpu, 0x4C, 0x003394u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:17 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC13264.
    case 0xC13268: {
        Instruction step(cpu, 0x94, 0x000033u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // src/overworld/check.asm:18 LDA INTERACTING_NPC_ID
    case 0xC1326A: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:19 CMP #$FFFE
    case 0xC1326D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FEu : 0x00FFFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:19 CMP #$FFFE
    // Overlapping static entry reached from 0xC1326D.
    case 0xC1326F: {
        Instruction step(cpu, 0xFF, 0xAD0DD0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/check.asm:20 BNE @UNKNOWN2
    case 0xC13270: {
        Instruction step(cpu, 0xD0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13272: {
        Instruction step(cpu, 0xAD, 0x005DDEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1326F.
    case 0xC13273: {
        Instruction step(cpu, 0xDE, 0x00855Du, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13275: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13273.
    case 0xC13276: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC13277: {
        Instruction step(cpu, 0xAD, 0x005DE0u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:21 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC1327A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:22 JMP @UNKNOWN9
    case 0xC1327C: {
        Instruction step(cpu, 0x4C, 0x003394u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC1327F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x008985u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1327F.
    case 0xC13281: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13282: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13281.
    case 0xC13283: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13284: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13283.
    case 0xC13285: {
        Instruction step(cpu, 0xCF, 0x088500u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13284.
    case 0xC13286: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/check.asm:24 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13287: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC13289: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1328B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1328D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1328F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:26 LDA INTERACTING_NPC_ID
    case 0xC13291: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13294: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13296: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13297: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13298: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13299: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:27 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1329A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:28 STA @LOCAL01
    case 0xC1329C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:29 CLC
    case 0xC1329E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:30 ADC @VIRTUAL06
    case 0xC1329F: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:31 STA @VIRTUAL06
    case 0xC132A1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:32 LDA [@VIRTUAL06]
    case 0xC132A3: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:33 AND #$00FF
    case 0xC132A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC132A5.
    case 0xC132A7: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/check.asm:34 CMP #NPC_TYPE::PERSON
    case 0xC132A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:34 CMP #NPC_TYPE::PERSON
    // Overlapping static entry reached from 0xC132A8.
    case 0xC132AA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:35 BEQL @UNKNOWN9
    case 0xC132AB: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:35 BEQL @UNKNOWN9
    case 0xC132AD: {
        Instruction step(cpu, 0x4C, 0x003394u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/check.asm:36 CMP #NPC_TYPE::ITEM_BOX
    case 0xC132B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:36 CMP #NPC_TYPE::ITEM_BOX
    // Overlapping static entry reached from 0xC132B0.
    case 0xC132B2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/check.asm:37 BEQ @UNKNOWN5
    case 0xC132B3: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/check.asm:38 CMP #NPC_TYPE::OBJECT
    case 0xC132B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:38 CMP #NPC_TYPE::OBJECT
    // Overlapping static entry reached from 0xC132B5.
    case 0xC132B7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/check.asm:39 BEQL @UNKNOWN8
    case 0xC132B8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/check.asm:39 BEQL @UNKNOWN8
    case 0xC132BA: {
        Instruction step(cpu, 0x4C, 0x003375u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/check.asm:40 JMP @UNKNOWN9
    case 0xC132BD: {
        Instruction step(cpu, 0x4C, 0x003394u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/check.asm:42 LDA @LOCAL01
    case 0xC132C0: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:43 CLC
    case 0xC132C2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:44 ADC #npc_config::item
    case 0xC132C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:44 ADC #npc_config::item
    // Overlapping static entry reached from 0xC132C3.
    case 0xC132C5: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC132C6: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC132C8: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC132CA: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:45 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC132CC: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/check.asm:46 CLC
    case 0xC132CE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:47 ADC @VIRTUAL06
    case 0xC132CF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:48 STA @VIRTUAL06
    case 0xC132D1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:49 LDA [@VIRTUAL06]
    case 0xC132D3: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:50 CMP #$100
    case 0xC132D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:50 CMP #$100
    // Overlapping static entry reached from 0xC132D5.
    case 0xC132D7: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:51 BCS @GIFT_MONEY
    case 0xC132D8: {
        Instruction step(cpu, 0xB0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/check.asm:51 BCS @GIFT_MONEY
    // Overlapping static entry reached from 0xC132D7.
    case 0xC132D9: {
        Instruction step(cpu, 0x11, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    case 0xC132DA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC132D9.
    case 0xC132DB: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    case 0xC132DC: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:52 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC132DB.
    case 0xC132DD: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132DE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132E0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132E2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132E4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:54 JSR SET_WORKING_MEMORY
    case 0xC132E6: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/check.asm:55 BRA @GIFT_COMMON
    case 0xC132E9: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:60 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC132EB: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:60 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC132ED: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:60 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC132EF: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:60 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC132F1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132F3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132F5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132F7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC132F9: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:63 JSR SET_WORKING_MEMORY
    case 0xC132FB: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/check.asm:64 LDA INTERACTING_NPC_ID
    case 0xC132FE: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13301: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13303: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13304: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13305: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13306: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:65 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13307: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:66 CLC
    case 0xC13309: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:67 ADC #npc_config::item
    case 0xC1330A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:67 ADC #npc_config::item
    // Overlapping static entry reached from 0xC1330A.
    case 0xC1330C: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1330D: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1330F: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13311: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:68 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13313: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/check.asm:69 CLC
    case 0xC13315: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:70 ADC @VIRTUAL06
    case 0xC13316: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:71 STA @VIRTUAL06
    case 0xC13318: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:72 LDA [@VIRTUAL06]
    case 0xC1331A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:73 SEC
    case 0xC1331C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/check.asm:74 SBC #$100
    case 0xC1331D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/check.asm:74 SBC #$100
    // Overlapping static entry reached from 0xC1331D.
    case 0xC1331F: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    case 0xC13320: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC1331F.
    case 0xC13321: {
        Instruction step(cpu, 0x06, 0x000064u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    case 0xC13322: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/check.asm:75 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC13321.
    case 0xC13323: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13324: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13326: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13328: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1332A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:77 JSR SET_ARGUMENT_MEMORY
    case 0xC1332C: {
        Instruction step(cpu, 0x20, 0x000489u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC1332F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x008985u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1332F.
    case 0xC13331: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13332: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13331.
    case 0xC13333: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13334: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13333.
    case 0xC13335: {
        Instruction step(cpu, 0xCF, 0x088500u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC13334.
    case 0xC13336: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/check.asm:79 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC13337: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:80 LDA INTERACTING_NPC_ID
    case 0xC13339: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1333C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1333E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1333F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13340: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13341: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/check.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13342: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:82 STA @LOCAL01
    case 0xC13344: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:83 CLC
    case 0xC13346: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:84 ADC #npc_config::event_flag
    case 0xC13347: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:84 ADC #npc_config::event_flag
    // Overlapping static entry reached from 0xC13347.
    case 0xC13349: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1334A: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1334C: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1334E: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:85 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC13350: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/check.asm:86 CLC
    case 0xC13352: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:87 ADC @VIRTUAL0A
    case 0xC13353: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:88 STA @VIRTUAL0A
    case 0xC13355: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:89 LDA [@VIRTUAL0A]
    case 0xC13357: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:90 STA CURRENT_INTERACTING_EVENT_FLAG
    case 0xC13359: {
        Instruction step(cpu, 0x8D, 0x009C88u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:91 LDA @LOCAL01
    case 0xC1335C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:92 CLC
    case 0xC1335E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:93 ADC #npc_config::text_pointer
    case 0xC1335F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:93 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC1335F.
    case 0xC13361: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/check.asm:94 CLC
    case 0xC13362: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:95 ADC @VIRTUAL06
    case 0xC13363: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:96 STA @VIRTUAL06
    case 0xC13365: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13367: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13367.
    case 0xC13369: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1336A: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1336C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1336D: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1336F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/check.asm:97 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13371: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/check.asm:98 BRA @UNKNOWN9
    case 0xC13373: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/check.asm:100 LDA @LOCAL01
    case 0xC13375: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/check.asm:101 CLC
    case 0xC13377: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:102 ADC #npc_config::text_pointer
    case 0xC13378: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:102 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC13378.
    case 0xC1337A: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1337B: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1337D: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1337F: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/check.asm:103 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC13381: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/check.asm:104 CLC
    case 0xC13383: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/check.asm:105 ADC @VIRTUAL06
    case 0xC13384: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/check.asm:106 STA @VIRTUAL06
    case 0xC13386: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13388: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13388.
    case 0xC1338A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1338B: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1338D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1338E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13390: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/check.asm:107 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13392: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13394: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13396: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13398: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/check.asm:109 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC1339A: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/check.asm:110 END_C_FUNCTION
    case 0xC1339C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/check.asm:110 END_C_FUNCTION
    case 0xC1339D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
