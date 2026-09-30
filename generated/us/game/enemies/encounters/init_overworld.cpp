// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/init_overworld.asm
bool resume_battle_init_overworld(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_overworld.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0B731: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B733: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B734: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B735: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B735.
    case 0xC0B737: {
        Instruction step(cpu, 0xFF, 0xC2AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_overworld.asm:7 END_STACK_VARS
    case 0xC0B738: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/init_overworld.asm:8 LDA BATTLE_MODE
    case 0xC0B739: {
        Instruction step(cpu, 0xAD, 0x004DC2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:8 LDA BATTLE_MODE
    // Overlapping static entry reached from 0xC0B737.
    case 0xC0B73B: {
        Instruction step(cpu, 0x4D, 0x0003D0u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    case 0xC0B73C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/init_overworld.asm:9 BEQL @UNKNOWN8
    case 0xC0B73E: {
        Instruction step(cpu, 0x4C, 0x00B7D6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/init_overworld.asm:10 LDA DEBUG
    case 0xC0B741: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:11 BEQ @UNKNOWN1
    case 0xC0B744: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:12 JSL UNKNOWN_EFE708
    case 0xC0B746: {
        Instruction step(cpu, 0x22, 0xEFE708u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:13 CMP #$FFFF
    case 0xC0B74A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:13 CMP #$FFFF
    // Overlapping static entry reached from 0xC0B74A.
    case 0xC0B74C: {
        Instruction step(cpu, 0xFF, 0x2249F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/init_overworld.asm:14 BEQ @UNKNOWN5
    case 0xC0B74D: {
        Instruction step(cpu, 0xF0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:16 JSL INSTANT_WIN_CHECK
    case 0xC0B74F: {
        Instruction step(cpu, 0x22, 0xC26634u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:16 JSL INSTANT_WIN_CHECK
    // Overlapping static entry reached from 0xC0B74C.
    case 0xC0B750: {
        Instruction step(cpu, 0x34, 0x000066u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // src/battle/init_overworld.asm:16 JSL INSTANT_WIN_CHECK
    // Overlapping static entry reached from 0xC0B750.
    case 0xC0B752: {
        Instruction step(cpu, 0xC2, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/init_overworld.asm:17 CMP #0
    case 0xC0B753: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:17 CMP #0
    // Overlapping static entry reached from 0xC0B752.
    case 0xC0B754: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:17 CMP #0
    // Overlapping static entry reached from 0xC0B753.
    case 0xC0B755: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:18 BEQ @UNKNOWN2
    case 0xC0B756: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:19 JSL INSTANT_WIN_HANDLER
    case 0xC0B758: {
        Instruction step(cpu, 0x22, 0xC261BDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:20 STZ BATTLE_MODE
    case 0xC0B75C: {
        Instruction step(cpu, 0x9C, 0x004DC2u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:21 BRA @UNKNOWN5
    case 0xC0B75F: {
        Instruction step(cpu, 0x80, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_overworld.asm:23 JSL INIT_BATTLE_COMMON
    case 0xC0B761: {
        Instruction step(cpu, 0x22, 0xC052AAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:24 TAX
    case 0xC0B765: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:25 STX @LOCAL01
    case 0xC0B766: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:26 JSL UNKNOWN_C07B52
    case 0xC0B768: {
        Instruction step(cpu, 0x22, 0xC07B52u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:27 STZ OVERWORLD_STATUS_SUPPRESSION
    case 0xC0B76C: {
        Instruction step(cpu, 0x9C, 0x005D98u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:28 LDA PSI_TELEPORT_DESTINATION
    case 0xC0B76F: {
        Instruction step(cpu, 0xAD, 0x009F3Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:29 BNE @UNKNOWN4
    case 0xC0B772: {
        Instruction step(cpu, 0xD0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:30 LDX @LOCAL01
    case 0xC0B774: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:31 BEQ @UNKNOWN3
    case 0xC0B776: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:32 LDA DEBUG
    case 0xC0B778: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:33 BEQ @UNKNOWN8
    case 0xC0B77B: {
        Instruction step(cpu, 0xF0, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:34 JSL DEBUG_CHECK_VIEW_CHARACTER_MODE
    case 0xC0B77D: {
        Instruction step(cpu, 0x22, 0xEFE746u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:35 CMP #0
    case 0xC0B781: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:35 CMP #0
    // Overlapping static entry reached from 0xC0B781.
    case 0xC0B783: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:36 BNE @UNKNOWN8
    case 0xC0B784: {
        Instruction step(cpu, 0xD0, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:38 JSL RELOAD_MAP
    case 0xC0B786: {
        Instruction step(cpu, 0x22, 0xC018F3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:39 LDX #1
    case 0xC0B78A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:39 LDX #1
    // Overlapping static entry reached from 0xC0B78A.
    case 0xC0B78C: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:40 TXA
    case 0xC0B78D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:41 JSL FADE_IN
    case 0xC0B78E: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:42 BRA @UNKNOWN5
    case 0xC0B792: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_overworld.asm:44 JSL TELEPORT_MAINLOOP
    case 0xC0B794: {
        Instruction step(cpu, 0x22, 0xC0EA99u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:46 LDA #0
    case 0xC0B798: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:46 LDA #0
    // Overlapping static entry reached from 0xC0B798.
    case 0xC0B79A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:47 STA @LOCAL00
    case 0xC0B79B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:48 BRA @UNKNOWN7
    case 0xC0B79D: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_overworld.asm:50 ASL
    case 0xC0B79F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_overworld.asm:51 TAX
    case 0xC0B7A0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:52 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC0B7A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:52 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC0B7A1.
    case 0xC0B7A3: {
        Instruction step(cpu, 0xFF, 0x289E9Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/init_overworld.asm:53 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0B7A4: {
        Instruction step(cpu, 0x9D, 0x00289Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:54 STZ ENTITY_PATHFINDING_STATES,X
    case 0xC0B7A7: {
        Instruction step(cpu, 0x9E, 0x002C5Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:55 TXA
    case 0xC0B7AA: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:56 CLC
    case 0xC0B7AB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_overworld.asm:57 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0B7AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00006Au : 0x00116Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_overworld.asm:57 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0B7AC.
    case 0xC0B7AE: {
        Instruction step(cpu, 0x11, 0x0000AAu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:58 TAX
    case 0xC0B7AF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_overworld.asm:59 LDA __BSS_START__,X
    case 0xC0B7B0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:60 AND #$7FFF
    case 0xC0B7B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:60 AND #$7FFF
    // Overlapping static entry reached from 0xC0B7B3.
    case 0xC0B7B5: {
        Instruction step(cpu, 0x7F, 0x00009Du, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_overworld.asm:61 STA __BSS_START__,X
    case 0xC0B7B6: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:62 LDA @LOCAL00
    case 0xC0B7B9: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:63 INC
    case 0xC0B7BB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/init_overworld.asm:64 STA @LOCAL00
    case 0xC0B7BC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:66 CMP #23
    case 0xC0B7BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:66 CMP #23
    // Overlapping static entry reached from 0xC0B7BE.
    case 0xC0B7C0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:67 BNE @UNKNOWN6
    case 0xC0B7C1: {
        Instruction step(cpu, 0xD0, 0x0000DCu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:68 STZ OVERWORLD_STATUS_SUPPRESSION
    case 0xC0B7C3: {
        Instruction step(cpu, 0x9C, 0x005D98u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_overworld.asm:69 JSL UNKNOWN_C09451
    case 0xC0B7C6: {
        Instruction step(cpu, 0x22, 0xC09451u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_overworld.asm:70 LDA #120
    case 0xC0B7CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:70 LDA #120
    // Overlapping static entry reached from 0xC0B7CA.
    case 0xC0B7CC: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_overworld.asm:71 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0B7CD: {
        Instruction step(cpu, 0x8D, 0x005D58u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:72 LDA #$FFFF
    case 0xC0B7D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_overworld.asm:72 LDA #$FFFF
    // Overlapping static entry reached from 0xC0B7D0.
    case 0xC0B7D2: {
        Instruction step(cpu, 0xFF, 0x4DB68Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/init_overworld.asm:73 STA TOUCHED_ENEMY
    case 0xC0B7D3: {
        Instruction step(cpu, 0x8D, 0x004DB6u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_overworld.asm:75 END_C_FUNCTION
    case 0xC0B7D6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_overworld.asm:75 END_C_FUNCTION
    case 0xC0B7D7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
