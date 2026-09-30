// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/teleport_box.asm
bool resume_battle_actions_teleport_box(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/teleport_box.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AB71: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB73: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB74: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AB75.
    case 0xC2AB77: {
        Instruction step(cpu, 0xFF, 0x7BAE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB78: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:9 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC2AB79: {
        Instruction step(cpu, 0xAE, 0x00987Bu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:9 LDX GAME_STATE+game_state::leader_y_coord
    // Overlapping static entry reached from 0xC2AB77.
    case 0xC2AB7B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:10 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC2AB7C: {
        Instruction step(cpu, 0xAD, 0x009877u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:11 JSL LOAD_SECTOR_ATTRS
    case 0xC2AB7F: {
        Instruction step(cpu, 0x22, 0xC00AA1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:12 AND #$0080
    case 0xC2AB83: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:12 AND #$0080
    // Overlapping static entry reached from 0xC2AB83.
    case 0xC2AB85: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/teleport_box.asm:13 BNEL @TELEPORT_BOX_UNUSABLE
    case 0xC2AB86: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/teleport_box.asm:13 BNEL @TELEPORT_BOX_UNUSABLE
    case 0xC2AB88: {
        Instruction step(cpu, 0x4C, 0x00AC1Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:14 LDA BATTLE_MODE_FLAG
    case 0xC2AB8B: {
        Instruction step(cpu, 0xAD, 0x009643u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:15 BEQ @UNKNOWN1
    case 0xC2AB8E: {
        Instruction step(cpu, 0xF0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:16 LDA #100
    case 0xC2AB90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:16 LDA #100
    // Overlapping static entry reached from 0xC2AB90.
    case 0xC2AB92: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:17 JSR RAND_LIMIT
    case 0xC2AB93: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:18 STA @LOCAL02
    case 0xC2AB96: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:19 LDX CURRENT_ATTACKER
    case 0xC2AB98: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:20 LDA a:battler::current_action_argument,X
    case 0xC2AB9B: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:21 AND #$00FF
    case 0xC2AB9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2AB9E.
    case 0xC2ABA0: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2ABA1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC2ABA1.
    case 0xC2ABA3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2ABA4: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:23 CLC
    case 0xC2ABA8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:24 ADC #item::params + item_parameters::strength
    case 0xC2ABA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:24 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC2ABA9.
    case 0xC2ABAB: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:25 TAX
    case 0xC2ABAC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC2ABAD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:27 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2ABAF: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC2ABB3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:29 SEC
    case 0xC2ABB5: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:30 AND #$00FF
    case 0xC2ABB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2ABB6.
    case 0xC2ABB8: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:31 SBC #$0080
    case 0xC2ABB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:31 SBC #$0080
    // Overlapping static entry reached from 0xC2ABB9.
    case 0xC2ABBB: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:32 EOR #$FF80
    case 0xC2ABBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:32 EOR #$FF80
    // Overlapping static entry reached from 0xC2ABBC.
    case 0xC2ABBE: {
        Instruction step(cpu, 0xFF, 0xA50285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:33 STA @VIRTUAL02
    case 0xC2ABBF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:34 LDA @LOCAL02
    case 0xC2ABC1: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:34 LDA @LOCAL02
    // Overlapping static entry reached from 0xC2ABBE.
    case 0xC2ABC2: {
        Instruction step(cpu, 0x14, 0x0000C5u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:35 CMP @VIRTUAL02
    case 0xC2ABC3: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:35 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC2ABC2.
    case 0xC2ABC4: {
        Instruction step(cpu, 0x02, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:36 BCS @TELEPORT_BOX_FAILURE
    case 0xC2ABC5: {
        Instruction step(cpu, 0xB0, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:37 JSR BOSS_BATTLE_CHECK
    case 0xC2ABC7: {
        Instruction step(cpu, 0x20, 0x00AB14u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:38 CMP #0
    case 0xC2ABCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:38 CMP #0
    // Overlapping static entry reached from 0xC2ABCA.
    case 0xC2ABCC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:39 BEQ @TELEPORT_BOX_FAILURE
    case 0xC2ABCD: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:41 LDX CURRENT_ATTACKER
    case 0xC2ABCF: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:42 LDA a:battler::action_item_slot,X
    case 0xC2ABD2: {
        Instruction step(cpu, 0xBD, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:43 AND #$00FF
    case 0xC2ABD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC2ABD5.
    case 0xC2ABD7: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:44 TAX
    case 0xC2ABD8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:45 STX @LOCAL01
    case 0xC2ABD9: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:46 LDX CURRENT_ATTACKER
    case 0xC2ABDB: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:47 LDA a:battler::id,X
    case 0xC2ABDE: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:48 LDX @LOCAL01
    case 0xC2ABE1: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:49 JSL REDIRECT_REMOVE_ITEM_FROM_INVENTORY
    case 0xC2ABE3: {
        Instruction step(cpu, 0x22, 0xC1DDC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000041u : 0x00FE41u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    // Overlapping static entry reached from 0xC2ABE7.
    case 0xC2ABE9: {
        Instruction step(cpu, 0xFE, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABEA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    // Overlapping static entry reached from 0xC2ABEC.
    case 0xC2ABEE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABEF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABF1: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC2ABF5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:52 LDA #TELEPORT_STYLE::INSTANT
    case 0xC2ABF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x008503u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:53 STA @LOCAL00
    case 0xC2ABF9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:53 STA @LOCAL00
    // Overlapping static entry reached from 0xC2ABF7.
    case 0xC2ABFA: {
        Instruction step(cpu, 0x0E, 0x00B8ADu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:54 LDA GAME_STATE + game_state::unknownC3
    case 0xC2ABFB: {
        Instruction step(cpu, 0xAD, 0x0098B8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:54 LDA GAME_STATE + game_state::unknownC3
    // Overlapping static entry reached from 0xC2ABFA.
    case 0xC2ABFD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:55 JSL SET_TELEPORT_STATE
    case 0xC2ABFE: {
        Instruction step(cpu, 0x22, 0xC0DD53u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:57 LDA #1
    case 0xC2AC02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:57 LDA #1
    // Overlapping static entry reached from 0xC2AC02.
    case 0xC2AC04: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:58 STA SPECIAL_DEFEAT
    case 0xC2AC05: {
        Instruction step(cpu, 0x8D, 0x00AA0Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:59 BRA @RETURN
    case 0xC2AC08: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2AC0A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Du : 0x00FE9Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    // Overlapping static entry reached from 0xC2AC0A.
    case 0xC2AC0C: {
        Instruction step(cpu, 0xFE, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2AC0D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2AC0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    // Overlapping static entry reached from 0xC2AC0F.
    case 0xC2AC11: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2AC12: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2AC14: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:63 BRA @RETURN
    case 0xC2AC18: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2AC1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E3u : 0x00FEE3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    // Overlapping static entry reached from 0xC2AC1A.
    case 0xC2AC1C: {
        Instruction step(cpu, 0xFE, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2AC1D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2AC1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    // Overlapping static entry reached from 0xC2AC1F.
    case 0xC2AC21: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2AC22: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2AC24: {
        Instruction step(cpu, 0x22, 0xC1DC1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/teleport_box.asm:67 END_C_FUNCTION
    case 0xC2AC28: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/teleport_box.asm:67 END_C_FUNCTION
    case 0xC2AC29: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
