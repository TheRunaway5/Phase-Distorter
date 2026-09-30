// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/init_overworld.asm
bool resume_battle_init_overworld(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_overworld.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0B717: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B719: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B71A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B71B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B71B.
    case 0xC0B71D: {
        Instruction step(cpu, 0xFF, 0x48AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B71E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/init_overworld.asm:8 LDA BATTLE_MODE
    case 0xC0B71F: {
        Instruction step(cpu, 0xAD, 0x005148u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:8 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC0B71D.
    case 0xC0B721: {
        Instruction step(cpu, 0x51, 0x0000D0u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    case 0xC0B722: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    // Overlapping static entry reached from 0xC0B721.
    case 0xC0B723: {
        Instruction step(cpu, 0x03, 0x00004Cu, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    case 0xC0B724: {
        Instruction step(cpu, 0x4C, 0x00B7BCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    // Overlapping static entry reached from 0xC0B723.
    case 0xC0B725: {
        Instruction step(cpu, 0xBC, 0x00ADB7u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_overworld.asm:10 LDA DEBUG
    case 0xC0B727: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:10 LDA DEBUG
    // Overlapping static entry reached from 0xC0B725.
    case 0xC0B728: {
        Instruction step(cpu, 0xF2, 0x000046u, 2u, AddressMode::DirectPageIndirect);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/init_overworld.asm:11 BEQ @UNKNOWN1
    case 0xC0B72A: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:12 JSL UNKNOWN_EFE708
    case 0xC0B72C: {
        Instruction step(cpu, 0x22, 0xEFD02Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:13 CMP #$FFFF
    case 0xC0B730: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC0B730.
    case 0xC0B732: {
        Instruction step(cpu, 0xFF, 0x2249F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/init_overworld.asm:14 BEQ @UNKNOWN5
    case 0xC0B733: {
        Instruction step(cpu, 0xF0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:16 JSL INSTANT_WIN_CHECK
    case 0xC0B735: {
        Instruction step(cpu, 0x22, 0xC2656Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:16 JSL INSTANT_WIN_CHECK
    // Overlapping static entry reached from 0xC0B732.
    case 0xC0B736: {
        Instruction step(cpu, 0x6D, 0x00C265u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_overworld.asm:17 CMP #0
    case 0xC0B739: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:17 CMP #0
    // Overlapping static entry reached from 0xC0B739.
    case 0xC0B73B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:18 BEQ @UNKNOWN2
    case 0xC0B73C: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:19 JSL INSTANT_WIN_HANDLER
    case 0xC0B73E: {
        Instruction step(cpu, 0x22, 0xC260E9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:20 STZ BATTLE_MODE
    case 0xC0B742: {
        Instruction step(cpu, 0x9C, 0x005148u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:21 BRA @UNKNOWN5
    case 0xC0B745: {
        Instruction step(cpu, 0x80, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_overworld.asm:23 JSL INIT_BATTLE_COMMON
    case 0xC0B747: {
        Instruction step(cpu, 0x22, 0xC054CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:24 TAX
    case 0xC0B74B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:25 STX @LOCAL01
    case 0xC0B74C: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:26 JSL UNKNOWN_C07B52
    case 0xC0B74E: {
        Instruction step(cpu, 0x22, 0xC07DA2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:27 STZ OVERWORLD_STATUS_SUPPRESSION
    case 0xC0B752: {
        Instruction step(cpu, 0x9C, 0x00611Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:28 LDA PSI_TELEPORT_DESTINATION
    case 0xC0B755: {
        Instruction step(cpu, 0xAD, 0x00A141u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:29 BNE @UNKNOWN4
    case 0xC0B758: {
        Instruction step(cpu, 0xD0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:30 LDX @LOCAL01
    case 0xC0B75A: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:31 BEQ @UNKNOWN3
    case 0xC0B75C: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:32 LDA DEBUG
    case 0xC0B75E: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:33 BEQ @UNKNOWN8
    case 0xC0B761: {
        Instruction step(cpu, 0xF0, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:34 JSL DEBUG_CHECK_VIEW_CHARACTER_MODE
    case 0xC0B763: {
        Instruction step(cpu, 0x22, 0xEFD069u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:35 CMP #0
    case 0xC0B767: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:35 CMP #0
    // Overlapping static entry reached from 0xC0B767.
    case 0xC0B769: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:36 BNE @UNKNOWN8
    case 0xC0B76A: {
        Instruction step(cpu, 0xD0, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:38 JSL RELOAD_MAP
    case 0xC0B76C: {
        Instruction step(cpu, 0x22, 0xC01909u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:39 LDX #1
    case 0xC0B770: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:39 LDX #1
    // Overlapping static entry reached from 0xC0B770.
    case 0xC0B772: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:40 TXA
    case 0xC0B773: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:41 JSL FADE_IN
    case 0xC0B774: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:42 BRA @UNKNOWN5
    case 0xC0B778: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_overworld.asm:44 JSL TELEPORT_MAINLOOP
    case 0xC0B77A: {
        Instruction step(cpu, 0x22, 0xC0EA63u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:46 LDA #0
    case 0xC0B77E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:46 LDA #0
    // Overlapping static entry reached from 0xC0B77E.
    case 0xC0B780: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:47 STA @LOCAL00
    case 0xC0B781: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:48 BRA @UNKNOWN7
    case 0xC0B783: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_overworld.asm:50 ASL
    case 0xC0B785: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_overworld.asm:51 TAX
    case 0xC0B786: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:52 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC0B787: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:52 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0B787.
    case 0xC0B789: {
        Instruction step(cpu, 0xFF, 0x2C9C9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/init_overworld.asm:53 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0B78A: {
        Instruction step(cpu, 0x9D, 0x002C9Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:54 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC0B78D: {
        Instruction step(cpu, 0x9E, 0x00305Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:54 STZ ENTITY_PATHFINDING_STATES,X
    // Overlapping static entry reached from 0xC0B7C8.
    case 0xC0B78E: {
        Instruction step(cpu, 0x5C, 0x188A30u, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:55 TXA
    case 0xC0B790: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:56 CLC
    case 0xC0B791: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_overworld.asm:57 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0B792: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x001160u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_overworld.asm:57 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0B792.
    case 0xC0B794: {
        Instruction step(cpu, 0x11, 0x0000AAu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:58 TAX
    case 0xC0B795: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:59 LDA __BSS_START__,X
    case 0xC0B796: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:60 AND #$7FFF
    case 0xC0B799: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:60 AND #$7FFF
    // Overlapping static entry reached from 0xC0B799.
    case 0xC0B79B: {
        Instruction step(cpu, 0x7F, 0x00009Du, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_overworld.asm:61 STA __BSS_START__,X
    case 0xC0B79C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:62 LDA @LOCAL00
    case 0xC0B79F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:63 INC
    case 0xC0B7A1: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/init_overworld.asm:64 STA @LOCAL00
    case 0xC0B7A2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:66 CMP #23
    case 0xC0B7A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:66 CMP #23
    // Overlapping static entry reached from 0xC0B7A4.
    case 0xC0B7A6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:67 BNE @UNKNOWN6
    case 0xC0B7A7: {
        Instruction step(cpu, 0xD0, 0x0000DCu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:68 STZ OVERWORLD_STATUS_SUPPRESSION
    case 0xC0B7A9: {
        Instruction step(cpu, 0x9C, 0x00611Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:69 JSL UNKNOWN_C09451
    case 0xC0B7AC: {
        Instruction step(cpu, 0x22, 0xC09430u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:70 LDA #120
    case 0xC0B7B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:70 LDA #120
    // Overlapping static entry reached from 0xC0B7B0.
    case 0xC0B7B2: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:71 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0B7B3: {
        Instruction step(cpu, 0x8D, 0x0060DEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:72 LDA #$FFFF
    case 0xC0B7B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:72 LDA #$FFFF
    // Overlapping static entry reached from 0xC0B7B6.
    case 0xC0B7B8: {
        Instruction step(cpu, 0xFF, 0x513C8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/init_overworld.asm:73 STA TOUCHED_ENEMY
    case 0xC0B7B9: {
        Instruction step(cpu, 0x8D, 0x00513Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_overworld.asm:75 END_C_FUNCTION
    case 0xC0B7BC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_overworld.asm:75 END_C_FUNCTION
    case 0xC0B7BD: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
