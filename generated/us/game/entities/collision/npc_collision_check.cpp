// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/npc_collision_check.asm
bool resume_overworld_npc_collision_check(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/npc_collision_check.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC05FF6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FF8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FF9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FFA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x00FFE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC05FFB.
    case 0xC05FFD: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FFE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/npc_collision_check.asm:16 END_STACK_VARS
    case 0xC05FFF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:17 STX @LOCAL07
    case 0xC06000: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:17 STX @LOCAL07
    // Overlapping static entry reached from 0xC05FFD.
    case 0xC06001: {
        Instruction step(cpu, 0x1C, 0x000285u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:18 STA @VIRTUAL02
    case 0xC06002: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:19 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC06004: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:19 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC06004.
    case 0xC06006: {
        Instruction step(cpu, 0xFF, 0x981A85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:20 STA @LOCAL06
    case 0xC06007: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:21 TYA
    case 0xC06009: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:22 ASL
    case 0xC0600A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:23 TAX
    case 0xC0600B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:24 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC0600C: {
        Instruction step(cpu, 0xBD, 0x00332Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:25 BEQL @UNKNOWN16
    case 0xC0600F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:25 BEQL @UNKNOWN16
    case 0xC06011: {
        Instruction step(cpu, 0x4C, 0x006133u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:26 LDA PLAYER_MOVEMENT_FLAGS
    case 0xC06014: {
        Instruction step(cpu, 0xAD, 0x005D56u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:27 AND #$0002
    case 0xC06017: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:27 AND #$0002
    // Overlapping static entry reached from 0xC06017.
    case 0xC06019: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:28 BNEL @UNKNOWN16
    case 0xC0601A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:28 BNEL @UNKNOWN16
    case 0xC0601C: {
        Instruction step(cpu, 0x4C, 0x006133u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:29 LDA GAME_STATE+game_state::walking_style
    case 0xC0601F: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:30 CMP #WALKING_STYLE::ESCALATOR
    case 0xC06022: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:30 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC06022.
    case 0xC06024: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:31 BEQL @UNKNOWN16
    case 0xC06025: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:31 BEQL @UNKNOWN16
    case 0xC06027: {
        Instruction step(cpu, 0x4C, 0x006133u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:32 LDA DEMO_FRAMES_LEFT
    case 0xC0602A: {
        Instruction step(cpu, 0xAD, 0x000081u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:33 BNEL @UNKNOWN16
    case 0xC0602D: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:33 BNEL @UNKNOWN16
    case 0xC0602F: {
        Instruction step(cpu, 0x4C, 0x006133u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:34 LDA ENTITY_DIRECTIONS,X
    case 0xC06032: {
        Instruction step(cpu, 0xBD, 0x002AF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:35 CMP #DIRECTION::RIGHT
    case 0xC06035: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:35 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC06035.
    case 0xC06037: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:36 BEQ @UNKNOWN4
    case 0xC06038: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:37 CMP #DIRECTION::LEFT
    case 0xC0603A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:37 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC0603A.
    case 0xC0603C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:38 BNE @UNKNOWN5
    case 0xC0603D: {
        Instruction step(cpu, 0xD0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:40 TYA
    case 0xC0603F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:41 ASL
    case 0xC06040: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:42 TAX
    case 0xC06041: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:43 LDA ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC06042: {
        Instruction step(cpu, 0xBD, 0x0033DEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:44 STA @LOCAL05
    case 0xC06045: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:45 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC06047: {
        Instruction step(cpu, 0xBD, 0x001A4Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:46 STA @VIRTUAL04
    case 0xC0604A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:47 BRA @UNKNOWN6
    case 0xC0604C: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:49 LDA ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC0604E: {
        Instruction step(cpu, 0xBD, 0x003366u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:50 STA @LOCAL05
    case 0xC06051: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:51 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC06053: {
        Instruction step(cpu, 0xBD, 0x0033A2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:52 STA @VIRTUAL04
    case 0xC06056: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:54 LDA @LOCAL05
    case 0xC06058: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:55 PHA
    case 0xC0605A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:56 LDA @VIRTUAL02
    case 0xC0605B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:57 PLY
    case 0xC0605D: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:58 STY @VIRTUAL02
    case 0xC0605E: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:59 SEC
    case 0xC06060: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:60 SBC @VIRTUAL02
    case 0xC06061: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:61 STA @LOCAL04
    case 0xC06063: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:62 LDA @LOCAL05
    case 0xC06065: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:63 ASL
    case 0xC06067: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:64 STA @LOCAL03
    case 0xC06068: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:65 LDA @LOCAL07
    case 0xC0606A: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:66 SEC
    case 0xC0606C: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:67 SBC @VIRTUAL04
    case 0xC0606D: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:68 STA @LOCAL07
    case 0xC0606F: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:69 LDA #0
    case 0xC06071: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:69 LDA #0
    // Overlapping static entry reached from 0xC06071.
    case 0xC06073: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:70 STA @VIRTUAL02
    case 0xC06074: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:71 STA @LOCAL02
    case 0xC06076: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:72 JMP @UNKNOWN15
    case 0xC06078: {
        Instruction step(cpu, 0x4C, 0x006129u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:74 LDA @VIRTUAL02
    case 0xC0607B: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:75 ASL
    case 0xC0607D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:76 TAX
    case 0xC0607E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:77 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0607F: {
        Instruction step(cpu, 0xBD, 0x000A62u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:78 CMP #$FFFF
    case 0xC06082: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:78 CMP #$FFFF
    // Overlapping static entry reached from 0xC06082.
    case 0xC06084: {
        Instruction step(cpu, 0xFF, 0x4C03D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    case 0xC06085: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    case 0xC06087: {
        Instruction step(cpu, 0x4C, 0x00611Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:79 BEQL @UNKNOWN14
    // Overlapping static entry reached from 0xC06084.
    case 0xC06088: {
        Instruction step(cpu, 0x1F, 0x9EBD61u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:80 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0608A: {
        Instruction step(cpu, 0xBD, 0x00289Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:80 LDA ENTITY_COLLIDED_OBJECTS,X
    // Overlapping static entry reached from 0xC06088.
    case 0xC0608C: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:81 CMP #ENTITY_COLLISION_DISABLED
    case 0xC0608D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:81 CMP #ENTITY_COLLISION_DISABLED
    // Overlapping static entry reached from 0xC0608D.
    case 0xC0608F: {
        Instruction step(cpu, 0x80, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/npc_collision_check.asm:82 BEQL @UNKNOWN14
    case 0xC06090: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:82 BEQL @UNKNOWN14
    case 0xC06092: {
        Instruction step(cpu, 0x4C, 0x00611Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:83 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC06095: {
        Instruction step(cpu, 0xAD, 0x005D58u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:84 BEQ @UNKNOWN10
    case 0xC06098: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:85 LDA ENTITY_NPC_IDS,X
    case 0xC0609A: {
        Instruction step(cpu, 0xBD, 0x002C9Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:86 INC
    case 0xC0609D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:87 CMP #$8001
    case 0xC0609E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x008001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:87 CMP #$8001
    // Overlapping static entry reached from 0xC0609E.
    case 0xC060A0: {
        Instruction step(cpu, 0x80, 0x000090u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:88 BCC @UNKNOWN10
    case 0xC060A1: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:89 JMP @UNKNOWN14
    case 0xC060A3: {
        Instruction step(cpu, 0x4C, 0x00611Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:91 LDA @VIRTUAL02
    case 0xC060A6: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:92 ASL
    case 0xC060A8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:93 TAX
    case 0xC060A9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:94 LDA ENTITY_HITBOX_ENABLED,X
    case 0xC060AA: {
        Instruction step(cpu, 0xBD, 0x00332Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:95 BEQ @UNKNOWN14
    case 0xC060AD: {
        Instruction step(cpu, 0xF0, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:96 LDA ENTITY_DIRECTIONS,X
    case 0xC060AF: {
        Instruction step(cpu, 0xBD, 0x002AF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:97 CMP #DIRECTION::RIGHT
    case 0xC060B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:97 CMP #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC060B2.
    case 0xC060B4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:98 BEQ @UNKNOWN11
    case 0xC060B5: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:99 CMP #DIRECTION::LEFT
    case 0xC060B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:99 CMP #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC060B7.
    case 0xC060B9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:100 BNE @UNKNOWN12
    case 0xC060BA: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:102 LDA @VIRTUAL02
    case 0xC060BC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:103 ASL
    case 0xC060BE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:104 TAX
    case 0xC060BF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:105 LDY ENTITY_HITBOX_LEFT_RIGHT_WIDTHS,X
    case 0xC060C0: {
        Instruction step(cpu, 0xBC, 0x0033DEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:106 LDA ENTITY_HITBOX_LEFT_RIGHT_HEIGHTS,X
    case 0xC060C3: {
        Instruction step(cpu, 0xBD, 0x001A4Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:107 STA @LOCAL01
    case 0xC060C6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:108 BRA @UNKNOWN13
    case 0xC060C8: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:110 LDY ENTITY_HITBOX_UP_DOWN_WIDTHS,X
    case 0xC060CA: {
        Instruction step(cpu, 0xBC, 0x003366u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:111 LDA ENTITY_HITBOX_UP_DOWN_HEIGHTS,X
    case 0xC060CD: {
        Instruction step(cpu, 0xBD, 0x0033A2u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:112 STA @LOCAL01
    case 0xC060D0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:114 LDA @VIRTUAL02
    case 0xC060D2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:115 ASL
    case 0xC060D4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:116 TAX
    case 0xC060D5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:117 LDA @LOCAL01
    case 0xC060D6: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:118 STA @VIRTUAL02
    case 0xC060D8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:119 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC060DA: {
        Instruction step(cpu, 0xBD, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:120 SEC
    case 0xC060DD: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:121 SBC @VIRTUAL02
    case 0xC060DE: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:122 STA @LOCAL00
    case 0xC060E0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:123 SEC
    case 0xC060E2: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:124 SBC @VIRTUAL04
    case 0xC060E3: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:125 CMP @LOCAL07
    case 0xC060E5: {
        Instruction step(cpu, 0xC5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:126 BCS @UNKNOWN14
    case 0xC060E7: {
        Instruction step(cpu, 0xB0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:127 LDA @LOCAL01
    case 0xC060E9: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:128 CLC
    case 0xC060EB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:129 ADC @LOCAL00
    case 0xC060EC: {
        Instruction step(cpu, 0x65, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:130 CMP @LOCAL07
    case 0xC060EE: {
        Instruction step(cpu, 0xC5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/npc_collision_check.asm:131 BLTEQ @UNKNOWN14
    case 0xC060F0: {
        Instruction step(cpu, 0x90, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/npc_collision_check.asm:131 BLTEQ @UNKNOWN14
    case 0xC060F2: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:132 STY @VIRTUAL02
    case 0xC060F4: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:133 LDA ENTITY_ABS_X_TABLE,X
    case 0xC060F6: {
        Instruction step(cpu, 0xBD, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:134 SEC
    case 0xC060F9: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:135 SBC @VIRTUAL02
    case 0xC060FA: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:136 STA @LOCAL00
    case 0xC060FC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:137 TYA
    case 0xC060FE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:138 ASL
    case 0xC060FF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:139 TAX
    case 0xC06100: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:140 LDA @LOCAL00
    case 0xC06101: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:141 SEC
    case 0xC06103: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:142 SBC @LOCAL03
    case 0xC06104: {
        Instruction step(cpu, 0xE5, 0x000014u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:143 CMP @LOCAL04
    case 0xC06106: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:144 BCS @UNKNOWN14
    case 0xC06108: {
        Instruction step(cpu, 0xB0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:145 STX @VIRTUAL02
    case 0xC0610A: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:146 LDA @LOCAL00
    case 0xC0610C: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:147 CLC
    case 0xC0610E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:148 ADC @VIRTUAL02
    case 0xC0610F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:149 CMP @LOCAL04
    case 0xC06111: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/npc_collision_check.asm:150 BLTEQ @UNKNOWN14
    case 0xC06113: {
        Instruction step(cpu, 0x90, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/npc_collision_check.asm:150 BLTEQ @UNKNOWN14
    case 0xC06115: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:151 LDA @LOCAL02
    case 0xC06117: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:152 STA @VIRTUAL02
    case 0xC06119: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:153 STA @LOCAL06
    case 0xC0611B: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:154 BRA @UNKNOWN16
    case 0xC0611D: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:156 LDA @LOCAL02
    case 0xC0611F: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:157 STA @VIRTUAL02
    case 0xC06121: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:158 INC @VIRTUAL02
    case 0xC06123: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:159 LDA @VIRTUAL02
    case 0xC06125: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:160 STA @LOCAL02
    case 0xC06127: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:162 LDA @VIRTUAL02
    case 0xC06129: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:163 CMP #23
    case 0xC0612B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:163 CMP #23
    // Overlapping static entry reached from 0xC0612B.
    case 0xC0612D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/npc_collision_check.asm:164 BNEL @UNKNOWN7
    case 0xC0612E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/npc_collision_check.asm:164 BNEL @UNKNOWN7
    case 0xC06130: {
        Instruction step(cpu, 0x4C, 0x00607Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:166 LDA @LOCAL06
    case 0xC06133: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:167 STA ENTITY_COLLIDED_OBJECTS+46
    case 0xC06135: {
        Instruction step(cpu, 0x8D, 0x0028CCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/npc_collision_check.asm:168 LDA @LOCAL06
    case 0xC06138: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/npc_collision_check.asm:169 END_C_FUNCTION
    case 0xC0613A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/npc_collision_check.asm:169 END_C_FUNCTION
    case 0xC0613B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
