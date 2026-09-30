// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/actions/rainbow_of_colours.asm
bool resume_battle_actions_rainbow_of_colours(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C14E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C150: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C151: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C152: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C152.
    case 0xC2C154: {
        Instruction step(cpu, 0xFF, 0x70AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:7 END_STACK_VARS
    case 0xC2C155: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:8 LDX CURRENT_ATTACKER
    case 0xC2C156: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:8 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2C154.
    case 0xC2C158: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BDu : 0x0044BDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:9 LDA a:battler::sprite_x,X
    case 0xC2C159: {
        Instruction step(cpu, 0xBD, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:9 LDA a:battler::sprite_x,X
    // Overlapping static entry reached from 0xC2C158.
    case 0xC2C15A: {
        Instruction step(cpu, 0x44, 0x002900u, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:9 LDA a:battler::sprite_x,X
    // Overlapping static entry reached from 0xC2C158.
    case 0xC2C15B: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:10 AND #$00FF
    case 0xC2C15C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC2C15A.
    case 0xC2C15D: {
        Instruction step(cpu, 0xFF, 0x028500u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:10 AND #$00FF
    // Overlapping static entry reached from 0xC2C15C.
    case 0xC2C15E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:11 STA @VIRTUAL02
    case 0xC2C15F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:12 LDX CURRENT_ATTACKER
    case 0xC2C161: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:13 LDA a:battler::sprite_y,X
    case 0xC2C164: {
        Instruction step(cpu, 0xBD, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:14 AND #$00FF
    case 0xC2C167: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC2C167.
    case 0xC2C169: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:15 TAY
    case 0xC2C16A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:16 STY @LOCAL01
    case 0xC2C16B: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:17 LDX CURRENT_ATTACKER
    case 0xC2C16D: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:18 STX @LOCAL00
    case 0xC2C170: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:19 LDX CURRENT_ATTACKER
    case 0xC2C172: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:20 LDA a:battler::current_action_argument,X
    case 0xC2C175: {
        Instruction step(cpu, 0xBD, 0x000008u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:21 AND #$00FF
    case 0xC2C178: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC2C178.
    case 0xC2C17A: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:22 LDX @LOCAL00
    case 0xC2C17B: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:23 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2C17D: {
        Instruction step(cpu, 0x22, 0xC2B6EBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:24 LDA @VIRTUAL02
    case 0xC2C181: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C183: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:26 LDX CURRENT_ATTACKER
    case 0xC2C185: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:27 STA a:battler::sprite_x,X
    case 0xC2C188: {
        Instruction step(cpu, 0x9D, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:28 LDY @LOCAL01
    case 0xC2C18B: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC2C18D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:30 TYA
    case 0xC2C18F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C190: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:32 LDX CURRENT_ATTACKER
    case 0xC2C192: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:33 STA a:battler::sprite_y,X
    case 0xC2C195: {
        Instruction step(cpu, 0x9D, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:34 LDX CURRENT_ATTACKER
    case 0xC2C198: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC2C19B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:36 LDA __BSS_START__,X
    case 0xC2C19D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:37 JSR UNKNOWN_C2F09F
    case 0xC2C1A0: {
        Instruction step(cpu, 0x20, 0x00F09Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C1A3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:39 LDX CURRENT_ATTACKER
    case 0xC2C1A5: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:40 STA a:battler::vram_sprite_index,X
    case 0xC2C1A8: {
        Instruction step(cpu, 0x9D, 0x000043u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:41 LDA #1
    case 0xC2C1AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00AE01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:42 LDX CURRENT_ATTACKER
    case 0xC2C1AD: {
        Instruction step(cpu, 0xAE, 0x00A970u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:42 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC2C1AB.
    case 0xC2C1AE: {
        Instruction step(cpu, 0x70, 0x0000A9u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:43 STA a:battler::has_taken_turn,X
    case 0xC2C1B0: {
        Instruction step(cpu, 0x9D, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC2C1B3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:45 LDA #1
    case 0xC2C1B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:45 LDA #1
    // Overlapping static entry reached from 0xC2C1B5.
    case 0xC2C1B7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/rainbow_of_colours.asm:46 STA SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC2C1B8: {
        Instruction step(cpu, 0x8D, 0x00AA92u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:47 END_C_FUNCTION
    case 0xC2C1BB: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/rainbow_of_colours.asm:47 END_C_FUNCTION
    case 0xC2C1BC: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
