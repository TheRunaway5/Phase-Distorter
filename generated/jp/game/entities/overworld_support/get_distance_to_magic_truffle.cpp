// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/get_distance_to_magic_truffle.asm
bool resume_overworld_get_distance_to_magic_truffle(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC46738: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC4673A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC4673B: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC4673C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4673C.
    case 0xC4673E: {
        Instruction step(cpu, 0xFF, 0x78A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC4673F: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:10 LDA #OVERWORLD_SPRITE::UNKNOWN2
    case 0xC46740: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000178u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:10 LDA #OVERWORLD_SPRITE::UNKNOWN2
    // Overlapping static entry reached from 0xC46740.
    case 0xC46742: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    case 0xC46743: {
        Instruction step(cpu, 0x22, 0xC43D76u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    // Overlapping static entry reached from 0xC46742.
    case 0xC46744: {
        Instruction step(cpu, 0x76, 0x00003Du, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    // Overlapping static entry reached from 0xC46744.
    case 0xC46746: {
        Instruction step(cpu, 0xC4, 0x000085u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:12 STA @VIRTUAL04
    case 0xC46747: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC46746.
    case 0xC46748: {
        Instruction step(cpu, 0x04, 0x0000C9u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:13 CMP #.LOWORD(-1)
    case 0xC46749: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46748.
    case 0xC4674A: {
        Instruction step(cpu, 0xFF, 0x06D0FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC46749.
    case 0xC4674B: {
        Instruction step(cpu, 0xFF, 0xA906D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:14 BNE @UNKNOWN0
    case 0xC4674C: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    case 0xC4674E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    // Overlapping static entry reached from 0xC4674B.
    case 0xC4674F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    // Overlapping static entry reached from 0xC4674E.
    case 0xC46750: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:16 JMP @UNKNOWN15
    case 0xC46751: {
        Instruction step(cpu, 0x4C, 0x006836u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:18 LDA @VIRTUAL04
    case 0xC46754: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:19 ASL
    case 0xC46756: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:20 TAX
    case 0xC46757: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:21 LDA ENTITY_ABS_X_TABLE,X
    case 0xC46758: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:22 STA @LOCAL02
    case 0xC4675B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:23 LDY GAME_STATE+game_state::leader_x_coord
    case 0xC4675D: {
        Instruction step(cpu, 0xAC, 0x009B28u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:24 TYA
    case 0xC46760: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:25 SEC
    case 0xC46761: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:26 SBC #64
    case 0xC46762: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:26 SBC #64
    // Overlapping static entry reached from 0xC46762.
    case 0xC46764: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:27 STA @VIRTUAL02
    case 0xC46765: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:28 LDA @LOCAL02
    case 0xC46767: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:29 CMP @VIRTUAL02
    case 0xC46769: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:30 BCC @UNKNOWN2
    case 0xC4676B: {
        Instruction step(cpu, 0x90, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:31 TYA
    case 0xC4676D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:32 CLC
    case 0xC4676E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:33 ADC #64
    case 0xC4676F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:33 ADC #64
    // Overlapping static entry reached from 0xC4676F.
    case 0xC46771: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:34 STA @VIRTUAL02
    case 0xC46772: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:35 LDA @LOCAL02
    case 0xC46774: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:36 CMP @VIRTUAL02
    case 0xC46776: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:37 BGT @UNKNOWN2
    case 0xC46778: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:37 BGT @UNKNOWN2
    case 0xC4677A: {
        Instruction step(cpu, 0xB0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:38 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC4677C: {
        Instruction step(cpu, 0xBC, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:39 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC4677F: {
        Instruction step(cpu, 0xAD, 0x009B2Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:40 STA @LOCAL02
    case 0xC46782: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:41 SEC
    case 0xC46784: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:42 SBC #64
    case 0xC46785: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:42 SBC #64
    // Overlapping static entry reached from 0xC46785.
    case 0xC46787: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:43 STA @VIRTUAL02
    case 0xC46788: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:44 TYA
    case 0xC4678A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:45 CMP @VIRTUAL02
    case 0xC4678B: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:46 BCC @UNKNOWN2
    case 0xC4678D: {
        Instruction step(cpu, 0x90, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:47 LDA @LOCAL02
    case 0xC4678F: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:48 CLC
    case 0xC46791: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:49 ADC #64
    case 0xC46792: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:49 ADC #64
    // Overlapping static entry reached from 0xC46792.
    case 0xC46794: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:50 STA @VIRTUAL02
    case 0xC46795: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:51 TYA
    case 0xC46797: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:52 CMP @VIRTUAL02
    case 0xC46798: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:53 BLTEQ @UNKNOWN3
    case 0xC4679A: {
        Instruction step(cpu, 0x90, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:53 BLTEQ @UNKNOWN3
    case 0xC4679C: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:55 LDA #1
    case 0xC4679E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:55 LDA #1
    // Overlapping static entry reached from 0xC4679E.
    case 0xC467A0: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:56 JMP @UNKNOWN15
    case 0xC467A1: {
        Instruction step(cpu, 0x4C, 0x006836u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:58 LDA @LOCAL02
    case 0xC467A4: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:59 STA @VIRTUAL02
    case 0xC467A6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:60 TYA
    case 0xC467A8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:61 SEC
    case 0xC467A9: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:62 SBC @VIRTUAL02
    case 0xC467AA: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:63 STA @LOCAL02
    case 0xC467AC: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:64 STA @VIRTUAL02
    case 0xC467AE: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:65 LDA #0
    case 0xC467B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:65 LDA #0
    // Overlapping static entry reached from 0xC467B0.
    case 0xC467B2: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:66 CLC
    case 0xC467B3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:67 SBC @VIRTUAL02
    case 0xC467B4: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC467B6: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC467B8: {
        Instruction step(cpu, 0x10, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC467BA: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC467BC: {
        Instruction step(cpu, 0x30, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:69 LDA @LOCAL02
    case 0xC467BE: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:70 EOR #$FFFF
    case 0xC467C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:70 EOR #$FFFF
    // Overlapping static entry reached from 0xC467C0.
    case 0xC467C2: {
        Instruction step(cpu, 0xFF, 0x02851Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:71 INC
    case 0xC467C3: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:72 STA @VIRTUAL02
    case 0xC467C4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:73 STA @LOCAL01
    case 0xC467C6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:74 BRA @UNKNOWN7
    case 0xC467C8: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:76 LDA @LOCAL02
    case 0xC467CA: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:77 STA @VIRTUAL02
    case 0xC467CC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:78 STA @LOCAL01
    case 0xC467CE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:80 LDA @VIRTUAL04
    case 0xC467D0: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:81 ASL
    case 0xC467D2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:82 TAX
    case 0xC467D3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:83 LDA ENTITY_ABS_X_TABLE,X
    case 0xC467D4: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:84 SEC
    case 0xC467D7: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:85 SBC GAME_STATE+game_state::leader_x_coord
    case 0xC467D8: {
        Instruction step(cpu, 0xED, 0x009B28u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:86 STA @LOCAL02
    case 0xC467DB: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:87 STA @VIRTUAL02
    case 0xC467DD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:88 LDA #0
    case 0xC467DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:88 LDA #0
    // Overlapping static entry reached from 0xC467DF.
    case 0xC467E1: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:89 CLC
    case 0xC467E2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:90 SBC @VIRTUAL02
    case 0xC467E3: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC467E5: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC467E7: {
        Instruction step(cpu, 0x10, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC467E9: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC467EB: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:92 LDA @LOCAL02
    case 0xC467ED: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:93 EOR #$FFFF
    case 0xC467EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:93 EOR #$FFFF
    // Overlapping static entry reached from 0xC467EF.
    case 0xC467F1: {
        Instruction step(cpu, 0xFF, 0x02801Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:94 INC
    case 0xC467F2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:95 BRA @UNKNOWN11
    case 0xC467F3: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:97 LDA @LOCAL02
    case 0xC467F5: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:99 LDX @LOCAL01
    case 0xC467F7: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:100 STX @VIRTUAL02
    case 0xC467F9: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:101 CLC
    case 0xC467FB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:102 ADC @VIRTUAL02
    case 0xC467FC: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:103 STA @VIRTUAL02
    case 0xC467FE: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:104 LDA #16
    case 0xC46800: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:104 LDA #16
    // Overlapping static entry reached from 0xC46800.
    case 0xC46802: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:105 CLC
    case 0xC46803: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:106 SBC @VIRTUAL02
    case 0xC46804: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC46806: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC46808: {
        Instruction step(cpu, 0x10, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC4680A: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC4680C: {
        Instruction step(cpu, 0x30, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:108 LDA #10
    case 0xC4680E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:108 LDA #10
    // Overlapping static entry reached from 0xC4680E.
    case 0xC46810: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:109 BRA @UNKNOWN15
    case 0xC46811: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:111 LDA @VIRTUAL04
    case 0xC46813: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:112 ASL
    case 0xC46815: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:113 TAX
    case 0xC46816: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:114 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC46817: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:115 STA @LOCAL00
    case 0xC4681A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:116 LDY ENTITY_ABS_X_TABLE,X
    case 0xC4681C: {
        Instruction step(cpu, 0xBC, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:117 LDX GAME_STATE + game_state::leader_y_coord
    case 0xC4681F: {
        Instruction step(cpu, 0xAE, 0x009B2Cu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:118 LDA GAME_STATE + game_state::leader_x_coord
    case 0xC46822: {
        Instruction step(cpu, 0xAD, 0x009B28u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:119 JSL UNKNOWN_C41EFF
    case 0xC46825: {
        Instruction step(cpu, 0x22, 0xC41E4Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:120 LDY #$2000
    case 0xC46829: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:120 LDY #$2000
    // Overlapping static entry reached from 0xC46829.
    case 0xC4682B: {
        Instruction step(cpu, 0x20, 0x006918u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:121 CLC
    case 0xC4682C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    case 0xC4682D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    // Overlapping static entry reached from 0xC4682B.
    case 0xC4682E: {
        Instruction step(cpu, 0x00, 0x000010u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    // Overlapping static entry reached from 0xC4682D.
    case 0xC4682F: {
        Instruction step(cpu, 0x10, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:123 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC46830: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:123 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC4682F.
    case 0xC46831: {
        Instruction step(cpu, 0x3D, 0x00C091u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:124 INC
    case 0xC46834: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:125 INC
    case 0xC46835: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:127 END_C_FUNCTION
    case 0xC46836: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:127 END_C_FUNCTION
    case 0xC46837: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
