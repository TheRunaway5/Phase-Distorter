// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/npc_collision_check.asm
bool resume_overworld_npc_collision_check(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/npc_collision_check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06224: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC06226: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC06227: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC06228: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC06229: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC06229.
    case 0xC0622B: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC0622C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC0622D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:17 STX @LOCAL07
    case 0xC0622E: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:17 STX @LOCAL07
    // Overlapping static entry reached from 0xC0622B.
    case 0xC0622F: {
        Instruction step(cpu, 0x1C, 0x000285u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:18 STA @VIRTUAL02
    case 0xC06230: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:19 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC06232: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:19 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC06232.
    case 0xC06234: {
        Instruction step(cpu, 0xFF, 0x981A85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:20 STA @LOCAL06
    case 0xC06235: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:21 TYA
    case 0xC06237: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:22 ASL
    case 0xC06238: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:23 TAX
    case 0xC06239: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:24 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC0623A: {
        Instruction step(cpu, 0xBD, 0x003728u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:25 BEQL @UNKNOWN16
    case 0xC0623D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:25 BEQL @UNKNOWN16
    case 0xC0623F: {
        Instruction step(cpu, 0x4C, 0x006361u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:26 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC06242: {
        Instruction step(cpu, 0xAD, 0x0060DCu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:27 AND #$0002
    case 0xC06245: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:27 AND #$0002
    // Overlapping static entry reached from 0xC06245.
    case 0xC06247: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:28 BNEL @UNKNOWN16
    case 0xC06248: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:28 BNEL @UNKNOWN16
    case 0xC0624A: {
        Instruction step(cpu, 0x4C, 0x006361u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:29 LDA GAME_STATE+game_state::walking_style
    case 0xC0624D: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:30 CMP #WALKING_STYLE::ESCALATOR
    case 0xC06250: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:30 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC06250.
    case 0xC06252: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:31 BEQL @UNKNOWN16
    case 0xC06253: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:31 BEQL @UNKNOWN16
    case 0xC06255: {
        Instruction step(cpu, 0x4C, 0x006361u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:32 LDA DEMO_FRAMES_LEFT
    case 0xC06258: {
        Instruction step(cpu, 0xAD, 0x000081u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:33 BNEL @UNKNOWN16
    case 0xC0625B: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:33 BNEL @UNKNOWN16
    case 0xC0625D: {
        Instruction step(cpu, 0x4C, 0x006361u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:34 LDA ENTITY_DIRECTIONS,X
    case 0xC06260: {
        Instruction step(cpu, 0xBD, 0x002EF4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:35 CMP #DIRECTION::RIGHT
    case 0xC06263: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:35 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC06263.
    case 0xC06265: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:36 BEQ @UNKNOWN4
    case 0xC06266: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:37 CMP #DIRECTION::LEFT
    case 0xC06268: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:37 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC06268.
    case 0xC0626A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:38 BNE @UNKNOWN5
    case 0xC0626B: {
        Instruction step(cpu, 0xD0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:40 TYA
    case 0xC0626D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:41 ASL
    case 0xC0626E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:42 TAX
    case 0xC0626F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:43 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC06270: {
        Instruction step(cpu, 0xBD, 0x0037DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:44 STA @LOCAL05
    case 0xC06273: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:45 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC06275: {
        Instruction step(cpu, 0xBD, 0x001A40u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:46 STA @VIRTUAL04
    case 0xC06278: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:47 BRA @UNKNOWN6
    case 0xC0627A: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:49 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC0627C: {
        Instruction step(cpu, 0xBD, 0x003764u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:50 STA @LOCAL05
    case 0xC0627F: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:51 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC06281: {
        Instruction step(cpu, 0xBD, 0x0037A0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:52 STA @VIRTUAL04
    case 0xC06284: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:54 LDA @LOCAL05
    case 0xC06286: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:55 PHA
    case 0xC06288: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:56 LDA @VIRTUAL02
    case 0xC06289: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:57 PLY
    case 0xC0628B: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:58 STY @VIRTUAL02
    case 0xC0628C: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:59 SEC
    case 0xC0628E: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:60 SBC @VIRTUAL02
    case 0xC0628F: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:61 STA @LOCAL04
    case 0xC06291: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:62 LDA @LOCAL05
    case 0xC06293: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:63 ASL
    case 0xC06295: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:64 STA @LOCAL03
    case 0xC06296: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:65 LDA @LOCAL07
    case 0xC06298: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:66 SEC
    case 0xC0629A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:67 SBC @VIRTUAL04
    case 0xC0629B: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:68 STA @LOCAL07
    case 0xC0629D: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:69 LDA #0
    case 0xC0629F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:69 LDA #0
    // Overlapping static entry reached from 0xC0629F.
    case 0xC062A1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:70 STA @VIRTUAL02
    case 0xC062A2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:71 STA @LOCAL02
    case 0xC062A4: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:72 JMP @UNKNOWN15
    case 0xC062A6: {
        Instruction step(cpu, 0x4C, 0x006357u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:74 LDA @VIRTUAL02
    case 0xC062A9: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:75 ASL
    case 0xC062AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:76 TAX
    case 0xC062AC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:77 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC062AD: {
        Instruction step(cpu, 0xBD, 0x000A58u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:78 CMP #$FFFF
    case 0xC062B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:78 CMP #$FFFF
    // Overlapping static entry reached from 0xC062B0.
    case 0xC062B2: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    case 0xC062B3: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    case 0xC062B5: {
        Instruction step(cpu, 0x4C, 0x00634Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    // Overlapping static entry reached from 0xC062B2.
    case 0xC062B6: {
        Instruction step(cpu, 0x4D, 0x00BD63u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:80 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC062B8: {
        Instruction step(cpu, 0xBD, 0x002C9Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:80 LDA ENTITY_COLLIDED_OBJECTS,X
    // Overlapping static entry reached from 0xC062B6.
    case 0xC062B9: {
        Instruction step(cpu, 0x9C, 0x00C92Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:81 CMP #ENTITY_COLLISION_DISABLED
    case 0xC062BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:81 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC062B9.
    case 0xC062BC: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:81 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC062BB.
    case 0xC062BD: {
        Instruction step(cpu, 0x80, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:82 BEQL @UNKNOWN14
    case 0xC062BE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:82 BEQL @UNKNOWN14
    case 0xC062C0: {
        Instruction step(cpu, 0x4C, 0x00634Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:83 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC062C3: {
        Instruction step(cpu, 0xAD, 0x0060DEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:84 BEQ @UNKNOWN10
    case 0xC062C6: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:85 LDA ENTITY_NPC_IDS,X
    case 0xC062C8: {
        Instruction step(cpu, 0xBD, 0x003098u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:86 INC
    case 0xC062CB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:87 CMP #$8001
    case 0xC062CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x008001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:87 CMP #$8001
    // Overlapping static entry reached from 0xC062CC.
    case 0xC062CE: {
        Instruction step(cpu, 0x80, 0x000090u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:88 BCC @UNKNOWN10
    case 0xC062CF: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:89 JMP @UNKNOWN14
    case 0xC062D1: {
        Instruction step(cpu, 0x4C, 0x00634Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:91 LDA @VIRTUAL02
    case 0xC062D4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:92 ASL
    case 0xC062D6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:93 TAX
    case 0xC062D7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:94 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC062D8: {
        Instruction step(cpu, 0xBD, 0x003728u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:95 BEQ @UNKNOWN14
    case 0xC062DB: {
        Instruction step(cpu, 0xF0, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:96 LDA ENTITY_DIRECTIONS,X
    case 0xC062DD: {
        Instruction step(cpu, 0xBD, 0x002EF4u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:97 CMP #DIRECTION::RIGHT
    case 0xC062E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:97 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC062E0.
    case 0xC062E2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:98 BEQ @UNKNOWN11
    case 0xC062E3: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:99 CMP #DIRECTION::LEFT
    case 0xC062E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:99 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC062E5.
    case 0xC062E7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:100 BNE @UNKNOWN12
    case 0xC062E8: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:102 LDA @VIRTUAL02
    case 0xC062EA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:103 ASL
    case 0xC062EC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:104 TAX
    case 0xC062ED: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:105 LDY ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC062EE: {
        Instruction step(cpu, 0xBC, 0x0037DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:106 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC062F1: {
        Instruction step(cpu, 0xBD, 0x001A40u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:107 STA @LOCAL01
    case 0xC062F4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:108 BRA @UNKNOWN13
    case 0xC062F6: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:110 LDY ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC062F8: {
        Instruction step(cpu, 0xBC, 0x003764u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:111 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC062FB: {
        Instruction step(cpu, 0xBD, 0x0037A0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:112 STA @LOCAL01
    case 0xC062FE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:114 LDA @VIRTUAL02
    case 0xC06300: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:115 ASL
    case 0xC06302: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:116 TAX
    case 0xC06303: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:117 LDA @LOCAL01
    case 0xC06304: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:118 STA @VIRTUAL02
    case 0xC06306: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:119 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC06308: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:120 SEC
    case 0xC0630B: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:121 SBC @VIRTUAL02
    case 0xC0630C: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:122 STA @LOCAL00
    case 0xC0630E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:123 SEC
    case 0xC06310: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:124 SBC @VIRTUAL04
    case 0xC06311: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:125 CMP @LOCAL07
    case 0xC06313: {
        Instruction step(cpu, 0xC5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:126 BCS @UNKNOWN14
    case 0xC06315: {
        Instruction step(cpu, 0xB0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:127 LDA @LOCAL01
    case 0xC06317: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:128 CLC
    case 0xC06319: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:129 ADC @LOCAL00
    case 0xC0631A: {
        Instruction step(cpu, 0x65, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:130 CMP @LOCAL07
    case 0xC0631C: {
        Instruction step(cpu, 0xC5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/npc_collision_check.asm:131 BLTEQ @UNKNOWN14
    case 0xC0631E: {
        Instruction step(cpu, 0x90, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/npc_collision_check.asm:131 BLTEQ @UNKNOWN14
    case 0xC06320: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:132 STY @VIRTUAL02
    case 0xC06322: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:133 LDA ENTITY_ABS_X_TABLE,X
    case 0xC06324: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:134 SEC
    case 0xC06327: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:135 SBC @VIRTUAL02
    case 0xC06328: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:136 STA @LOCAL00
    case 0xC0632A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:137 TYA
    case 0xC0632C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:138 ASL
    case 0xC0632D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:139 TAX
    case 0xC0632E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:140 LDA @LOCAL00
    case 0xC0632F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:141 SEC
    case 0xC06331: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:142 SBC @LOCAL03
    case 0xC06332: {
        Instruction step(cpu, 0xE5, 0x000014u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:143 CMP @LOCAL04
    case 0xC06334: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:144 BCS @UNKNOWN14
    case 0xC06336: {
        Instruction step(cpu, 0xB0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:145 STX @VIRTUAL02
    case 0xC06338: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:146 LDA @LOCAL00
    case 0xC0633A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:147 CLC
    case 0xC0633C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:148 ADC @VIRTUAL02
    case 0xC0633D: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:149 CMP @LOCAL04
    case 0xC0633F: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/npc_collision_check.asm:150 BLTEQ @UNKNOWN14
    case 0xC06341: {
        Instruction step(cpu, 0x90, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/npc_collision_check.asm:150 BLTEQ @UNKNOWN14
    case 0xC06343: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:151 LDA @LOCAL02
    case 0xC06345: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:152 STA @VIRTUAL02
    case 0xC06347: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:153 STA @LOCAL06
    case 0xC06349: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:154 BRA @UNKNOWN16
    case 0xC0634B: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:156 LDA @LOCAL02
    case 0xC0634D: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:157 STA @VIRTUAL02
    case 0xC0634F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:158 INC @VIRTUAL02
    case 0xC06351: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:159 LDA @VIRTUAL02
    case 0xC06353: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:160 STA @LOCAL02
    case 0xC06355: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:162 LDA @VIRTUAL02
    case 0xC06357: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:163 CMP #23
    case 0xC06359: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:163 CMP #23
    // Overlapping static entry reached from 0xC06359.
    case 0xC0635B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:164 BNEL @UNKNOWN7
    case 0xC0635C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:164 BNEL @UNKNOWN7
    case 0xC0635E: {
        Instruction step(cpu, 0x4C, 0x0062A9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:166 LDA @LOCAL06
    case 0xC06361: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:167 STA ENTITY_COLLIDED_OBJECTS+46
    case 0xC06363: {
        Instruction step(cpu, 0x8D, 0x002CCAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:168 LDA @LOCAL06
    case 0xC06366: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/npc_collision_check.asm:169 END_C_FUNCTION
    case 0xC06368: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/npc_collision_check.asm:169 END_C_FUNCTION
    case 0xC06369: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
