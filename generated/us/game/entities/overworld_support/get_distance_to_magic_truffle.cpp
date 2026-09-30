// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/get_distance_to_magic_truffle.asm
bool resume_overworld_get_distance_to_magic_truffle(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC490EE: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC490F0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC490F1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC490F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC490F2.
    case 0xC490F4: {
        Instruction step(cpu, 0xFF, 0x78A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:9 END_STACK_VARS
    case 0xC490F5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:10 LDA #OVERWORLD_SPRITE::UNKNOWN2
    case 0xC490F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000178u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:10 LDA #OVERWORLD_SPRITE::UNKNOWN2
    // Overlapping static entry reached from 0xC490F6.
    case 0xC490F8: {
        Instruction step(cpu, 0x01, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    case 0xC490F9: {
        Instruction step(cpu, 0x22, 0xC46028u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    // Overlapping static entry reached from 0xC490F8.
    case 0xC490FA: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:11 JSL UNKNOWN_C46028
    // Overlapping static entry reached from 0xC490FA.
    case 0xC490FB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:12 STA @VIRTUAL04
    case 0xC490FD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:13 CMP #.LOWORD(-1)
    case 0xC490FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC490FF.
    case 0xC49101: {
        Instruction step(cpu, 0xFF, 0xA906D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:14 BNE @UNKNOWN0
    case 0xC49102: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    case 0xC49104: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    // Overlapping static entry reached from 0xC49101.
    case 0xC49105: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:15 LDA #0
    // Overlapping static entry reached from 0xC49104.
    case 0xC49106: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:16 JMP @UNKNOWN15
    case 0xC49107: {
        Instruction step(cpu, 0x4C, 0x0091ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:18 LDA @VIRTUAL04
    case 0xC4910A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:19 ASL
    case 0xC4910C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:20 TAX
    case 0xC4910D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:21 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4910E: {
        Instruction step(cpu, 0xBD, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:22 STA @LOCAL02
    case 0xC49111: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:23 LDY GAME_STATE+game_state::leader_x_coord
    case 0xC49113: {
        Instruction step(cpu, 0xAC, 0x009877u, 3u, AddressMode::Absolute);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:24 TYA
    case 0xC49116: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:25 SEC
    case 0xC49117: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:26 SBC #64
    case 0xC49118: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:26 SBC #64
    // Overlapping static entry reached from 0xC49118.
    case 0xC4911A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:27 STA @VIRTUAL02
    case 0xC4911B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:28 LDA @LOCAL02
    case 0xC4911D: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:29 CMP @VIRTUAL02
    case 0xC4911F: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:30 BCC @UNKNOWN2
    case 0xC49121: {
        Instruction step(cpu, 0x90, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:31 TYA
    case 0xC49123: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:32 CLC
    case 0xC49124: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:33 ADC #64
    case 0xC49125: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:33 ADC #64
    // Overlapping static entry reached from 0xC49125.
    case 0xC49127: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:34 STA @VIRTUAL02
    case 0xC49128: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:35 LDA @LOCAL02
    case 0xC4912A: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:36 CMP @VIRTUAL02
    case 0xC4912C: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:37 BGT @UNKNOWN2
    case 0xC4912E: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:37 BGT @UNKNOWN2
    case 0xC49130: {
        Instruction step(cpu, 0xB0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:38 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC49132: {
        Instruction step(cpu, 0xBC, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:39 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC49135: {
        Instruction step(cpu, 0xAD, 0x00987Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:40 STA @LOCAL02
    case 0xC49138: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:41 SEC
    case 0xC4913A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:42 SBC #64
    case 0xC4913B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:42 SBC #64
    // Overlapping static entry reached from 0xC4913B.
    case 0xC4913D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:43 STA @VIRTUAL02
    case 0xC4913E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:44 TYA
    case 0xC49140: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:45 CMP @VIRTUAL02
    case 0xC49141: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:46 BCC @UNKNOWN2
    case 0xC49143: {
        Instruction step(cpu, 0x90, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:47 LDA @LOCAL02
    case 0xC49145: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:48 CLC
    case 0xC49147: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:49 ADC #64
    case 0xC49148: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:49 ADC #64
    // Overlapping static entry reached from 0xC49148.
    case 0xC4914A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:50 STA @VIRTUAL02
    case 0xC4914B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:51 TYA
    case 0xC4914D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:52 CMP @VIRTUAL02
    case 0xC4914E: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:53 BLTEQ @UNKNOWN3
    case 0xC49150: {
        Instruction step(cpu, 0x90, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:53 BLTEQ @UNKNOWN3
    case 0xC49152: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:55 LDA #1
    case 0xC49154: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:55 LDA #1
    // Overlapping static entry reached from 0xC49154.
    case 0xC49156: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:56 JMP @UNKNOWN15
    case 0xC49157: {
        Instruction step(cpu, 0x4C, 0x0091ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:58 LDA @LOCAL02
    case 0xC4915A: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:59 STA @VIRTUAL02
    case 0xC4915C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:60 TYA
    case 0xC4915E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:61 SEC
    case 0xC4915F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:62 SBC @VIRTUAL02
    case 0xC49160: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:63 STA @LOCAL02
    case 0xC49162: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:64 STA @VIRTUAL02
    case 0xC49164: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:65 LDA #0
    case 0xC49166: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:65 LDA #0
    // Overlapping static entry reached from 0xC49166.
    case 0xC49168: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:66 CLC
    case 0xC49169: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:67 SBC @VIRTUAL02
    case 0xC4916A: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC4916C: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC4916E: {
        Instruction step(cpu, 0x10, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC49170: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:68 BRANCHLTEQS @UNKNOWN6
    case 0xC49172: {
        Instruction step(cpu, 0x30, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:69 LDA @LOCAL02
    case 0xC49174: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:70 EOR #$FFFF
    case 0xC49176: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:70 EOR #$FFFF
    // Overlapping static entry reached from 0xC49176.
    case 0xC49178: {
        Instruction step(cpu, 0xFF, 0x02851Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:71 INC
    case 0xC49179: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:72 STA @VIRTUAL02
    case 0xC4917A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:73 STA @LOCAL01
    case 0xC4917C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:74 BRA @UNKNOWN7
    case 0xC4917E: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:76 LDA @LOCAL02
    case 0xC49180: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:77 STA @VIRTUAL02
    case 0xC49182: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:78 STA @LOCAL01
    case 0xC49184: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:80 LDA @VIRTUAL04
    case 0xC49186: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:81 ASL
    case 0xC49188: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:82 TAX
    case 0xC49189: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:83 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4918A: {
        Instruction step(cpu, 0xBD, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:84 SEC
    case 0xC4918D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:85 SBC GAME_STATE+game_state::leader_x_coord
    case 0xC4918E: {
        Instruction step(cpu, 0xED, 0x009877u, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:86 STA @LOCAL02
    case 0xC49191: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:87 STA @VIRTUAL02
    case 0xC49193: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:88 LDA #0
    case 0xC49195: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:88 LDA #0
    // Overlapping static entry reached from 0xC49195.
    case 0xC49197: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:89 CLC
    case 0xC49198: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:90 SBC @VIRTUAL02
    case 0xC49199: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC4919B: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC4919D: {
        Instruction step(cpu, 0x10, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC4919F: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:91 BRANCHLTEQS @UNKNOWN10
    case 0xC491A1: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:92 LDA @LOCAL02
    case 0xC491A3: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:93 EOR #$FFFF
    case 0xC491A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:93 EOR #$FFFF
    // Overlapping static entry reached from 0xC491A5.
    case 0xC491A7: {
        Instruction step(cpu, 0xFF, 0x02801Au, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:94 INC
    case 0xC491A8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:95 BRA @UNKNOWN11
    case 0xC491A9: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:97 LDA @LOCAL02
    case 0xC491AB: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:99 LDX @LOCAL01
    case 0xC491AD: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:100 STX @VIRTUAL02
    case 0xC491AF: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:101 CLC
    case 0xC491B1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:102 ADC @VIRTUAL02
    case 0xC491B2: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:103 STA @VIRTUAL02
    case 0xC491B4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:104 LDA #16
    case 0xC491B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:104 LDA #16
    // Overlapping static entry reached from 0xC491B6.
    case 0xC491B8: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:105 CLC
    case 0xC491B9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:106 SBC @VIRTUAL02
    case 0xC491BA: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC491BC: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC491BE: {
        Instruction step(cpu, 0x10, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC491C0: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:107 BRANCHLTEQS @UNKNOWN14
    case 0xC491C2: {
        Instruction step(cpu, 0x30, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:108 LDA #10
    case 0xC491C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:108 LDA #10
    // Overlapping static entry reached from 0xC491C4.
    case 0xC491C6: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:109 BRA @UNKNOWN15
    case 0xC491C7: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:111 LDA @VIRTUAL04
    case 0xC491C9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:112 ASL
    case 0xC491CB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:113 TAX
    case 0xC491CC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:114 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC491CD: {
        Instruction step(cpu, 0xBD, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:115 STA @LOCAL00
    case 0xC491D0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:116 LDY ENTITY_ABS_X_TABLE,X
    case 0xC491D2: {
        Instruction step(cpu, 0xBC, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:117 LDX GAME_STATE + game_state::leader_y_coord
    case 0xC491D5: {
        Instruction step(cpu, 0xAE, 0x00987Bu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:118 LDA GAME_STATE + game_state::leader_x_coord
    case 0xC491D8: {
        Instruction step(cpu, 0xAD, 0x009877u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:119 JSL UNKNOWN_C41EFF
    case 0xC491DB: {
        Instruction step(cpu, 0x22, 0xC41EFFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:120 LDY #$2000
    case 0xC491DF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:120 LDY #$2000
    // Overlapping static entry reached from 0xC491DF.
    case 0xC491E1: {
        Instruction step(cpu, 0x20, 0x006918u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:121 CLC
    case 0xC491E2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    case 0xC491E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    // Overlapping static entry reached from 0xC491E1.
    case 0xC491E4: {
        Instruction step(cpu, 0x00, 0x000010u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:122 ADC #$1000
    // Overlapping static entry reached from 0xC491E3.
    case 0xC491E5: {
        Instruction step(cpu, 0x10, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:123 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC491E6: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:123 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC491E5.
    case 0xC491E7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:123 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC491E7.
    case 0xC491E8: {
        Instruction step(cpu, 0x91, 0x0000C0u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:124 INC
    case 0xC491EA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/get_distance_to_magic_truffle.asm:125 INC
    case 0xC491EB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:127 END_C_FUNCTION
    case 0xC491EC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/get_distance_to_magic_truffle.asm:127 END_C_FUNCTION
    case 0xC491ED: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
