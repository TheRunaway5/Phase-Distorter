// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/spawn.asm
bool resume_overworld_spawn(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC499F0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC499F2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC499F3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC499F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC499F4.
    case 0xC499F6: {
        Instruction step(cpu, 0xFF, 0xA5AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC499F7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/spawn.asm:12 LDA RESPAWN_X
    case 0xC499F8: {
        Instruction step(cpu, 0xAD, 0x009FA5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:12 LDA RESPAWN_X
    // Overlapping static entry reached from 0xC499F6.
    case 0xC499FA: {
        Instruction step(cpu, 0x9F, 0xAE0285u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:13 STA @VIRTUAL02
    case 0xC499FB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:14 LDX RESPAWN_Y
    case 0xC499FD: {
        Instruction step(cpu, 0xAE, 0x009FA7u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:14 LDX RESPAWN_Y
    // Overlapping static entry reached from 0xC499FA.
    case 0xC499FE: {
        Instruction step(cpu, 0xA7, 0x00009Fu, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:15 STX @LOCAL03
    case 0xC49A00: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:16 JSL UNKNOWN_C0943C
    case 0xC49A02: {
        Instruction step(cpu, 0x22, 0xC0941Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:17 JSR UNKNOWN_C4C2DE
    case 0xC49A06: {
        Instruction step(cpu, 0x20, 0x0095B5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/spawn.asm:18 JSR UNKNOWN_C4C64D
    case 0xC49A09: {
        Instruction step(cpu, 0x20, 0x009925u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/spawn.asm:19 STA @VIRTUAL04
    case 0xC49A0C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:20 CMP #0
    case 0xC49A0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:20 CMP #0
    // Overlapping static entry reached from 0xC49A0E.
    case 0xC49A10: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:21 BEQ @UNKNOWN0
    case 0xC49A11: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:22 LDY #0
    case 0xC49A13: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:22 LDY #0
    // Overlapping static entry reached from 0xC49A13.
    case 0xC49A15: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:23 LDX #1
    case 0xC49A16: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:23 LDX #1
    // Overlapping static entry reached from 0xC49A16.
    case 0xC49A18: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:24 LDA #2
    case 0xC49A19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:24 LDA #2
    // Overlapping static entry reached from 0xC49A19.
    case 0xC49A1B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:25 JSL FADE_OUT_WITH_MOSAIC
    case 0xC49A1C: {
        Instruction step(cpu, 0x22, 0xC0880Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:26 JSL UNKNOWN_C09451
    case 0xC49A20: {
        Instruction step(cpu, 0x22, 0xC09430u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:27 JMP @UNKNOWN9
    case 0xC49A24: {
        Instruction step(cpu, 0x4C, 0x009B70u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/spawn.asm:29 LDA #32
    case 0xC49A27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:29 LDA #32
    // Overlapping static entry reached from 0xC49A27.
    case 0xC49A29: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:30 JSL UNKNOWN_C4C58F
    case 0xC49A2A: {
        Instruction step(cpu, 0x22, 0xC49867u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:31 LDA #2
    case 0xC49A2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:31 LDA #2
    // Overlapping static entry reached from 0xC49A2E.
    case 0xC49A30: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:32 JSL UNKNOWN_C0AC0C
    case 0xC49A31: {
        Instruction step(cpu, 0x22, 0xC0ABEBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC49A35: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/spawn.asm:34 LDA #$17
    case 0xC49A37: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    case 0xC49A39: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    // Overlapping static entry reached from 0xC49A37.
    case 0xC49A3A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    // Overlapping static entry reached from 0xC49A3A.
    case 0xC49A3B: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC49A3C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/spawn.asm:37 LDA #.LOWORD(-1)
    case 0xC49A3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:37 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC49A3E.
    case 0xC49A40: {
        Instruction step(cpu, 0xFF, 0x46F48Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/spawn.asm:38 STA LOADED_MAP_TILE_COMBO
    case 0xC49A41: {
        Instruction step(cpu, 0x8D, 0x0046F4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:39 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC49A44: {
        Instruction step(cpu, 0x8D, 0x00615Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:40 STA CURRENT_MUSIC_TRACK
    case 0xC49A47: {
        Instruction step(cpu, 0x8D, 0x00B6ECu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:41 LDA #1
    case 0xC49A4A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:41 LDA #1
    // Overlapping static entry reached from 0xC49A4A.
    case 0xC49A4C: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:42 STA WIPE_PALETTES_ON_MAP_LOAD
    case 0xC49A4D: {
        Instruction step(cpu, 0x8D, 0x0049FCu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:46 LDY #6
    case 0xC49A50: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:46 LDY #6
    // Overlapping static entry reached from 0xC49A50.
    case 0xC49A52: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:47 LDX @LOCAL03
    case 0xC49A53: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:48 LDA @VIRTUAL02
    case 0xC49A55: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:49 JSL INITIALIZE_MAP
    case 0xC49A57: {
        Instruction step(cpu, 0x22, 0xC019C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:50 LDA GAME_STATE + game_state::party_members
    case 0xC49A5B: {
        Instruction step(cpu, 0xAD, 0x009B20u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:51 AND #$00FF
    case 0xC49A5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC49A5E.
    case 0xC49A60: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:52 DEC
    case 0xC49A61: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/spawn.asm:53 LDY #.SIZEOF(char_struct)
    case 0xC49A62: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:53 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC49A62.
    case 0xC49A64: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:54 JSL MULT168
    case 0xC49A65: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:55 CLC
    case 0xC49A69: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC49A6A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/spawn.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC49A6A.
    case 0xC49A6C: {
        Instruction step(cpu, 0x9C, 0x004C8Du, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:57 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC49A6D: {
        Instruction step(cpu, 0x8D, 0x00514Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:57 STA CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC49A6C.
    case 0xC49A6F: {
        Instruction step(cpu, 0x51, 0x0000A9u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:58 LDA #0
    case 0xC49A70: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:58 LDA #0
    // Overlapping static entry reached from 0xC49A6F.
    case 0xC49A71: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:58 LDA #0
    // Overlapping static entry reached from 0xC49A70.
    case 0xC49A72: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:59 STA @LOCAL02
    case 0xC49A73: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:60 BRA @UNKNOWN2
    case 0xC49A75: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/spawn.asm:62 CLC
    case 0xC49A77: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn.asm:63 ADC CURRENT_PARTY_MEMBER_TICK
    case 0xC49A78: {
        Instruction step(cpu, 0x6D, 0x00514Cu, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/spawn.asm:64 TAX
    case 0xC49A7B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC49A7C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/spawn.asm:66 STZ a:char_struct::afflictions,X
    case 0xC49A7E: {
        Instruction step(cpu, 0x9E, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC49A81: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/spawn.asm:68 LDA @LOCAL02
    case 0xC49A83: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:69 INC
    case 0xC49A85: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/spawn.asm:70 STA @LOCAL02
    case 0xC49A86: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:72 CMP #6
    case 0xC49A88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:72 CMP #6
    // Overlapping static entry reached from 0xC49A88.
    case 0xC49A8A: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:73 BCC @UNKNOWN1
    case 0xC49A8B: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn.asm:74 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC49A8D: {
        Instruction step(cpu, 0xAE, 0x00514Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:75 LDA a:char_struct::max_hp,X
    case 0xC49A90: {
        Instruction step(cpu, 0xBD, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:76 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC49A93: {
        Instruction step(cpu, 0xAE, 0x00514Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:77 STA a:char_struct::current_hp_target,X
    case 0xC49A96: {
        Instruction step(cpu, 0x9D, 0x000046u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:78 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC49A99: {
        Instruction step(cpu, 0xAE, 0x00514Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:79 STA a:char_struct::current_hp,X
    case 0xC49A9C: {
        Instruction step(cpu, 0x9D, 0x000044u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:80 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC49A9F: {
        Instruction step(cpu, 0xAE, 0x00514Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:81 STZ a:char_struct::current_pp_target,X
    case 0xC49AA2: {
        Instruction step(cpu, 0x9E, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:82 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC49AA5: {
        Instruction step(cpu, 0xAE, 0x00514Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:83 STZ a:char_struct::current_pp,X
    case 0xC49AA8: {
        Instruction step(cpu, 0x9E, 0x00004Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:84 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    case 0xC49AAB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000E2u : 0x009AE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:84 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    // Overlapping static entry reached from 0xC49AAB.
    case 0xC49AAD: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/spawn.asm:85 STY @LOCAL01
    case 0xC49AAE: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC49AB0: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC49AB3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC49AB5: {
        Instruction step(cpu, 0xB9, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC49AB8: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49ABA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49ABC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49ABE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49AC0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49AC2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49AC4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49AC6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49AC8: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC49ACA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC49ACA.
    case 0xC49ACC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC49ACD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC49ACF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC49ACF.
    case 0xC49AD1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC49AD2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:968 LDA val1
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49AD4: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:969 AND val2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49AD6: {
        Instruction step(cpu, 0x25, 0x000006u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:970 STA dest
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49AD8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49ADA: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49ADC: {
        Instruction step(cpu, 0x25, 0x000008u, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49ADE: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:91 PHA
    case 0xC49AE0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:92 LDA @VIRTUAL0A
    case 0xC49AE1: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:93 PHA
    case 0xC49AE3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC49AE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC49AE4.
    case 0xC49AE6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC49AE7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC49AE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC49AE9.
    case 0xC49AEB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC49AEC: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC49AEE: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC49AF0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC49AF2: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC49AF4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:96 JSL DIVISION32
    case 0xC49AF6: {
        Instruction step(cpu, 0x22, 0xC090E1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC49AFA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC49AFB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC49AFD: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC49AFE: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:98 CLC
    case 0xC49B00: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B01: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B03: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B05: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B07: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B09: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B0B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:100 LDY @LOCAL01
    case 0xC49B0D: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC49B0F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC49B11: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC49B14: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC49B16: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:105 LDY #1
    case 0xC49B19: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:105 LDY #1
    // Overlapping static entry reached from 0xC49B19.
    case 0xC49B1B: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:106 STY @LOCAL03
    case 0xC49B1C: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:107 BRA @UNKNOWN4
    case 0xC49B1E: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/spawn.asm:109 LDX #0
    case 0xC49B20: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:109 LDX #0
    // Overlapping static entry reached from 0xC49B20.
    case 0xC49B22: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:110 TYA
    case 0xC49B23: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:111 JSL SET_EVENT_FLAG
    case 0xC49B24: {
        Instruction step(cpu, 0x22, 0xC21506u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:112 LDY @LOCAL03
    case 0xC49B28: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:113 INY
    case 0xC49B2A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:114 STY @LOCAL03
    case 0xC49B2B: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/spawn.asm:116 TYA
    case 0xC49B2D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:117 CLC
    case 0xC49B2E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/spawn.asm:118 SBC #10
    case 0xC49B2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/spawn.asm:118 SBC #10
    // Overlapping static entry reached from 0xC49B2F.
    case 0xC49B31: {
        Instruction step(cpu, 0x00, 0x000050u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC49B32: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC49B34: {
        Instruction step(cpu, 0x10, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC49B36: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC49B38: {
        Instruction step(cpu, 0x30, 0x0000E6u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/spawn.asm:120 LDA #0
    case 0xC49B3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:120 LDA #0
    // Overlapping static entry reached from 0xC49B3A.
    case 0xC49B3C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:121 STA @LOCAL02
    case 0xC49B3D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:122 BRA @UNKNOWN8
    case 0xC49B3F: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/spawn.asm:124 ASL
    case 0xC49B41: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/spawn.asm:125 TAX
    case 0xC49B42: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/spawn.asm:126 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC49B43: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:126 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC49B43.
    case 0xC49B45: {
        Instruction step(cpu, 0xFF, 0x2C9C9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/spawn.asm:127 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC49B46: {
        Instruction step(cpu, 0x9D, 0x002C9Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:128 LDA @LOCAL02
    case 0xC49B49: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:129 INC
    case 0xC49B4B: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/spawn.asm:130 STA @LOCAL02
    case 0xC49B4C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:132 CMP #MAX_ENTITIES
    case 0xC49B4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:132 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC49B4E.
    case 0xC49B50: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:133 BCC @UNKNOWN7
    case 0xC49B51: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/spawn.asm:134 JSL UNKNOWN_C064D4
    case 0xC49B53: {
        Instruction step(cpu, 0x22, 0xC06702u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:135 STZ DAD_PHONE_QUEUED
    case 0xC49B57: {
        Instruction step(cpu, 0x9C, 0x00A05Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:136 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC49B5A: {
        Instruction step(cpu, 0x9C, 0x0060DEu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/spawn.asm:137 JSL SPAWN_BUZZ_BUZZ
    case 0xC49B5D: {
        Instruction step(cpu, 0x22, 0xC06D4Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:138 JSL OAM_CLEAR
    case 0xC49B61: {
        Instruction step(cpu, 0x22, 0xC088A3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:139 JSL UNKNOWN_C09451
    case 0xC49B65: {
        Instruction step(cpu, 0x22, 0xC09430u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:140 LDA #32
    case 0xC49B69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/spawn.asm:140 LDA #32
    // Overlapping static entry reached from 0xC49B69.
    case 0xC49B6B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/spawn.asm:141 JSL UNKNOWN_C4C60E
    case 0xC49B6C: {
        Instruction step(cpu, 0x22, 0xC498E6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/spawn.asm:143 LDA @VIRTUAL04
    case 0xC49B70: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn.asm:144 END_C_FUNCTION
    case 0xC49B72: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn.asm:144 END_C_FUNCTION
    case 0xC49B73: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
