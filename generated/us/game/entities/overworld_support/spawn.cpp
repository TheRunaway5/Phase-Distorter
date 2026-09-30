// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/spawn.asm
bool resume_overworld_spawn(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC4C718: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC4C71A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC4C71B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC4C71C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C71C.
    case 0xC4C71E: {
        Instruction step(cpu, 0xFF, 0x1FAD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC4C71F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/spawn.asm:12 LDA RESPAWN_X
    case 0xC4C720: {
        Instruction step(cpu, 0xAD, 0x009D1Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:12 LDA RESPAWN_X
    // Overlapping static entry reached from 0xC4C71E.
    case 0xC4C722: {
        Instruction step(cpu, 0x9D, 0x000285u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:13 STA @VIRTUAL02
    case 0xC4C723: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:14 LDX RESPAWN_Y
    case 0xC4C725: {
        Instruction step(cpu, 0xAE, 0x009D21u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:15 STX @LOCAL03
    case 0xC4C728: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:16 JSL UNKNOWN_C0943C
    case 0xC4C72A: {
        Instruction step(cpu, 0x22, 0xC0943Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:17 JSR UNKNOWN_C4C2DE
    case 0xC4C72E: {
        Instruction step(cpu, 0x20, 0x00C2DEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/spawn.asm:18 JSR UNKNOWN_C4C64D
    case 0xC4C731: {
        Instruction step(cpu, 0x20, 0x00C64Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/spawn.asm:19 STA @VIRTUAL04
    case 0xC4C734: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:20 CMP #0
    case 0xC4C736: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:20 CMP #0
    // Overlapping static entry reached from 0xC4C736.
    case 0xC4C738: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:21 BEQ @UNKNOWN0
    case 0xC4C739: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:22 LDY #0
    case 0xC4C73B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:22 LDY #0
    // Overlapping static entry reached from 0xC4C73B.
    case 0xC4C73D: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:23 LDX #1
    case 0xC4C73E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:23 LDX #1
    // Overlapping static entry reached from 0xC4C73E.
    case 0xC4C740: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:24 LDA #2
    case 0xC4C741: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:24 LDA #2
    // Overlapping static entry reached from 0xC4C741.
    case 0xC4C743: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:25 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4C744: {
        Instruction step(cpu, 0x22, 0xC08814u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:26 JSL UNKNOWN_C09451
    case 0xC4C748: {
        Instruction step(cpu, 0x22, 0xC09451u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:27 JMP @UNKNOWN9
    case 0xC4C74C: {
        Instruction step(cpu, 0x4C, 0x00C8A0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn.asm:29 LDA #32
    case 0xC4C74F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:29 LDA #32
    // Overlapping static entry reached from 0xC4C74F.
    case 0xC4C751: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:30 JSL UNKNOWN_C4C58F
    case 0xC4C752: {
        Instruction step(cpu, 0x22, 0xC4C58Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:31 LDA #2
    case 0xC4C756: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:31 LDA #2
    // Overlapping static entry reached from 0xC4C756.
    case 0xC4C758: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:32 JSL UNKNOWN_C0AC0C
    case 0xC4C759: {
        Instruction step(cpu, 0x22, 0xC0AC0Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C75D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/spawn.asm:34 LDA #$17
    case 0xC4C75F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    case 0xC4C761: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C75F.
    case 0xC4C762: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C762.
    case 0xC4C763: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC4C764: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/spawn.asm:37 LDA #.LOWORD(-1)
    case 0xC4C766: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:37 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C766.
    case 0xC4C768: {
        Instruction step(cpu, 0xFF, 0x436E8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/spawn.asm:38 STA LOADED_MAP_TILE_COMBO
    case 0xC4C769: {
        Instruction step(cpu, 0x8D, 0x00436Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:39 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC4C76C: {
        Instruction step(cpu, 0x8D, 0x005DD4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:40 STA CURRENT_MUSIC_TRACK
    case 0xC4C76F: {
        Instruction step(cpu, 0x8D, 0x00B53Bu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:41 LDA #1
    case 0xC4C772: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:41 LDA #1
    // Overlapping static entry reached from 0xC4C772.
    case 0xC4C774: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:42 STA WIPE_PALETTES_ON_MAP_LOAD
    case 0xC4C775: {
        Instruction step(cpu, 0x8D, 0x004676u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:44 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4C778: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:46 LDY #6
    case 0xC4C77C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:46 LDY #6
    // Overlapping static entry reached from 0xC4C77C.
    case 0xC4C77E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:47 LDX @LOCAL03
    case 0xC4C77F: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:48 LDA @VIRTUAL02
    case 0xC4C781: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:49 JSL INITIALIZE_MAP
    case 0xC4C783: {
        Instruction step(cpu, 0x22, 0xC019B2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:50 LDA GAME_STATE + game_state::party_members
    case 0xC4C787: {
        Instruction step(cpu, 0xAD, 0x00986Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:51 AND #$00FF
    case 0xC4C78A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC4C78A.
    case 0xC4C78C: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:52 DEC
    case 0xC4C78D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/spawn.asm:53 LDY #.SIZEOF(char_struct)
    case 0xC4C78E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:53 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4C78E.
    case 0xC4C790: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:54 JSL MULT168
    case 0xC4C791: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:55 CLC
    case 0xC4C795: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC4C796: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/spawn.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC4C796.
    case 0xC4C798: {
        Instruction step(cpu, 0x99, 0x00C68Du, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:57 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC4C799: {
        Instruction step(cpu, 0x8D, 0x004DC6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:57 STA CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC4C798.
    case 0xC4C79B: {
        Instruction step(cpu, 0x4D, 0x0000A9u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:58 LDA #0
    case 0xC4C79C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:58 LDA #0
    // Overlapping static entry reached from 0xC4C79C.
    case 0xC4C79E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:59 STA @LOCAL02
    case 0xC4C79F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:60 BRA @UNKNOWN2
    case 0xC4C7A1: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/spawn.asm:62 CLC
    case 0xC4C7A3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn.asm:63 ADC CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7A4: {
        Instruction step(cpu, 0x6D, 0x004DC6u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/spawn.asm:64 TAX
    case 0xC4C7A7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C7A8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/spawn.asm:66 STZ a:char_struct::afflictions,X
    case 0xC4C7AA: {
        Instruction step(cpu, 0x9E, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC4C7AD: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/spawn.asm:68 LDA @LOCAL02
    case 0xC4C7AF: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:69 INC
    case 0xC4C7B1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/spawn.asm:70 STA @LOCAL02
    case 0xC4C7B2: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:72 CMP #6
    case 0xC4C7B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:72 CMP #6
    // Overlapping static entry reached from 0xC4C7B4.
    case 0xC4C7B6: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:73 BCC @UNKNOWN1
    case 0xC4C7B7: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn.asm:74 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7B9: {
        Instruction step(cpu, 0xAE, 0x004DC6u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:75 LDA a:char_struct::max_hp,X
    case 0xC4C7BC: {
        Instruction step(cpu, 0xBD, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:76 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7BF: {
        Instruction step(cpu, 0xAE, 0x004DC6u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:77 STA a:char_struct::current_hp_target,X
    case 0xC4C7C2: {
        Instruction step(cpu, 0x9D, 0x000047u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:78 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7C5: {
        Instruction step(cpu, 0xAE, 0x004DC6u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:79 STA a:char_struct::current_hp,X
    case 0xC4C7C8: {
        Instruction step(cpu, 0x9D, 0x000045u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:80 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7CB: {
        Instruction step(cpu, 0xAE, 0x004DC6u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:81 STZ a:char_struct::current_pp_target,X
    case 0xC4C7CE: {
        Instruction step(cpu, 0x9E, 0x00004Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:82 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7D1: {
        Instruction step(cpu, 0xAE, 0x004DC6u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:83 STZ a:char_struct::current_pp,X
    case 0xC4C7D4: {
        Instruction step(cpu, 0x9E, 0x00004Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:84 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    case 0xC4C7D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000031u : 0x009831u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:84 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    // Overlapping static entry reached from 0xC4C7D7.
    case 0xC4C7D9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:85 STY @LOCAL01
    case 0xC4C7DA: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C7DC: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C7DF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C7E1: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C7E4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C7E6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C7E8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C7EA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C7EC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C7EE: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C7F0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C7F2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C7F4: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC4C7F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C7F6.
    case 0xC4C7F8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC4C7F9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC4C7FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C7FB.
    case 0xC4C7FD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC4C7FE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:968 LDA val1
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C800: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:969 AND val2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C802: {
        Instruction step(cpu, 0x25, 0x000006u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:970 STA dest
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C804: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C806: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C808: {
        Instruction step(cpu, 0x25, 0x000008u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C80A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:91 PHA
    case 0xC4C80C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:92 LDA @VIRTUAL0A
    case 0xC4C80D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:93 PHA
    case 0xC4C80F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC4C810: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4C810.
    case 0xC4C812: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC4C813: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC4C815: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4C815.
    case 0xC4C817: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC4C818: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4C81A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4C81C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4C81E: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4C820: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:96 JSL DIVISION32
    case 0xC4C822: {
        Instruction step(cpu, 0x22, 0xC090FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC4C826: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC4C827: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC4C829: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC4C82A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:98 CLC
    case 0xC4C82C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C82D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C82F: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C831: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C833: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C835: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C837: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:100 LDY @LOCAL01
    case 0xC4C839: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C83B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C83D: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C840: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C842: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:103 JSL UNKNOWN_C07B52
    case 0xC4C845: {
        Instruction step(cpu, 0x22, 0xC07B52u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:105 LDY #1
    case 0xC4C849: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:105 LDY #1
    // Overlapping static entry reached from 0xC4C849.
    case 0xC4C84B: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:106 STY @LOCAL03
    case 0xC4C84C: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:107 BRA @UNKNOWN4
    case 0xC4C84E: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/spawn.asm:109 LDX #0
    case 0xC4C850: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:109 LDX #0
    // Overlapping static entry reached from 0xC4C850.
    case 0xC4C852: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:110 TYA
    case 0xC4C853: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:111 JSL SET_EVENT_FLAG
    case 0xC4C854: {
        Instruction step(cpu, 0x22, 0xC2165Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:112 LDY @LOCAL03
    case 0xC4C858: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:113 INY
    case 0xC4C85A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:114 STY @LOCAL03
    case 0xC4C85B: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:116 TYA
    case 0xC4C85D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:117 CLC
    case 0xC4C85E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn.asm:118 SBC #10
    case 0xC4C85F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/spawn.asm:118 SBC #10
    // Overlapping static entry reached from 0xC4C85F.
    case 0xC4C861: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC4C862: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC4C864: {
        Instruction step(cpu, 0x10, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC4C866: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC4C868: {
        Instruction step(cpu, 0x30, 0x0000E6u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/spawn.asm:120 LDA #0
    case 0xC4C86A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:120 LDA #0
    // Overlapping static entry reached from 0xC4C86A.
    case 0xC4C86C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:121 STA @LOCAL02
    case 0xC4C86D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:122 BRA @UNKNOWN8
    case 0xC4C86F: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/spawn.asm:124 ASL
    case 0xC4C871: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/spawn.asm:125 TAX
    case 0xC4C872: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:126 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC4C873: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:126 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC4C873.
    case 0xC4C875: {
        Instruction step(cpu, 0xFF, 0x289E9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/spawn.asm:127 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC4C876: {
        Instruction step(cpu, 0x9D, 0x00289Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:128 LDA @LOCAL02
    case 0xC4C879: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:129 INC
    case 0xC4C87B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/spawn.asm:130 STA @LOCAL02
    case 0xC4C87C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:132 CMP #MAX_ENTITIES
    case 0xC4C87E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:132 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4C87E.
    case 0xC4C880: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:133 BCC @UNKNOWN7
    case 0xC4C881: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn.asm:134 JSL UNKNOWN_C064D4
    case 0xC4C883: {
        Instruction step(cpu, 0x22, 0xC064D4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:135 STZ DAD_PHONE_QUEUED
    case 0xC4C887: {
        Instruction step(cpu, 0x9C, 0x009E56u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:136 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC4C88A: {
        Instruction step(cpu, 0x9C, 0x005D58u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:137 JSL SPAWN_BUZZ_BUZZ
    case 0xC4C88D: {
        Instruction step(cpu, 0x22, 0xC06B21u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:138 JSL OAM_CLEAR
    case 0xC4C891: {
        Instruction step(cpu, 0x22, 0xC088B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:139 JSL UNKNOWN_C09451
    case 0xC4C895: {
        Instruction step(cpu, 0x22, 0xC09451u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:140 LDA #32
    case 0xC4C899: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:140 LDA #32
    // Overlapping static entry reached from 0xC4C899.
    case 0xC4C89B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:141 JSL UNKNOWN_C4C60E
    case 0xC4C89C: {
        Instruction step(cpu, 0x22, 0xC4C60Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:143 LDA @VIRTUAL04
    case 0xC4C8A0: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn.asm:144 END_C_FUNCTION
    case 0xC4C8A2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn.asm:144 END_C_FUNCTION
    case 0xC4C8A3: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
