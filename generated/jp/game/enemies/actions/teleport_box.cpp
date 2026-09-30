// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/teleport_box.asm
bool resume_battle_actions_teleport_box(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/teleport_box.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2AB24: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB26: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB27: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2AB28.
    case 0xC2AB2A: {
        Instruction step(cpu, 0xFF, 0x2CAE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/teleport_box.asm:8 END_STACK_VARS
    case 0xC2AB2B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:9 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC2AB2C: {
        Instruction step(cpu, 0xAE, 0x009B2Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:9 LDX GAME_STATE+game_state::leader_y_coord
    // Overlapping static entry reached from 0xC2AB2A.
    case 0xC2AB2E: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:10 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC2AB2F: {
        Instruction step(cpu, 0xAD, 0x009B28u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:11 JSL LOAD_SECTOR_ATTRS
    case 0xC2AB32: {
        Instruction step(cpu, 0x22, 0xC00AB3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:12 AND #$0080
    case 0xC2AB36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:12 AND #$0080
    // Overlapping static entry reached from 0xC2AB36.
    case 0xC2AB38: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/actions/teleport_box.asm:13 BNEL @TELEPORT_BOX_UNUSABLE
    case 0xC2AB39: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/actions/teleport_box.asm:13 BNEL @TELEPORT_BOX_UNUSABLE
    case 0xC2AB3B: {
        Instruction step(cpu, 0x4C, 0x00ABCEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:14 LDA BATTLE_MODE_FLAG
    case 0xC2AB3E: {
        Instruction step(cpu, 0xAD, 0x00993Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:15 BEQ @UNKNOWN1
    case 0xC2AB41: {
        Instruction step(cpu, 0xF0, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:16 LDA #100
    case 0xC2AB43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000064u : 0x000064u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:16 LDA #100
    // Overlapping static entry reached from 0xC2AB43.
    case 0xC2AB45: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:17 JSR RAND_LIMIT
    case 0xC2AB46: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:18 STA @LOCAL02
    case 0xC2AB49: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:19 LDX CURRENT_ATTACKER
    case 0xC2AB4B: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:20 LDA a:battler::current_action_argument,X
    case 0xC2AB4E: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:21 AND #$00FF
    case 0xC2AB51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2AB51.
    case 0xC2AB53: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB54: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB56: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB57: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB59: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB5A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/actions/teleport_box.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC2AB5B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:23 CLC
    case 0xC2AB5C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:24 ADC #item::params + item_parameters::strength
    case 0xC2AB5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:24 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC2AB5D.
    case 0xC2AB5F: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:25 TAX
    case 0xC2AB60: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC2AB61: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:27 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC2AB63: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC2AB67: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:29 SEC
    case 0xC2AB69: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:30 AND #$00FF
    case 0xC2AB6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2AB6A.
    case 0xC2AB6C: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:31 SBC #$0080
    case 0xC2AB6D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:31 SBC #$0080
    // Overlapping static entry reached from 0xC2AB6D.
    case 0xC2AB6F: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:32 EOR #$FF80
    case 0xC2AB70: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:32 EOR #$FF80
    // Overlapping static entry reached from 0xC2AB70.
    case 0xC2AB72: {
        Instruction step(cpu, 0xFF, 0xA50285u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:33 STA @VIRTUAL02
    case 0xC2AB73: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:34 LDA @LOCAL02
    case 0xC2AB75: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:34 LDA @LOCAL02
    // Overlapping static entry reached from 0xC2AB72.
    case 0xC2AB76: {
        Instruction step(cpu, 0x14, 0x0000C5u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:35 CMP @VIRTUAL02
    case 0xC2AB77: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:35 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC2AB76.
    case 0xC2AB78: {
        Instruction step(cpu, 0x02, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:36 BCS @TELEPORT_BOX_FAILURE
    case 0xC2AB79: {
        Instruction step(cpu, 0xB0, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:37 JSR BOSS_BATTLE_CHECK
    case 0xC2AB7B: {
        Instruction step(cpu, 0x20, 0x00AAC7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:38 CMP #0
    case 0xC2AB7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:38 CMP #0
    // Overlapping static entry reached from 0xC2AB7E.
    case 0xC2AB80: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:39 BEQ @TELEPORT_BOX_FAILURE
    case 0xC2AB81: {
        Instruction step(cpu, 0xF0, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:41 LDX CURRENT_ATTACKER
    case 0xC2AB83: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:42 LDA a:battler::action_item_slot,X
    case 0xC2AB86: {
        Instruction step(cpu, 0xBD, 0x000007u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:43 AND #$00FF
    case 0xC2AB89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC2AB89.
    case 0xC2AB8B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:44 TAX
    case 0xC2AB8C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:45 STX @LOCAL01
    case 0xC2AB8D: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:46 LDX CURRENT_ATTACKER
    case 0xC2AB8F: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:47 LDA a:battler::id,X
    case 0xC2AB92: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:48 LDX @LOCAL01
    case 0xC2AB95: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:49 JSL REDIRECT_REMOVE_ITEM_FROM_INVENTORY
    case 0xC2AB97: {
        Instruction step(cpu, 0x22, 0xC1DBA3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2AB9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Du : 0x001D1Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    // Overlapping static entry reached from 0xC2AB9B.
    case 0xC2AB9D: {
        Instruction step(cpu, 0x1D, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2AB9E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    // Overlapping static entry reached from 0xC2ABA0.
    case 0xC2ABA2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABA3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:50 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_OK
    case 0xC2ABA5: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC2ABA9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:52 LDA #TELEPORT_STYLE::INSTANT
    case 0xC2ABAB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x008503u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:53 STA @LOCAL00
    case 0xC2ABAD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:53 STA @LOCAL00
    // Overlapping static entry reached from 0xC2ABAB.
    case 0xC2ABAE: {
        Instruction step(cpu, 0x0E, 0x0069ADu, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:54 LDA GAME_STATE + game_state::unknownC3
    case 0xC2ABAF: {
        Instruction step(cpu, 0xAD, 0x009B69u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:54 LDA GAME_STATE + game_state::unknownC3
    // Overlapping static entry reached from 0xC2ABAE.
    case 0xC2ABB1: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:55 JSL SET_TELEPORT_STATE
    case 0xC2ABB2: {
        Instruction step(cpu, 0x22, 0xC0DD1Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:57 LDA #1
    case 0xC2ABB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:57 LDA #1
    // Overlapping static entry reached from 0xC2ABB6.
    case 0xC2ABB8: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:58 STA SPECIAL_DEFEAT
    case 0xC2ABB9: {
        Instruction step(cpu, 0x8D, 0x00ABE3u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:59 BRA @RETURN
    case 0xC2ABBC: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2ABBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000060u : 0x001D60u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    // Overlapping static entry reached from 0xC2ABBE.
    case 0xC2ABC0: {
        Instruction step(cpu, 0x1D, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2ABC1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2ABC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    // Overlapping static entry reached from 0xC2ABC3.
    case 0xC2ABC5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2ABC6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:62 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_NG
    case 0xC2ABC8: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/teleport_box.asm:63 BRA @RETURN
    case 0xC2ABCC: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2ABCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Du : 0x001D9Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    // Overlapping static entry reached from 0xC2ABCE.
    case 0xC2ABD0: {
        Instruction step(cpu, 0x1D, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2ABD1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2ABD3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    // Overlapping static entry reached from 0xC2ABD3.
    case 0xC2ABD5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2ABD6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/actions/teleport_box.asm:65 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_TLPTBOX_CANT
    case 0xC2ABD8: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/teleport_box.asm:67 END_C_FUNCTION
    case 0xC2ABDC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/teleport_box.asm:67 END_C_FUNCTION
    case 0xC2ABDD: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
